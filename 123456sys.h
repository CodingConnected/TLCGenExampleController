/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   0.12.1.0
   CCOLGEN:   0.12.1.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.1.0   07-10-2022   TLCGen      Nieuwe versie TLCGen (release)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.1.0 20221007"
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
    #define ussegm1          (FCMAX +   0) /* Aansturing segmenten display                            */
    #define ussegm2          (FCMAX +   1) /* Aansturing segmenten display                            */
    #define ussegm3          (FCMAX +   2) /* Aansturing segmenten display                            */
    #define ussegm4          (FCMAX +   3) /* Aansturing segmenten display                            */
    #define ussegm5          (FCMAX +   4) /* Aansturing segmenten display                            */
    #define ussegm6          (FCMAX +   5) /* Aansturing segmenten display                            */
    #define ussegm7          (FCMAX +   6) /* Aansturing segmenten display                            */
    #define usML1            (FCMAX +   7) /* Verklikken actief zijn ML1                              */
    #define usML2            (FCMAX +   8) /* Verklikken actief zijn ML2                              */
    #define usML3            (FCMAX +   9) /* Verklikken actief zijn ML3                              */
    #define usML4            (FCMAX +  10) /* Verklikken actief zijn ML4                              */
    #define usML5            (FCMAX +  11) /* Verklikken actief zijn ML5                              */
    #define usincontrol      (FCMAX +  12) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt */
    #define usnocontrol      (FCMAX +  13) /* Verklikken of applicatie niet in staat is te regelen    */
    #define usFile68af       (FCMAX +  14) /* File ingreep File68af actief                            */
    #define usplact          (FCMAX +  15) /* Signaalplan regelen actief                              */
    #define uskpact          (FCMAX +  16) /* Koppeling signaalplan regelen actief                    */
    #define usmlact          (FCMAX +  17) /* Module regelen actief                                   */
    #define usmlpl           (FCMAX +  18) /* ML tijdens VA of PL tijdens halfstar bedrijf            */
    #define ustxtimer        (FCMAX +  19) /* TX_timer tijdens halfstar bedrijf                       */
    #define usklok           (FCMAX +  20) /* Programma door klok bepaald                             */
    #define ushand           (FCMAX +  21) /* Aansturing handmatig aangepast                          */
    #define usPL1            (FCMAX +  22) /* Plan PL1 actief                                         */
    #define usPL2            (FCMAX +  23) /* Plan PL2 actief                                         */
    #define usPL3            (FCMAX +  24) /* Plan PL3 actief                                         */
    #define usovtevroeg02bus (FCMAX +  25) /* Voorste OV voertuig bij 02 te vroeg Bus                 */
    #define usovoptijd02bus  (FCMAX +  26) /* Voorste OV voertuig bij 02 op tijd Bus                  */
    #define usovtelaat02bus  (FCMAX +  27) /* Voorste OV voertuig bij 02 te laat Bus                  */
    #define usovtevroeg03bus (FCMAX +  28) /* Voorste OV voertuig bij 03 te vroeg Bus                 */
    #define usovoptijd03bus  (FCMAX +  29) /* Voorste OV voertuig bij 03 op tijd Bus                  */
    #define usovtelaat03bus  (FCMAX +  30) /* Voorste OV voertuig bij 03 te laat Bus                  */
    #define usovtevroeg05bus (FCMAX +  31) /* Voorste OV voertuig bij 05 te vroeg Bus                 */
    #define usovoptijd05bus  (FCMAX +  32) /* Voorste OV voertuig bij 05 op tijd Bus                  */
    #define usovtelaat05bus  (FCMAX +  33) /* Voorste OV voertuig bij 05 te laat Bus                  */
    #define usovtevroeg08bus (FCMAX +  34) /* Voorste OV voertuig bij 08 te vroeg Bus                 */
    #define usovoptijd08bus  (FCMAX +  35) /* Voorste OV voertuig bij 08 op tijd Bus                  */
    #define usovtelaat08bus  (FCMAX +  36) /* Voorste OV voertuig bij 08 te laat Bus                  */
    #define usovtevroeg09bus (FCMAX +  37) /* Voorste OV voertuig bij 09 te vroeg Bus                 */
    #define usovoptijd09bus  (FCMAX +  38) /* Voorste OV voertuig bij 09 op tijd Bus                  */
    #define usovtelaat09bus  (FCMAX +  39) /* Voorste OV voertuig bij 09 te laat Bus                  */
    #define usovtevroeg11bus (FCMAX +  40) /* Voorste OV voertuig bij 11 te vroeg Bus                 */
    #define usovoptijd11bus  (FCMAX +  41) /* Voorste OV voertuig bij 11 op tijd Bus                  */
    #define usovtelaat11bus  (FCMAX +  42) /* Voorste OV voertuig bij 11 te laat Bus                  */
    #define usovtevroeg61bus (FCMAX +  43) /* Voorste OV voertuig bij 61 te vroeg Bus                 */
    #define usovoptijd61bus  (FCMAX +  44) /* Voorste OV voertuig bij 61 op tijd Bus                  */
    #define usovtelaat61bus  (FCMAX +  45) /* Voorste OV voertuig bij 61 te laat Bus                  */
    #define usovtevroeg62bus (FCMAX +  46) /* Voorste OV voertuig bij 62 te vroeg Bus                 */
    #define usovoptijd62bus  (FCMAX +  47) /* Voorste OV voertuig bij 62 op tijd Bus                  */
    #define usovtelaat62bus  (FCMAX +  48) /* Voorste OV voertuig bij 62 te laat Bus                  */
    #define usovtevroeg67bus (FCMAX +  49) /* Voorste OV voertuig bij 67 te vroeg Bus                 */
    #define usovoptijd67bus  (FCMAX +  50) /* Voorste OV voertuig bij 67 op tijd Bus                  */
    #define usovtelaat67bus  (FCMAX +  51) /* Voorste OV voertuig bij 67 te laat Bus                  */
    #define usovtevroeg68bus (FCMAX +  52) /* Voorste OV voertuig bij 68 te vroeg Bus                 */
    #define usovoptijd68bus  (FCMAX +  53) /* Voorste OV voertuig bij 68 op tijd Bus                  */
    #define usovtelaat68bus  (FCMAX +  54) /* Voorste OV voertuig bij 68 te laat Bus                  */
    #define usmaxwt          (FCMAX +  55) /* Verklikken maximale wachttijd overschreden              */
    #define uskarmelding     (FCMAX +  56) /* Verklikken ontvangst melding KAR                        */
    #define uskarog          (FCMAX +  57) /* Verklikken ondergedrag KAR                              */
    #define usovinm02bus     (FCMAX +  58) /* Verklikken inmelding OV fase 02                         */
    #define usovinm02risov   (FCMAX +  59) /* Verklikken inmelding OV fase 02                         */
    #define usovinm02risvrw  (FCMAX +  60) /* Verklikken inmelding OV fase 02                         */
    #define usovinm03bus     (FCMAX +  61) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risov   (FCMAX +  62) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risvrw  (FCMAX +  63) /* Verklikken inmelding OV fase 03                         */
    #define usovinm05bus     (FCMAX +  64) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risov   (FCMAX +  65) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risvrw  (FCMAX +  66) /* Verklikken inmelding OV fase 05                         */
    #define usovinm08bus     (FCMAX +  67) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risov   (FCMAX +  68) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risvrw  (FCMAX +  69) /* Verklikken inmelding OV fase 08                         */
    #define usovinm09bus     (FCMAX +  70) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risov   (FCMAX +  71) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risvrw  (FCMAX +  72) /* Verklikken inmelding OV fase 09                         */
    #define usovinm11bus     (FCMAX +  73) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risov   (FCMAX +  74) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risvrw  (FCMAX +  75) /* Verklikken inmelding OV fase 11                         */
    #define usovinm22fiets   (FCMAX +  76) /* Verklikken inmelding OV fase 22                         */
    #define usovinm28fiets   (FCMAX +  77) /* Verklikken inmelding OV fase 28                         */
    #define usovinm61bus     (FCMAX +  78) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risov   (FCMAX +  79) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risvrw  (FCMAX +  80) /* Verklikken inmelding OV fase 61                         */
    #define usovinm62bus     (FCMAX +  81) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risov   (FCMAX +  82) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risvrw  (FCMAX +  83) /* Verklikken inmelding OV fase 62                         */
    #define usovinm67bus     (FCMAX +  84) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risov   (FCMAX +  85) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risvrw  (FCMAX +  86) /* Verklikken inmelding OV fase 67                         */
    #define usovinm68bus     (FCMAX +  87) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risov   (FCMAX +  88) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risvrw  (FCMAX +  89) /* Verklikken inmelding OV fase 68                         */
    #define ushdinm02        (FCMAX +  90) /* Verklikken inmelding HD fase 02                         */
    #define ushdinm03        (FCMAX +  91) /* Verklikken inmelding HD fase 03                         */
    #define ushdinm05        (FCMAX +  92) /* Verklikken inmelding HD fase 05                         */
    #define ushdinm08        (FCMAX +  93) /* Verklikken inmelding HD fase 08                         */
    #define ushdinm09        (FCMAX +  94) /* Verklikken inmelding HD fase 09                         */
    #define ushdinm11        (FCMAX +  95) /* Verklikken inmelding HD fase 11                         */
    #define ushdinm61        (FCMAX +  96) /* Verklikken inmelding HD fase 61                         */
    #define ushdinm62        (FCMAX +  97) /* Verklikken inmelding HD fase 62                         */
    #define ushdinm67        (FCMAX +  98) /* Verklikken inmelding HD fase 67                         */
    #define ushdinm68        (FCMAX +  99) /* Verklikken inmelding HD fase 68                         */
    #define usperdef         (FCMAX + 100) /* Default periode actief                                  */
    #define usper1           (FCMAX + 101) /* Periode Reserve actief                                  */
    #define usperoFietsprio1 (FCMAX + 102) /* Periode actief                                          */
    #define usperoFietsprio2 (FCMAX + 103) /* Periode actief                                          */
    #define usperoFietsprio3 (FCMAX + 104) /* Periode actief                                          */
    #define usperStar02      (FCMAX + 105) /* Periode actief                                          */
    #define usperStar01      (FCMAX + 106) /* Periode actief                                          */
    #define usper2           (FCMAX + 107) /* Periode Dag periode actief                              */
    #define usper3           (FCMAX + 108) /* Periode Ochtendspits actief                             */
    #define usper4           (FCMAX + 109) /* Periode Avondspits actief                               */
    #define usper5           (FCMAX + 110) /* Periode Koopavond actief                                */
    #define usper6           (FCMAX + 111) /* Periode Weekend actief                                  */
    #define usper7           (FCMAX + 112) /* Periode Reserve actief                                  */
    #define usrgv            (FCMAX + 113) /* Verklikken actief zijn RoBuGrover                       */
    #define uswtk21          (FCMAX + 114) /* Aansturing waitsignaal detector k21                     */
    #define uswtk22          (FCMAX + 115) /* Aansturing waitsignaal detector k22                     */
    #define uswtk24          (FCMAX + 116) /* Aansturing waitsignaal detector k24                     */
    #define uswtk26          (FCMAX + 117) /* Aansturing waitsignaal detector k26                     */
    #define uswtk28          (FCMAX + 118) /* Aansturing waitsignaal detector k28                     */
    #define uswtk31a         (FCMAX + 119) /* Aansturing waitsignaal detector k31a                    */
    #define uswtk31b         (FCMAX + 120) /* Aansturing waitsignaal detector k31b                    */
    #define uswtk32a         (FCMAX + 121) /* Aansturing waitsignaal detector k32a                    */
    #define uswtk32b         (FCMAX + 122) /* Aansturing waitsignaal detector k32b                    */
    #define uswtk33a         (FCMAX + 123) /* Aansturing waitsignaal detector k33a                    */
    #define uswtk33b         (FCMAX + 124) /* Aansturing waitsignaal detector k33b                    */
    #define uswtk34a         (FCMAX + 125) /* Aansturing waitsignaal detector k34a                    */
    #define uswtk34b         (FCMAX + 126) /* Aansturing waitsignaal detector k34b                    */
    #define uswtk38a         (FCMAX + 127) /* Aansturing waitsignaal detector k38a                    */
    #define uswtk38b         (FCMAX + 128) /* Aansturing waitsignaal detector k38b                    */
    #define uswtk81          (FCMAX + 129) /* Aansturing waitsignaal detector k81                     */
    #define uswtk82          (FCMAX + 130) /* Aansturing waitsignaal detector k82                     */
    #define uswtk84          (FCMAX + 131) /* Aansturing waitsignaal detector k84                     */
    #define usstarprogwissel (FCMAX + 132) /* Verklikken actief zijn wisselen naar star programma     */
    #define usstar01         (FCMAX + 133) /* Star programma star01 actief                            */
    #define usstar02         (FCMAX + 134) /* Star programma star02 actief                            */
    #define USMAX1           (FCMAX + 135)

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
    #define dopt02            70
    #define dopt05            71
    #define dopt08            72
    #define dopt11            73
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define ddummykarin02bus  74
    #define ddummykarin03bus  75
    #define ddummykarin05bus  76
    #define ddummykarin08bus  77
    #define ddummykarin09bus  78
    #define ddummykarin11bus  79
    #define ddummykarin61bus  80
    #define ddummykarin62bus  81
    #define ddummykarin67bus  82
    #define ddummykarin68bus  83
    #define ddummykaruit02bus 84
    #define ddummykaruit03bus 85
    #define ddummykaruit05bus 86
    #define ddummykaruit08bus 87
    #define ddummykaruit09bus 88
    #define ddummykaruit11bus 89
    #define ddummykaruit61bus 90
    #define ddummykaruit62bus 91
    #define ddummykaruit67bus 92
    #define ddummykaruit68bus 93
    #define ddummyhdkarin02   94
    #define ddummyhdkaruit02  95
    #define ddummyhdkarin03   96
    #define ddummyhdkaruit03  97
    #define ddummyhdkarin05   98
    #define ddummyhdkaruit05  99
    #define ddummyhdkarin08   100
    #define ddummyhdkaruit08  101
    #define ddummyhdkarin09   102
    #define ddummyhdkaruit09  103
    #define ddummyhdkarin11   104
    #define ddummyhdkaruit11  105
    #define ddummyhdkarin61   106
    #define ddummyhdkaruit61  107
    #define ddummyhdkarin62   108
    #define ddummyhdkaruit62  109
    #define ddummyhdkarin67   110
    #define ddummyhdkaruit67  111
    #define ddummyhdkarin68   112
    #define ddummyhdkaruit68  113
    #define DPMAX1            114 /* aantal detectoren testomgeving */
