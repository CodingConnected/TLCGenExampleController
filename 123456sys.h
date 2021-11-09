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
 * 2.0.0    09-11-2021   Cyril       Nieuwe versie TLCGen (05112021 beta)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "2.0.0 20211109"
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
    #define ussegm1          (FCMAX +   0) /* Aansturing segmenten display                        */
    #define ussegm2          (FCMAX +   1) /* Aansturing segmenten display                        */
    #define ussegm3          (FCMAX +   2) /* Aansturing segmenten display                        */
    #define ussegm4          (FCMAX +   3) /* Aansturing segmenten display                        */
    #define ussegm5          (FCMAX +   4) /* Aansturing segmenten display                        */
    #define ussegm6          (FCMAX +   5) /* Aansturing segmenten display                        */
    #define ussegm7          (FCMAX +   6) /* Aansturing segmenten display                        */
    #define usML1            (FCMAX +   7) /* Verklikken actief zijn ML1                          */
    #define usML2            (FCMAX +   8) /* Verklikken actief zijn ML2                          */
    #define usML3            (FCMAX +   9) /* Verklikken actief zijn ML3                          */
    #define usML4            (FCMAX +  10) /* Verklikken actief zijn ML4                          */
    #define usML5            (FCMAX +  11) /* Verklikken actief zijn ML5                          */
    #define usfileFile68af   (FCMAX +  12) /* File ingreep File68af actief                        */
    #define usplact          (FCMAX +  13) /* Signaalplan regelen actief                          */
    #define uskpact          (FCMAX +  14) /* Koppeling signaalplan regelen actief                */
    #define usmlact          (FCMAX +  15) /* Module regelen actief                               */
    #define usmlpl           (FCMAX +  16) /* ML tijdens VA of PL tijdens halfstar bedrijf        */
    #define ustxtimer        (FCMAX +  17) /* TX_timer tijdens halfstar bedrijf                   */
    #define usklok           (FCMAX +  18) /* Programma door klok bepaald                         */
    #define ushand           (FCMAX +  19) /* Aansturing handmatig aangepast                      */
    #define usplPL1          (FCMAX +  20) /* Plan PL1 actief                                     */
    #define usplPL2          (FCMAX +  21) /* Plan PL2 actief                                     */
    #define usplPL3          (FCMAX +  22) /* Plan PL3 actief                                     */
    #define usovtevroeg02bus (FCMAX +  23) /* Voorste OV voertuig bij 02 te vroeg Bus             */
    #define usovoptijd02bus  (FCMAX +  24) /* Voorste OV voertuig bij 02 op tijd Bus              */
    #define usovtelaat02bus  (FCMAX +  25) /* Voorste OV voertuig bij 02 te laat Bus              */
    #define usovtevroeg03bus (FCMAX +  26) /* Voorste OV voertuig bij 03 te vroeg Bus             */
    #define usovoptijd03bus  (FCMAX +  27) /* Voorste OV voertuig bij 03 op tijd Bus              */
    #define usovtelaat03bus  (FCMAX +  28) /* Voorste OV voertuig bij 03 te laat Bus              */
    #define usovtevroeg05bus (FCMAX +  29) /* Voorste OV voertuig bij 05 te vroeg Bus             */
    #define usovoptijd05bus  (FCMAX +  30) /* Voorste OV voertuig bij 05 op tijd Bus              */
    #define usovtelaat05bus  (FCMAX +  31) /* Voorste OV voertuig bij 05 te laat Bus              */
    #define usovtevroeg08bus (FCMAX +  32) /* Voorste OV voertuig bij 08 te vroeg Bus             */
    #define usovoptijd08bus  (FCMAX +  33) /* Voorste OV voertuig bij 08 op tijd Bus              */
    #define usovtelaat08bus  (FCMAX +  34) /* Voorste OV voertuig bij 08 te laat Bus              */
    #define usovtevroeg09bus (FCMAX +  35) /* Voorste OV voertuig bij 09 te vroeg Bus             */
    #define usovoptijd09bus  (FCMAX +  36) /* Voorste OV voertuig bij 09 op tijd Bus              */
    #define usovtelaat09bus  (FCMAX +  37) /* Voorste OV voertuig bij 09 te laat Bus              */
    #define usovtevroeg11bus (FCMAX +  38) /* Voorste OV voertuig bij 11 te vroeg Bus             */
    #define usovoptijd11bus  (FCMAX +  39) /* Voorste OV voertuig bij 11 op tijd Bus              */
    #define usovtelaat11bus  (FCMAX +  40) /* Voorste OV voertuig bij 11 te laat Bus              */
    #define usovtevroeg61bus (FCMAX +  41) /* Voorste OV voertuig bij 61 te vroeg Bus             */
    #define usovoptijd61bus  (FCMAX +  42) /* Voorste OV voertuig bij 61 op tijd Bus              */
    #define usovtelaat61bus  (FCMAX +  43) /* Voorste OV voertuig bij 61 te laat Bus              */
    #define usovtevroeg62bus (FCMAX +  44) /* Voorste OV voertuig bij 62 te vroeg Bus             */
    #define usovoptijd62bus  (FCMAX +  45) /* Voorste OV voertuig bij 62 op tijd Bus              */
    #define usovtelaat62bus  (FCMAX +  46) /* Voorste OV voertuig bij 62 te laat Bus              */
    #define usovtevroeg67bus (FCMAX +  47) /* Voorste OV voertuig bij 67 te vroeg Bus             */
    #define usovoptijd67bus  (FCMAX +  48) /* Voorste OV voertuig bij 67 op tijd Bus              */
    #define usovtelaat67bus  (FCMAX +  49) /* Voorste OV voertuig bij 67 te laat Bus              */
    #define usovtevroeg68bus (FCMAX +  50) /* Voorste OV voertuig bij 68 te vroeg Bus             */
    #define usovoptijd68bus  (FCMAX +  51) /* Voorste OV voertuig bij 68 op tijd Bus              */
    #define usovtelaat68bus  (FCMAX +  52) /* Voorste OV voertuig bij 68 te laat Bus              */
    #define usmaxwt          (FCMAX +  53) /* Verklikken maximale wachttijd overschreden          */
    #define uskarmelding     (FCMAX +  54) /* Verklikken ontvangst melding KAR                    */
    #define uskarog          (FCMAX +  55) /* Verklikken ondergedrag KAR                          */
    #define usovinm02bus     (FCMAX +  56) /* Verklikken inmelding OV fase 02                     */
    #define usovinm02risov   (FCMAX +  57) /* Verklikken inmelding OV fase 02                     */
    #define usovinm02risvrw  (FCMAX +  58) /* Verklikken inmelding OV fase 02                     */
    #define usovinm03bus     (FCMAX +  59) /* Verklikken inmelding OV fase 03                     */
    #define usovinm03risov   (FCMAX +  60) /* Verklikken inmelding OV fase 03                     */
    #define usovinm03risvrw  (FCMAX +  61) /* Verklikken inmelding OV fase 03                     */
    #define usovinm05bus     (FCMAX +  62) /* Verklikken inmelding OV fase 05                     */
    #define usovinm05risov   (FCMAX +  63) /* Verklikken inmelding OV fase 05                     */
    #define usovinm05risvrw  (FCMAX +  64) /* Verklikken inmelding OV fase 05                     */
    #define usovinm08bus     (FCMAX +  65) /* Verklikken inmelding OV fase 08                     */
    #define usovinm08risov   (FCMAX +  66) /* Verklikken inmelding OV fase 08                     */
    #define usovinm08risvrw  (FCMAX +  67) /* Verklikken inmelding OV fase 08                     */
    #define usovinm09bus     (FCMAX +  68) /* Verklikken inmelding OV fase 09                     */
    #define usovinm09risov   (FCMAX +  69) /* Verklikken inmelding OV fase 09                     */
    #define usovinm09risvrw  (FCMAX +  70) /* Verklikken inmelding OV fase 09                     */
    #define usovinm11bus     (FCMAX +  71) /* Verklikken inmelding OV fase 11                     */
    #define usovinm11risov   (FCMAX +  72) /* Verklikken inmelding OV fase 11                     */
    #define usovinm11risvrw  (FCMAX +  73) /* Verklikken inmelding OV fase 11                     */
    #define usovinm22fiets   (FCMAX +  74) /* Verklikken inmelding OV fase 22                     */
    #define usovinm61bus     (FCMAX +  75) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risov   (FCMAX +  76) /* Verklikken inmelding OV fase 61                     */
    #define usovinm61risvrw  (FCMAX +  77) /* Verklikken inmelding OV fase 61                     */
    #define usovinm62bus     (FCMAX +  78) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risov   (FCMAX +  79) /* Verklikken inmelding OV fase 62                     */
    #define usovinm62risvrw  (FCMAX +  80) /* Verklikken inmelding OV fase 62                     */
    #define usovinm67bus     (FCMAX +  81) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risov   (FCMAX +  82) /* Verklikken inmelding OV fase 67                     */
    #define usovinm67risvrw  (FCMAX +  83) /* Verklikken inmelding OV fase 67                     */
    #define usovinm68bus     (FCMAX +  84) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risov   (FCMAX +  85) /* Verklikken inmelding OV fase 68                     */
    #define usovinm68risvrw  (FCMAX +  86) /* Verklikken inmelding OV fase 68                     */
    #define ushdinm02        (FCMAX +  87) /* Verklikken inmelding HD fase 02                     */
    #define ushdinm03        (FCMAX +  88) /* Verklikken inmelding HD fase 03                     */
    #define ushdinm05        (FCMAX +  89) /* Verklikken inmelding HD fase 05                     */
    #define ushdinm08        (FCMAX +  90) /* Verklikken inmelding HD fase 08                     */
    #define ushdinm09        (FCMAX +  91) /* Verklikken inmelding HD fase 09                     */
    #define ushdinm11        (FCMAX +  92) /* Verklikken inmelding HD fase 11                     */
    #define ushdinm61        (FCMAX +  93) /* Verklikken inmelding HD fase 61                     */
    #define ushdinm62        (FCMAX +  94) /* Verklikken inmelding HD fase 62                     */
    #define ushdinm67        (FCMAX +  95) /* Verklikken inmelding HD fase 67                     */
    #define ushdinm68        (FCMAX +  96) /* Verklikken inmelding HD fase 68                     */
    #define usperdef         (FCMAX +  97) /* Default periode actief                              */
    #define usper1           (FCMAX +  98) /* Periode Dag periode actief                          */
    #define usper2           (FCMAX +  99) /* Periode Ochtendspits actief                         */
    #define usper3           (FCMAX + 100) /* Periode Avondspits actief                           */
    #define usper4           (FCMAX + 101) /* Periode Koopavond actief                            */
    #define usper5           (FCMAX + 102) /* Periode Weekend actief                              */
    #define usper6           (FCMAX + 103) /* Periode Reserve actief                              */
    #define usrgv            (FCMAX + 104) /* Verklikken actief zijn RoBuGrover                   */
    #define uswtk21          (FCMAX + 105) /* Aansturing waitsignaal detector k21                 */
    #define uswtk22          (FCMAX + 106) /* Aansturing waitsignaal detector k22                 */
    #define uswtk24          (FCMAX + 107) /* Aansturing waitsignaal detector k24                 */
    #define uswtk26          (FCMAX + 108) /* Aansturing waitsignaal detector k26                 */
    #define uswtk28          (FCMAX + 109) /* Aansturing waitsignaal detector k28                 */
    #define uswtk31a         (FCMAX + 110) /* Aansturing waitsignaal detector k31a                */
    #define uswtk31b         (FCMAX + 111) /* Aansturing waitsignaal detector k31b                */
    #define uswtk32a         (FCMAX + 112) /* Aansturing waitsignaal detector k32a                */
    #define uswtk32b         (FCMAX + 113) /* Aansturing waitsignaal detector k32b                */
    #define uswtk33a         (FCMAX + 114) /* Aansturing waitsignaal detector k33a                */
    #define uswtk33b         (FCMAX + 115) /* Aansturing waitsignaal detector k33b                */
    #define uswtk34a         (FCMAX + 116) /* Aansturing waitsignaal detector k34a                */
    #define uswtk34b         (FCMAX + 117) /* Aansturing waitsignaal detector k34b                */
    #define uswtk38a         (FCMAX + 118) /* Aansturing waitsignaal detector k38a                */
    #define uswtk38b         (FCMAX + 119) /* Aansturing waitsignaal detector k38b                */
    #define uswtk81          (FCMAX + 120) /* Aansturing waitsignaal detector k81                 */
    #define uswtk82          (FCMAX + 121) /* Aansturing waitsignaal detector k82                 */
    #define uswtk84          (FCMAX + 122) /* Aansturing waitsignaal detector k84                 */
    #define usstarprogwissel (FCMAX + 123) /* Verklikken actief zijn wisselen naar star programma */
    #define usstarstar01     (FCMAX + 124) /* Star programma star01 actief                        */
    #define USMAX1           (FCMAX + 125)

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
    #define hprio61bus           167 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus         168 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus        169 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar      170 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar     171 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov         172 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov       173 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov      174 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris    175 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris   176 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw        177 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw      178 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw     179 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris   180 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris  181 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus           182 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus         183 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus        184 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar      185 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar     186 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov         187 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov       188 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov      189 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris    190 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris   191 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw        192 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw      193 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw     194 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris   195 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris  196 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus           197 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus         198 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus        199 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar      200 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar     201 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov         202 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov       203 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov      204 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris    205 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris   206 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw        207 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw      208 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw     209 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris   210 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris  211 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus           212 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus         213 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus        214 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar      215 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar     216 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov         217 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov       218 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov      219 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris    220 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris   221 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw        222 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw      223 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw     224 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris   225 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris  226 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                227 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              228 /* HD inmelding 02                                                    */
    #define hhduit02             229 /* HD uitmelding 02                                                   */
    #define hhdin02kar           230 /* HD inmelding 02                                                    */
    #define hhduit02kar          231 /* HD uitmelding 02                                                   */
    #define hhdin02ris           232 /* HD inmelding 02                                                    */
    #define hhduit02ris          233 /* HD uitmelding 02                                                   */
    #define hhd03                234 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              235 /* HD inmelding 03                                                    */
    #define hhduit03             236 /* HD uitmelding 03                                                   */
    #define hhdin03kar           237 /* HD inmelding 03                                                    */
    #define hhduit03kar          238 /* HD uitmelding 03                                                   */
    #define hhdin03ris           239 /* HD inmelding 03                                                    */
    #define hhduit03ris          240 /* HD uitmelding 03                                                   */
    #define hhd05                241 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              242 /* HD inmelding 05                                                    */
    #define hhduit05             243 /* HD uitmelding 05                                                   */
    #define hhdin05kar           244 /* HD inmelding 05                                                    */
    #define hhduit05kar          245 /* HD uitmelding 05                                                   */
    #define hhdin05ris           246 /* HD inmelding 05                                                    */
    #define hhduit05ris          247 /* HD uitmelding 05                                                   */
    #define hhd08                248 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              249 /* HD inmelding 08                                                    */
    #define hhduit08             250 /* HD uitmelding 08                                                   */
    #define hhdin08kar           251 /* HD inmelding 08                                                    */
    #define hhduit08kar          252 /* HD uitmelding 08                                                   */
    #define hhdin08ris           253 /* HD inmelding 08                                                    */
    #define hhduit08ris          254 /* HD uitmelding 08                                                   */
    #define hhd09                255 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              256 /* HD inmelding 09                                                    */
    #define hhduit09             257 /* HD uitmelding 09                                                   */
    #define hhdin09kar           258 /* HD inmelding 09                                                    */
    #define hhduit09kar          259 /* HD uitmelding 09                                                   */
    #define hhdin09ris           260 /* HD inmelding 09                                                    */
    #define hhduit09ris          261 /* HD uitmelding 09                                                   */
    #define hhd11                262 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              263 /* HD inmelding 11                                                    */
    #define hhduit11             264 /* HD uitmelding 11                                                   */
    #define hhdin11kar           265 /* HD inmelding 11                                                    */
    #define hhduit11kar          266 /* HD uitmelding 11                                                   */
    #define hhdin11ris           267 /* HD inmelding 11                                                    */
    #define hhduit11ris          268 /* HD uitmelding 11                                                   */
    #define hhd61                269 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              270 /* HD inmelding 61                                                    */
    #define hhduit61             271 /* HD uitmelding 61                                                   */
    #define hhdin61kar           272 /* HD inmelding 61                                                    */
    #define hhduit61kar          273 /* HD uitmelding 61                                                   */
    #define hhdin61ris           274 /* HD inmelding 61                                                    */
    #define hhduit61ris          275 /* HD uitmelding 61                                                   */
    #define hhd62                276 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              277 /* HD inmelding 62                                                    */
    #define hhduit62             278 /* HD uitmelding 62                                                   */
    #define hhdin62kar           279 /* HD inmelding 62                                                    */
    #define hhduit62kar          280 /* HD uitmelding 62                                                   */
    #define hhdin62ris           281 /* HD inmelding 62                                                    */
    #define hhduit62ris          282 /* HD uitmelding 62                                                   */
    #define hhd67                283 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              284 /* HD inmelding 67                                                    */
    #define hhduit67             285 /* HD uitmelding 67                                                   */
    #define hhdin67kar           286 /* HD inmelding 67                                                    */
    #define hhduit67kar          287 /* HD uitmelding 67                                                   */
    #define hhdin67ris           288 /* HD inmelding 67                                                    */
    #define hhduit67ris          289 /* HD uitmelding 67                                                   */
    #define hhd68                290 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              291 /* HD inmelding 68                                                    */
    #define hhduit68             292 /* HD uitmelding 68                                                   */
    #define hhdin68kar           293 /* HD inmelding 68                                                    */
    #define hhduit68kar          294 /* HD uitmelding 68                                                   */
    #define hhdin68ris           295 /* HD inmelding 68                                                    */
    #define hhduit68ris          296 /* HD uitmelding 68                                                   */
    #define hrgvd24_3_d24_2      297 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              298 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            299 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            300 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            301 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            302 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09            303 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11            304 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            305 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            306 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68            307 /* Bijhouden primaire realisatie fase 68                              */
    #define hnleg0262            308
    #define hnleg0868            309
    #define hnleg1168            310
    #define hnleg2221            311
    #define hnlsg3132            312
    #define hnlsg3231            313
    #define hnlsg3334            314
    #define hnlsg3433            315
    #define hnleg8281            316
    #define hinl32               317 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32               318 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31               319 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31               320 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34               321 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34               322 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33               323 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33               324 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62               325 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68               326 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21               327 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81               328 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1               329

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
    #define tbtovg61bus                313 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   314 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   315 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  316 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          317 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            318 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              319 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 320 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 321 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                322 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         323 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           324 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             325 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                326 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                327 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               328 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                329 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   330 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   331 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  332 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          333 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            334 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              335 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 336 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 337 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                338 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         339 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           340 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             341 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                342 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                343 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               344 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                345 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   346 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   347 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  348 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          349 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            350 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              351 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 352 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 353 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                354 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         355 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           356 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             357 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                358 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                359 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               360 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            361 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                362 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   363 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   364 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  365 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          366 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            367 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              368 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 369 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 370 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                371 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         372 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           373 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             374 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                375 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                376 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               377 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    378 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    379 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 380 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 381 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                382 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    383 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    384 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 385 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 386 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                387 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    388 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    389 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 390 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 391 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                392 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    393 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    394 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 395 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 396 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                397 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    398 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    399 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 400 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 401 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                402 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    403 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    404 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 405 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 406 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                407 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    408 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    409 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 410 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 411 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                412 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    413 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    414 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 415 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 416 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                417 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    418 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    419 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 420 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 421 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                422 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    423 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    424 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 425 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 426 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                427 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                428
    #define tris02risvrw               429
    #define tris03risov                430
    #define tris03risvrw               431
    #define tris05risov                432
    #define tris05risvrw               433
    #define tris08risov                434
    #define tris08risvrw               435
    #define tris09risov                436
    #define tris09risvrw               437
    #define tris11risov                438
    #define tris11risvrw               439
    #define tris61risov                440
    #define tris61risvrw               441
    #define tris62risov                442
    #define tris62risvrw               443
    #define tris67risov                444
    #define tris67risvrw               445
    #define tris68risov                446
    #define tris68risvrw               447
    #define trgad24_3                  448 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 449 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            450 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            451 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   452 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   453 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   454 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   455 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   456 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   457 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    458 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    459 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    460 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    461 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   462 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   463 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   464 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   465 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   466 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   467 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd09_1                    468 /* File meting RoBuGrover fase 09 detector 09_1                                             */
    #define thd09_2                    469 /* RoBuGrover hiaat meting fase 09 detector 09_2                                            */
    #define thd09_3                    470 /* RoBuGrover hiaat meting fase 09 detector 09_3                                            */
    #define tfd11_1                    471 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    472 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    473 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    474 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    475 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    476 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    477 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   478 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   479 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   480 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   481 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tuitgestca02               482 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               483 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               484 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               485 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               486 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               487 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               488 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               489 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               490 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               491 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               492 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               493 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               494 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               495 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               496 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               497 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               498 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               499 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               500 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               501 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               502 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               503 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               504 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   505 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               506 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              507 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               508 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              509 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   510 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               511 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              512 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               513 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              514 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   515 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                516 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               517 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    518 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    519 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    520 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tlr6202                    521 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    522 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    523 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    524 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    525 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   526 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   527 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   528 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   529 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    530 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    531 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    532 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     533

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
    #define cvchst61bus         19 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risov       20 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risvrw      21 /* OV inmeldingen fase 61 tijdens halfstar regelen Vrachtwagen */
    #define cvchst62bus         22 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risov       23 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risvrw      24 /* OV inmeldingen fase 62 tijdens halfstar regelen Vrachtwagen */
    #define cvchst67bus         25 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risov       26 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risvrw      27 /* OV inmeldingen fase 67 tijdens halfstar regelen Vrachtwagen */
    #define cvchst68bus         28 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risov       29 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risvrw      30 /* OV inmeldingen fase 68 tijdens halfstar regelen Vrachtwagen */
    #define cvc02bus            31 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          32 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         33 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc03bus            34 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          35 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         36 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc05bus            37 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          38 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         39 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc08bus            40 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          41 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         42 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc09bus            43 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          44 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         45 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc11bus            46 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          47 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         48 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cftscyc22fietsfiets 49 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cvc22fiets          50 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cvc61bus            51 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          52 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         53 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc62bus            54 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          55 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         56 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc67bus            57 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          58 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         59 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc68bus            60 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          61 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         62 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvchd02             63 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             64 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             65 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             66 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             67 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             68 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             69 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             70 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             71 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             72 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              73

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
    #define schprioin61buskar        202 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61buskar       203 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61bus          204 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risovris      205 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61risovris     206 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61risov        207 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risvrwris     208 /* Inmelden 61 via Vrachtwagen toestaan                                  */
    #define schpriouit61risvrwris    209 /* Uitmelden 61 via Vrachtwagen toestaan                                 */
    #define schupinagb61risvrw       210 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin62buskar        211 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62buskar       212 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62bus          213 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risovris      214 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62risovris     215 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62risov        216 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risvrwris     217 /* Inmelden 62 via Vrachtwagen toestaan                                  */
    #define schpriouit62risvrwris    218 /* Uitmelden 62 via Vrachtwagen toestaan                                 */
    #define schupinagb62risvrw       219 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin67buskar        220 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67buskar       221 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67bus          222 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risovris      223 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67risovris     224 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67risov        225 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risvrwris     226 /* Inmelden 67 via Vrachtwagen toestaan                                  */
    #define schpriouit67risvrwris    227 /* Uitmelden 67 via Vrachtwagen toestaan                                 */
    #define schupinagb67risvrw       228 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin68buskar        229 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68buskar       230 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68bus          231 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risovris      232 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68risovris     233 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68risov        234 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risvrwris     235 /* Inmelden 68 via Vrachtwagen toestaan                                  */
    #define schpriouit68risvrwris    236 /* Uitmelden 68 via Vrachtwagen toestaan                                 */
    #define schupinagb68risvrw       237 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schupinagbhd02           238 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02         */
    #define schhdin02kar             239 /* Inmelden 02 via KAR HD toestaan                                       */
    #define schhduit02kar            240 /* Uitmelden 02 via KAR HD toestaan                                      */
    #define schchecksirene02         241 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                */
    #define schhdin02ris             242 /* Inmelden 02 via RIS HD toestaan                                       */
    #define schhduit02ris            243 /* Uitmelden 02 via RIS HD toestaan                                      */
    #define schupinagbhd03           244 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03         */
    #define schhdin03kar             245 /* Inmelden 03 via KAR HD toestaan                                       */
    #define schhduit03kar            246 /* Uitmelden 03 via KAR HD toestaan                                      */
    #define schchecksirene03         247 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                */
    #define schhdin03ris             248 /* Inmelden 03 via RIS HD toestaan                                       */
    #define schhduit03ris            249 /* Uitmelden 03 via RIS HD toestaan                                      */
    #define schupinagbhd05           250 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05         */
    #define schhdin05kar             251 /* Inmelden 05 via KAR HD toestaan                                       */
    #define schhduit05kar            252 /* Uitmelden 05 via KAR HD toestaan                                      */
    #define schchecksirene05         253 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                */
    #define schhdin05ris             254 /* Inmelden 05 via RIS HD toestaan                                       */
    #define schhduit05ris            255 /* Uitmelden 05 via RIS HD toestaan                                      */
    #define schupinagbhd08           256 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08         */
    #define schhdin08kar             257 /* Inmelden 08 via KAR HD toestaan                                       */
    #define schhduit08kar            258 /* Uitmelden 08 via KAR HD toestaan                                      */
    #define schchecksirene08         259 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                */
    #define schhdin08ris             260 /* Inmelden 08 via RIS HD toestaan                                       */
    #define schhduit08ris            261 /* Uitmelden 08 via RIS HD toestaan                                      */
    #define schupinagbhd09           262 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09         */
    #define schhdin09kar             263 /* Inmelden 09 via KAR HD toestaan                                       */
    #define schhduit09kar            264 /* Uitmelden 09 via KAR HD toestaan                                      */
    #define schchecksirene09         265 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                */
    #define schhdin09ris             266 /* Inmelden 09 via RIS HD toestaan                                       */
    #define schhduit09ris            267 /* Uitmelden 09 via RIS HD toestaan                                      */
    #define schupinagbhd11           268 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11         */
    #define schhdin11kar             269 /* Inmelden 11 via KAR HD toestaan                                       */
    #define schhduit11kar            270 /* Uitmelden 11 via KAR HD toestaan                                      */
    #define schchecksirene11         271 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                */
    #define schhdin11ris             272 /* Inmelden 11 via RIS HD toestaan                                       */
    #define schhduit11ris            273 /* Uitmelden 11 via RIS HD toestaan                                      */
    #define schupinagbhd61           274 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61         */
    #define schhdin61kar             275 /* Inmelden 61 via KAR HD toestaan                                       */
    #define schhduit61kar            276 /* Uitmelden 61 via KAR HD toestaan                                      */
    #define schchecksirene61         277 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                */
    #define schhdin61ris             278 /* Inmelden 61 via RIS HD toestaan                                       */
    #define schhduit61ris            279 /* Uitmelden 61 via RIS HD toestaan                                      */
    #define schupinagbhd62           280 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62         */
    #define schhdin62kar             281 /* Inmelden 62 via KAR HD toestaan                                       */
    #define schhduit62kar            282 /* Uitmelden 62 via KAR HD toestaan                                      */
    #define schchecksirene62         283 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                */
    #define schhdin62ris             284 /* Inmelden 62 via RIS HD toestaan                                       */
    #define schhduit62ris            285 /* Uitmelden 62 via RIS HD toestaan                                      */
    #define schupinagbhd67           286 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67         */
    #define schhdin67kar             287 /* Inmelden 67 via KAR HD toestaan                                       */
    #define schhduit67kar            288 /* Uitmelden 67 via KAR HD toestaan                                      */
    #define schchecksirene67         289 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                */
    #define schhdin67ris             290 /* Inmelden 67 via RIS HD toestaan                                       */
    #define schhduit67ris            291 /* Uitmelden 67 via RIS HD toestaan                                      */
    #define schupinagbhd68           292 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68         */
    #define schhdin68kar             293 /* Inmelden 68 via KAR HD toestaan                                       */
    #define schhduit68kar            294 /* Uitmelden 68 via KAR HD toestaan                                      */
    #define schchecksirene68         295 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                */
    #define schhdin68ris             296 /* Inmelden 68 via RIS HD toestaan                                       */
    #define schhduit68ris            297 /* Uitmelden 68 via RIS HD toestaan                                      */
    #define schrisgeencheckopsg      298 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen           */
    #define schrisaanvraag           299 /* Globaal in of uitschakelen aanvragen via RIS                          */
    #define schrisverlengen          300 /* Globaal in of uitschakelen verlengen via RIS                          */
    #define schrgadd24_3             301 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2            */
    #define schrgv                   302 /* RoBuGrover aan of uit                                                 */
    #define schrgv_snel              303 /* RoBuGrover versneld ophogen of verlagen                               */
    #define schca02                  304 /* Cyclische aanvraag fase 02                                            */
    #define schca03                  305 /* Cyclische aanvraag fase 03                                            */
    #define schca05                  306 /* Cyclische aanvraag fase 05                                            */
    #define schca08                  307 /* Cyclische aanvraag fase 08                                            */
    #define schca09                  308 /* Cyclische aanvraag fase 09                                            */
    #define schca11                  309 /* Cyclische aanvraag fase 11                                            */
    #define schca21                  310 /* Cyclische aanvraag fase 21                                            */
    #define schca22                  311 /* Cyclische aanvraag fase 22                                            */
    #define schca24                  312 /* Cyclische aanvraag fase 24                                            */
    #define schca26                  313 /* Cyclische aanvraag fase 26                                            */
    #define schca28                  314 /* Cyclische aanvraag fase 28                                            */
    #define schca31                  315 /* Cyclische aanvraag fase 31                                            */
    #define schca32                  316 /* Cyclische aanvraag fase 32                                            */
    #define schca33                  317 /* Cyclische aanvraag fase 33                                            */
    #define schca34                  318 /* Cyclische aanvraag fase 34                                            */
    #define schca38                  319 /* Cyclische aanvraag fase 38                                            */
    #define schca61                  320 /* Cyclische aanvraag fase 61                                            */
    #define schca62                  321 /* Cyclische aanvraag fase 62                                            */
    #define schca67                  322 /* Cyclische aanvraag fase 67                                            */
    #define schca68                  323 /* Cyclische aanvraag fase 68                                            */
    #define schca81                  324 /* Cyclische aanvraag fase 81                                            */
    #define schca82                  325 /* Cyclische aanvraag fase 82                                            */
    #define schca84                  326 /* Cyclische aanvraag fase 84                                            */
    #define schvg02_4a               327 /* Veiligheidsgroen detector 02_4a fase 02                               */
    #define schvg02_4b               328 /* Veiligheidsgroen detector 02_4b fase 02                               */
    #define schvg08_4a               329 /* Veiligheidsgroen detector 08_4a fase 08                               */
    #define schvg08_4b               330 /* Veiligheidsgroen detector 08_4b fase 08                               */
    #define schvg11_4                331 /* Veiligheidsgroen detector 11_4 fase 11                                */
    #define schaltg02                332 /* Alternatieve realisatie toestaan fase 02                              */
    #define schaltg03                333 /* Alternatieve realisatie toestaan fase 03                              */
    #define schaltg05                334 /* Alternatieve realisatie toestaan fase 05                              */
    #define schaltg08                335 /* Alternatieve realisatie toestaan fase 08                              */
    #define schaltg09                336 /* Alternatieve realisatie toestaan fase 09                              */
    #define schaltg11                337 /* Alternatieve realisatie toestaan fase 11                              */
    #define schaltg21                338 /* Alternatieve realisatie toestaan fase 21                              */
    #define schaltg2232              339 /* Alternatieve realisatie toestaan fasen 22, 32                         */
    #define schaltg2434              340 /* Alternatieve realisatie toestaan fasen 24, 34                         */
    #define schaltg26                341 /* Alternatieve realisatie toestaan fase 26                              */
    #define schaltg28                342 /* Alternatieve realisatie toestaan fase 28                              */
    #define schaltg31                343 /* Alternatieve realisatie toestaan fase 31                              */
    #define schaltg3384              344 /* Alternatieve realisatie toestaan fasen 33, 84                         */
    #define schaltg38                345 /* Alternatieve realisatie toestaan fase 38                              */
    #define schaltg61                346 /* Alternatieve realisatie toestaan fase 61                              */
    #define schaltg62                347 /* Alternatieve realisatie toestaan fase 62                              */
    #define schaltg67                348 /* Alternatieve realisatie toestaan fase 67                              */
    #define schaltg68                349 /* Alternatieve realisatie toestaan fase 68                              */
    #define schaltg81                350 /* Alternatieve realisatie toestaan fase 81                              */
    #define schaltg82                351 /* Alternatieve realisatie toestaan fase 82                              */
    #define schwg02                  352 /* Wachtstand groen fase 02                                              */
    #define schwg03                  353 /* Wachtstand groen fase 03                                              */
    #define schwg05                  354 /* Wachtstand groen fase 05                                              */
    #define schwg08                  355 /* Wachtstand groen fase 08                                              */
    #define schwg09                  356 /* Wachtstand groen fase 09                                              */
    #define schwg11                  357 /* Wachtstand groen fase 11                                              */
    #define schwg21                  358 /* Wachtstand groen fase 21                                              */
    #define schwg22                  359 /* Wachtstand groen fase 22                                              */
    #define schwg24                  360 /* Wachtstand groen fase 24                                              */
    #define schwg26                  361 /* Wachtstand groen fase 26                                              */
    #define schwg28                  362 /* Wachtstand groen fase 28                                              */
    #define schwg31                  363 /* Wachtstand groen fase 31                                              */
    #define schwg32                  364 /* Wachtstand groen fase 32                                              */
    #define schwg33                  365 /* Wachtstand groen fase 33                                              */
    #define schwg34                  366 /* Wachtstand groen fase 34                                              */
    #define schwg38                  367 /* Wachtstand groen fase 38                                              */
    #define schwg61                  368 /* Wachtstand groen fase 61                                              */
    #define schwg62                  369 /* Wachtstand groen fase 62                                              */
    #define schwg67                  370 /* Wachtstand groen fase 67                                              */
    #define schwg68                  371 /* Wachtstand groen fase 68                                              */
    #define schwg81                  372 /* Wachtstand groen fase 81                                              */
    #define schwg82                  373 /* Wachtstand groen fase 82                                              */
    #define schwg84                  374 /* Wachtstand groen fase 84                                              */
    #define schstar                  375 /* Inschakelen star programma                                            */
    #define schgs2232                376 /* Schakelbare gelijkstart tussen fase 32 en 22                          */
    #define schgs2434                377 /* Schakelbare gelijkstart tussen fase 34 en 24                          */
    #define schgs3384                378 /* Schakelbare gelijkstart tussen fase 84 en 33                          */
    #define schlos32_1               379 /* Toestaan los realiseren fase 32                                       */
    #define schlos32_2               380 /* Toestaan los realiseren fase 32                                       */
    #define schlos31_1               381 /* Toestaan los realiseren fase 31                                       */
    #define schlos31_2               382 /* Toestaan los realiseren fase 31                                       */
    #define schlos34_1               383 /* Toestaan los realiseren fase 34                                       */
    #define schlos34_2               384 /* Toestaan los realiseren fase 34                                       */
    #define schlos33_1               385 /* Toestaan los realiseren fase 33                                       */
    #define schlos33_2               386 /* Toestaan los realiseren fase 33                                       */
    #define schgsbeidedkb            387
    #define SCHMAX1                  388

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
    #define prmnatxdhst61bus             277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             283 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           284 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          285 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             286 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           287 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          288 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                289 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                290 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                291 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                292 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                293 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                294 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                295 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                296 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                297 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                298 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                299 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                300 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                301 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                302 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                303 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                304 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                305 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                306 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                307 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                308 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                309 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                310 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                311 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                312 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                313 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                314 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                315 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                316 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                317 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                318 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                319 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                320 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                321 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                322 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                323 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                324 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                325 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                326 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                327 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                328 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                329 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                330 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                331 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                332 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                333 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                334 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                335 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                336 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                337 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                338 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                339 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                340 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                341 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                342 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                343 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                344 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                345 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                346 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                347 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                348 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                349 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                350 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                351 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                352 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                353 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                354 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                355 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                356 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                357 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                358 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                359 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                360 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                361 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                362 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                363 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                364 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                365 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                366 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                367 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                368 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                369 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                370 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                371 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                372 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                373 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                374 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                375 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                376 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                377 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                378 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                379 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                380 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                381 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                382 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                383 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                384 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                385 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                386 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                387 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                388 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                389 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                390 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                391 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                392 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                393 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                394 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                395 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                396 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                397 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                398 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                399 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                400 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                401 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                402 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                403 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                404 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                405 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                406 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                407 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                408 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                409 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                410 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                411 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                412 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                413 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                414 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                415 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                416 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                417 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                418 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                419 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                420 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                421 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                422 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                423 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                424 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                425 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                426 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                427 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                428 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                429 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                430 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                431 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                432 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                433 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                434 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                435 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                436 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                437 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                438 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                439 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                440 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                441 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                442 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                443 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                444 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                445 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                446 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                447 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                448 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                449 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                450 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                451 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                452 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                453 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                454 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                455 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                456 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                457 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                458 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                459 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                460 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                461 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                462 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                463 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                464 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                465 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                466 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                467 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                468 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                469 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                470 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                471 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                472 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                473 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                474 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                475 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                476 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                477 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                478 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                479 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                480 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                481 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                482 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                483 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                484 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                485 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                486 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                487 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                488 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                489 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                490 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                491 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                492 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                493 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                494 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                495 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                496 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                497 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                498 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                499 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                500 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                501 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                502 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                503 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                504 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                505 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                506 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                507 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                508 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                509 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                510 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                511 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                512 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                513 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                514 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                515 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                516 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                517 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                518 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                519 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                520 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                521 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                522 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                523 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                524 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                525 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                526 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                527 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                528 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                529 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                530 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                531 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                532 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                533 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                534 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                535 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                536 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                537 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                538 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                539 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                540 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                541 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                542 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                543 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                544 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                545 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                546 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                547 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                548 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                549 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                550 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                551 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                552 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                553 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                554 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                555 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                556 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                557 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                558 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                559 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                560 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                561 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                562 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                563 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                564 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                565 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                566 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                567 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                568 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                569 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                570 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                571 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                572 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                573 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                574 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                575 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                576 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                577 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                578 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                579 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                580 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                581 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                582 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                583 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                584 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                585 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                586 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                587 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                588 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                589 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                590 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                591 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                592 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                593 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                594 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                595 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                596 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                597 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                598 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                599 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                600 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                601 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                602 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                603 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                604 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                605 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                606 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                607 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                608 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                609 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                610 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                611 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                612 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                613 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                614 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                615 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                616 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                617 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                618 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                619 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                620 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                621 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                622 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                623 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                624 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                625 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                626 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                627 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                628 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                629 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                630 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                631 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                632 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                633 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                634 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                635 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                636 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                637 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                638 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                639 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                640 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                641 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                642 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                643 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                644 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                645 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                646 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                647 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                648 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                649 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                650 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                651 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                652 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                653 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                654 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                655 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                656 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                657 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                658 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                659 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                660 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                661 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                662 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                663 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                664 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                665 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                666 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                667 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                668 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                669 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                670 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                671 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                672 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                673 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                674 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                675 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                676 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                677 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                678 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                679 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                680 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                681 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                682 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                683 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                684 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                685 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                686 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                687 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                688 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                689 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                690 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                691 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                692 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                693 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                694 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                695 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                696 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                697 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                698 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                699 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                700 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                701 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                702 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                703 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                704 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                705 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                706 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                707 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                708 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                709 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                710 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                711 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                712 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                713 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                714 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                715 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                716 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                717 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                718 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                719 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                720 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                721 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                722 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                723 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                724 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                725 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                726 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                727 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                728 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                729 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                730 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                731 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                732 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                733 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                734 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                735 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                736 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                737 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                738 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                739 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                740 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                741 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                742 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                743 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                744 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                745 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                746 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                747 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                748 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                749 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                750 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                751 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                752 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                753 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                754 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                755 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                756 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                757 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                758 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                759 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                760 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                761 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                762 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                763 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                764 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                765 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                766 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                767 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                768 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                769 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                770 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                771 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                772 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                773 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                774 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                775 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                776 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                777 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                778 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                779 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                780 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                781 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                782 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                783 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                784 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                785 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                786 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                787 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                788 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                789 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                790 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                791 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                792 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                793 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                794 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                795 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                796 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                797 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                798 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                799 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                800 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                801 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                802 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                803 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                804 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                805 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                806 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                807 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                808 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                809 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                810 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                811 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                812 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                813 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                814 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                815 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                816 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                817 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                818 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                819 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                820 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                821 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                822 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                823 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                824 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                825 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                826 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                827 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                828 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                829 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                830 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                831 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                832 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                833 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                834 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                835 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                836 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                837 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                838 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                839 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                840 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                841 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                842 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                843 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                844 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                845 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                846 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                847 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                848 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                849 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                850 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                851 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                852 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                853 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                854 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                855 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                856 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                857 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                858 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                859 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                860 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                861 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                862 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                863 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                864 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                865 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                866 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                867 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                868 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                869 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                870 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                871 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                872 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                873 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                874 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                875 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                876 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                877 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                878 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                879 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                880 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                881 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                882 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                883 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                884 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                885 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                886 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                887 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                888 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                889 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                890 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                891 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                892 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                893 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                894 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                895 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                896 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                897 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                898 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                899 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                900 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                901 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                902 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                903 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                904 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                905 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                906 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                907 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                908 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                909 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                910 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                911 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                912 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                913 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                914 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                915 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                916 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                917 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                918 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                919 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                920 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                921 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                922 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                923 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                924 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                925 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                926 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                927 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                928 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                929 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                930 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                931 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                932 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                933 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                934 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                935 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                936 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                937 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                938 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                939 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                940 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                941 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                942 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                943 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                944 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                945 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                946 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                947 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                948 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                949 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                950 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                951 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                952 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                953 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                954 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                955 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                956 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                957 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                958 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                959 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                960 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                961 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                962 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                963 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                964 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                965 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                966 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                967 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                968 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                969 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                970 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                971 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                972 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                973 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                974 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                975 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                976 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                977 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                978 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   979 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 980 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   981 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   982 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   983 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   984 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   985 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   986 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                987 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                988 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                989 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                990 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                991 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                992 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                993 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                994 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                995 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema3122                996 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                997 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                998 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                999 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324               1000 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334               1001 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384               1002 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424               1003 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433               1004 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484               1005 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               1006 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1007 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                     1008 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                     1009 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     1010 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     1011 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     1012 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     1013 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     1014 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     1015 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                     1016 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     1017 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     1018 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     1019 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     1020 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     1021 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     1022 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     1023 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1024 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1025 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1026 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1027 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1028 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1029 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1030 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1031 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03                   1032 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05                   1033 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08                   1034 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09                   1035 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11                   1036 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21                   1037 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22                   1038 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24                   1039 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26                   1040 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28                   1041 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31                   1042 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32                   1043 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33                   1044 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34                   1045 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38                   1046 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61                   1047 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62                   1048 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67                   1049 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68                   1050 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81                   1051 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82                   1052 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84                   1053 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmxnl0262                  1054 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868                  1055 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168                  1056 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221                  1057 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132                  1058 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231                  1059 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334                  1060 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433                  1061 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281                  1062 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg         1063 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1064 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus      1065 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus       1066 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus       1067 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus      1068 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1069 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1070 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1071 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1072 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1073 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1074 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1075 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1076 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1077 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1078 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1079 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1080 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1081 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1082 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1083 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1084 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1085 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1086 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1087 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1088 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1089 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1090 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1091 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1092 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1093 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1094 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1095 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1096 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1097 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1098 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1099 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1100 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1101 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1102 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1103 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1104 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1105 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1106 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1107 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1108 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1109 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1110 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1111 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1112 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1113 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1114 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1115 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1116 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1117 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1118 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1119 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1120 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1121 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1122 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1123 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1124 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1125 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1126 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1127 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1128 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1129 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1130 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1131 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1132 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1133 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1134 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1135 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1136 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1137 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1138 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1139 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1140 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1141 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1142 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1143 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1144 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1145 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1146 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1147 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1148 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1149 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1150 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1151 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1152 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1153 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1154 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1155 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1156 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1157 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1158 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1159 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1160 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1161 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1162 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1163 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1164 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1165 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1166 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1167 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1168 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1169 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1170 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1171 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1172 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1173 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1174 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1175 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1176 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1177 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1178 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1179 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1180 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1181 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1182 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1183 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1184 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1185 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1186 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1187 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1188 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1189 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1190 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1191 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1192 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1193 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1194 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1195 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1196 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1197 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1198 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1199 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1200 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1201 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1202 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1203 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1204 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1205 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1206 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1207 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1208 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1209 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1210 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1211 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1212 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1213 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1214 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1215 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                 1216 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                1217 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                 1218 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                 1219 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus              1220 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                1221 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1222 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1223 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1224 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1225 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1226 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1227
    #define prmrisend02risov            1228
    #define prmriseta02risov            1229
    #define prmrisrole02risov           1230
    #define prmrissubrole02risov        1231
    #define prmrisstationtype02risov    1232
    #define prmrisapproachid02risov     1233
    #define prmrislaneid02risov_1       1234
    #define prmrislaneid02risov_2       1235
    #define prmrto02risvrw              1236 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1237 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1238 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1239 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1240 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1241
    #define prmrisend02risvrw           1242
    #define prmriseta02risvrw           1243
    #define prmrisrole02risvrw          1244
    #define prmrissubrole02risvrw       1245
    #define prmrisstationtype02risvrw   1246
    #define prmrisapproachid02risvrw    1247
    #define prmrislaneid02risvrw_1      1248
    #define prmrislaneid02risvrw_2      1249
    #define prmrto03bus                 1250 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1251 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1252 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1253 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1254 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1255 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1256 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1257 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1258 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1259 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1260 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1261
    #define prmrisend03risov            1262
    #define prmriseta03risov            1263
    #define prmrisrole03risov           1264
    #define prmrissubrole03risov        1265
    #define prmrisstationtype03risov    1266
    #define prmrisapproachid03risov     1267
    #define prmrislaneid03risov_1       1268
    #define prmrto03risvrw              1269 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1270 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1271 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1272 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1273 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1274
    #define prmrisend03risvrw           1275
    #define prmriseta03risvrw           1276
    #define prmrisrole03risvrw          1277
    #define prmrissubrole03risvrw       1278
    #define prmrisstationtype03risvrw   1279
    #define prmrisapproachid03risvrw    1280
    #define prmrislaneid03risvrw_1      1281
    #define prmrto05bus                 1282 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1283 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1284 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1285 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1286 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1287 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1288 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1289 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1290 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1291 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1292 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1293
    #define prmrisend05risov            1294
    #define prmriseta05risov            1295
    #define prmrisrole05risov           1296
    #define prmrissubrole05risov        1297
    #define prmrisstationtype05risov    1298
    #define prmrisapproachid05risov     1299
    #define prmrislaneid05risov_1       1300
    #define prmrto05risvrw              1301 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw             1302 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw              1303 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw              1304 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw             1305 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw         1306
    #define prmrisend05risvrw           1307
    #define prmriseta05risvrw           1308
    #define prmrisrole05risvrw          1309
    #define prmrissubrole05risvrw       1310
    #define prmrisstationtype05risvrw   1311
    #define prmrisapproachid05risvrw    1312
    #define prmrislaneid05risvrw_1      1313
    #define prmrto08bus                 1314 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1315 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1316 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1317 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1318 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1319 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1320 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1321 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1322 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1323 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1324 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1325
    #define prmrisend08risov            1326
    #define prmriseta08risov            1327
    #define prmrisrole08risov           1328
    #define prmrissubrole08risov        1329
    #define prmrisstationtype08risov    1330
    #define prmrisapproachid08risov     1331
    #define prmrislaneid08risov_1       1332
    #define prmrislaneid08risov_2       1333
    #define prmrto08risvrw              1334 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1335 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1336 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1337 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1338 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1339
    #define prmrisend08risvrw           1340
    #define prmriseta08risvrw           1341
    #define prmrisrole08risvrw          1342
    #define prmrissubrole08risvrw       1343
    #define prmrisstationtype08risvrw   1344
    #define prmrisapproachid08risvrw    1345
    #define prmrislaneid08risvrw_1      1346
    #define prmrislaneid08risvrw_2      1347
    #define prmrto09bus                 1348 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1349 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1350 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1351 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1352 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1353 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1354 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1355 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1356 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1357 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1358 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1359
    #define prmrisend09risov            1360
    #define prmriseta09risov            1361
    #define prmrisrole09risov           1362
    #define prmrissubrole09risov        1363
    #define prmrisstationtype09risov    1364
    #define prmrisapproachid09risov     1365
    #define prmrislaneid09risov_1       1366
    #define prmrto09risvrw              1367 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw             1368 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw              1369 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw              1370 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw             1371 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw         1372
    #define prmrisend09risvrw           1373
    #define prmriseta09risvrw           1374
    #define prmrisrole09risvrw          1375
    #define prmrissubrole09risvrw       1376
    #define prmrisstationtype09risvrw   1377
    #define prmrisapproachid09risvrw    1378
    #define prmrislaneid09risvrw_1      1379
    #define prmrto11bus                 1380 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                1381 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                 1382 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                 1383 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus              1384 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                1385 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov               1386 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov              1387 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov               1388 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov               1389 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov              1390 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov          1391
    #define prmrisend11risov            1392
    #define prmriseta11risov            1393
    #define prmrisrole11risov           1394
    #define prmrissubrole11risov        1395
    #define prmrisstationtype11risov    1396
    #define prmrisapproachid11risov     1397
    #define prmrislaneid11risov_1       1398
    #define prmrto11risvrw              1399 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw             1400 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw              1401 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw              1402 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw             1403 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw         1404
    #define prmrisend11risvrw           1405
    #define prmriseta11risvrw           1406
    #define prmrisrole11risvrw          1407
    #define prmrissubrole11risvrw       1408
    #define prmrisstationtype11risvrw   1409
    #define prmrisapproachid11risvrw    1410
    #define prmrislaneid11risvrw_1      1411
    #define prmftsblok22fietsfiets      1412 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1413 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1414 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1415 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1416 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1417 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1418 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1419 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrto61bus                 1420 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1421 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1422 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1423 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1424 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1425 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1426 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1427 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1428 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1429 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1430 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1431
    #define prmrisend61risov            1432
    #define prmriseta61risov            1433
    #define prmrisrole61risov           1434
    #define prmrissubrole61risov        1435
    #define prmrisstationtype61risov    1436
    #define prmrisapproachid61risov     1437
    #define prmrislaneid61risov_1       1438
    #define prmrto61risvrw              1439 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1440 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1441 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1442 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1443 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1444
    #define prmrisend61risvrw           1445
    #define prmriseta61risvrw           1446
    #define prmrisrole61risvrw          1447
    #define prmrissubrole61risvrw       1448
    #define prmrisstationtype61risvrw   1449
    #define prmrisapproachid61risvrw    1450
    #define prmrislaneid61risvrw_1      1451
    #define prmrto62bus                 1452 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1453 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1454 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1455 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1456 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1457 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1458 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1459 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1460 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1461 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1462 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1463
    #define prmrisend62risov            1464
    #define prmriseta62risov            1465
    #define prmrisrole62risov           1466
    #define prmrissubrole62risov        1467
    #define prmrisstationtype62risov    1468
    #define prmrisapproachid62risov     1469
    #define prmrislaneid62risov_1       1470
    #define prmrislaneid62risov_2       1471
    #define prmrto62risvrw              1472 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1473 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1474 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1475 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1476 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1477
    #define prmrisend62risvrw           1478
    #define prmriseta62risvrw           1479
    #define prmrisrole62risvrw          1480
    #define prmrissubrole62risvrw       1481
    #define prmrisstationtype62risvrw   1482
    #define prmrisapproachid62risvrw    1483
    #define prmrislaneid62risvrw_1      1484
    #define prmrislaneid62risvrw_2      1485
    #define prmrto67bus                 1486 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1487 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1488 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1489 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1490 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1491 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1492 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1493 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1494 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1495 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1496 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1497
    #define prmrisend67risov            1498
    #define prmriseta67risov            1499
    #define prmrisrole67risov           1500
    #define prmrissubrole67risov        1501
    #define prmrisstationtype67risov    1502
    #define prmrisapproachid67risov     1503
    #define prmrislaneid67risov_1       1504
    #define prmrto67risvrw              1505 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1506 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1507 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1508 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1509 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1510
    #define prmrisend67risvrw           1511
    #define prmriseta67risvrw           1512
    #define prmrisrole67risvrw          1513
    #define prmrissubrole67risvrw       1514
    #define prmrisstationtype67risvrw   1515
    #define prmrisapproachid67risvrw    1516
    #define prmrislaneid67risvrw_1      1517
    #define prmrto68bus                 1518 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1519 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1520 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1521 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1522 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1523 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1524 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1525 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1526 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1527 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1528 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1529
    #define prmrisend68risov            1530
    #define prmriseta68risov            1531
    #define prmrisrole68risov           1532
    #define prmrissubrole68risov        1533
    #define prmrisstationtype68risov    1534
    #define prmrisapproachid68risov     1535
    #define prmrislaneid68risov_1       1536
    #define prmrislaneid68risov_2       1537
    #define prmrto68risvrw              1538 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1539 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1540 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1541 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1542 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1543
    #define prmrisend68risvrw           1544
    #define prmriseta68risvrw           1545
    #define prmrisrole68risvrw          1546
    #define prmrissubrole68risvrw       1547
    #define prmrisstationtype68risvrw   1548
    #define prmrisapproachid68risvrw    1549
    #define prmrislaneid68risvrw_1      1550
    #define prmrislaneid68risvrw_2      1551
    #define prmpriohd02                 1552 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1553 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1554 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1555 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1556
    #define prmrisend02hd               1557
    #define prmriseta02hd               1558
    #define prmrisrole02hd              1559
    #define prmrissubrole02hd           1560
    #define prmrisstationtype02hd       1561
    #define prmrisapproachid02hd        1562
    #define prmrislaneid02hd_1          1563
    #define prmrislaneid02hd_2          1564
    #define prmpriohd03                 1565 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1566 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1567 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1568 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd             1569
    #define prmrisend03hd               1570
    #define prmriseta03hd               1571
    #define prmrisrole03hd              1572
    #define prmrissubrole03hd           1573
    #define prmrisstationtype03hd       1574
    #define prmrisapproachid03hd        1575
    #define prmrislaneid03hd_1          1576
    #define prmpriohd05                 1577 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1578 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1579 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1580 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd             1581
    #define prmrisend05hd               1582
    #define prmriseta05hd               1583
    #define prmrisrole05hd              1584
    #define prmrissubrole05hd           1585
    #define prmrisstationtype05hd       1586
    #define prmrisapproachid05hd        1587
    #define prmrislaneid05hd_1          1588
    #define prmpriohd08                 1589 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1590 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1591 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1592 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd             1593
    #define prmrisend08hd               1594
    #define prmriseta08hd               1595
    #define prmrisrole08hd              1596
    #define prmrissubrole08hd           1597
    #define prmrisstationtype08hd       1598
    #define prmrisapproachid08hd        1599
    #define prmrislaneid08hd_1          1600
    #define prmrislaneid08hd_2          1601
    #define prmpriohd09                 1602 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1603 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1604 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1605 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd             1606
    #define prmrisend09hd               1607
    #define prmriseta09hd               1608
    #define prmrisrole09hd              1609
    #define prmrissubrole09hd           1610
    #define prmrisstationtype09hd       1611
    #define prmrisapproachid09hd        1612
    #define prmrislaneid09hd_1          1613
    #define prmpriohd11                 1614 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1615 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1616 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1617 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd             1618
    #define prmrisend11hd               1619
    #define prmriseta11hd               1620
    #define prmrisrole11hd              1621
    #define prmrissubrole11hd           1622
    #define prmrisstationtype11hd       1623
    #define prmrisapproachid11hd        1624
    #define prmrislaneid11hd_1          1625
    #define prmpriohd61                 1626 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1627 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1628 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1629 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd             1630
    #define prmrisend61hd               1631
    #define prmriseta61hd               1632
    #define prmrisrole61hd              1633
    #define prmrissubrole61hd           1634
    #define prmrisstationtype61hd       1635
    #define prmrisapproachid61hd        1636
    #define prmrislaneid61hd_1          1637
    #define prmpriohd62                 1638 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1639 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1640 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1641 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd             1642
    #define prmrisend62hd               1643
    #define prmriseta62hd               1644
    #define prmrisrole62hd              1645
    #define prmrissubrole62hd           1646
    #define prmrisstationtype62hd       1647
    #define prmrisapproachid62hd        1648
    #define prmrislaneid62hd_1          1649
    #define prmrislaneid62hd_2          1650
    #define prmpriohd67                 1651 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1652 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1653 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1654 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd             1655
    #define prmrisend67hd               1656
    #define prmriseta67hd               1657
    #define prmrisrole67hd              1658
    #define prmrissubrole67hd           1659
    #define prmrisstationtype67hd       1660
    #define prmrisapproachid67hd        1661
    #define prmrislaneid67hd_1          1662
    #define prmpriohd68                 1663 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1664 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1665 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1666 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd             1667
    #define prmrisend68hd               1668
    #define prmriseta68hd               1669
    #define prmrisrole68hd              1670
    #define prmrissubrole68hd           1671
    #define prmrisstationtype68hd       1672
    #define prmrisapproachid68hd        1673
    #define prmrislaneid68hd_1          1674
    #define prmrislaneid68hd_2          1675
    #define prmkarsg02                  1676 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1677 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1678 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1679 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1680 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1681 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1682 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1683 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1684 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1685 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1686 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1687 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1688 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1689 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1690 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1691 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1692 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1693 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1694 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1695 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                    1696 /* Start klokperiode dag                                                                                                          */
    #define prmetkp1                    1697 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp1                    1698 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp2                    1699 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp2                    1700 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp2                    1701 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp3                    1702 /* Start klokperiode avond                                                                                                        */
    #define prmetkp3                    1703 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp3                    1704 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp4                    1705 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp4                    1706 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp4                    1707 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp5                    1708 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp5                    1709 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp5                    1710 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp6                    1711 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp6                    1712 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp6                    1713 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmmg2_02                   1714 /* Maximale groentijd MG2 02                                                                                                      */
    #define prmmg2_03                   1715 /* Maximale groentijd MG2 03                                                                                                      */
    #define prmmg2_05                   1716 /* Maximale groentijd MG2 05                                                                                                      */
    #define prmmg2_08                   1717 /* Maximale groentijd MG2 08                                                                                                      */
    #define prmmg2_09                   1718 /* Maximale groentijd MG2 09                                                                                                      */
    #define prmmg2_11                   1719 /* Maximale groentijd MG2 11                                                                                                      */
    #define prmmg2_21                   1720 /* Maximale groentijd MG2 21                                                                                                      */
    #define prmmg2_22                   1721 /* Maximale groentijd MG2 22                                                                                                      */
    #define prmmg2_24                   1722 /* Maximale groentijd MG2 24                                                                                                      */
    #define prmmg2_26                   1723 /* Maximale groentijd MG2 26                                                                                                      */
    #define prmmg2_28                   1724 /* Maximale groentijd MG2 28                                                                                                      */
    #define prmmg2_61                   1725 /* Maximale groentijd MG2 61                                                                                                      */
    #define prmmg2_62                   1726 /* Maximale groentijd MG2 62                                                                                                      */
    #define prmmg2_67                   1727 /* Maximale groentijd MG2 67                                                                                                      */
    #define prmmg2_68                   1728 /* Maximale groentijd MG2 68                                                                                                      */
    #define prmmg2_81                   1729 /* Maximale groentijd MG2 81                                                                                                      */
    #define prmmg2_82                   1730 /* Maximale groentijd MG2 82                                                                                                      */
    #define prmmg2_84                   1731 /* Maximale groentijd MG2 84                                                                                                      */
    #define prmmg3_02                   1732 /* Maximale groentijd MG3 02                                                                                                      */
    #define prmmg3_03                   1733 /* Maximale groentijd MG3 03                                                                                                      */
    #define prmmg3_05                   1734 /* Maximale groentijd MG3 05                                                                                                      */
    #define prmmg3_08                   1735 /* Maximale groentijd MG3 08                                                                                                      */
    #define prmmg3_09                   1736 /* Maximale groentijd MG3 09                                                                                                      */
    #define prmmg3_11                   1737 /* Maximale groentijd MG3 11                                                                                                      */
    #define prmmg3_21                   1738 /* Maximale groentijd MG3 21                                                                                                      */
    #define prmmg3_22                   1739 /* Maximale groentijd MG3 22                                                                                                      */
    #define prmmg3_24                   1740 /* Maximale groentijd MG3 24                                                                                                      */
    #define prmmg3_26                   1741 /* Maximale groentijd MG3 26                                                                                                      */
    #define prmmg3_28                   1742 /* Maximale groentijd MG3 28                                                                                                      */
    #define prmmg3_61                   1743 /* Maximale groentijd MG3 61                                                                                                      */
    #define prmmg3_62                   1744 /* Maximale groentijd MG3 62                                                                                                      */
    #define prmmg3_67                   1745 /* Maximale groentijd MG3 67                                                                                                      */
    #define prmmg3_68                   1746 /* Maximale groentijd MG3 68                                                                                                      */
    #define prmmg3_81                   1747 /* Maximale groentijd MG3 81                                                                                                      */
    #define prmmg3_82                   1748 /* Maximale groentijd MG3 82                                                                                                      */
    #define prmmg3_84                   1749 /* Maximale groentijd MG3 84                                                                                                      */
    #define prmmg4_02                   1750 /* Maximale groentijd MG4 02                                                                                                      */
    #define prmmg4_03                   1751 /* Maximale groentijd MG4 03                                                                                                      */
    #define prmmg4_05                   1752 /* Maximale groentijd MG4 05                                                                                                      */
    #define prmmg4_08                   1753 /* Maximale groentijd MG4 08                                                                                                      */
    #define prmmg4_09                   1754 /* Maximale groentijd MG4 09                                                                                                      */
    #define prmmg4_11                   1755 /* Maximale groentijd MG4 11                                                                                                      */
    #define prmmg4_21                   1756 /* Maximale groentijd MG4 21                                                                                                      */
    #define prmmg4_22                   1757 /* Maximale groentijd MG4 22                                                                                                      */
    #define prmmg4_24                   1758 /* Maximale groentijd MG4 24                                                                                                      */
    #define prmmg4_26                   1759 /* Maximale groentijd MG4 26                                                                                                      */
    #define prmmg4_28                   1760 /* Maximale groentijd MG4 28                                                                                                      */
    #define prmmg4_61                   1761 /* Maximale groentijd MG4 61                                                                                                      */
    #define prmmg4_62                   1762 /* Maximale groentijd MG4 62                                                                                                      */
    #define prmmg4_67                   1763 /* Maximale groentijd MG4 67                                                                                                      */
    #define prmmg4_68                   1764 /* Maximale groentijd MG4 68                                                                                                      */
    #define prmmg4_81                   1765 /* Maximale groentijd MG4 81                                                                                                      */
    #define prmmg4_82                   1766 /* Maximale groentijd MG4 82                                                                                                      */
    #define prmmg4_84                   1767 /* Maximale groentijd MG4 84                                                                                                      */
    #define prmmg5_02                   1768 /* Maximale groentijd MG5 02                                                                                                      */
    #define prmmg5_03                   1769 /* Maximale groentijd MG5 03                                                                                                      */
    #define prmmg5_05                   1770 /* Maximale groentijd MG5 05                                                                                                      */
    #define prmmg5_08                   1771 /* Maximale groentijd MG5 08                                                                                                      */
    #define prmmg5_09                   1772 /* Maximale groentijd MG5 09                                                                                                      */
    #define prmmg5_11                   1773 /* Maximale groentijd MG5 11                                                                                                      */
    #define prmmg5_21                   1774 /* Maximale groentijd MG5 21                                                                                                      */
    #define prmmg5_22                   1775 /* Maximale groentijd MG5 22                                                                                                      */
    #define prmmg5_24                   1776 /* Maximale groentijd MG5 24                                                                                                      */
    #define prmmg5_26                   1777 /* Maximale groentijd MG5 26                                                                                                      */
    #define prmmg5_28                   1778 /* Maximale groentijd MG5 28                                                                                                      */
    #define prmmg5_61                   1779 /* Maximale groentijd MG5 61                                                                                                      */
    #define prmmg5_62                   1780 /* Maximale groentijd MG5 62                                                                                                      */
    #define prmmg5_67                   1781 /* Maximale groentijd MG5 67                                                                                                      */
    #define prmmg5_68                   1782 /* Maximale groentijd MG5 68                                                                                                      */
    #define prmmg5_81                   1783 /* Maximale groentijd MG5 81                                                                                                      */
    #define prmmg5_82                   1784 /* Maximale groentijd MG5 82                                                                                                      */
    #define prmmg5_84                   1785 /* Maximale groentijd MG5 84                                                                                                      */
    #define prmmg6_02                   1786 /* Maximale groentijd MG6 02                                                                                                      */
    #define prmmg6_03                   1787 /* Maximale groentijd MG6 03                                                                                                      */
    #define prmmg6_05                   1788 /* Maximale groentijd MG6 05                                                                                                      */
    #define prmmg6_08                   1789 /* Maximale groentijd MG6 08                                                                                                      */
    #define prmmg6_09                   1790 /* Maximale groentijd MG6 09                                                                                                      */
    #define prmmg6_11                   1791 /* Maximale groentijd MG6 11                                                                                                      */
    #define prmmg6_21                   1792 /* Maximale groentijd MG6 21                                                                                                      */
    #define prmmg6_22                   1793 /* Maximale groentijd MG6 22                                                                                                      */
    #define prmmg6_24                   1794 /* Maximale groentijd MG6 24                                                                                                      */
    #define prmmg6_26                   1795 /* Maximale groentijd MG6 26                                                                                                      */
    #define prmmg6_28                   1796 /* Maximale groentijd MG6 28                                                                                                      */
    #define prmmg6_61                   1797 /* Maximale groentijd MG6 61                                                                                                      */
    #define prmmg6_62                   1798 /* Maximale groentijd MG6 62                                                                                                      */
    #define prmmg6_67                   1799 /* Maximale groentijd MG6 67                                                                                                      */
    #define prmmg6_68                   1800 /* Maximale groentijd MG6 68                                                                                                      */
    #define prmmg6_81                   1801 /* Maximale groentijd MG6 81                                                                                                      */
    #define prmmg6_82                   1802 /* Maximale groentijd MG6 82                                                                                                      */
    #define prmmg6_84                   1803 /* Maximale groentijd MG6 84                                                                                                      */
    #define prmmg7_02                   1804 /* Maximale groentijd MG7 02                                                                                                      */
    #define prmmg7_03                   1805 /* Maximale groentijd MG7 03                                                                                                      */
    #define prmmg7_05                   1806 /* Maximale groentijd MG7 05                                                                                                      */
    #define prmmg7_08                   1807 /* Maximale groentijd MG7 08                                                                                                      */
    #define prmmg7_09                   1808 /* Maximale groentijd MG7 09                                                                                                      */
    #define prmmg7_11                   1809 /* Maximale groentijd MG7 11                                                                                                      */
    #define prmmg7_21                   1810 /* Maximale groentijd MG7 21                                                                                                      */
    #define prmmg7_22                   1811 /* Maximale groentijd MG7 22                                                                                                      */
    #define prmmg7_24                   1812 /* Maximale groentijd MG7 24                                                                                                      */
    #define prmmg7_26                   1813 /* Maximale groentijd MG7 26                                                                                                      */
    #define prmmg7_28                   1814 /* Maximale groentijd MG7 28                                                                                                      */
    #define prmmg7_61                   1815 /* Maximale groentijd MG7 61                                                                                                      */
    #define prmmg7_62                   1816 /* Maximale groentijd MG7 62                                                                                                      */
    #define prmmg7_67                   1817 /* Maximale groentijd MG7 67                                                                                                      */
    #define prmmg7_68                   1818 /* Maximale groentijd MG7 68                                                                                                      */
    #define prmmg7_81                   1819 /* Maximale groentijd MG7 81                                                                                                      */
    #define prmmg7_82                   1820 /* Maximale groentijd MG7 82                                                                                                      */
    #define prmmg7_84                   1821 /* Maximale groentijd MG7 84                                                                                                      */
    #define prmrisapproachid02          1822 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1823 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1824 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1825 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1826 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1827 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1828 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1829 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1830 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1831 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1832 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1833 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1834 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1835 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1836 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1837 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1838 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1839 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1840 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1841 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1842 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1843 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1844 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1845 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1846 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1847 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1848 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1849 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1850 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1851 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1852 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1853 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneid22_1            1854 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneid24_1            1855 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneid26_1            1856 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneid28_1            1857 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneid31_1            1858 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1859 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1860 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1861 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1862 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1863 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1864 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1865 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1866 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1867 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1868 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1869 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1870 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1871 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1872 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1873 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1874 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1875 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1876 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1877 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart02mveh2         1878 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 02                                                                   */
    #define prmrisastart03mveh1         1879 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 03                                                                   */
    #define prmrisastart05mveh1         1880 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 05                                                                   */
    #define prmrisastart08mveh1         1881 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart08mveh2         1882 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 08                                                                   */
    #define prmrisastart09mveh1         1883 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 09                                                                   */
    #define prmrisastart11mveh1         1884 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 11                                                                   */
    #define prmrisastart21fts1          1885 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 21                                                                   */
    #define prmrisastart22fts1          1886 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 22                                                                   */
    #define prmrisastart24fts1          1887 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 24                                                                   */
    #define prmrisastart26fts1          1888 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 26                                                                   */
    #define prmrisastart28fts1          1889 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 28                                                                   */
    #define prmrisastart31vtg1          1890 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart31vtg2          1891 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 31                                                                   */
    #define prmrisastart32vtg1          1892 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart32vtg2          1893 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 32                                                                   */
    #define prmrisastart33vtg1          1894 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart33vtg2          1895 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 33                                                                   */
    #define prmrisastart34vtg1          1896 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart34vtg2          1897 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 34                                                                   */
    #define prmrisastart38vtg1          1898 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart38vtg2          1899 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 38                                                                   */
    #define prmrisastart61mveh1         1900 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 61                                                                   */
    #define prmrisastart62mveh1         1901 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart62mveh2         1902 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 62                                                                   */
    #define prmrisastart67mveh1         1903 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 67                                                                   */
    #define prmrisastart68mveh1         1904 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart68mveh2         1905 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 68                                                                   */
    #define prmrisastart81fts1          1906 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 81                                                                   */
    #define prmrisastart82fts1          1907 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 82                                                                   */
    #define prmrisastart84fts1          1908 /* Afstand van stopstreep tot start aanvraag gebied RIS fase 84                                                                   */
    #define prmrisaend02mveh1           1909 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend02mveh2           1910 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 02                                                                   */
    #define prmrisaend03mveh1           1911 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 03                                                                   */
    #define prmrisaend05mveh1           1912 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 05                                                                   */
    #define prmrisaend08mveh1           1913 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend08mveh2           1914 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 08                                                                   */
    #define prmrisaend09mveh1           1915 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 09                                                                   */
    #define prmrisaend11mveh1           1916 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 11                                                                   */
    #define prmrisaend21fts1            1917 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 21                                                                   */
    #define prmrisaend22fts1            1918 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 22                                                                   */
    #define prmrisaend24fts1            1919 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 24                                                                   */
    #define prmrisaend26fts1            1920 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 26                                                                   */
    #define prmrisaend28fts1            1921 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 28                                                                   */
    #define prmrisaend31vtg1            1922 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend31vtg2            1923 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 31                                                                   */
    #define prmrisaend32vtg1            1924 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend32vtg2            1925 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 32                                                                   */
    #define prmrisaend33vtg1            1926 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend33vtg2            1927 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 33                                                                   */
    #define prmrisaend34vtg1            1928 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend34vtg2            1929 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 34                                                                   */
    #define prmrisaend38vtg1            1930 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend38vtg2            1931 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 38                                                                   */
    #define prmrisaend61mveh1           1932 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 61                                                                   */
    #define prmrisaend62mveh1           1933 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend62mveh2           1934 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 62                                                                   */
    #define prmrisaend67mveh1           1935 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 67                                                                   */
    #define prmrisaend68mveh1           1936 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend68mveh2           1937 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 68                                                                   */
    #define prmrisaend81fts1            1938 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 81                                                                   */
    #define prmrisaend82fts1            1939 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 82                                                                   */
    #define prmrisaend84fts1            1940 /* Afstand van stopstreep tot einde aanvraag gebied RIS fase 84                                                                   */
    #define prmrisvstart02mveh1         1941 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart02mveh2         1942 /* Afstand van stopstreep tot start verleng gebied RIS fase 02                                                                    */
    #define prmrisvstart03mveh1         1943 /* Afstand van stopstreep tot start verleng gebied RIS fase 03                                                                    */
    #define prmrisvstart05mveh1         1944 /* Afstand van stopstreep tot start verleng gebied RIS fase 05                                                                    */
    #define prmrisvstart08mveh1         1945 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart08mveh2         1946 /* Afstand van stopstreep tot start verleng gebied RIS fase 08                                                                    */
    #define prmrisvstart09mveh1         1947 /* Afstand van stopstreep tot start verleng gebied RIS fase 09                                                                    */
    #define prmrisvstart11mveh1         1948 /* Afstand van stopstreep tot start verleng gebied RIS fase 11                                                                    */
    #define prmrisvstart21fts1          1949 /* Afstand van stopstreep tot start verleng gebied RIS fase 21                                                                    */
    #define prmrisvstart22fts1          1950 /* Afstand van stopstreep tot start verleng gebied RIS fase 22                                                                    */
    #define prmrisvstart24fts1          1951 /* Afstand van stopstreep tot start verleng gebied RIS fase 24                                                                    */
    #define prmrisvstart26fts1          1952 /* Afstand van stopstreep tot start verleng gebied RIS fase 26                                                                    */
    #define prmrisvstart28fts1          1953 /* Afstand van stopstreep tot start verleng gebied RIS fase 28                                                                    */
    #define prmrisvstart31vtg1          1954 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart31vtg2          1955 /* Afstand van stopstreep tot start verleng gebied RIS fase 31                                                                    */
    #define prmrisvstart32vtg1          1956 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart32vtg2          1957 /* Afstand van stopstreep tot start verleng gebied RIS fase 32                                                                    */
    #define prmrisvstart33vtg1          1958 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart33vtg2          1959 /* Afstand van stopstreep tot start verleng gebied RIS fase 33                                                                    */
    #define prmrisvstart34vtg1          1960 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart34vtg2          1961 /* Afstand van stopstreep tot start verleng gebied RIS fase 34                                                                    */
    #define prmrisvstart38vtg1          1962 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart38vtg2          1963 /* Afstand van stopstreep tot start verleng gebied RIS fase 38                                                                    */
    #define prmrisvstart61mveh1         1964 /* Afstand van stopstreep tot start verleng gebied RIS fase 61                                                                    */
    #define prmrisvstart62mveh1         1965 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart62mveh2         1966 /* Afstand van stopstreep tot start verleng gebied RIS fase 62                                                                    */
    #define prmrisvstart67mveh1         1967 /* Afstand van stopstreep tot start verleng gebied RIS fase 67                                                                    */
    #define prmrisvstart68mveh1         1968 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart68mveh2         1969 /* Afstand van stopstreep tot start verleng gebied RIS fase 68                                                                    */
    #define prmrisvstart81fts1          1970 /* Afstand van stopstreep tot start verleng gebied RIS fase 81                                                                    */
    #define prmrisvstart82fts1          1971 /* Afstand van stopstreep tot start verleng gebied RIS fase 82                                                                    */
    #define prmrisvstart84fts1          1972 /* Afstand van stopstreep tot start verleng gebied RIS fase 84                                                                    */
    #define prmrisvend02mveh1           1973 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend02mveh2           1974 /* Afstand van stopstreep tot einde verleng gebied RIS fase 02                                                                    */
    #define prmrisvend03mveh1           1975 /* Afstand van stopstreep tot einde verleng gebied RIS fase 03                                                                    */
    #define prmrisvend05mveh1           1976 /* Afstand van stopstreep tot einde verleng gebied RIS fase 05                                                                    */
    #define prmrisvend08mveh1           1977 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend08mveh2           1978 /* Afstand van stopstreep tot einde verleng gebied RIS fase 08                                                                    */
    #define prmrisvend09mveh1           1979 /* Afstand van stopstreep tot einde verleng gebied RIS fase 09                                                                    */
    #define prmrisvend11mveh1           1980 /* Afstand van stopstreep tot einde verleng gebied RIS fase 11                                                                    */
    #define prmrisvend21fts1            1981 /* Afstand van stopstreep tot einde verleng gebied RIS fase 21                                                                    */
    #define prmrisvend22fts1            1982 /* Afstand van stopstreep tot einde verleng gebied RIS fase 22                                                                    */
    #define prmrisvend24fts1            1983 /* Afstand van stopstreep tot einde verleng gebied RIS fase 24                                                                    */
    #define prmrisvend26fts1            1984 /* Afstand van stopstreep tot einde verleng gebied RIS fase 26                                                                    */
    #define prmrisvend28fts1            1985 /* Afstand van stopstreep tot einde verleng gebied RIS fase 28                                                                    */
    #define prmrisvend31vtg1            1986 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend31vtg2            1987 /* Afstand van stopstreep tot einde verleng gebied RIS fase 31                                                                    */
    #define prmrisvend32vtg1            1988 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend32vtg2            1989 /* Afstand van stopstreep tot einde verleng gebied RIS fase 32                                                                    */
    #define prmrisvend33vtg1            1990 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend33vtg2            1991 /* Afstand van stopstreep tot einde verleng gebied RIS fase 33                                                                    */
    #define prmrisvend34vtg1            1992 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend34vtg2            1993 /* Afstand van stopstreep tot einde verleng gebied RIS fase 34                                                                    */
    #define prmrisvend38vtg1            1994 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend38vtg2            1995 /* Afstand van stopstreep tot einde verleng gebied RIS fase 38                                                                    */
    #define prmrisvend61mveh1           1996 /* Afstand van stopstreep tot einde verleng gebied RIS fase 61                                                                    */
    #define prmrisvend62mveh1           1997 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend62mveh2           1998 /* Afstand van stopstreep tot einde verleng gebied RIS fase 62                                                                    */
    #define prmrisvend67mveh1           1999 /* Afstand van stopstreep tot einde verleng gebied RIS fase 67                                                                    */
    #define prmrisvend68mveh1           2000 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend68mveh2           2001 /* Afstand van stopstreep tot einde verleng gebied RIS fase 68                                                                    */
    #define prmrisvend81fts1            2002 /* Afstand van stopstreep tot einde verleng gebied RIS fase 81                                                                    */
    #define prmrisvend82fts1            2003 /* Afstand van stopstreep tot einde verleng gebied RIS fase 82                                                                    */
    #define prmrisvend84fts1            2004 /* Afstand van stopstreep tot einde verleng gebied RIS fase 84                                                                    */
    #define prmmkrgd24_3                2005 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2006 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2007 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2008 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2009 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2010 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2011 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2012 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2013 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2014 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2015 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2016 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2017 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2018 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2019 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2020 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09                2021 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09                2022 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11                2023 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2024 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2025 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2026 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2027 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2028 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                2029 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                2030 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvgvlog               2031 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               2032 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  2033 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  2034 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  2035 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  2036 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  2037 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  2038 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  2039 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  2040 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  2041 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  2042 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  2043 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  2044 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  2045 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  2046 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  2047 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  2048 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  2049 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  2050 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  2051 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  2052 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  2053 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  2054 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  2055 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   2056 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   2057 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   2058 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   2059 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   2060 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   2061 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   2062 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   2063 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   2064 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   2065 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   2066 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   2067 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   2068 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   2069 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   2070 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 2071 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   2072 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434                 2073 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26                   2074 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   2075 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   2076 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   2077 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   2078 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   2079 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   2080 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   2081 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 2082 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   2083 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38                   2084 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   2085 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   2086 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   2087 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   2088 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   2089 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   2090 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   2091 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   2092 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   2093 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   2094 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   2095 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   2096 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   2097 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   2098 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmstarprogdef              2099 /* Default star programma                                                                                                         */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              2100 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               2101 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               2102 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     2103
#else
    #define PRMMAX1                     2100
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
    #define prioFC61bus 19
    #define prioFC61risov 20
    #define prioFC61risvrw 21
    #define prioFC62bus 22
    #define prioFC62risov 23
    #define prioFC62risvrw 24
    #define prioFC67bus 25
    #define prioFC67risov 26
    #define prioFC67risvrw 27
    #define prioFC68bus 28
    #define prioFC68risov 29
    #define prioFC68risvrw 30
    #define hdFC02 31
    #define hdFC03 32
    #define hdFC05 33
    #define hdFC08 34
    #define hdFC09 35
    #define hdFC11 36
    #define hdFC61 37
    #define hdFC62 38
    #define hdFC67 39
    #define hdFC68 40
    #define prioFCMAX 41

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