#else
    #define DPMAX1            74 /* aantal detectoren automaat omgeving */
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
    #define isris222cyclist    (DPMAX + 36)
    #define isris241cyclist    (DPMAX + 37)
    #define isris261cyclist    (DPMAX + 38)
    #define isris281cyclist    (DPMAX + 39)
    #define isris311pedestrian (DPMAX + 40)
    #define isris312pedestrian (DPMAX + 41)
    #define isris321pedestrian (DPMAX + 42)
    #define isris322pedestrian (DPMAX + 43)
    #define isris331pedestrian (DPMAX + 44)
    #define isris332pedestrian (DPMAX + 45)
    #define isris341pedestrian (DPMAX + 46)
    #define isris342pedestrian (DPMAX + 47)
    #define isris381pedestrian (DPMAX + 48)
    #define isris382pedestrian (DPMAX + 49)
    #define isris611car        (DPMAX + 50)
    #define isris611bus        (DPMAX + 51)
    #define isris611special    (DPMAX + 52)
    #define isris611heavytruck (DPMAX + 53)
    #define isris621car        (DPMAX + 54)
    #define isris621bus        (DPMAX + 55)
    #define isris621special    (DPMAX + 56)
    #define isris621heavytruck (DPMAX + 57)
    #define isris622car        (DPMAX + 58)
    #define isris622bus        (DPMAX + 59)
    #define isris622special    (DPMAX + 60)
    #define isris622heavytruck (DPMAX + 61)
    #define isris671car        (DPMAX + 62)
    #define isris671bus        (DPMAX + 63)
    #define isris671special    (DPMAX + 64)
    #define isris671heavytruck (DPMAX + 65)
    #define isris681car        (DPMAX + 66)
    #define isris681bus        (DPMAX + 67)
    #define isris681special    (DPMAX + 68)
    #define isris681heavytruck (DPMAX + 69)
    #define isris682car        (DPMAX + 70)
    #define isris682bus        (DPMAX + 71)
    #define isris682special    (DPMAX + 72)
    #define isris682heavytruck (DPMAX + 73)
    #define isris811cyclist    (DPMAX + 74)
    #define isris821cyclist    (DPMAX + 75)
    #define isris841cyclist    (DPMAX + 76)
    #define ISMAX1             (DPMAX + 77)
#else
    #define ISMAX1             (DPMAX +  2)
#endif

/* hulp elementen */
/* -------------- */
    #define hopdrempelen08            0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08           1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a            2 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b            3 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a            4 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b            5 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a            6 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b            7 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a            8 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b            9 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09           10 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09          11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1            12 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_3            13 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hverleng_09_2            14 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hopdrempelen11           15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11          16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1            17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2            18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3            19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4            20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
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
    #define hnla02_1a                45 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b                46 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a                47 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b                48 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1                 49 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 50 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 51 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 52 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 53 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 54 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 55 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus                56 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus                57 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                58 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                59 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                60 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                61 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                62 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                63 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                64 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                65 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus               66 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus             67 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus            68 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar          69 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar         70 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             71 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           72 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov          73 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris        74 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris       75 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw            76 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          77 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         78 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       79 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      80 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus               81 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             82 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            83 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          84 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         85 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             86 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           87 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          88 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        89 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       90 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            91 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          92 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         93 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       94 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      95 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus               96 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus             97 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus            98 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar          99 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar        100 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov            101 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov          102 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov         103 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris       104 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris      105 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw           106 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw         107 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw        108 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris      109 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris     110 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus              111 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus            112 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus           113 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar         114 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        115 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            116 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          117 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         118 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       119 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      120 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           121 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         122 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        123 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      124 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     125 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              126 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            127 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           128 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         129 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        130 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            131 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          132 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         133 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       134 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      135 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           136 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         137 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        138 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      139 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     140 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              141 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            142 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           143 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         144 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        145 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            146 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          147 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         148 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       149 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      150 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           151 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         152 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        153 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      154 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     155 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            156 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          157 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         158 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets22_1 159 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    160 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            161 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          162 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         163 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 164 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    165 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61bus              166 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus            167 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus           168 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar         169 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar        170 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov            171 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov          172 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov         173 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris       174 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris      175 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw           176 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw         177 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw        178 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris      179 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris     180 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus              181 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus            182 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus           183 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar         184 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar        185 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov            186 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov          187 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov         188 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris       189 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris      190 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw           191 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw         192 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw        193 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris      194 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris     195 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus              196 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus            197 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus           198 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar         199 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar        200 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov            201 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov          202 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov         203 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris       204 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris      205 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw           206 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw         207 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw        208 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris      209 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris     210 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus              211 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus            212 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus           213 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar         214 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar        215 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov            216 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov          217 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov         218 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris       219 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris      220 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw           221 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw         222 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw        223 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris      224 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris     225 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                   226 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                 227 /* HD inmelding 02                                                    */
    #define hhduit02                228 /* HD uitmelding 02                                                   */
    #define hhdin02kar              229 /* HD inmelding 02                                                    */
    #define hhduit02kar             230 /* HD uitmelding 02                                                   */
    #define hhdin02ris              231 /* HD inmelding 02                                                    */
    #define hhduit02ris             232 /* HD uitmelding 02                                                   */
    #define hhd03                   233 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                 234 /* HD inmelding 03                                                    */
    #define hhduit03                235 /* HD uitmelding 03                                                   */
    #define hhdin03kar              236 /* HD inmelding 03                                                    */
    #define hhduit03kar             237 /* HD uitmelding 03                                                   */
    #define hhdin03ris              238 /* HD inmelding 03                                                    */
    #define hhduit03ris             239 /* HD uitmelding 03                                                   */
    #define hhd05                   240 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                 241 /* HD inmelding 05                                                    */
    #define hhduit05                242 /* HD uitmelding 05                                                   */
    #define hhdin05kar              243 /* HD inmelding 05                                                    */
    #define hhduit05kar             244 /* HD uitmelding 05                                                   */
    #define hhdin05ris              245 /* HD inmelding 05                                                    */
    #define hhduit05ris             246 /* HD uitmelding 05                                                   */
    #define hhd08                   247 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                 248 /* HD inmelding 08                                                    */
    #define hhduit08                249 /* HD uitmelding 08                                                   */
    #define hhdin08kar              250 /* HD inmelding 08                                                    */
    #define hhduit08kar             251 /* HD uitmelding 08                                                   */
    #define hhdin08ris              252 /* HD inmelding 08                                                    */
    #define hhduit08ris             253 /* HD uitmelding 08                                                   */
    #define hhd09                   254 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                 255 /* HD inmelding 09                                                    */
    #define hhduit09                256 /* HD uitmelding 09                                                   */
    #define hhdin09kar              257 /* HD inmelding 09                                                    */
    #define hhduit09kar             258 /* HD uitmelding 09                                                   */
    #define hhdin09ris              259 /* HD inmelding 09                                                    */
    #define hhduit09ris             260 /* HD uitmelding 09                                                   */
    #define hhd11                   261 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                 262 /* HD inmelding 11                                                    */
    #define hhduit11                263 /* HD uitmelding 11                                                   */
    #define hhdin11kar              264 /* HD inmelding 11                                                    */
    #define hhduit11kar             265 /* HD uitmelding 11                                                   */
    #define hhdin11ris              266 /* HD inmelding 11                                                    */
    #define hhduit11ris             267 /* HD uitmelding 11                                                   */
    #define hhd61                   268 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                 269 /* HD inmelding 61                                                    */
    #define hhduit61                270 /* HD uitmelding 61                                                   */
    #define hhdin61kar              271 /* HD inmelding 61                                                    */
    #define hhduit61kar             272 /* HD uitmelding 61                                                   */
    #define hhdin61ris              273 /* HD inmelding 61                                                    */
    #define hhduit61ris             274 /* HD uitmelding 61                                                   */
    #define hhd62                   275 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                 276 /* HD inmelding 62                                                    */
    #define hhduit62                277 /* HD uitmelding 62                                                   */
    #define hhdin62kar              278 /* HD inmelding 62                                                    */
    #define hhduit62kar             279 /* HD uitmelding 62                                                   */
    #define hhdin62ris              280 /* HD inmelding 62                                                    */
    #define hhduit62ris             281 /* HD uitmelding 62                                                   */
    #define hhd67                   282 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                 283 /* HD inmelding 67                                                    */
    #define hhduit67                284 /* HD uitmelding 67                                                   */
    #define hhdin67kar              285 /* HD inmelding 67                                                    */
    #define hhduit67kar             286 /* HD uitmelding 67                                                   */
    #define hhdin67ris              287 /* HD inmelding 67                                                    */
    #define hhduit67ris             288 /* HD uitmelding 67                                                   */
    #define hhd68                   289 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                 290 /* HD inmelding 68                                                    */
    #define hhduit68                291 /* HD uitmelding 68                                                   */
    #define hhdin68kar              292 /* HD inmelding 68                                                    */
    #define hhduit68kar             293 /* HD uitmelding 68                                                   */
    #define hhdin68ris              294 /* HD inmelding 68                                                    */
    #define hhduit68ris             295 /* HD uitmelding 68                                                   */
    #define hperiodFietsprio1       296 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       297 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3       298 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2         299 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 300 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               301 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               302 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               303 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               304 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11               305 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               306 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               307 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68               308 /* Bijhouden primaire realisatie fase 68                              */
    #define hschoolingreepdk33a     309 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     310 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     311 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     312 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr33               313 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               314 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262               315
    #define hnleg0868               316
    #define hnleg1168               317
    #define hnleg2221               318
    #define hnlsg3132               319
    #define hnlsg3231               320
    #define hnlsg3334               321
    #define hnlsg3433               322
    #define hnleg8281               323
    #define hinl32                  324 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  325 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  326 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  327 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  328 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  329 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  330 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  331 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  332 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  333 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  334 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  335 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  336

/* geheugen elementen */
/* ------------------ */
    #define mperiod                  0 /* Onthouden actieve periode                                    */
    #define mmk03                    1 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    #define mmk05                    2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    #define mmk08                    3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    #define mmk09                    4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    #define mmk11                    5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    #define mmk61                    6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    #define mmk62                    7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    #define mmk67                    8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    #define mmk68                    9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    #define mleven                  10 /* Bijhouden actief zijn levensignaal                           */
    #define mklok                   11 /* Halfstar of VA obv klokperioden                              */
    #define mhand                   12 /* Halstar of VA handmatig bepaald                              */
    #define mstp02bus               13 /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    #define mstp03bus               14 /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    #define mstp05bus               15 /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    #define mstp08bus               16 /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    #define mstp09bus               17 /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    #define mstp11bus               18 /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    #define mstp61bus               19 /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    #define mstp62bus               20 /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    #define mstp67bus               21 /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    #define mstp68bus               22 /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    #define mftstelris22fietsfiets  23 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets           */
    #define mftstelris28fietsfiets  24 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets           */
    #define mperiodstar             25 /* Onthouden actieve periode star regelen                       */
    #define mstarprog               26 /* Onthouden actief star programma                              */
    #define mstarprogwens           27 /* Onthouden gewenst star programma                             */
    #define mstarprogwissel         28 /* Onthouden actief zijn wisselen naar star programma           */
    #define mrealtijd02             29 /* Realisatie tijd fase 02                                      */
    #define mrealtijd03             30 /* Realisatie tijd fase 03                                      */
    #define mrealtijd05             31 /* Realisatie tijd fase 05                                      */
    #define mrealtijd08             32 /* Realisatie tijd fase 08                                      */
    #define mrealtijd09             33 /* Realisatie tijd fase 09                                      */
    #define mrealtijd11             34 /* Realisatie tijd fase 11                                      */
    #define mrealtijd21             35 /* Realisatie tijd fase 21                                      */
    #define mrealtijd22             36 /* Realisatie tijd fase 22                                      */
    #define mrealtijd24             37 /* Realisatie tijd fase 24                                      */
    #define mrealtijd26             38 /* Realisatie tijd fase 26                                      */
    #define mrealtijd28             39 /* Realisatie tijd fase 28                                      */
    #define mrealtijd31             40 /* Realisatie tijd fase 31                                      */
    #define mrealtijd32             41 /* Realisatie tijd fase 32                                      */
    #define mrealtijd33             42 /* Realisatie tijd fase 33                                      */
    #define mrealtijd34             43 /* Realisatie tijd fase 34                                      */
    #define mrealtijd38             44 /* Realisatie tijd fase 38                                      */
    #define mrealtijd61             45 /* Realisatie tijd fase 61                                      */
    #define mrealtijd62             46 /* Realisatie tijd fase 62                                      */
    #define mrealtijd67             47 /* Realisatie tijd fase 67                                      */
    #define mrealtijd68             48 /* Realisatie tijd fase 68                                      */
    #define mrealtijd81             49 /* Realisatie tijd fase 81                                      */
    #define mrealtijd82             50 /* Realisatie tijd fase 82                                      */
    #define mrealtijd84             51 /* Realisatie tijd fase 84                                      */
    #define mrealtijdmin02          52 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03          53 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05          54 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08          55 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09          56 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11          57 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21          58 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22          59 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24          60 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26          61 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28          62 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31          63 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32          64 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33          65 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34          66 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38          67 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61          68 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62          69 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67          70 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68          71 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin81          72 /* Realisatie minimum tijd fase 81                              */
    #define mrealtijdmin82          73 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin84          74 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02          75 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03          76 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05          77 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08          78 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09          79 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11          80 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21          81 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22          82 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24          83 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26          84 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28          85 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31          86 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32          87 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33          88 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34          89 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38          90 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61          91 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62          92 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67          93 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68          94 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax81          95 /* Realisatie maximum tijd fase 81                              */
    #define mrealtijdmax82          96 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax84          97 /* Realisatie maximum tijd fase 84                              */
    #define mar02                   98 /* Alternatieve ruimte fase 02                                  */
    #define mar03                   99 /* Alternatieve ruimte fase 03                                  */
    #define mar05                  100 /* Alternatieve ruimte fase 05                                  */
    #define mar08                  101 /* Alternatieve ruimte fase 08                                  */
    #define mar09                  102 /* Alternatieve ruimte fase 09                                  */
    #define mar11                  103 /* Alternatieve ruimte fase 11                                  */
    #define mar21                  104 /* Alternatieve ruimte fase 21                                  */
    #define mar22                  105 /* Alternatieve ruimte fase 22                                  */
    #define mar24                  106 /* Alternatieve ruimte fase 24                                  */
    #define mar26                  107 /* Alternatieve ruimte fase 26                                  */
    #define mar28                  108 /* Alternatieve ruimte fase 28                                  */
    #define mar31                  109 /* Alternatieve ruimte fase 31                                  */
    #define mar32                  110 /* Alternatieve ruimte fase 32                                  */
    #define mar33                  111 /* Alternatieve ruimte fase 33                                  */
    #define mar34                  112 /* Alternatieve ruimte fase 34                                  */
    #define mar38                  113 /* Alternatieve ruimte fase 38                                  */
    #define mar61                  114 /* Alternatieve ruimte fase 61                                  */
    #define mar62                  115 /* Alternatieve ruimte fase 62                                  */
    #define mar67                  116 /* Alternatieve ruimte fase 67                                  */
    #define mar68                  117 /* Alternatieve ruimte fase 68                                  */
    #define mar81                  118 /* Alternatieve ruimte fase 81                                  */
    #define mar82                  119 /* Alternatieve ruimte fase 82                                  */
    #define mar84                  120 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1                 121

/* tijd elementen */
/* -------------- */
    #define t08_1a_1                     0 /* Dynamische hiaattijden moment 1 voor detector 08_1a                                      */
    #define t08_1a_2                     1 /* Dynamische hiaattijden moment 2 voor detector 08_1a                                      */
    #define ttdh_08_1a_1                 2 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                                         */
    #define ttdh_08_1a_2                 3 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                                         */
    #define tmax_08_1a                   4 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a                               */
    #define t08_1b_1                     5 /* Dynamische hiaattijden moment 1 voor detector 08_1b                                      */
    #define t08_1b_2                     6 /* Dynamische hiaattijden moment 2 voor detector 08_1b                                      */
    #define ttdh_08_1b_1                 7 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                                         */
    #define ttdh_08_1b_2                 8 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                                         */
    #define tmax_08_1b                   9 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b                               */
    #define t08_2a_1                    10 /* Dynamische hiaattijden moment 1 voor detector 08_2a                                      */
    #define t08_2a_2                    11 /* Dynamische hiaattijden moment 2 voor detector 08_2a                                      */
    #define ttdh_08_2a_1                12 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                                         */
    #define ttdh_08_2a_2                13 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                                         */
    #define tmax_08_2a                  14 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a                               */
    #define t08_2b_1                    15 /* Dynamische hiaattijden moment 1 voor detector 08_2b                                      */
    #define t08_2b_2                    16 /* Dynamische hiaattijden moment 2 voor detector 08_2b                                      */
    #define ttdh_08_2b_1                17 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                                         */
    #define ttdh_08_2b_2                18 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                                         */
    #define tmax_08_2b                  19 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b                               */
    #define t08_3a_1                    20 /* Dynamische hiaattijden moment 1 voor detector 08_3a                                      */
    #define t08_3a_2                    21 /* Dynamische hiaattijden moment 2 voor detector 08_3a                                      */
    #define ttdh_08_3a_1                22 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                                         */
    #define ttdh_08_3a_2                23 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                                         */
    #define tmax_08_3a                  24 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a                               */
    #define t08_3b_1                    25 /* Dynamische hiaattijden moment 1 voor detector 08_3b                                      */
    #define t08_3b_2                    26 /* Dynamische hiaattijden moment 2 voor detector 08_3b                                      */
    #define ttdh_08_3b_1                27 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                                         */
    #define ttdh_08_3b_2                28 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                                         */
    #define tmax_08_3b                  29 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b                               */
    #define t08_4a_1                    30 /* Dynamische hiaattijden moment 1 voor detector 08_4a                                      */
    #define t08_4a_2                    31 /* Dynamische hiaattijden moment 2 voor detector 08_4a                                      */
    #define ttdh_08_4a_1                32 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                                         */
    #define ttdh_08_4a_2                33 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                                         */
    #define tmax_08_4a                  34 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a                               */
    #define t08_4b_1                    35 /* Dynamische hiaattijden moment 1 voor detector 08_4b                                      */
    #define t08_4b_2                    36 /* Dynamische hiaattijden moment 2 voor detector 08_4b                                      */
    #define ttdh_08_4b_1                37 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                                         */
    #define ttdh_08_4b_2                38 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                                         */
    #define tmax_08_4b                  39 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b                               */
    #define t09_1_1                     40 /* Dynamische hiaattijden moment 1 voor detector 09_1                                       */
    #define t09_1_2                     41 /* Dynamische hiaattijden moment 2 voor detector 09_1                                       */
    #define ttdh_09_1_1                 42 /* Dynamische hiaattijden TDH 1 voor detector 09_1                                          */
    #define ttdh_09_1_2                 43 /* Dynamische hiaattijden TDH 2 voor detector 09_1                                          */
    #define tmax_09_1                   44 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                                */
    #define t09_3_1                     45 /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    #define t09_3_2                     46 /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    #define ttdh_09_3_1                 47 /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    #define ttdh_09_3_2                 48 /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    #define tmax_09_3                   49 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
    #define t09_2_1                     50 /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    #define t09_2_2                     51 /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    #define ttdh_09_2_1                 52 /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    #define ttdh_09_2_2                 53 /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    #define tmax_09_2                   54 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    #define t11_1_1                     55 /* Dynamische hiaattijden moment 1 voor detector 11_1                                       */
    #define t11_1_2                     56 /* Dynamische hiaattijden moment 2 voor detector 11_1                                       */
    #define ttdh_11_1_1                 57 /* Dynamische hiaattijden TDH 1 voor detector 11_1                                          */
    #define ttdh_11_1_2                 58 /* Dynamische hiaattijden TDH 2 voor detector 11_1                                          */
    #define tmax_11_1                   59 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                                */
    #define t11_2_1                     60 /* Dynamische hiaattijden moment 1 voor detector 11_2                                       */
    #define t11_2_2                     61 /* Dynamische hiaattijden moment 2 voor detector 11_2                                       */
    #define ttdh_11_2_1                 62 /* Dynamische hiaattijden TDH 1 voor detector 11_2                                          */
    #define ttdh_11_2_2                 63 /* Dynamische hiaattijden TDH 2 voor detector 11_2                                          */
    #define tmax_11_2                   64 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                                */
    #define t11_3_1                     65 /* Dynamische hiaattijden moment 1 voor detector 11_3                                       */
    #define t11_3_2                     66 /* Dynamische hiaattijden moment 2 voor detector 11_3                                       */
    #define ttdh_11_3_1                 67 /* Dynamische hiaattijden TDH 1 voor detector 11_3                                          */
    #define ttdh_11_3_2                 68 /* Dynamische hiaattijden TDH 2 voor detector 11_3                                          */
    #define tmax_11_3                   69 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                                */
    #define t11_4_1                     70 /* Dynamische hiaattijden moment 1 voor detector 11_4                                       */
    #define t11_4_2                     71 /* Dynamische hiaattijden moment 2 voor detector 11_4                                       */
    #define ttdh_11_4_1                 72 /* Dynamische hiaattijden TDH 1 voor detector 11_4                                          */
    #define ttdh_11_4_2                 73 /* Dynamische hiaattijden TDH 2 voor detector 11_4                                          */
    #define tmax_11_4                   74 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                                */
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
    #define thdvd02_1a                  94 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a                               */
    #define thdvd02_1b                  95 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b                               */
    #define tdstvert02                  96 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                      */
    #define thdvd03_1                   97 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    #define tdstvert03                  98 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    #define thdvd05_1                   99 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    #define tdstvert05                 100 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    #define thdvd08_1a                 101 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    #define thdvd08_1b                 102 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    #define tdstvert08                 103 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    #define thdvd09_1                  104 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    #define tdstvert09                 105 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    #define thdvd11_1                  106 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    #define tdstvert11                 107 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    #define tdstvert21                 108 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    #define thdvd22_1                  109 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    #define tdstvert22                 110 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    #define thdvd24_1                  111 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    #define tdstvert24                 112 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    #define tdstvert26                 113 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    #define thdvd28_1                  114 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    #define tdstvert28                 115 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    #define tdstvert31                 116 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    #define tdstvert32                 117 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    #define tdstvert33                 118 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    #define tdstvert34                 119 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    #define tdstvert38                 120 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    #define thdvd61_1                  121 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    #define tdstvert61                 122 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    #define thdvd62_1a                 123 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    #define thdvd62_1b                 124 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    #define tdstvert62                 125 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    #define thdvd67_1                  126 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    #define tdstvert67                 127 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    #define thdvd68_1a                 128 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    #define thdvd68_1b                 129 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    #define tdstvert68                 130 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    #define tdstvert81                 131 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    #define tdstvert82                 132 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    #define thdvd84_1                  133 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84                 134 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tafvFile68af               135 /* Afval vertraging file File68af                                                           */
    #define tafv68_9a                  136 /* Afval vertraging file 68_9a                                                              */
    #define tbz68_9a                   137 /* Bezettijd file detector 68_9a                                                            */
    #define trij68_9a                  138 /* Rijtijd file detector 68_9a                                                              */
    #define tafv68_9b                  139 /* Afval vertraging file 68_9b                                                              */
    #define tbz68_9b                   140 /* Bezettijd file detector 68_9b                                                            */
    #define trij68_9b                  141 /* Rijtijd file detector 68_9b                                                              */
    #define tafkmingroen08fileFile68af 142 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                    */
    #define tafkmingroen11fileFile68af 143 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                    */
    #define tminrood08fileFile68af     144 /* Minimale roodtijd bij fase 08 voor file ingreep                                          */
    #define tminrood11fileFile68af     145 /* Minimale roodtijd bij fase 11 voor file ingreep                                          */
    #define tmaxgroen08fileFile68af    146 /* Maximale groentijd bij fase 08 voor file ingreep                                         */
    #define tmaxgroen11fileFile68af    147 /* Maximale groentijd bij fase 11 voor file ingreep                                         */
    #define tleven                     148 /* Frequentie verstuurd levenssignaal                                                       */
    #define tnlfg0262                  149 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnlfgd0262                 150 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                             */
    #define tnleg0262                  151 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlegd0262                 152 /* Detectieafhankelijke naloop op einde groen van 02 naar 62                                */
    #define tnlfg0868                  153 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 154 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  155 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 156 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tnlfg1168                  157 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 158 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  159 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 160 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  161 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 162 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  163 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 164 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsg3132                  165 /* Naloop op start groen van 31 naar 32                                                     */
    #define tnlsgd3132                 166 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsg3231                  167 /* Naloop op start groen van 32 naar 31                                                     */
    #define tnlsgd3231                 168 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 169 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 170 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  171 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 172 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  173 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 174 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                175 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     176 /* Ondergedrag KAR                                                                          */
    #define tbtovg02bus                177 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   178 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   179 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  180 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risovris          181 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            182 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              183 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 184 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 185 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                186 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrwris         187 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           188 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             189 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                190 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                191 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               192 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                193 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   194 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   195 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  196 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          197 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            198 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              199 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 200 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 201 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                202 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         203 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           204 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             205 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                206 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                207 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               208 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                209 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   210 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   211 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  212 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          213 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            214 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              215 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 216 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 217 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                218 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         219 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           220 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             221 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                222 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                223 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               224 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                225 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   226 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   227 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  228 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          229 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            230 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              231 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 232 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 233 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                234 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         235 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           236 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             237 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                238 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                239 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               240 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                241 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   242 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   243 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  244 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          245 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            246 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              247 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 248 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 249 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                250 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         251 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           252 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             253 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                254 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                255 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               256 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                257 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   258 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   259 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  260 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          261 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            262 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              263 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 264 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 265 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                266 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         267 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           268 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             269 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                270 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                271 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               272 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            273 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              274 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 275 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 276 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                277 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tprioin28fietsfiets28_2    278 /* Anti jutter tijd inmelden 28 Fiets                                                       */
    #define tpriouit28fiets            279 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              280 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 281 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 282 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                283 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg61bus                284 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   285 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   286 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  287 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          288 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            289 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              290 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 291 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 292 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                293 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         294 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           295 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             296 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                297 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                298 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               299 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                300 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   301 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   302 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  303 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          304 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            305 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              306 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 307 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 308 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                309 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         310 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           311 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             312 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                313 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                314 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               315 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                316 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   317 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   318 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  319 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          320 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            321 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              322 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 323 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 324 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                325 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         326 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           327 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             328 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                329 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                330 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               331 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            332 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                333 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   334 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   335 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  336 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          337 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            338 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              339 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 340 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 341 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                342 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         343 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           344 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             345 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                346 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                347 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               348 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    349 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    350 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 351 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 352 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                353 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    354 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    355 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 356 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 357 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                358 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    359 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    360 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 361 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 362 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                363 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    364 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    365 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 366 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 367 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                368 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    369 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    370 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 371 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 372 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                373 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    374 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    375 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 376 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 377 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                378 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    379 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    380 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 381 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 382 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                383 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    384 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    385 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 386 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 387 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                388 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    389 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    390 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 391 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 392 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                393 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    394 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    395 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 396 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 397 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                398 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                399
    #define tris02risvrw               400
    #define tris03risov                401
    #define tris03risvrw               402
    #define tris05risov                403
    #define tris05risvrw               404
    #define tris08risov                405
    #define tris08risvrw               406
    #define tris09risov                407
    #define tris09risvrw               408
    #define tris11risov                409
    #define tris11risvrw               410
    #define tris61risov                411
    #define tris61risvrw               412
    #define tris62risov                413
    #define tris62risvrw               414
    #define tris67risov                415
    #define tris67risvrw               416
    #define tris68risov                417
    #define tris68risvrw               418
    #define trgad24_3                  419 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 420 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            421 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            422 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   423 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   424 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   425 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   426 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   427 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   428 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    429 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    430 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    431 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    432 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   433 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   434 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   435 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   436 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   437 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   438 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    439 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    440 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    441 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    442 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    443 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    444 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    445 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   446 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   447 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   448 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   449 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tschoolingreepmaxg33       450 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 451 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 452 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       453 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 454 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 455 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr33                  456 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             457 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             458 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  459 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             460 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             461 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   462 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             463 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             464 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             465 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               466 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               467 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               468 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               469 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               470 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               471 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               472 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               473 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               474 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               475 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               476 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               477 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               478 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               479 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               480 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               481 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               482 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               483 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               484 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               485 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               486 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               487 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               488 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   489 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               490 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              491 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               492 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              493 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   494 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               495 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              496 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               497 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              498 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   499 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                500 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               501 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    502 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs2611                    503 /* Voorstarttijd fase 26 op fase 11                                                         */
    #define tvs3205                    504 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr6202                    505 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    506 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    507 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    508 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    509 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   510 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   511 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   512 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   513 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    514 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo1126                    515 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define tfo0532                    516 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define TMMAX1                     517

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
    #define cvchst61bus         20 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risov       21 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risvrw      22 /* OV inmeldingen fase 61 tijdens halfstar regelen Vrachtwagen */
    #define cvchst62bus         23 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risov       24 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risvrw      25 /* OV inmeldingen fase 62 tijdens halfstar regelen Vrachtwagen */
    #define cvchst67bus         26 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risov       27 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risvrw      28 /* OV inmeldingen fase 67 tijdens halfstar regelen Vrachtwagen */
    #define cvchst68bus         29 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risov       30 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risvrw      31 /* OV inmeldingen fase 68 tijdens halfstar regelen Vrachtwagen */
    #define cvc02bus            32 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          33 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         34 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc03bus            35 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          36 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         37 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc05bus            38 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          39 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         40 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc08bus            41 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          42 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         43 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc09bus            44 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          45 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         46 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc11bus            47 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          48 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         49 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cftscyc22fietsfiets 50 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cftsvtg22fietsfiets 51 /* Bijhouden aantal fietsers tbv peloton prio voor fase 22     */
    #define cvc22fiets          52 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cftscyc28fietsfiets 53 /* Bijhouden realisaties tbv peloton prio voor fase 28         */
    #define cftsvtg28fietsfiets 54 /* Bijhouden aantal fietsers tbv peloton prio voor fase 28     */
    #define cvc28fiets          55 /* Bijhouden prio inmeldingen fase 28 type Fiets               */
    #define cvc61bus            56 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          57 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         58 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc62bus            59 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          60 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         61 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc67bus            62 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          63 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         64 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc68bus            65 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          66 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         67 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvchd02             68 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             69 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             70 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             71 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             72 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             73 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             74 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             75 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             76 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             77 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              78

/* schakelaars */
/* ----------- */
    #define schdynhiaat08               0 /* Toepassen dynamsich hiaat bij fase 08                                 */
    #define schopdrempelen08            1 /* Opdrempelen toepassen voor fase 08                                    */
    #define schedkop_08                 2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus        */
    #define schdynhiaat09               3 /* Toepassen dynamsich hiaat bij fase 09                                 */
    #define schopdrempelen09            4 /* Opdrempelen toepassen voor fase 09                                    */
    #define schedkop_09                 5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus        */
    #define schdynhiaat11               6 /* Toepassen dynamsich hiaat bij fase 11                                 */
    #define schopdrempelen11            7 /* Opdrempelen toepassen voor fase 11                                    */
    #define schedkop_11                 8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus        */
    #define schdvakd02_1a               9 /* Aanvraag fase 02 bij storing op detector 02_1a                        */
    #define schdvakd02_1b              10 /* Aanvraag fase 02 bij storing op detector 02_1b                        */
    #define schdvakd03_1               11 /* Aanvraag fase 03 bij storing op detector 03_1                         */
    #define schfileFile68af            12 /* File ingreep File68af toepassen                                       */
    #define schfiledoserenFile68af     13 /* Toepassen doseerpercentages voor fileingreep File68af                 */
    #define schfileFile68afparstrook   14 /* Parallele file meldingen per strook file ingreep File68af             */
    #define schbmfix                   15 /* Bijkomen tijdens fixatie mogelijk                                     */
    #define schaltghst02               16 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen      */
    #define schaltghst03               17 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen      */
    #define schaltghst05               18 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen      */
    #define schaltghst08               19 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen      */
    #define schaltghst09               20 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen      */
    #define schaltghst11               21 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen      */
    #define schaltghst21               22 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen      */
    #define schaltghst2232             23 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen */
    #define schaltghst2434             24 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen */
    #define schaltghst81               25 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen      */
    #define schaltghst88               26 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen      */
    #define schaltghst3384             27 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst68               28 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen      */
    #define schaltghst82               29 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen      */
    #define schaltghst67               30 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen      */
    #define schaltghst62               31 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen      */
    #define schaltghst61               32 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen      */
    #define schaltghst38               33 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen      */
    #define schaltghst31               34 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen      */
    #define schaltghst28               35 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen      */
    #define schaltghst26               36 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen      */
    #define schinstprm                 37 /* Eenmalig kopieren signaalplan parameters naar signaalplannen          */
    #define schinst                    38 /* Eenmalig instellen signaalplannen na wijziging                        */
    #define schvaml                    39 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)          */
    #define schvar                     40 /* VA regelen aan of uit                                                 */
    #define scharh                     41 /* Toestaan alternatieven voor hoofdrichtingen                           */
    #define schvarstreng               42 /* VA regelen aan of uit voor gehele streng                              */
    #define schpervardef               43 /* VA regelen periode default                                            */
    #define schpervar1                 44 /* VA regelen periode dag                                                */
    #define schpervar2                 45 /* VA regelen periode ochtend                                            */
    #define schpervar3                 46 /* VA regelen periode avond                                              */
    #define schpervar4                 47 /* VA regelen periode koopavond                                          */
    #define schpervar5                 48 /* VA regelen periode weekend                                            */
    #define schpervar6                 49 /* VA regelen periode nacht                                              */
    #define schpervar7                 50 /* VA regelen periode reserve                                            */
    #define schperarhdef               51 /* Alternatieven voor hoofdrichtingen periode default                    */
    #define schperarh1                 52 /* Alternatieven voor hoofdrichtingen periode dag                        */
    #define schperarh2                 53 /* Alternatieven voor hoofdrichtingen periode ochtend                    */
    #define schperarh3                 54 /* Alternatieven voor hoofdrichtingen periode avond                      */
    #define schperarh4                 55 /* Alternatieven voor hoofdrichtingen periode koopavond                  */
    #define schperarh5                 56 /* Alternatieven voor hoofdrichtingen periode weekend                    */
    #define schperarh6                 57 /* Alternatieven voor hoofdrichtingen periode nacht                      */
    #define schperarh7                 58 /* Alternatieven voor hoofdrichtingen periode reserve                    */
    #define schovpriople               59 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                */
    #define schma0261                  60 /* Meeaanvraag van 02 naar 61 actief                                     */
    #define schma0262                  61 /* Meeaanvraag van 02 naar 62 actief                                     */
    #define schma0521                  62 /* Meeaanvraag van 05 naar 21 actief                                     */
    #define schma0522                  63 /* Meeaanvraag van 05 naar 22 actief                                     */
    #define schma0532                  64 /* Meeaanvraag van 05 naar 32 actief                                     */
    #define schma0868                  65 /* Meeaanvraag van 08 naar 68 actief                                     */
    #define schma1126                  66 /* Meeaanvraag van 11 naar 26 actief                                     */
    #define schma1168                  67 /* Meeaanvraag van 11 naar 68 actief                                     */
    #define schma2221                  68 /* Meeaanvraag van 22 naar 21 actief                                     */
    #define schma2611                  69 /* Meeaanvraag van 26 naar 11 actief                                     */
    #define schma3122                  70 /* Meeaanvraag van 31 naar 22 actief                                     */
    #define schma3132                  71 /* Meeaanvraag van 31 naar 32 actief                                     */
    #define schma3222                  72 /* Meeaanvraag van 32 naar 22 actief                                     */
    #define schma3231                  73 /* Meeaanvraag van 32 naar 31 actief                                     */
    #define schma3324                  74 /* Meeaanvraag van 33 naar 24 actief                                     */
    #define schma3334                  75 /* Meeaanvraag van 33 naar 34 actief                                     */
    #define schma3384                  76 /* Meeaanvraag van 33 naar 84 actief                                     */
    #define schma3424                  77 /* Meeaanvraag van 34 naar 24 actief                                     */
    #define schma3433                  78 /* Meeaanvraag van 34 naar 33 actief                                     */
    #define schma3484                  79 /* Meeaanvraag van 34 naar 84 actief                                     */
    #define schma8281                  80 /* Meeaanvraag van 82 naar 81 actief                                     */
    #define schmv02                    81 /* Meeverlengen fase 02                                                  */
    #define schmv03                    82 /* Meeverlengen fase 03                                                  */
    #define schmv05                    83 /* Meeverlengen fase 05                                                  */
    #define schmv08                    84 /* Meeverlengen fase 08                                                  */
    #define schmv09                    85 /* Meeverlengen fase 09                                                  */
    #define schmv11                    86 /* Meeverlengen fase 11                                                  */
    #define schmv21                    87 /* Meeverlengen fase 21                                                  */
    #define schmv22                    88 /* Meeverlengen fase 22                                                  */
    #define schhardmv2205              89 /* Hard meeverlengen fase 22 met fase 05                                 */
    #define schmv24                    90 /* Meeverlengen fase 24                                                  */
    #define schmv26                    91 /* Meeverlengen fase 26                                                  */
    #define schhardmv2611              92 /* Hard meeverlengen fase 26 met fase 11                                 */
    #define schmv28                    93 /* Meeverlengen fase 28                                                  */
    #define schmv31                    94 /* Meeverlengen fase 31                                                  */
    #define schmv32                    95 /* Meeverlengen fase 32                                                  */
    #define schhardmv3205              96 /* Hard meeverlengen fase 32 met fase 05                                 */
    #define schmv33                    97 /* Meeverlengen fase 33                                                  */
    #define schmv34                    98 /* Meeverlengen fase 34                                                  */
    #define schmv38                    99 /* Meeverlengen fase 38                                                  */
    #define schmv61                   100 /* Meeverlengen fase 61                                                  */
    #define schmv62                   101 /* Meeverlengen fase 62                                                  */
    #define schmv67                   102 /* Meeverlengen fase 67                                                  */
    #define schmv68                   103 /* Meeverlengen fase 68                                                  */
    #define schmv81                   104 /* Meeverlengen fase 81                                                  */
    #define schmv82                   105 /* Meeverlengen fase 82                                                  */
    #define schmv84                   106 /* Meeverlengen fase 84                                                  */
    #define schmlprm                  107 /* Toepassen parametriseerbare modulestructuur                           */
    #define schovstipt02bus           108 /* Geconditioneerde prioteit voor OV bij 02 Bus                          */
    #define schovstipt03bus           109 /* Geconditioneerde prioteit voor OV bij 03 Bus                          */
    #define schovstipt05bus           110 /* Geconditioneerde prioteit voor OV bij 05 Bus                          */
    #define schovstipt08bus           111 /* Geconditioneerde prioteit voor OV bij 08 Bus                          */
    #define schovstipt09bus           112 /* Geconditioneerde prioteit voor OV bij 09 Bus                          */
    #define schovstipt11bus           113 /* Geconditioneerde prioteit voor OV bij 11 Bus                          */
    #define schovstipt61bus           114 /* Geconditioneerde prioteit voor OV bij 61 Bus                          */
    #define schovstipt62bus           115 /* Geconditioneerde prioteit voor OV bij 62 Bus                          */
    #define schovstipt67bus           116 /* Geconditioneerde prioteit voor OV bij 67 Bus                          */
    #define schovstipt68bus           117 /* Geconditioneerde prioteit voor OV bij 68 Bus                          */
    #define schcovuber                118 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                        */
    #define schcheckdstype            119 /* Check type DSI bericht bij VECOM                                      */
    #define schprioin02buskar         120 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02buskar        121 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02bus           122 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risovris       123 /* Inmelden 02 via Bus toestaan                                          */
    #define schpriouit02risovris      124 /* Uitmelden 02 via Bus toestaan                                         */
    #define schupinagb02risov         125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin02risvrwris      126 /* Inmelden 02 via Vrachtwagen toestaan                                  */
    #define schpriouit02risvrwris     127 /* Uitmelden 02 via Vrachtwagen toestaan                                 */
    #define schupinagb02risvrw        128 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02         */
    #define schprioin03buskar         129 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03buskar        130 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03bus           131 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risovris       132 /* Inmelden 03 via Bus toestaan                                          */
    #define schpriouit03risovris      133 /* Uitmelden 03 via Bus toestaan                                         */
    #define schupinagb03risov         134 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin03risvrwris      135 /* Inmelden 03 via Vrachtwagen toestaan                                  */
    #define schpriouit03risvrwris     136 /* Uitmelden 03 via Vrachtwagen toestaan                                 */
    #define schupinagb03risvrw        137 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03         */
    #define schprioin05buskar         138 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05buskar        139 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05bus           140 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risovris       141 /* Inmelden 05 via Bus toestaan                                          */
    #define schpriouit05risovris      142 /* Uitmelden 05 via Bus toestaan                                         */
    #define schupinagb05risov         143 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin05risvrwris      144 /* Inmelden 05 via Vrachtwagen toestaan                                  */
    #define schpriouit05risvrwris     145 /* Uitmelden 05 via Vrachtwagen toestaan                                 */
    #define schupinagb05risvrw        146 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05         */
    #define schprioin08buskar         147 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08buskar        148 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08bus           149 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risovris       150 /* Inmelden 08 via Bus toestaan                                          */
    #define schpriouit08risovris      151 /* Uitmelden 08 via Bus toestaan                                         */
    #define schupinagb08risov         152 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin08risvrwris      153 /* Inmelden 08 via Vrachtwagen toestaan                                  */
    #define schpriouit08risvrwris     154 /* Uitmelden 08 via Vrachtwagen toestaan                                 */
    #define schupinagb08risvrw        155 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08         */
    #define schprioin09buskar         156 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09buskar        157 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09bus           158 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risovris       159 /* Inmelden 09 via Bus toestaan                                          */
    #define schpriouit09risovris      160 /* Uitmelden 09 via Bus toestaan                                         */
    #define schupinagb09risov         161 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin09risvrwris      162 /* Inmelden 09 via Vrachtwagen toestaan                                  */
    #define schpriouit09risvrwris     163 /* Uitmelden 09 via Vrachtwagen toestaan                                 */
    #define schupinagb09risvrw        164 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09         */
    #define schprioin11buskar         165 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11buskar        166 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11bus           167 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risovris       168 /* Inmelden 11 via Bus toestaan                                          */
    #define schpriouit11risovris      169 /* Uitmelden 11 via Bus toestaan                                         */
    #define schupinagb11risov         170 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin11risvrwris      171 /* Inmelden 11 via Vrachtwagen toestaan                                  */
    #define schpriouit11risvrwris     172 /* Uitmelden 11 via Vrachtwagen toestaan                                 */
    #define schupinagb11risvrw        173 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11         */
    #define schprioin22fietsfiets22_1 174 /* Inmelden 22 via Fiets toestaan                                        */
    #define schpriouit22fietsfiets    175 /* Uitmelden 22 via Fiets toestaan                                       */
    #define schupinagb22fiets         176 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22         */
    #define schprioin28fietsfiets28_2 177 /* Inmelden 28 via Fiets toestaan                                        */
    #define schpriouit28fietsfiets    178 /* Uitmelden 28 via Fiets toestaan                                       */
    #define schupinagb28fiets         179 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28         */
    #define schprioin61buskar         180 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61buskar        181 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61bus           182 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risovris       183 /* Inmelden 61 via Bus toestaan                                          */
    #define schpriouit61risovris      184 /* Uitmelden 61 via Bus toestaan                                         */
    #define schupinagb61risov         185 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin61risvrwris      186 /* Inmelden 61 via Vrachtwagen toestaan                                  */
    #define schpriouit61risvrwris     187 /* Uitmelden 61 via Vrachtwagen toestaan                                 */
    #define schupinagb61risvrw        188 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61         */
    #define schprioin62buskar         189 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62buskar        190 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62bus           191 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risovris       192 /* Inmelden 62 via Bus toestaan                                          */
    #define schpriouit62risovris      193 /* Uitmelden 62 via Bus toestaan                                         */
    #define schupinagb62risov         194 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin62risvrwris      195 /* Inmelden 62 via Vrachtwagen toestaan                                  */
    #define schpriouit62risvrwris     196 /* Uitmelden 62 via Vrachtwagen toestaan                                 */
    #define schupinagb62risvrw        197 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62         */
    #define schprioin67buskar         198 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67buskar        199 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67bus           200 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risovris       201 /* Inmelden 67 via Bus toestaan                                          */
    #define schpriouit67risovris      202 /* Uitmelden 67 via Bus toestaan                                         */
    #define schupinagb67risov         203 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin67risvrwris      204 /* Inmelden 67 via Vrachtwagen toestaan                                  */
    #define schpriouit67risvrwris     205 /* Uitmelden 67 via Vrachtwagen toestaan                                 */
    #define schupinagb67risvrw        206 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67         */
    #define schprioin68buskar         207 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68buskar        208 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68bus           209 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risovris       210 /* Inmelden 68 via Bus toestaan                                          */
    #define schpriouit68risovris      211 /* Uitmelden 68 via Bus toestaan                                         */
    #define schupinagb68risov         212 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schprioin68risvrwris      213 /* Inmelden 68 via Vrachtwagen toestaan                                  */
    #define schpriouit68risvrwris     214 /* Uitmelden 68 via Vrachtwagen toestaan                                 */
    #define schupinagb68risvrw        215 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68         */
    #define schupinagbhd02            216 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02         */
    #define schhdin02kar              217 /* Inmelden 02 via KAR HD toestaan                                       */
    #define schhduit02kar             218 /* Uitmelden 02 via KAR HD toestaan                                      */
    #define schchecksirene02          219 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                */
    #define schhdin02ris              220 /* Inmelden 02 via RIS HD toestaan                                       */
    #define schhduit02ris             221 /* Uitmelden 02 via RIS HD toestaan                                      */
    #define schupinagbhd03            222 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03         */
    #define schhdin03kar              223 /* Inmelden 03 via KAR HD toestaan                                       */
    #define schhduit03kar             224 /* Uitmelden 03 via KAR HD toestaan                                      */
    #define schchecksirene03          225 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                */
    #define schhdin03ris              226 /* Inmelden 03 via RIS HD toestaan                                       */
    #define schhduit03ris             227 /* Uitmelden 03 via RIS HD toestaan                                      */
    #define schupinagbhd05            228 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05         */
    #define schhdin05kar              229 /* Inmelden 05 via KAR HD toestaan                                       */
    #define schhduit05kar             230 /* Uitmelden 05 via KAR HD toestaan                                      */
    #define schchecksirene05          231 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                */
    #define schhdin05ris              232 /* Inmelden 05 via RIS HD toestaan                                       */
    #define schhduit05ris             233 /* Uitmelden 05 via RIS HD toestaan                                      */
    #define schupinagbhd08            234 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08         */
    #define schhdin08kar              235 /* Inmelden 08 via KAR HD toestaan                                       */
    #define schhduit08kar             236 /* Uitmelden 08 via KAR HD toestaan                                      */
    #define schchecksirene08          237 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                */
    #define schhdin08ris              238 /* Inmelden 08 via RIS HD toestaan                                       */
    #define schhduit08ris             239 /* Uitmelden 08 via RIS HD toestaan                                      */
    #define schupinagbhd09            240 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09         */
    #define schhdin09kar              241 /* Inmelden 09 via KAR HD toestaan                                       */
    #define schhduit09kar             242 /* Uitmelden 09 via KAR HD toestaan                                      */
    #define schchecksirene09          243 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                */
    #define schhdin09ris              244 /* Inmelden 09 via RIS HD toestaan                                       */
    #define schhduit09ris             245 /* Uitmelden 09 via RIS HD toestaan                                      */
    #define schupinagbhd11            246 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11         */
    #define schhdin11kar              247 /* Inmelden 11 via KAR HD toestaan                                       */
    #define schhduit11kar             248 /* Uitmelden 11 via KAR HD toestaan                                      */
    #define schchecksirene11          249 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                */
    #define schhdin11ris              250 /* Inmelden 11 via RIS HD toestaan                                       */
    #define schhduit11ris             251 /* Uitmelden 11 via RIS HD toestaan                                      */
    #define schupinagbhd61            252 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61         */
    #define schhdin61kar              253 /* Inmelden 61 via KAR HD toestaan                                       */
    #define schhduit61kar             254 /* Uitmelden 61 via KAR HD toestaan                                      */
    #define schchecksirene61          255 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                */
    #define schhdin61ris              256 /* Inmelden 61 via RIS HD toestaan                                       */
    #define schhduit61ris             257 /* Uitmelden 61 via RIS HD toestaan                                      */
    #define schupinagbhd62            258 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62         */
    #define schhdin62kar              259 /* Inmelden 62 via KAR HD toestaan                                       */
    #define schhduit62kar             260 /* Uitmelden 62 via KAR HD toestaan                                      */
    #define schchecksirene62          261 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                */
    #define schhdin62ris              262 /* Inmelden 62 via RIS HD toestaan                                       */
    #define schhduit62ris             263 /* Uitmelden 62 via RIS HD toestaan                                      */
    #define schupinagbhd67            264 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67         */
    #define schhdin67kar              265 /* Inmelden 67 via KAR HD toestaan                                       */
    #define schhduit67kar             266 /* Uitmelden 67 via KAR HD toestaan                                      */
    #define schchecksirene67          267 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                */
    #define schhdin67ris              268 /* Inmelden 67 via RIS HD toestaan                                       */
    #define schhduit67ris             269 /* Uitmelden 67 via RIS HD toestaan                                      */
    #define schupinagbhd68            270 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68         */
    #define schhdin68kar              271 /* Inmelden 68 via KAR HD toestaan                                       */
    #define schhduit68kar             272 /* Uitmelden 68 via KAR HD toestaan                                      */
    #define schchecksirene68          273 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                */
    #define schhdin68ris              274 /* Inmelden 68 via RIS HD toestaan                                       */
    #define schhduit68ris             275 /* Uitmelden 68 via RIS HD toestaan                                      */
    #define schrisgeencheckopsg       276 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen           */
    #define schrisaanvraag            277 /* Globaal in of uitschakelen aanvragen via RIS                          */
    #define schrisverlengen           278 /* Globaal in of uitschakelen verlengen via RIS                          */
    #define schrgadd24_3              279 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2            */
    #define schrgv                    280 /* RoBuGrover aan of uit                                                 */
    #define schrgv_snel               281 /* RoBuGrover versneld ophogen of verlagen                               */
    #define schschoolingreep33        282 /* Schoolingreep aan of uit voor fase 33                                 */
    #define schschoolingreep34        283 /* Schoolingreep aan of uit voor fase 34                                 */
    #define schsi33                   284 /* Senioreningreep aan of uit voor fase 33                               */
    #define schsi34                   285 /* Senioreningreep aan of uit voor fase 34                               */
    #define schca02                   286 /* Cyclische aanvraag fase 02                                            */
    #define schca03                   287 /* Cyclische aanvraag fase 03                                            */
    #define schca05                   288 /* Cyclische aanvraag fase 05                                            */
    #define schca08                   289 /* Cyclische aanvraag fase 08                                            */
    #define schca09                   290 /* Cyclische aanvraag fase 09                                            */
    #define schca11                   291 /* Cyclische aanvraag fase 11                                            */
    #define schca21                   292 /* Cyclische aanvraag fase 21                                            */
    #define schca22                   293 /* Cyclische aanvraag fase 22                                            */
    #define schca24                   294 /* Cyclische aanvraag fase 24                                            */
    #define schca26                   295 /* Cyclische aanvraag fase 26                                            */
    #define schca28                   296 /* Cyclische aanvraag fase 28                                            */
    #define schca31                   297 /* Cyclische aanvraag fase 31                                            */
    #define schca32                   298 /* Cyclische aanvraag fase 32                                            */
    #define schca33                   299 /* Cyclische aanvraag fase 33                                            */
    #define schca34                   300 /* Cyclische aanvraag fase 34                                            */
    #define schca38                   301 /* Cyclische aanvraag fase 38                                            */
    #define schca61                   302 /* Cyclische aanvraag fase 61                                            */
    #define schca62                   303 /* Cyclische aanvraag fase 62                                            */
    #define schca67                   304 /* Cyclische aanvraag fase 67                                            */
    #define schca68                   305 /* Cyclische aanvraag fase 68                                            */
    #define schca81                   306 /* Cyclische aanvraag fase 81                                            */
    #define schca82                   307 /* Cyclische aanvraag fase 82                                            */
    #define schca84                   308 /* Cyclische aanvraag fase 84                                            */
    #define schvg02_4a                309 /* Veiligheidsgroen detector 02_4a fase 02                               */
    #define schvg02_4b                310 /* Veiligheidsgroen detector 02_4b fase 02                               */
    #define schvg08_4a                311 /* Veiligheidsgroen detector 08_4a fase 08                               */
    #define schvg08_4b                312 /* Veiligheidsgroen detector 08_4b fase 08                               */
    #define schvg11_4                 313 /* Veiligheidsgroen detector 11_4 fase 11                                */
    #define schaltg02                 314 /* Alternatieve realisatie toestaan fase 02                              */
    #define schaltg03                 315 /* Alternatieve realisatie toestaan fase 03                              */
    #define schaltg05                 316 /* Alternatieve realisatie toestaan fase 05                              */
    #define schaltg08                 317 /* Alternatieve realisatie toestaan fase 08                              */
    #define schaltg09                 318 /* Alternatieve realisatie toestaan fase 09                              */
    #define schaltg11                 319 /* Alternatieve realisatie toestaan fase 11                              */
    #define schaltg21                 320 /* Alternatieve realisatie toestaan fase 21                              */
    #define schaltg2232               321 /* Alternatieve realisatie toestaan fasen 22, 32                         */
    #define schaltg2434               322 /* Alternatieve realisatie toestaan fasen 24, 34                         */
    #define schaltg26                 323 /* Alternatieve realisatie toestaan fase 26                              */
    #define schaltg28                 324 /* Alternatieve realisatie toestaan fase 28                              */
    #define schaltg31                 325 /* Alternatieve realisatie toestaan fase 31                              */
    #define schaltg3384               326 /* Alternatieve realisatie toestaan fasen 33, 84                         */
    #define schaltg38                 327 /* Alternatieve realisatie toestaan fase 38                              */
    #define schaltg61                 328 /* Alternatieve realisatie toestaan fase 61                              */
    #define schaltg62                 329 /* Alternatieve realisatie toestaan fase 62                              */
    #define schaltg67                 330 /* Alternatieve realisatie toestaan fase 67                              */
    #define schaltg68                 331 /* Alternatieve realisatie toestaan fase 68                              */
    #define schaltg81                 332 /* Alternatieve realisatie toestaan fase 81                              */
    #define schaltg82                 333 /* Alternatieve realisatie toestaan fase 82                              */
    #define schwg02                   334 /* Wachtstand groen fase 02                                              */
    #define schwg03                   335 /* Wachtstand groen fase 03                                              */
    #define schwg05                   336 /* Wachtstand groen fase 05                                              */
    #define schwg08                   337 /* Wachtstand groen fase 08                                              */
    #define schwg09                   338 /* Wachtstand groen fase 09                                              */
    #define schwg11                   339 /* Wachtstand groen fase 11                                              */
    #define schwg21                   340 /* Wachtstand groen fase 21                                              */
    #define schwg22                   341 /* Wachtstand groen fase 22                                              */
    #define schwg24                   342 /* Wachtstand groen fase 24                                              */
    #define schwg26                   343 /* Wachtstand groen fase 26                                              */
    #define schwg28                   344 /* Wachtstand groen fase 28                                              */
    #define schwg31                   345 /* Wachtstand groen fase 31                                              */
    #define schwg32                   346 /* Wachtstand groen fase 32                                              */
    #define schwg33                   347 /* Wachtstand groen fase 33                                              */
    #define schwg34                   348 /* Wachtstand groen fase 34                                              */
    #define schwg38                   349 /* Wachtstand groen fase 38                                              */
    #define schwg61                   350 /* Wachtstand groen fase 61                                              */
    #define schwg62                   351 /* Wachtstand groen fase 62                                              */
    #define schwg67                   352 /* Wachtstand groen fase 67                                              */
    #define schwg68                   353 /* Wachtstand groen fase 68                                              */
    #define schwg81                   354 /* Wachtstand groen fase 81                                              */
    #define schwg82                   355 /* Wachtstand groen fase 82                                              */
    #define schwg84                   356 /* Wachtstand groen fase 84                                              */
    #define schstar                   357 /* Inschakelen star programma                                            */
    #define schgs2232                 358 /* Schakelbare gelijkstart tussen fase 32 en 22                          */
    #define schgs2434                 359 /* Schakelbare gelijkstart tussen fase 34 en 24                          */
    #define schgs3384                 360 /* Schakelbare gelijkstart tussen fase 84 en 33                          */
    #define schlos32_1                361 /* Toestaan los realiseren fase 32                                       */
    #define schlos32_2                362 /* Toestaan los realiseren fase 32                                       */
    #define schlos31_1                363 /* Toestaan los realiseren fase 31                                       */
    #define schlos31_2                364 /* Toestaan los realiseren fase 31                                       */
    #define schlos34_1                365 /* Toestaan los realiseren fase 34                                       */
    #define schlos34_2                366 /* Toestaan los realiseren fase 34                                       */
    #define schlos33_1                367 /* Toestaan los realiseren fase 33                                       */
    #define schlos33_2                368 /* Toestaan los realiseren fase 33                                       */
    #define schconfidence15fix        369
    #define schtxconfidence15ar       370
    #define schspatconfidence1        371
    #define schspatconfidence3        372
    #define schspatconfidence6        373
    #define schspatconfidence9        374
    #define schspatconfidence12       375
    #define schspatconfidence15       376
    #define schtimings02              377
    #define schtimings03              378
    #define schtimings05              379
    #define schtimings08              380
    #define schtimings09              381
    #define schtimings11              382
    #define schtimings21              383
    #define schtimings22              384
    #define schtimings24              385
    #define schtimings26              386
    #define schtimings28              387
    #define schtimings31              388
    #define schtimings32              389
    #define schtimings33              390
    #define schtimings34              391
    #define schtimings38              392
    #define schtimings61              393
    #define schtimings62              394
    #define schtimings67              395
    #define schtimings68              396
    #define schtimings81              397
    #define schtimings82              398
    #define schtimings84              399
    #define schsneld02_1a             400 /* Aanvraag snel voor detector 02_1a aan of uit                          */
    #define schsneld02_1b             401 /* Aanvraag snel voor detector 02_1b aan of uit                          */
    #define schsneld03_1              402 /* Aanvraag snel voor detector 03_1 aan of uit                           */
    #define schsneld05_1              403 /* Aanvraag snel voor detector 05_1 aan of uit                           */
    #define schsneld08_1a             404 /* Aanvraag snel voor detector 08_1a aan of uit                          */
    #define schsneld08_1b             405 /* Aanvraag snel voor detector 08_1b aan of uit                          */
    #define schsneld09_1              406 /* Aanvraag snel voor detector 09_1 aan of uit                           */
    #define schsneld11_1              407 /* Aanvraag snel voor detector 11_1 aan of uit                           */
    #define schsneld211               408 /* Aanvraag snel voor detector 211 aan of uit                            */
    #define schsneld22_1              409 /* Aanvraag snel voor detector 22_1 aan of uit                           */
    #define schsneld24_1              410 /* Aanvraag snel voor detector 24_1 aan of uit                           */
    #define schsneld261               411 /* Aanvraag snel voor detector 261 aan of uit                            */
    #define schsneld28_1              412 /* Aanvraag snel voor detector 28_1 aan of uit                           */
    #define schsneld61_1              413 /* Aanvraag snel voor detector 61_1 aan of uit                           */
    #define schsneld62_1a             414 /* Aanvraag snel voor detector 62_1a aan of uit                          */
    #define schsneld62_1b             415 /* Aanvraag snel voor detector 62_1b aan of uit                          */
    #define schsneld67_1              416 /* Aanvraag snel voor detector 67_1 aan of uit                           */
    #define schsneld68_1a             417 /* Aanvraag snel voor detector 68_1a aan of uit                          */
    #define schsneld68_1b             418 /* Aanvraag snel voor detector 68_1b aan of uit                          */
    #define schsneld81_1              419 /* Aanvraag snel voor detector 81_1 aan of uit                           */
    #define schsneld82_1              420 /* Aanvraag snel voor detector 82_1 aan of uit                           */
    #define schsneld84_1              421 /* Aanvraag snel voor detector 84_1 aan of uit                           */
    #define schgsbeidedkb             422
    #define SCHMAX1                   423

/* parameters */
/* ---------- */
    #define prmspringverleng_08_1a         0 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b         1 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a         2 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b         3 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a         4 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b         5 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a         6 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b         7 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmspringverleng_09_1          8 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3          9 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2         10 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_1         11 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2         12 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3         13 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4         14 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
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
    #define prmpriohst61bus              236 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            237 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           238 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62bus              239 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            240 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           241 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67bus              242 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            243 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           244 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68bus              245 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            246 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           247 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmnatxdhst02bus             248 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           249 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          250 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             251 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           252 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          253 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             254 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           255 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          256 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             257 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61bus             268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                280 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                281 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                282 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                283 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                284 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                285 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                286 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                287 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                288 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                289 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                290 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                291 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                292 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                293 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                294 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                295 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                296 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                297 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                298 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                299 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                300 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                301 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                302 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                303 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                304 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                305 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                306 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                307 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                308 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                309 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                310 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                311 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                312 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                313 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                314 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                315 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                316 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                317 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                318 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                319 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                320 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                321 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                322 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                323 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                324 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                325 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                326 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                327 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                328 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                329 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                330 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                331 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                332 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                333 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                334 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                335 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                336 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                337 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                338 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                339 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                340 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                341 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                342 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                343 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                344 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                345 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                346 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                347 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                348 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                349 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                350 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                351 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                352 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                353 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                354 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                355 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                356 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                357 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                358 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                359 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_84                360 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                361 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                362 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                363 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                364 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                365 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                366 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                367 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                368 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                369 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL1_82                370 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                371 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                372 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                373 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                374 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                375 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                376 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                377 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                378 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                379 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_81                380 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                381 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                382 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                383 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                384 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                385 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                386 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                387 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                388 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                389 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_68                390 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                391 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                392 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                393 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                394 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                395 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                396 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                397 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                398 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                399 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_67                400 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                401 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                402 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                403 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                404 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                405 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                406 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                407 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                408 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                409 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_62                410 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                411 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                412 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                413 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                414 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                415 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                416 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                417 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                418 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                419 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_61                420 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                421 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                422 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                423 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                424 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                425 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                426 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                427 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                428 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                429 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_38                430 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                431 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                432 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                433 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                434 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                435 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                436 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                437 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                438 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                439 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_34                440 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                441 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                442 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                443 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                444 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                445 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                446 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                447 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                448 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                449 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_33                450 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                451 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                452 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                453 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                454 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                455 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                456 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                457 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                458 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                459 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_32                460 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                461 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                462 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                463 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                464 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                465 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                466 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                467 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                468 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                469 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_31                470 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                471 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                472 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                473 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                474 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                475 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                476 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                477 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                478 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                479 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_28                480 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                481 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                482 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                483 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                484 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                485 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                486 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                487 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                488 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                489 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_26                490 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                491 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                492 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                493 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                494 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                495 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                496 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                497 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                498 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                499 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_24                500 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                501 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                502 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                503 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                504 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                505 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                506 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                507 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                508 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                509 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_02                510 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                511 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                512 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                513 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                514 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                515 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                516 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                517 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                518 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                519 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                520 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                521 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                522 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                523 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                524 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                525 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                526 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                527 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                528 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                529 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                530 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                531 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                532 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                533 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                534 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                535 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                536 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                537 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                538 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                539 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                540 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                541 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                542 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                543 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                544 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                545 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                546 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                547 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                548 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                549 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                550 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                551 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                552 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                553 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                554 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                555 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                556 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                557 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                558 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                559 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                560 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                561 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                562 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                563 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                564 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                565 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                566 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                567 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                568 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                569 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                570 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                571 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                572 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                573 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                574 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                575 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                576 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                577 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                578 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                579 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                580 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                581 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                582 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                583 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                584 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                585 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                586 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                587 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                588 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                589 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_84                590 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                591 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                592 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                593 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                594 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                595 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                596 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                597 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                598 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                599 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_82                600 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                601 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                602 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                603 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                604 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                605 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                606 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                607 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                608 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                609 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_81                610 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                611 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                612 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                613 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                614 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                615 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                616 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                617 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                618 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                619 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_68                620 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                621 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                622 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                623 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                624 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                625 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                626 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                627 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                628 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                629 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_67                630 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                631 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                632 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                633 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                634 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                635 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                636 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                637 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                638 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                639 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_62                640 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                641 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                642 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                643 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                644 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                645 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                646 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                647 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                648 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                649 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_61                650 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                651 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                652 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                653 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                654 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                655 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                656 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                657 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                658 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                659 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_38                660 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                661 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                662 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                663 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                664 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                665 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                666 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                667 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                668 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                669 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_34                670 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                671 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                672 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                673 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                674 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                675 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                676 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                677 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                678 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                679 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_33                680 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                681 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                682 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                683 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                684 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                685 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                686 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                687 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                688 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                689 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_32                690 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                691 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                692 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                693 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                694 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                695 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                696 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                697 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                698 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                699 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_31                700 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                701 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                702 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                703 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                704 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                705 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                706 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                707 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                708 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                709 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_28                710 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                711 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                712 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                713 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                714 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                715 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                716 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                717 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                718 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                719 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_26                720 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                721 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                722 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                723 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                724 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                725 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                726 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                727 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                728 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                729 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_24                730 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                731 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                732 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                733 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                734 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                735 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                736 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                737 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                738 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                739 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_02                740 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                741 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                742 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                743 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                744 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                745 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                746 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                747 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                748 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                749 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                750 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                751 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                752 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                753 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                754 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                755 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                756 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                757 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                758 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                759 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                760 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                761 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                762 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                763 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                764 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                765 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                766 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                767 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                768 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                769 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                770 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                771 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                772 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                773 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                774 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                775 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                776 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                777 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                778 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                779 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                780 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                781 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                782 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                783 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                784 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                785 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                786 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                787 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                788 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                789 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                790 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                791 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                792 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                793 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                794 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                795 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                796 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                797 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                798 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                799 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                800 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                801 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                802 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                803 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                804 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                805 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                806 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                807 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                808 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                809 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                810 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                811 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                812 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                813 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                814 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                815 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                816 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                817 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                818 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                819 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_84                820 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                821 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                822 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                823 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                824 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                825 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                826 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                827 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                828 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                829 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_82                830 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                831 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                832 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                833 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                834 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                835 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                836 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                837 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                838 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                839 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_81                840 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                841 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                842 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                843 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                844 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                845 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                846 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                847 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                848 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                849 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_68                850 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                851 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                852 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                853 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                854 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                855 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                856 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                857 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                858 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                859 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_67                860 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                861 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                862 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                863 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                864 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                865 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                866 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                867 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                868 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                869 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_62                870 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                871 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                872 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                873 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                874 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                875 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                876 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                877 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                878 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                879 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_61                880 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                881 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                882 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                883 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                884 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                885 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                886 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                887 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                888 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                889 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_38                890 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                891 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                892 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                893 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                894 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                895 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                896 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                897 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                898 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                899 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_34                900 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                901 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                902 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                903 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                904 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                905 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                906 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                907 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                908 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                909 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_33                910 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                911 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                912 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                913 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                914 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                915 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                916 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                917 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                918 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                919 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_32                920 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                921 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                922 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                923 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                924 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                925 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                926 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                927 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                928 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                929 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_31                930 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                931 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                932 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                933 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                934 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                935 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                936 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                937 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                938 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                939 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_28                940 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                941 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                942 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                943 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                944 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                945 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                946 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                947 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                948 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                949 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_26                950 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                951 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                952 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                953 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                954 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                955 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                956 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                957 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                958 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                959 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_24                960 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                961 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                962 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                963 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                964 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                965 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                966 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                967 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                968 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                969 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmrstotxa                   970 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 971 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   972 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   973 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   974 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   975 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   976 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   977 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper7                   978 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                979 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                980 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                981 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                982 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                983 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                984 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                985 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                986 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                987 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                988 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                989 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                990 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                991 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                992 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                993 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                994 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                995 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                996 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                997 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                998 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                999 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1000 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv03                     1001 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     1002 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     1003 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     1004 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     1005 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     1006 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     1007 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                     1008 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     1009 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     1010 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     1011 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     1012 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     1013 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     1014 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     1015 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1016 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1017 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1018 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1019 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1020 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1021 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1022 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1023 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml03                   1024 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml05                   1025 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml08                   1026 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml09                   1027 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml11                   1028 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml21                   1029 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml22                   1030 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml24                   1031 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml26                   1032 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml28                   1033 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml31                   1034 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml32                   1035 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml33                   1036 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml34                   1037 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml38                   1038 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml61                   1039 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml62                   1040 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml67                   1041 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml68                   1042 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml81                   1043 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml82                   1044 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmprml84                   1045 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT15 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg         1046 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1047 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus      1048 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus       1049 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus       1050 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus      1051 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1052 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1053 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1054 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1055 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1056 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1057 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1058 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1059 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1060 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1061 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1062 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1063 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1064 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1065 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1066 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1067 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1068 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1069 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1070 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1071 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1072 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1073 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1074 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1075 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1076 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1077 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1078 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1079 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1080 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1081 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1082 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1083 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1084 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1085 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1086 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1087 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1088 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1089 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1090 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1091 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1092 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1093 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1094 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1095 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1096 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1097 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1098 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1099 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1100 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1101 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1102 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1103 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1104 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1105 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1106 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1107 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1108 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1109 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1110 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1111 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1112 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1113 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1114 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1115 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1116 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1117 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1118 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1119 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1120 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1121 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1122 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1123 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1124 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1125 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1126 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1127 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1128 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1129 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1130 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1131 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1132 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1133 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1134 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1135 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1136 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1137 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1138 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1139 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1140 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1141 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1142 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1143 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1144 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1145 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1146 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1147 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1148 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1149 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1150 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1151 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1152 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1153 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1154 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1155 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1156 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1157 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1158 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1159 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1160 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1161 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1162 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1163 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1164 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1165 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1166 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1167 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1168 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1169 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1170 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1171 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1172 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1173 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1174 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1175 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1176 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1177 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1178 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1179 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1180 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1181 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1182 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1183 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1184 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1185 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1186 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1187 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1188 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1189 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1190 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1191 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1192 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1193 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1194 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1195 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1196 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1197 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1198 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                 1199 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                1200 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                 1201 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                 1202 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus              1203 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                1204 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1205 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1206 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1207 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1208 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1209 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1210
    #define prmrisend02risov            1211
    #define prmriseta02risov            1212
    #define prmrisrole02risov           1213
    #define prmrissubrole02risov        1214
    #define prmrisstationtype02risov    1215
    #define prmrisapproachid02risov     1216
    #define prmrislaneid02risov_1       1217
    #define prmrislaneid02risov_2       1218
    #define prmrto02risvrw              1219 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1220 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1221 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1222 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1223 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1224
    #define prmrisend02risvrw           1225
    #define prmriseta02risvrw           1226
    #define prmrisrole02risvrw          1227
    #define prmrissubrole02risvrw       1228
    #define prmrisstationtype02risvrw   1229
    #define prmrisapproachid02risvrw    1230
    #define prmrislaneid02risvrw_1      1231
    #define prmrislaneid02risvrw_2      1232
    #define prmrto03bus                 1233 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1234 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1235 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1236 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1237 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1238 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1239 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1240 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1241 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1242 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1243 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1244
    #define prmrisend03risov            1245
    #define prmriseta03risov            1246
    #define prmrisrole03risov           1247
    #define prmrissubrole03risov        1248
    #define prmrisstationtype03risov    1249
    #define prmrisapproachid03risov     1250
    #define prmrislaneid03risov_1       1251
    #define prmrto03risvrw              1252 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1253 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1254 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1255 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1256 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1257
    #define prmrisend03risvrw           1258
    #define prmriseta03risvrw           1259
    #define prmrisrole03risvrw          1260
    #define prmrissubrole03risvrw       1261
    #define prmrisstationtype03risvrw   1262
    #define prmrisapproachid03risvrw    1263
    #define prmrislaneid03risvrw_1      1264
    #define prmrto05bus                 1265 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1266 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1267 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1268 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1269 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1270 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1271 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1272 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1273 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1274 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1275 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1276
    #define prmrisend05risov            1277
    #define prmriseta05risov            1278
    #define prmrisrole05risov           1279
    #define prmrissubrole05risov        1280
    #define prmrisstationtype05risov    1281
    #define prmrisapproachid05risov     1282
    #define prmrislaneid05risov_1       1283
    #define prmrto05risvrw              1284 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw             1285 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw              1286 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw              1287 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw             1288 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw         1289
    #define prmrisend05risvrw           1290
    #define prmriseta05risvrw           1291
    #define prmrisrole05risvrw          1292
    #define prmrissubrole05risvrw       1293
    #define prmrisstationtype05risvrw   1294
    #define prmrisapproachid05risvrw    1295
    #define prmrislaneid05risvrw_1      1296
    #define prmrto08bus                 1297 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1298 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1299 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1300 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1301 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1302 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1303 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1304 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1305 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1306 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1307 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1308
    #define prmrisend08risov            1309
    #define prmriseta08risov            1310
    #define prmrisrole08risov           1311
    #define prmrissubrole08risov        1312
    #define prmrisstationtype08risov    1313
    #define prmrisapproachid08risov     1314
    #define prmrislaneid08risov_1       1315
    #define prmrislaneid08risov_2       1316
    #define prmrto08risvrw              1317 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1318 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1319 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1320 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1321 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1322
    #define prmrisend08risvrw           1323
    #define prmriseta08risvrw           1324
    #define prmrisrole08risvrw          1325
    #define prmrissubrole08risvrw       1326
    #define prmrisstationtype08risvrw   1327
    #define prmrisapproachid08risvrw    1328
    #define prmrislaneid08risvrw_1      1329
    #define prmrislaneid08risvrw_2      1330
    #define prmrto09bus                 1331 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1332 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1333 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1334 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1335 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1336 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1337 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1338 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1339 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1340 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1341 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1342
    #define prmrisend09risov            1343
    #define prmriseta09risov            1344
    #define prmrisrole09risov           1345
    #define prmrissubrole09risov        1346
    #define prmrisstationtype09risov    1347
    #define prmrisapproachid09risov     1348
    #define prmrislaneid09risov_1       1349
    #define prmrto09risvrw              1350 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw             1351 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw              1352 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw              1353 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw             1354 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw         1355
    #define prmrisend09risvrw           1356
    #define prmriseta09risvrw           1357
    #define prmrisrole09risvrw          1358
    #define prmrissubrole09risvrw       1359
    #define prmrisstationtype09risvrw   1360
    #define prmrisapproachid09risvrw    1361
    #define prmrislaneid09risvrw_1      1362
    #define prmrto11bus                 1363 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                1364 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                 1365 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                 1366 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus              1367 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                1368 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov               1369 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov              1370 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov               1371 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov               1372 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov              1373 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov          1374
    #define prmrisend11risov            1375
    #define prmriseta11risov            1376
    #define prmrisrole11risov           1377
    #define prmrissubrole11risov        1378
    #define prmrisstationtype11risov    1379
    #define prmrisapproachid11risov     1380
    #define prmrislaneid11risov_1       1381
    #define prmrto11risvrw              1382 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw             1383 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw              1384 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw              1385 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw             1386 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw         1387
    #define prmrisend11risvrw           1388
    #define prmriseta11risvrw           1389
    #define prmrisrole11risvrw          1390
    #define prmrissubrole11risvrw       1391
    #define prmrisstationtype11risvrw   1392
    #define prmrisapproachid11risvrw    1393
    #define prmrislaneid11risvrw_1      1394
    #define prmftsblok22fietsfiets      1395 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1396 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets    1397 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets     1398 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets 1399 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets               1400 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1401 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1402 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1403 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1404 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets          1405
    #define prmrisend22fiets            1406
    #define prmrisrole22fiets           1407
    #define prmrissubrole22fiets        1408
    #define prmrisstationtype22fiets    1409
    #define prmrisapproachid22fiets     1410
    #define prmrislaneid22fiets_1       1411
    #define prmrislaneid22fiets_2       1412
    #define prmftsblok28fietsfiets      1413 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 1414 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets    1415 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets     1416 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets 1417 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets               1418 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              1419 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               1420 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               1421 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmprio28fiets              1422 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets          1423
    #define prmrisend28fiets            1424
    #define prmrisrole28fiets           1425
    #define prmrissubrole28fiets        1426
    #define prmrisstationtype28fiets    1427
    #define prmrisapproachid28fiets     1428
    #define prmrislaneid28fiets_1       1429
    #define prmrto61bus                 1430 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1431 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1432 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1433 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1434 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1435 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1436 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1437 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1438 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1439 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1440 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1441
    #define prmrisend61risov            1442
    #define prmriseta61risov            1443
    #define prmrisrole61risov           1444
    #define prmrissubrole61risov        1445
    #define prmrisstationtype61risov    1446
    #define prmrisapproachid61risov     1447
    #define prmrislaneid61risov_1       1448
    #define prmrto61risvrw              1449 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1450 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1451 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1452 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1453 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1454
    #define prmrisend61risvrw           1455
    #define prmriseta61risvrw           1456
    #define prmrisrole61risvrw          1457
    #define prmrissubrole61risvrw       1458
    #define prmrisstationtype61risvrw   1459
    #define prmrisapproachid61risvrw    1460
    #define prmrislaneid61risvrw_1      1461
    #define prmrto62bus                 1462 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1463 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1464 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1465 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1466 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1467 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1468 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1469 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1470 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1471 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1472 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1473
    #define prmrisend62risov            1474
    #define prmriseta62risov            1475
    #define prmrisrole62risov           1476
    #define prmrissubrole62risov        1477
    #define prmrisstationtype62risov    1478
    #define prmrisapproachid62risov     1479
    #define prmrislaneid62risov_1       1480
    #define prmrislaneid62risov_2       1481
    #define prmrto62risvrw              1482 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1483 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1484 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1485 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1486 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1487
    #define prmrisend62risvrw           1488
    #define prmriseta62risvrw           1489
    #define prmrisrole62risvrw          1490
    #define prmrissubrole62risvrw       1491
    #define prmrisstationtype62risvrw   1492
    #define prmrisapproachid62risvrw    1493
    #define prmrislaneid62risvrw_1      1494
    #define prmrislaneid62risvrw_2      1495
    #define prmrto67bus                 1496 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1497 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1498 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1499 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1500 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1501 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1502 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1503 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1504 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1505 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1506 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1507
    #define prmrisend67risov            1508
    #define prmriseta67risov            1509
    #define prmrisrole67risov           1510
    #define prmrissubrole67risov        1511
    #define prmrisstationtype67risov    1512
    #define prmrisapproachid67risov     1513
    #define prmrislaneid67risov_1       1514
    #define prmrto67risvrw              1515 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1516 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1517 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1518 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1519 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1520
    #define prmrisend67risvrw           1521
    #define prmriseta67risvrw           1522
    #define prmrisrole67risvrw          1523
    #define prmrissubrole67risvrw       1524
    #define prmrisstationtype67risvrw   1525
    #define prmrisapproachid67risvrw    1526
    #define prmrislaneid67risvrw_1      1527
    #define prmrto68bus                 1528 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1529 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1530 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1531 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1532 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1533 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1534 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1535 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1536 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1537 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1538 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1539
    #define prmrisend68risov            1540
    #define prmriseta68risov            1541
    #define prmrisrole68risov           1542
    #define prmrissubrole68risov        1543
    #define prmrisstationtype68risov    1544
    #define prmrisapproachid68risov     1545
    #define prmrislaneid68risov_1       1546
    #define prmrislaneid68risov_2       1547
    #define prmrto68risvrw              1548 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1549 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1550 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1551 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1552 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1553
    #define prmrisend68risvrw           1554
    #define prmriseta68risvrw           1555
    #define prmrisrole68risvrw          1556
    #define prmrissubrole68risvrw       1557
    #define prmrisstationtype68risvrw   1558
    #define prmrisapproachid68risvrw    1559
    #define prmrislaneid68risvrw_1      1560
    #define prmrislaneid68risvrw_2      1561
    #define prmpriohd02                 1562 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1563 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1564 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1565 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1566
    #define prmrisend02hd               1567
    #define prmriseta02hd               1568
    #define prmrisrole02hd              1569
    #define prmrissubrole02hd           1570
    #define prmrisstationtype02hd       1571
    #define prmrisapproachid02hd        1572
    #define prmrislaneid02hd_1          1573
    #define prmrislaneid02hd_2          1574
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
    #define prmstkp1                    1706 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1707 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1708 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1709 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1710 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1711 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1712 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1713 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1714 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1715 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1716 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1717 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1718 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1719 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1720 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1721 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1722 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1723 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1724 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1725 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1726 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1727 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1728 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1729 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1730 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1731 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1732 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3          1733 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3          1734 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3          1735 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmstkpStar02               1736 /* Start klokperiode Star02                                                                                                       */
    #define prmetkpStar02               1737 /* Einde klokperiode Star02                                                                                                       */
    #define prmdckpStar02               1738 /* Dagsoort klokperiode Star02                                                                                                    */
    #define prmstkpStar01               1739 /* Start klokperiode Star01                                                                                                       */
    #define prmetkpStar01               1740 /* Einde klokperiode Star01                                                                                                       */
    #define prmdckpStar01               1741 /* Dagsoort klokperiode Star01                                                                                                    */
    #define prmvg1_02                   1742 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1743 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1744 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1745 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1746 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1747 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1748 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1749 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1750 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1751 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1752 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1753 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1754 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1755 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1756 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1757 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1758 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1759 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1760 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1761 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1762 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1763 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1764 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1765 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1766 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1767 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1768 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1769 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1770 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1771 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1772 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1773 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1774 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1775 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1776 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1777 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1778 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1779 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1780 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1781 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1782 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1783 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1784 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1785 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1786 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1787 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1788 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1789 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1790 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1791 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1792 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1793 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1794 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1795 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1796 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1797 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1798 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1799 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1800 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1801 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1802 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1803 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1804 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1805 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1806 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1807 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1808 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1809 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1810 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1811 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1812 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1813 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1814 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1815 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1816 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1817 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1818 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1819 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1820 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1821 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1822 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1823 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1824 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1825 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1826 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1827 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1828 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1829 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1830 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1831 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1832 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1833 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1834 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1835 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1836 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1837 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1838 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1839 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1840 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1841 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1842 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1843 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1844 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1845 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1846 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1847 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1848 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1849 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1850 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1851 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1852 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1853 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1854 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1855 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1856 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1857 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1858 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1859 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1860 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1861 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1862 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1863 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1864 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1865 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1866 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1867 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmrisapproachid02          1868 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1869 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1870 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1871 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1872 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1873 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1874 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1875 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1876 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1877 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1878 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1879 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1880 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1881 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1882 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1883 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1884 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1885 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1886 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1887 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1888 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1889 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1890 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1891 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1892 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1893 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1894 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1895 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1896 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1897 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1898 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1899 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1900 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1901 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1902 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1903 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1904 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1905 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1906 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1907 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1908 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1909 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1910 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1911 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1912 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1913 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1914 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1915 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1916 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1917 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1918 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1919 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1920 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1921 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1922 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1923 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1924 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1925 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1926 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1927 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1928 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1929 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1930 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1931 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1932 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1933 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1934 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1935 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart03mveh1         1936 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1937 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1938 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1939 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1940 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1941 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1942 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1943 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1944 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1945 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1946 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1947 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1948 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1949 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart24fts1          1950 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1951 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1952 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1953 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1954 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1955 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1956 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1957 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1958 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1959 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1960 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1961 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1962 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1963 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1964 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1965 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1966 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1967 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1968 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1969 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1970 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1971 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1972 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1973 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1974 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1975 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1976 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1977 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1978 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1979 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1980 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1981 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1982 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1983 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1984 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1985 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         1986 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1987 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          1988 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1989 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          1990 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1991 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          1992 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1993 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend03mveh1           1994 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1995 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1996 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1997 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1998 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1999 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           2000 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       2001 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           2002 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       2003 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           2004 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       2005 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            2006 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        2007 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend24fts1            2008 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        2009 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            2010 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        2011 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            2012 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        2013 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            2014 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        2015 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            2016 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        2017 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            2018 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        2019 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            2020 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        2021 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            2022 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        2023 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            2024 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        2025 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            2026 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        2027 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            2028 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        2029 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            2030 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        2031 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            2032 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        2033 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           2034 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       2035 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           2036 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       2037 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           2038 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       2039 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           2040 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       2041 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           2042 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       2043 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           2044 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       2045 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            2046 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        2047 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            2048 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        2049 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            2050 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        2051 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart03mveh1         2052 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     2053 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         2054 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     2055 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         2056 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     2057 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         2058 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     2059 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         2060 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     2061 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         2062 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     2063 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          2064 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      2065 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart24fts1          2066 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      2067 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          2068 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      2069 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          2070 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      2071 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          2072 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      2073 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          2074 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      2075 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          2076 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      2077 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          2078 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      2079 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          2080 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      2081 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          2082 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      2083 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          2084 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      2085 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          2086 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      2087 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          2088 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      2089 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          2090 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      2091 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         2092 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     2093 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         2094 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     2095 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         2096 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     2097 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         2098 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     2099 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         2100 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     2101 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         2102 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     2103 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          2104 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      2105 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          2106 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      2107 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          2108 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      2109 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend03mveh1           2110 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       2111 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           2112 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       2113 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           2114 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       2115 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           2116 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       2117 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           2118 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       2119 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           2120 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       2121 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            2122 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        2123 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend24fts1            2124 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        2125 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            2126 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        2127 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            2128 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        2129 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            2130 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        2131 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            2132 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        2133 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            2134 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        2135 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            2136 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        2137 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            2138 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        2139 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            2140 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        2141 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            2142 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        2143 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            2144 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        2145 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            2146 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        2147 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            2148 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        2149 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           2150 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       2151 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           2152 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       2153 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           2154 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       2155 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           2156 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       2157 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           2158 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       2159 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           2160 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       2161 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            2162 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        2163 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            2164 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        2165 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            2166 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        2167 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          2168 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          2169 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          2170 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            2171 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            2172 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            2173 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                2174 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2175 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2176 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2177 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2178 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2179 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2180 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2181 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2182 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2183 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2184 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2185 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2186 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2187 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2188 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2189 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                2190 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2191 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2192 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2193 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2194 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2195 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                2196 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                2197 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmsiexgrperc33             2198 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             2199 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               2200 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               2201 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  2202 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  2203 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  2204 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  2205 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  2206 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  2207 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  2208 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  2209 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  2210 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  2211 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  2212 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  2213 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  2214 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  2215 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  2216 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  2217 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  2218 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  2219 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  2220 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  2221 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  2222 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  2223 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  2224 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   2225 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   2226 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   2227 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   2228 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   2229 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   2230 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   2231 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   2232 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   2233 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   2234 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   2235 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   2236 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   2237 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   2238 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   2239 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 2240 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   2241 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2434                 2242 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg26                   2243 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   2244 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   2245 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   2246 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   2247 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   2248 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   2249 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   2250 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 2251 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   2252 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltg38                   2253 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   2254 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   2255 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   2256 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   2257 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   2258 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   2259 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   2260 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   2261 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   2262 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   2263 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   2264 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   2265 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   2266 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   2267 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmstarprogdef              2268 /* Default star programma                                                                                                         */
    #define prmctijdstar01              2269 /* Cyclustijd star programma star01                                                                                               */
    #define prmstart1star0102           2270 /* Start realisatie 1 fase 02 star programma star01                                                                               */
    #define prmeind1star0102            2271 /* Einde realisatie 1 fase 02 star programma star01                                                                               */
    #define prmstart1star0103           2272 /* Start realisatie 1 fase 03 star programma star01                                                                               */
    #define prmeind1star0103            2273 /* Einde realisatie 1 fase 03 star programma star01                                                                               */
    #define prmstart1star0105           2274 /* Start realisatie 1 fase 05 star programma star01                                                                               */
    #define prmeind1star0105            2275 /* Einde realisatie 1 fase 05 star programma star01                                                                               */
    #define prmstart1star0108           2276 /* Start realisatie 1 fase 08 star programma star01                                                                               */
    #define prmeind1star0108            2277 /* Einde realisatie 1 fase 08 star programma star01                                                                               */
    #define prmstart1star0109           2278 /* Start realisatie 1 fase 09 star programma star01                                                                               */
    #define prmeind1star0109            2279 /* Einde realisatie 1 fase 09 star programma star01                                                                               */
    #define prmstart1star0111           2280 /* Start realisatie 1 fase 11 star programma star01                                                                               */
    #define prmeind1star0111            2281 /* Einde realisatie 1 fase 11 star programma star01                                                                               */
    #define prmstart1star0121           2282 /* Start realisatie 1 fase 21 star programma star01                                                                               */
    #define prmeind1star0121            2283 /* Einde realisatie 1 fase 21 star programma star01                                                                               */
    #define prmstart1star0122           2284 /* Start realisatie 1 fase 22 star programma star01                                                                               */
    #define prmeind1star0122            2285 /* Einde realisatie 1 fase 22 star programma star01                                                                               */
    #define prmstart1star0124           2286 /* Start realisatie 1 fase 24 star programma star01                                                                               */
    #define prmeind1star0124            2287 /* Einde realisatie 1 fase 24 star programma star01                                                                               */
    #define prmstart1star0126           2288 /* Start realisatie 1 fase 26 star programma star01                                                                               */
    #define prmeind1star0126            2289 /* Einde realisatie 1 fase 26 star programma star01                                                                               */
    #define prmstart1star0128           2290 /* Start realisatie 1 fase 28 star programma star01                                                                               */
    #define prmeind1star0128            2291 /* Einde realisatie 1 fase 28 star programma star01                                                                               */
    #define prmstart1star0131           2292 /* Start realisatie 1 fase 31 star programma star01                                                                               */
    #define prmeind1star0131            2293 /* Einde realisatie 1 fase 31 star programma star01                                                                               */
    #define prmstart1star0132           2294 /* Start realisatie 1 fase 32 star programma star01                                                                               */
    #define prmeind1star0132            2295 /* Einde realisatie 1 fase 32 star programma star01                                                                               */
    #define prmstart1star0133           2296 /* Start realisatie 1 fase 33 star programma star01                                                                               */
    #define prmeind1star0133            2297 /* Einde realisatie 1 fase 33 star programma star01                                                                               */
    #define prmstart1star0134           2298 /* Start realisatie 1 fase 34 star programma star01                                                                               */
    #define prmeind1star0134            2299 /* Einde realisatie 1 fase 34 star programma star01                                                                               */
    #define prmstart1star0138           2300 /* Start realisatie 1 fase 38 star programma star01                                                                               */
    #define prmeind1star0138            2301 /* Einde realisatie 1 fase 38 star programma star01                                                                               */
    #define prmstart1star0161           2302 /* Start realisatie 1 fase 61 star programma star01                                                                               */
    #define prmeind1star0161            2303 /* Einde realisatie 1 fase 61 star programma star01                                                                               */
    #define prmstart1star0162           2304 /* Start realisatie 1 fase 62 star programma star01                                                                               */
    #define prmeind1star0162            2305 /* Einde realisatie 1 fase 62 star programma star01                                                                               */
    #define prmstart1star0167           2306 /* Start realisatie 1 fase 67 star programma star01                                                                               */
    #define prmeind1star0167            2307 /* Einde realisatie 1 fase 67 star programma star01                                                                               */
    #define prmstart1star0168           2308 /* Start realisatie 1 fase 68 star programma star01                                                                               */
    #define prmeind1star0168            2309 /* Einde realisatie 1 fase 68 star programma star01                                                                               */
    #define prmstart1star0181           2310 /* Start realisatie 1 fase 81 star programma star01                                                                               */
    #define prmeind1star0181            2311 /* Einde realisatie 1 fase 81 star programma star01                                                                               */
    #define prmstart1star0182           2312 /* Start realisatie 1 fase 82 star programma star01                                                                               */
    #define prmeind1star0182            2313 /* Einde realisatie 1 fase 82 star programma star01                                                                               */
    #define prmstart1star0184           2314 /* Start realisatie 1 fase 84 star programma star01                                                                               */
    #define prmeind1star0184            2315 /* Einde realisatie 1 fase 84 star programma star01                                                                               */
    #define prmctijdstar02              2316 /* Cyclustijd star programma star02                                                                                               */
    #define prmstart1star0202           2317 /* Start realisatie 1 fase 02 star programma star02                                                                               */
    #define prmeind1star0202            2318 /* Einde realisatie 1 fase 02 star programma star02                                                                               */
    #define prmstart1star0203           2319 /* Start realisatie 1 fase 03 star programma star02                                                                               */
    #define prmeind1star0203            2320 /* Einde realisatie 1 fase 03 star programma star02                                                                               */
    #define prmstart1star0205           2321 /* Start realisatie 1 fase 05 star programma star02                                                                               */
    #define prmeind1star0205            2322 /* Einde realisatie 1 fase 05 star programma star02                                                                               */
    #define prmstart1star0208           2323 /* Start realisatie 1 fase 08 star programma star02                                                                               */
    #define prmeind1star0208            2324 /* Einde realisatie 1 fase 08 star programma star02                                                                               */
    #define prmstart1star0209           2325 /* Start realisatie 1 fase 09 star programma star02                                                                               */
    #define prmeind1star0209            2326 /* Einde realisatie 1 fase 09 star programma star02                                                                               */
    #define prmstart1star0211           2327 /* Start realisatie 1 fase 11 star programma star02                                                                               */
    #define prmeind1star0211            2328 /* Einde realisatie 1 fase 11 star programma star02                                                                               */
    #define prmstart1star0221           2329 /* Start realisatie 1 fase 21 star programma star02                                                                               */
    #define prmeind1star0221            2330 /* Einde realisatie 1 fase 21 star programma star02                                                                               */
    #define prmstart1star0222           2331 /* Start realisatie 1 fase 22 star programma star02                                                                               */
    #define prmeind1star0222            2332 /* Einde realisatie 1 fase 22 star programma star02                                                                               */
    #define prmstart1star0224           2333 /* Start realisatie 1 fase 24 star programma star02                                                                               */
    #define prmeind1star0224            2334 /* Einde realisatie 1 fase 24 star programma star02                                                                               */
    #define prmstart1star0226           2335 /* Start realisatie 1 fase 26 star programma star02                                                                               */
    #define prmeind1star0226            2336 /* Einde realisatie 1 fase 26 star programma star02                                                                               */
    #define prmstart1star0228           2337 /* Start realisatie 1 fase 28 star programma star02                                                                               */
    #define prmeind1star0228            2338 /* Einde realisatie 1 fase 28 star programma star02                                                                               */
    #define prmstart1star0231           2339 /* Start realisatie 1 fase 31 star programma star02                                                                               */
    #define prmeind1star0231            2340 /* Einde realisatie 1 fase 31 star programma star02                                                                               */
    #define prmstart1star0232           2341 /* Start realisatie 1 fase 32 star programma star02                                                                               */
    #define prmeind1star0232            2342 /* Einde realisatie 1 fase 32 star programma star02                                                                               */
    #define prmstart1star0233           2343 /* Start realisatie 1 fase 33 star programma star02                                                                               */
    #define prmeind1star0233            2344 /* Einde realisatie 1 fase 33 star programma star02                                                                               */
    #define prmstart1star0234           2345 /* Start realisatie 1 fase 34 star programma star02                                                                               */
    #define prmeind1star0234            2346 /* Einde realisatie 1 fase 34 star programma star02                                                                               */
    #define prmstart1star0238           2347 /* Start realisatie 1 fase 38 star programma star02                                                                               */
    #define prmeind1star0238            2348 /* Einde realisatie 1 fase 38 star programma star02                                                                               */
    #define prmstart1star0261           2349 /* Start realisatie 1 fase 61 star programma star02                                                                               */
    #define prmeind1star0261            2350 /* Einde realisatie 1 fase 61 star programma star02                                                                               */
    #define prmstart1star0262           2351 /* Start realisatie 1 fase 62 star programma star02                                                                               */
    #define prmeind1star0262            2352 /* Einde realisatie 1 fase 62 star programma star02                                                                               */
    #define prmstart1star0267           2353 /* Start realisatie 1 fase 67 star programma star02                                                                               */
    #define prmeind1star0267            2354 /* Einde realisatie 1 fase 67 star programma star02                                                                               */
    #define prmstart1star0268           2355 /* Start realisatie 1 fase 68 star programma star02                                                                               */
    #define prmeind1star0268            2356 /* Einde realisatie 1 fase 68 star programma star02                                                                               */
    #define prmstart1star0281           2357 /* Start realisatie 1 fase 81 star programma star02                                                                               */
    #define prmeind1star0281            2358 /* Einde realisatie 1 fase 81 star programma star02                                                                               */
    #define prmstart1star0282           2359 /* Start realisatie 1 fase 82 star programma star02                                                                               */
    #define prmeind1star0282            2360 /* Einde realisatie 1 fase 82 star programma star02                                                                               */
    #define prmstart1star0284           2361 /* Start realisatie 1 fase 84 star programma star02                                                                               */
    #define prmeind1star0284            2362 /* Einde realisatie 1 fase 84 star programma star02                                                                               */
    #define prmstarprogStar01           2363 /* Noodprogramma bij periode Star01                                                                                               */
    #define prmstarprogStar02           2364 /* Noodprogramma bij periode Star02                                                                                               */
    #define prmttxconfidence15          2365
    #define prmlatencyminendsg          2366
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              2367 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               2368 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               2369 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     2370
#else
    #define PRMMAX1                     2367
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
    #define prioFC61bus 20
    #define prioFC61risov 21
    #define prioFC61risvrw 22
    #define prioFC62bus 23
    #define prioFC62risov 24
    #define prioFC62risvrw 25
    #define prioFC67bus 26
    #define prioFC67risov 27
    #define prioFC67risvrw 28
    #define prioFC68bus 29
    #define prioFC68risov 30
    #define prioFC68risvrw 31
    #define hdFC02 32
    #define hdFC03 33
    #define hdFC05 34
    #define hdFC08 35
    #define hdFC09 36
    #define hdFC11 37
    #define hdFC61 38
    #define hdFC62 39
    #define hdFC67 40
    #define hdFC68 41
    #define prioFCMAX 42

/* modulen */
/* ------- */
    #define MLMAX1 5 /* aantal modulen */

/* signaalplannen */
/* -------------- */
    #define PLMAX1 3 /* aantal signaalplannen */

/* starre programma's */
/* ------------------ */
    #define STAR1 0 /* programma star01 */
    #define STAR2 1 /* programma star02 */
    #define STARMAX 2 /* aantal starre programmas */

/* Aantal perioden voor max groen */
/* ------- */
    #define MPERIODMAX 8 /* aantal groenperioden */

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    #define TESTOMGEVING
#endif

/* Systeem naam in het topologiebestand */
/* ------------------------------------ */
#define SYSTEM_ITF1 "123456"

/* Definitie lane id in het topologiebestand */
/* ----------------------------------------- */
#define ris_conflict_gebied    0 /* connection tussen alle ingress lanes en egress lanes */

/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

