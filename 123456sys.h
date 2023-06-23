/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.0
   CCOLGEN:   12.4.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 12.4.0   27-03-2023   TLCGen      Ontwikkel versie TLCGen (portable)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.4.0 20230327"
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
    #define usovtevroeg02bus (FCMAX +  15) /* Voorste OV voertuig bij 02 te vroeg Bus                 */
    #define usovoptijd02bus  (FCMAX +  16) /* Voorste OV voertuig bij 02 op tijd Bus                  */
    #define usovtelaat02bus  (FCMAX +  17) /* Voorste OV voertuig bij 02 te laat Bus                  */
    #define usovtevroeg03bus (FCMAX +  18) /* Voorste OV voertuig bij 03 te vroeg Bus                 */
    #define usovoptijd03bus  (FCMAX +  19) /* Voorste OV voertuig bij 03 op tijd Bus                  */
    #define usovtelaat03bus  (FCMAX +  20) /* Voorste OV voertuig bij 03 te laat Bus                  */
    #define usovtevroeg05bus (FCMAX +  21) /* Voorste OV voertuig bij 05 te vroeg Bus                 */
    #define usovoptijd05bus  (FCMAX +  22) /* Voorste OV voertuig bij 05 op tijd Bus                  */
    #define usovtelaat05bus  (FCMAX +  23) /* Voorste OV voertuig bij 05 te laat Bus                  */
    #define usovtevroeg08bus (FCMAX +  24) /* Voorste OV voertuig bij 08 te vroeg Bus                 */
    #define usovoptijd08bus  (FCMAX +  25) /* Voorste OV voertuig bij 08 op tijd Bus                  */
    #define usovtelaat08bus  (FCMAX +  26) /* Voorste OV voertuig bij 08 te laat Bus                  */
    #define usovtevroeg09bus (FCMAX +  27) /* Voorste OV voertuig bij 09 te vroeg Bus                 */
    #define usovoptijd09bus  (FCMAX +  28) /* Voorste OV voertuig bij 09 op tijd Bus                  */
    #define usovtelaat09bus  (FCMAX +  29) /* Voorste OV voertuig bij 09 te laat Bus                  */
    #define usovtevroeg11bus (FCMAX +  30) /* Voorste OV voertuig bij 11 te vroeg Bus                 */
    #define usovoptijd11bus  (FCMAX +  31) /* Voorste OV voertuig bij 11 op tijd Bus                  */
    #define usovtelaat11bus  (FCMAX +  32) /* Voorste OV voertuig bij 11 te laat Bus                  */
    #define usovtevroeg61bus (FCMAX +  33) /* Voorste OV voertuig bij 61 te vroeg Bus                 */
    #define usovoptijd61bus  (FCMAX +  34) /* Voorste OV voertuig bij 61 op tijd Bus                  */
    #define usovtelaat61bus  (FCMAX +  35) /* Voorste OV voertuig bij 61 te laat Bus                  */
    #define usovtevroeg62bus (FCMAX +  36) /* Voorste OV voertuig bij 62 te vroeg Bus                 */
    #define usovoptijd62bus  (FCMAX +  37) /* Voorste OV voertuig bij 62 op tijd Bus                  */
    #define usovtelaat62bus  (FCMAX +  38) /* Voorste OV voertuig bij 62 te laat Bus                  */
    #define usovtevroeg67bus (FCMAX +  39) /* Voorste OV voertuig bij 67 te vroeg Bus                 */
    #define usovoptijd67bus  (FCMAX +  40) /* Voorste OV voertuig bij 67 op tijd Bus                  */
    #define usovtelaat67bus  (FCMAX +  41) /* Voorste OV voertuig bij 67 te laat Bus                  */
    #define usovtevroeg68bus (FCMAX +  42) /* Voorste OV voertuig bij 68 te vroeg Bus                 */
    #define usovoptijd68bus  (FCMAX +  43) /* Voorste OV voertuig bij 68 op tijd Bus                  */
    #define usovtelaat68bus  (FCMAX +  44) /* Voorste OV voertuig bij 68 te laat Bus                  */
    #define usmaxwt          (FCMAX +  45) /* Verklikken maximale wachttijd overschreden              */
    #define uskarmelding     (FCMAX +  46) /* Verklikken ontvangst melding KAR                        */
    #define uskarog          (FCMAX +  47) /* Verklikken ondergedrag KAR                              */
    #define usovinm02bus     (FCMAX +  48) /* Verklikken inmelding OV fase 02                         */
    #define usovinm02risov   (FCMAX +  49) /* Verklikken inmelding OV fase 02                         */
    #define usovinm02risvrw  (FCMAX +  50) /* Verklikken inmelding OV fase 02                         */
    #define usovinm03bus     (FCMAX +  51) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risov   (FCMAX +  52) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risvrw  (FCMAX +  53) /* Verklikken inmelding OV fase 03                         */
    #define usovinm05bus     (FCMAX +  54) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risov   (FCMAX +  55) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risvrw  (FCMAX +  56) /* Verklikken inmelding OV fase 05                         */
    #define usovinm08bus     (FCMAX +  57) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risov   (FCMAX +  58) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risvrw  (FCMAX +  59) /* Verklikken inmelding OV fase 08                         */
    #define usovinm09bus     (FCMAX +  60) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risov   (FCMAX +  61) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risvrw  (FCMAX +  62) /* Verklikken inmelding OV fase 09                         */
    #define usovinm11bus     (FCMAX +  63) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risov   (FCMAX +  64) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risvrw  (FCMAX +  65) /* Verklikken inmelding OV fase 11                         */
    #define usovinm22fiets   (FCMAX +  66) /* Verklikken inmelding OV fase 22                         */
    #define usovinm28fiets   (FCMAX +  67) /* Verklikken inmelding OV fase 28                         */
    #define usovinm61bus     (FCMAX +  68) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risov   (FCMAX +  69) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risvrw  (FCMAX +  70) /* Verklikken inmelding OV fase 61                         */
    #define usovinm62bus     (FCMAX +  71) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risov   (FCMAX +  72) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risvrw  (FCMAX +  73) /* Verklikken inmelding OV fase 62                         */
    #define usovinm67bus     (FCMAX +  74) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risov   (FCMAX +  75) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risvrw  (FCMAX +  76) /* Verklikken inmelding OV fase 67                         */
    #define usovinm68bus     (FCMAX +  77) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risov   (FCMAX +  78) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risvrw  (FCMAX +  79) /* Verklikken inmelding OV fase 68                         */
    #define ushdinm02        (FCMAX +  80) /* Verklikken inmelding HD fase 02                         */
    #define ushdinm03        (FCMAX +  81) /* Verklikken inmelding HD fase 03                         */
    #define ushdinm05        (FCMAX +  82) /* Verklikken inmelding HD fase 05                         */
    #define ushdinm08        (FCMAX +  83) /* Verklikken inmelding HD fase 08                         */
    #define ushdinm09        (FCMAX +  84) /* Verklikken inmelding HD fase 09                         */
    #define ushdinm11        (FCMAX +  85) /* Verklikken inmelding HD fase 11                         */
    #define ushdinm61        (FCMAX +  86) /* Verklikken inmelding HD fase 61                         */
    #define ushdinm62        (FCMAX +  87) /* Verklikken inmelding HD fase 62                         */
    #define ushdinm67        (FCMAX +  88) /* Verklikken inmelding HD fase 67                         */
    #define ushdinm68        (FCMAX +  89) /* Verklikken inmelding HD fase 68                         */
    #define usperdef         (FCMAX +  90) /* Default periode actief                                  */
    #define usper1           (FCMAX +  91) /* Periode Reserve actief                                  */
    #define usperoFietsprio1 (FCMAX +  92) /* Periode actief                                          */
    #define usperoFietsprio2 (FCMAX +  93) /* Periode actief                                          */
    #define usperoFietsprio3 (FCMAX +  94) /* Periode actief                                          */
    #define usper2           (FCMAX +  95) /* Periode Dag periode actief                              */
    #define usper3           (FCMAX +  96) /* Periode Ochtendspits actief                             */
    #define usper4           (FCMAX +  97) /* Periode Avondspits actief                               */
    #define usper5           (FCMAX +  98) /* Periode Koopavond actief                                */
    #define usper6           (FCMAX +  99) /* Periode Weekend actief                                  */
    #define usper7           (FCMAX + 100) /* Periode Reserve actief                                  */
    #define usrgv            (FCMAX + 101) /* Verklikken actief zijn RoBuGrover                       */
    #define uswtv22          (FCMAX + 102) /* Verklikken aansturing wachttijdvoorspeller fase 22      */
    #define uswtk21          (FCMAX + 103) /* Aansturing waitsignaal detector k21                     */
    #define uswtk22          (FCMAX + 104) /* Aansturing waitsignaal detector k22                     */
    #define uswtk24          (FCMAX + 105) /* Aansturing waitsignaal detector k24                     */
    #define uswtk26          (FCMAX + 106) /* Aansturing waitsignaal detector k26                     */
    #define uswtk28          (FCMAX + 107) /* Aansturing waitsignaal detector k28                     */
    #define uswtk31a         (FCMAX + 108) /* Aansturing waitsignaal detector k31a                    */
    #define uswtk31b         (FCMAX + 109) /* Aansturing waitsignaal detector k31b                    */
    #define uswtk32a         (FCMAX + 110) /* Aansturing waitsignaal detector k32a                    */
    #define uswtk32b         (FCMAX + 111) /* Aansturing waitsignaal detector k32b                    */
    #define uswtk33a         (FCMAX + 112) /* Aansturing waitsignaal detector k33a                    */
    #define uswtk33b         (FCMAX + 113) /* Aansturing waitsignaal detector k33b                    */
    #define uswtk34a         (FCMAX + 114) /* Aansturing waitsignaal detector k34a                    */
    #define uswtk34b         (FCMAX + 115) /* Aansturing waitsignaal detector k34b                    */
    #define uswtk38a         (FCMAX + 116) /* Aansturing waitsignaal detector k38a                    */
    #define uswtk38b         (FCMAX + 117) /* Aansturing waitsignaal detector k38b                    */
    #define uswtk81          (FCMAX + 118) /* Aansturing waitsignaal detector k81                     */
    #define uswtk82          (FCMAX + 119) /* Aansturing waitsignaal detector k82                     */
    #define uswtk84          (FCMAX + 120) /* Aansturing waitsignaal detector k84                     */
    #define USMAX1           (FCMAX + 121)

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
    #define isfix              (DPMAX +  0) /* Fixatie regeling */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
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
    #define isris222cyclist    (DPMAX + 35)
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
    #define ISMAX1             (DPMAX +  1)
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
    #define hverleng_09_2            13 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3            14 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11           15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11          16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1            17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2            18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3            19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4            20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a                 21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk32a                 22 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk33a                 23 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk34a                 24 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hfileFile68af            25 /* File File68af actief                                               */
    #define hfile68_9a               26 /* File 68_9a actief                                                  */
    #define hfile68_9b               27 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af       28 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af       29 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hnla02_1a                30 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b                31 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a                32 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b                33 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1                 34 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 35 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 36 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 37 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 38 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 39 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 40 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus                41 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus                42 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                43 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                44 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                45 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                46 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                47 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                48 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                49 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                50 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus               51 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus             52 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus            53 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar          54 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar         55 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             56 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           57 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risov          58 /* Prioriteit uitmelding 02 NG                                        */
    #define hprioin02risovris        59 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risovris       60 /* Prioriteit uitmelding 02 NG                                        */
    #define hprio02risvrw            61 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          62 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         63 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       64 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      65 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus               66 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             67 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            68 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          69 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         70 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             71 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           72 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          73 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        74 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       75 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            76 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          77 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         78 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       79 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      80 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus               81 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus             82 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus            83 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar          84 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar         85 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov             86 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov           87 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov          88 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris        89 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris       90 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw            91 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw          92 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw         93 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris       94 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris      95 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus               96 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus             97 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus            98 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar          99 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        100 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            101 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          102 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         103 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       104 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      105 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           106 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         107 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        108 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      109 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     110 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              111 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            112 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           113 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         114 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        115 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            116 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          117 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         118 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       119 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      120 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           121 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         122 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        123 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      124 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     125 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              126 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            127 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           128 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         129 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        130 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            131 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          132 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         133 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       134 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      135 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           136 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         137 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        138 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      139 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     140 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            141 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          142 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         143 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets22_1 144 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    145 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            146 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          147 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         148 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 149 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    150 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61bus              151 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus            152 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus           153 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar         154 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar        155 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov            156 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov          157 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov         158 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris       159 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris      160 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw           161 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw         162 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw        163 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris      164 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris     165 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus              166 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus            167 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus           168 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar         169 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar        170 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov            171 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov          172 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov         173 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris       174 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris      175 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw           176 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw         177 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw        178 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris      179 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris     180 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus              181 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus            182 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus           183 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar         184 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar        185 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov            186 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov          187 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov         188 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris       189 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris      190 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw           191 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw         192 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw        193 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris      194 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris     195 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus              196 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus            197 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus           198 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar         199 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar        200 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov            201 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov          202 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov         203 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris       204 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris      205 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw           206 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw         207 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw        208 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris      209 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris     210 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                   211 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                 212 /* HD inmelding 02                                                    */
    #define hhduit02                213 /* HD uitmelding 02                                                   */
    #define hhdin02kar              214 /* HD inmelding 02                                                    */
    #define hhduit02kar             215 /* HD uitmelding 02                                                   */
    #define hhdin02ris              216 /* HD inmelding 02                                                    */
    #define hhduit02ris             217 /* HD uitmelding 02                                                   */
    #define hhd03                   218 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                 219 /* HD inmelding 03                                                    */
    #define hhduit03                220 /* HD uitmelding 03                                                   */
    #define hhdin03kar              221 /* HD inmelding 03                                                    */
    #define hhduit03kar             222 /* HD uitmelding 03                                                   */
    #define hhdin03ris              223 /* HD inmelding 03                                                    */
    #define hhduit03ris             224 /* HD uitmelding 03                                                   */
    #define hhd05                   225 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                 226 /* HD inmelding 05                                                    */
    #define hhduit05                227 /* HD uitmelding 05                                                   */
    #define hhdin05kar              228 /* HD inmelding 05                                                    */
    #define hhduit05kar             229 /* HD uitmelding 05                                                   */
    #define hhdin05ris              230 /* HD inmelding 05                                                    */
    #define hhduit05ris             231 /* HD uitmelding 05                                                   */
    #define hhd08                   232 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                 233 /* HD inmelding 08                                                    */
    #define hhduit08                234 /* HD uitmelding 08                                                   */
    #define hhdin08kar              235 /* HD inmelding 08                                                    */
    #define hhduit08kar             236 /* HD uitmelding 08                                                   */
    #define hhdin08ris              237 /* HD inmelding 08                                                    */
    #define hhduit08ris             238 /* HD uitmelding 08                                                   */
    #define hhd09                   239 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                 240 /* HD inmelding 09                                                    */
    #define hhduit09                241 /* HD uitmelding 09                                                   */
    #define hhdin09kar              242 /* HD inmelding 09                                                    */
    #define hhduit09kar             243 /* HD uitmelding 09                                                   */
    #define hhdin09ris              244 /* HD inmelding 09                                                    */
    #define hhduit09ris             245 /* HD uitmelding 09                                                   */
    #define hhd11                   246 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                 247 /* HD inmelding 11                                                    */
    #define hhduit11                248 /* HD uitmelding 11                                                   */
    #define hhdin11kar              249 /* HD inmelding 11                                                    */
    #define hhduit11kar             250 /* HD uitmelding 11                                                   */
    #define hhdin11ris              251 /* HD inmelding 11                                                    */
    #define hhduit11ris             252 /* HD uitmelding 11                                                   */
    #define hhd61                   253 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                 254 /* HD inmelding 61                                                    */
    #define hhduit61                255 /* HD uitmelding 61                                                   */
    #define hhdin61kar              256 /* HD inmelding 61                                                    */
    #define hhduit61kar             257 /* HD uitmelding 61                                                   */
    #define hhdin61ris              258 /* HD inmelding 61                                                    */
    #define hhduit61ris             259 /* HD uitmelding 61                                                   */
    #define hhd62                   260 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                 261 /* HD inmelding 62                                                    */
    #define hhduit62                262 /* HD uitmelding 62                                                   */
    #define hhdin62kar              263 /* HD inmelding 62                                                    */
    #define hhduit62kar             264 /* HD uitmelding 62                                                   */
    #define hhdin62ris              265 /* HD inmelding 62                                                    */
    #define hhduit62ris             266 /* HD uitmelding 62                                                   */
    #define hhd67                   267 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                 268 /* HD inmelding 67                                                    */
    #define hhduit67                269 /* HD uitmelding 67                                                   */
    #define hhdin67kar              270 /* HD inmelding 67                                                    */
    #define hhduit67kar             271 /* HD uitmelding 67                                                   */
    #define hhdin67ris              272 /* HD inmelding 67                                                    */
    #define hhduit67ris             273 /* HD uitmelding 67                                                   */
    #define hhd68                   274 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                 275 /* HD inmelding 68                                                    */
    #define hhduit68                276 /* HD uitmelding 68                                                   */
    #define hhdin68kar              277 /* HD inmelding 68                                                    */
    #define hhduit68kar             278 /* HD uitmelding 68                                                   */
    #define hhdin68ris              279 /* HD inmelding 68                                                    */
    #define hhduit68ris             280 /* HD uitmelding 68                                                   */
    #define hperiodFietsprio1       281 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       282 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3       283 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2         284 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 285 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               286 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               287 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               288 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               289 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11               290 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               291 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               292 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68               293 /* Bijhouden primaire realisatie fase 68                              */
    #define hschoolingreepdk33a     294 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     295 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     296 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     297 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr33               298 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               299 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hwtv22                  300 /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    #define HEMAX1                  301

/* geheugen elementen */
/* ------------------ */
    #define mperiod                 0 /* Onthouden actieve periode                                                   */
    #define mlcycl                  1 /* Onthouden laatste cyclustijd                                                */
    #define mmk03                   2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    #define mmk05                   3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    #define mmk08                   4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    #define mmk09                   5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    #define mmk11                   6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    #define mmk61                   7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    #define mmk62                   8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    #define mmk67                   9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    #define mmk68                  10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    #define mfilemem08             11 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    #define mfilemem11             12 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    #define mstp02bus              13 /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    #define mstp03bus              14 /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    #define mstp05bus              15 /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    #define mstp08bus              16 /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    #define mstp09bus              17 /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    #define mstp11bus              18 /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    #define mstp61bus              19 /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    #define mstp62bus              20 /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    #define mstp67bus              21 /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    #define mstp68bus              22 /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    #define mftstelris22fietsfiets 23 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets                          */
    #define mftstelris28fietsfiets 24 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets                          */
    #define mwtv22                 25 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 22                  */
    #define mwtvm22                26 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 22                 */
    #define MEMAX1                 27

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
    #define t09_2_1                     45 /* Dynamische hiaattijden moment 1 voor detector 09_2                                       */
    #define t09_2_2                     46 /* Dynamische hiaattijden moment 2 voor detector 09_2                                       */
    #define ttdh_09_2_1                 47 /* Dynamische hiaattijden TDH 1 voor detector 09_2                                          */
    #define ttdh_09_2_2                 48 /* Dynamische hiaattijden TDH 2 voor detector 09_2                                          */
    #define tmax_09_2                   49 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                                */
    #define t09_3_1                     50 /* Dynamische hiaattijden moment 1 voor detector 09_3                                       */
    #define t09_3_2                     51 /* Dynamische hiaattijden moment 2 voor detector 09_3                                       */
    #define ttdh_09_3_1                 52 /* Dynamische hiaattijden TDH 1 voor detector 09_3                                          */
    #define ttdh_09_3_2                 53 /* Dynamische hiaattijden TDH 2 voor detector 09_3                                          */
    #define tmax_09_3                   54 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                                */
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
    #define tcycl                       75 /* Bijhouden actuele cyclustijd                                                             */
    #define tav28_2                     76 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                                  */
    #define tkm02                       77 /* Kop maximum voor detector 02                                                             */
    #define tkm03                       78 /* Kop maximum voor detector 03                                                             */
    #define tkm05                       79 /* Kop maximum voor detector 05                                                             */
    #define tkm08                       80 /* Kop maximum voor detector 08                                                             */
    #define tkm09                       81 /* Kop maximum voor detector 09                                                             */
    #define tkm11                       82 /* Kop maximum voor detector 11                                                             */
    #define tkm21                       83 /* Kop maximum voor detector 21                                                             */
    #define tkm22                       84 /* Kop maximum voor detector 22                                                             */
    #define tkm24                       85 /* Kop maximum voor detector 24                                                             */
    #define tkm26                       86 /* Kop maximum voor detector 26                                                             */
    #define tkm28                       87 /* Kop maximum voor detector 28                                                             */
    #define tkm61                       88 /* Kop maximum voor detector 61                                                             */
    #define tkm62                       89 /* Kop maximum voor detector 62                                                             */
    #define tkm67                       90 /* Kop maximum voor detector 67                                                             */
    #define tkm68                       91 /* Kop maximum voor detector 68                                                             */
    #define tkm81                       92 /* Kop maximum voor detector 81                                                             */
    #define tkm82                       93 /* Kop maximum voor detector 82                                                             */
    #define tkm84                       94 /* Kop maximum voor detector 84                                                             */
    #define thdvd02_1a                  95 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a                               */
    #define thdvd02_1b                  96 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b                               */
    #define tdstvert02                  97 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                      */
    #define thdvd03_1                   98 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                                */
    #define tdstvert03                  99 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                      */
    #define thdvd05_1                  100 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                                */
    #define tdstvert05                 101 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                      */
    #define thdvd08_1a                 102 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a                               */
    #define thdvd08_1b                 103 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b                               */
    #define tdstvert08                 104 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                      */
    #define thdvd09_1                  105 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                                */
    #define tdstvert09                 106 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                      */
    #define thdvd11_1                  107 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                                */
    #define tdstvert11                 108 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                      */
    #define tdstvert21                 109 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                      */
    #define thdvd22_1                  110 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                                */
    #define tdstvert22                 111 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                      */
    #define thdvd24_1                  112 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                                */
    #define tdstvert24                 113 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                      */
    #define tdstvert26                 114 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                      */
    #define thdvd28_1                  115 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                                */
    #define tdstvert28                 116 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                      */
    #define tdstvert31                 117 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                      */
    #define tdstvert32                 118 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                      */
    #define tdstvert33                 119 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                      */
    #define tdstvert34                 120 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                      */
    #define tdstvert38                 121 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                      */
    #define thdvd61_1                  122 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                                */
    #define tdstvert61                 123 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                      */
    #define thdvd62_1a                 124 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a                               */
    #define thdvd62_1b                 125 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b                               */
    #define tdstvert62                 126 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                      */
    #define thdvd67_1                  127 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                                */
    #define tdstvert67                 128 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                      */
    #define thdvd68_1a                 129 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a                               */
    #define thdvd68_1b                 130 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b                               */
    #define tdstvert68                 131 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                      */
    #define tdstvert81                 132 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                      */
    #define tdstvert82                 133 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                      */
    #define thdvd84_1                  134 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                                */
    #define tdstvert84                 135 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                      */
    #define tafvFile68af               136 /* Afval vertraging file File68af                                                           */
    #define tafv68_9a                  137 /* Afval vertraging file 68_9a                                                              */
    #define tbz68_9a                   138 /* Bezettijd file detector 68_9a                                                            */
    #define trij68_9a                  139 /* Rijtijd file detector 68_9a                                                              */
    #define tafv68_9b                  140 /* Afval vertraging file 68_9b                                                              */
    #define tbz68_9b                   141 /* Bezettijd file detector 68_9b                                                            */
    #define trij68_9b                  142 /* Rijtijd file detector 68_9b                                                              */
    #define tafkmingroen08fileFile68af 143 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                    */
    #define tafkmingroen11fileFile68af 144 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                    */
    #define tminrood08fileFile68af     145 /* Minimale roodtijd bij fase 08 voor file ingreep                                          */
    #define tminrood11fileFile68af     146 /* Minimale roodtijd bij fase 11 voor file ingreep                                          */
    #define tmaxgroen08fileFile68af    147 /* Maximale groentijd bij fase 08 voor file ingreep                                         */
    #define tmaxgroen11fileFile68af    148 /* Maximale groentijd bij fase 11 voor file ingreep                                         */
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
    #define tprioin02risovris          181 /* Anti jutter tijd inmelden 02 NG                                                          */
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
    #define twtv22                     502 /* T.b.v. aansturing wachttijdvoorspeller fase 22                                           */
    #define TMMAX1                     503

/* teller elementen */
/* ---------------- */
    #define cvc02bus             0 /* Bijhouden prio inmeldingen fase 02 type Bus             */
    #define cvc02risov           1 /* Bijhouden prio inmeldingen fase 02 type NG              */
    #define cvc02risvrw          2 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen     */
    #define cvc03bus             3 /* Bijhouden prio inmeldingen fase 03 type Bus             */
    #define cvc03risov           4 /* Bijhouden prio inmeldingen fase 03 type Bus             */
    #define cvc03risvrw          5 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen     */
    #define cvc05bus             6 /* Bijhouden prio inmeldingen fase 05 type Bus             */
    #define cvc05risov           7 /* Bijhouden prio inmeldingen fase 05 type Bus             */
    #define cvc05risvrw          8 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen     */
    #define cvc08bus             9 /* Bijhouden prio inmeldingen fase 08 type Bus             */
    #define cvc08risov          10 /* Bijhouden prio inmeldingen fase 08 type Bus             */
    #define cvc08risvrw         11 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen     */
    #define cvc09bus            12 /* Bijhouden prio inmeldingen fase 09 type Bus             */
    #define cvc09risov          13 /* Bijhouden prio inmeldingen fase 09 type Bus             */
    #define cvc09risvrw         14 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen     */
    #define cvc11bus            15 /* Bijhouden prio inmeldingen fase 11 type Bus             */
    #define cvc11risov          16 /* Bijhouden prio inmeldingen fase 11 type Bus             */
    #define cvc11risvrw         17 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen     */
    #define cftscyc22fietsfiets 18 /* Bijhouden realisaties tbv peloton prio voor fase 22     */
    #define cftsvtg22fietsfiets 19 /* Bijhouden aantal fietsers tbv peloton prio voor fase 22 */
    #define cvc22fiets          20 /* Bijhouden prio inmeldingen fase 22 type Fiets           */
    #define cftscyc28fietsfiets 21 /* Bijhouden realisaties tbv peloton prio voor fase 28     */
    #define cftsvtg28fietsfiets 22 /* Bijhouden aantal fietsers tbv peloton prio voor fase 28 */
    #define cvc28fiets          23 /* Bijhouden prio inmeldingen fase 28 type Fiets           */
    #define cvc61bus            24 /* Bijhouden prio inmeldingen fase 61 type Bus             */
    #define cvc61risov          25 /* Bijhouden prio inmeldingen fase 61 type Bus             */
    #define cvc61risvrw         26 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen     */
    #define cvc62bus            27 /* Bijhouden prio inmeldingen fase 62 type Bus             */
    #define cvc62risov          28 /* Bijhouden prio inmeldingen fase 62 type Bus             */
    #define cvc62risvrw         29 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen     */
    #define cvc67bus            30 /* Bijhouden prio inmeldingen fase 67 type Bus             */
    #define cvc67risov          31 /* Bijhouden prio inmeldingen fase 67 type Bus             */
    #define cvc67risvrw         32 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen     */
    #define cvc68bus            33 /* Bijhouden prio inmeldingen fase 68 type Bus             */
    #define cvc68risov          34 /* Bijhouden prio inmeldingen fase 68 type Bus             */
    #define cvc68risvrw         35 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen     */
    #define cvchd02             36 /* Bijhouden prio inmeldingen fase 02                      */
    #define cvchd03             37 /* Bijhouden prio inmeldingen fase 03                      */
    #define cvchd05             38 /* Bijhouden prio inmeldingen fase 05                      */
    #define cvchd08             39 /* Bijhouden prio inmeldingen fase 08                      */
    #define cvchd09             40 /* Bijhouden prio inmeldingen fase 09                      */
    #define cvchd11             41 /* Bijhouden prio inmeldingen fase 11                      */
    #define cvchd61             42 /* Bijhouden prio inmeldingen fase 61                      */
    #define cvchd62             43 /* Bijhouden prio inmeldingen fase 62                      */
    #define cvchd67             44 /* Bijhouden prio inmeldingen fase 67                      */
    #define cvchd68             45 /* Bijhouden prio inmeldingen fase 68                      */
    #define CTMAX1              46

/* schakelaars */
/* ----------- */
    #define schdynhiaat08               0 /* Toepassen dynamsich hiaat bij fase 08                          */
    #define schopdrempelen08            1 /* Opdrempelen toepassen voor fase 08                             */
    #define schedkop_08                 2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    #define schdynhiaat09               3 /* Toepassen dynamsich hiaat bij fase 09                          */
    #define schopdrempelen09            4 /* Opdrempelen toepassen voor fase 09                             */
    #define schedkop_09                 5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    #define schdynhiaat11               6 /* Toepassen dynamsich hiaat bij fase 11                          */
    #define schopdrempelen11            7 /* Opdrempelen toepassen voor fase 11                             */
    #define schedkop_11                 8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    #define schcycl                     9 /* Bijhouden actuele cyclustijd aan of uit                        */
    #define schcycl_reset              10 /* Reset meting cyclustijd                                        */
    #define schdvakd02_1a              11 /* Aanvraag fase 02 bij storing op detector 02_1a                 */
    #define schdvakd02_1b              12 /* Aanvraag fase 02 bij storing op detector 02_1b                 */
    #define schdvakd03_1               13 /* Aanvraag fase 03 bij storing op detector 03_1                  */
    #define schdvakdk31a               14 /* Aanvraag fase 31 bij storing op detector k31a                  */
    #define schdvakdk31b               15 /* Aanvraag fase 31 bij storing op detector k31b                  */
    #define schfileFile68af            16 /* File ingreep File68af toepassen                                */
    #define schfiledoserenFile68af     17 /* Toepassen doseerpercentages voor fileingreep File68af          */
    #define schfileFile68afparstrook   18 /* Parallele file meldingen per strook file ingreep File68af      */
    #define schbmfix                   19 /* Bijkomen tijdens fixatie mogelijk                              */
    #define schgs2232                  20 /* Schakelbare gelijkstart van 32 naar 22                         */
    #define schgs2434                  21 /* Schakelbare gelijkstart van 34 naar 24                         */
    #define schgs2484                  22 /* Schakelbare gelijkstart van 84 naar 24                         */
    #define schgs3384                  23 /* Schakelbare gelijkstart van 84 naar 33                         */
    #define schma0261                  24 /* Meeaanvraag van 02 naar 61 actief                              */
    #define schma0262                  25 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521                  26 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522                  27 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532                  28 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868                  29 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126                  30 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma1168                  31 /* Meeaanvraag van 11 naar 68 actief                              */
    #define schma2221                  32 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma2611                  33 /* Meeaanvraag van 26 naar 11 actief                              */
    #define schma3122                  34 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                  35 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                  36 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                  37 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                  38 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                  39 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                  40 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                  41 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                  42 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                  43 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                  44 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                    45 /* Meeverlengen fase 02                                           */
    #define schmv03                    46 /* Meeverlengen fase 03                                           */
    #define schmv05                    47 /* Meeverlengen fase 05                                           */
    #define schmv08                    48 /* Meeverlengen fase 08                                           */
    #define schmv09                    49 /* Meeverlengen fase 09                                           */
    #define schmv11                    50 /* Meeverlengen fase 11                                           */
    #define schmv21                    51 /* Meeverlengen fase 21                                           */
    #define schmv22                    52 /* Meeverlengen fase 22                                           */
    #define schhardmv2205              53 /* Hard meeverlengen fase 22 met fase 05                          */
    #define schmv24                    54 /* Meeverlengen fase 24                                           */
    #define schmv26                    55 /* Meeverlengen fase 26                                           */
    #define schhardmv2611              56 /* Hard meeverlengen fase 26 met fase 11                          */
    #define schmv28                    57 /* Meeverlengen fase 28                                           */
    #define schmv31                    58 /* Meeverlengen fase 31                                           */
    #define schmv32                    59 /* Meeverlengen fase 32                                           */
    #define schhardmv3205              60 /* Hard meeverlengen fase 32 met fase 05                          */
    #define schmv33                    61 /* Meeverlengen fase 33                                           */
    #define schmv34                    62 /* Meeverlengen fase 34                                           */
    #define schmv38                    63 /* Meeverlengen fase 38                                           */
    #define schmv61                    64 /* Meeverlengen fase 61                                           */
    #define schmv62                    65 /* Meeverlengen fase 62                                           */
    #define schmv67                    66 /* Meeverlengen fase 67                                           */
    #define schmv68                    67 /* Meeverlengen fase 68                                           */
    #define schmv81                    68 /* Meeverlengen fase 81                                           */
    #define schmv82                    69 /* Meeverlengen fase 82                                           */
    #define schmv84                    70 /* Meeverlengen fase 84                                           */
    #define schmlprm                   71 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus            72 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus            73 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus            74 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus            75 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus            76 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus            77 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus            78 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus            79 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus            80 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus            81 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schcovuber                 82 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    #define schcheckdstype             83 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar          84 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar         85 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus            86 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin02risovris        87 /* Inmelden 02 via NG toestaan                                    */
    #define schpriouit02risovris       88 /* Uitmelden 02 via NG toestaan                                   */
    #define schupinagb02risov          89 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin02risvrwris       90 /* Inmelden 02 via Vrachtwagen toestaan                           */
    #define schpriouit02risvrwris      91 /* Uitmelden 02 via Vrachtwagen toestaan                          */
    #define schupinagb02risvrw         92 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar          93 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar         94 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus            95 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin03risovris        96 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03risovris       97 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03risov          98 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin03risvrwris       99 /* Inmelden 03 via Vrachtwagen toestaan                           */
    #define schpriouit03risvrwris     100 /* Uitmelden 03 via Vrachtwagen toestaan                          */
    #define schupinagb03risvrw        101 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar         102 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar        103 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus           104 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin05risovris       105 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05risovris      106 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05risov         107 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin05risvrwris      108 /* Inmelden 05 via Vrachtwagen toestaan                           */
    #define schpriouit05risvrwris     109 /* Uitmelden 05 via Vrachtwagen toestaan                          */
    #define schupinagb05risvrw        110 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar         111 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar        112 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus           113 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin08risovris       114 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08risovris      115 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08risov         116 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin08risvrwris      117 /* Inmelden 08 via Vrachtwagen toestaan                           */
    #define schpriouit08risvrwris     118 /* Uitmelden 08 via Vrachtwagen toestaan                          */
    #define schupinagb08risvrw        119 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar         120 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar        121 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus           122 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin09risovris       123 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09risovris      124 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09risov         125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin09risvrwris      126 /* Inmelden 09 via Vrachtwagen toestaan                           */
    #define schpriouit09risvrwris     127 /* Uitmelden 09 via Vrachtwagen toestaan                          */
    #define schupinagb09risvrw        128 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar         129 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar        130 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus           131 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin11risovris       132 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11risovris      133 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11risov         134 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin11risvrwris      135 /* Inmelden 11 via Vrachtwagen toestaan                           */
    #define schpriouit11risvrwris     136 /* Uitmelden 11 via Vrachtwagen toestaan                          */
    #define schupinagb11risvrw        137 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin22fietsfiets22_1 138 /* Inmelden 22 via Fiets toestaan                                 */
    #define schpriouit22fietsfiets    139 /* Uitmelden 22 via Fiets toestaan                                */
    #define schupinagb22fiets         140 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22  */
    #define schprioin28fietsfiets28_2 141 /* Inmelden 28 via Fiets toestaan                                 */
    #define schpriouit28fietsfiets    142 /* Uitmelden 28 via Fiets toestaan                                */
    #define schupinagb28fiets         143 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28  */
    #define schprioin61buskar         144 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61buskar        145 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61bus           146 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin61risovris       147 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61risovris      148 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61risov         149 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin61risvrwris      150 /* Inmelden 61 via Vrachtwagen toestaan                           */
    #define schpriouit61risvrwris     151 /* Uitmelden 61 via Vrachtwagen toestaan                          */
    #define schupinagb61risvrw        152 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin62buskar         153 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62buskar        154 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62bus           155 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin62risovris       156 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62risovris      157 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62risov         158 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin62risvrwris      159 /* Inmelden 62 via Vrachtwagen toestaan                           */
    #define schpriouit62risvrwris     160 /* Uitmelden 62 via Vrachtwagen toestaan                          */
    #define schupinagb62risvrw        161 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin67buskar         162 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67buskar        163 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67bus           164 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin67risovris       165 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67risovris      166 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67risov         167 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin67risvrwris      168 /* Inmelden 67 via Vrachtwagen toestaan                           */
    #define schpriouit67risvrwris     169 /* Uitmelden 67 via Vrachtwagen toestaan                          */
    #define schupinagb67risvrw        170 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin68buskar         171 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68buskar        172 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68bus           173 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schprioin68risovris       174 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68risovris      175 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68risov         176 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schprioin68risvrwris      177 /* Inmelden 68 via Vrachtwagen toestaan                           */
    #define schpriouit68risvrwris     178 /* Uitmelden 68 via Vrachtwagen toestaan                          */
    #define schupinagb68risvrw        179 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schupinagbhd02            180 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar              181 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar             182 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02          183 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schhdin02ris              184 /* Inmelden 02 via RIS HD toestaan                                */
    #define schhduit02ris             185 /* Uitmelden 02 via RIS HD toestaan                               */
    #define schupinagbhd03            186 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar              187 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar             188 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03          189 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schhdin03ris              190 /* Inmelden 03 via RIS HD toestaan                                */
    #define schhduit03ris             191 /* Uitmelden 03 via RIS HD toestaan                               */
    #define schupinagbhd05            192 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar              193 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar             194 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05          195 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schhdin05ris              196 /* Inmelden 05 via RIS HD toestaan                                */
    #define schhduit05ris             197 /* Uitmelden 05 via RIS HD toestaan                               */
    #define schupinagbhd08            198 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar              199 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar             200 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08          201 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schhdin08ris              202 /* Inmelden 08 via RIS HD toestaan                                */
    #define schhduit08ris             203 /* Uitmelden 08 via RIS HD toestaan                               */
    #define schupinagbhd09            204 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar              205 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar             206 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09          207 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schhdin09ris              208 /* Inmelden 09 via RIS HD toestaan                                */
    #define schhduit09ris             209 /* Uitmelden 09 via RIS HD toestaan                               */
    #define schupinagbhd11            210 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar              211 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar             212 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11          213 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schhdin11ris              214 /* Inmelden 11 via RIS HD toestaan                                */
    #define schhduit11ris             215 /* Uitmelden 11 via RIS HD toestaan                               */
    #define schupinagbhd61            216 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar              217 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar             218 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61          219 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schhdin61ris              220 /* Inmelden 61 via RIS HD toestaan                                */
    #define schhduit61ris             221 /* Uitmelden 61 via RIS HD toestaan                               */
    #define schupinagbhd62            222 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar              223 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar             224 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62          225 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schhdin62ris              226 /* Inmelden 62 via RIS HD toestaan                                */
    #define schhduit62ris             227 /* Uitmelden 62 via RIS HD toestaan                               */
    #define schupinagbhd67            228 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar              229 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar             230 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67          231 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schhdin67ris              232 /* Inmelden 67 via RIS HD toestaan                                */
    #define schhduit67ris             233 /* Uitmelden 67 via RIS HD toestaan                               */
    #define schupinagbhd68            234 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar              235 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar             236 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68          237 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schhdin68ris              238 /* Inmelden 68 via RIS HD toestaan                                */
    #define schhduit68ris             239 /* Uitmelden 68 via RIS HD toestaan                               */
    #define schrisgeencheckopsg       240 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    #define schrisaanvraag            241 /* Globaal in of uitschakelen aanvragen via RIS                   */
    #define schrisverlengen           242 /* Globaal in of uitschakelen verlengen via RIS                   */
    #define schrgadd24_3              243 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv                    244 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel               245 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schschoolingreep33        246 /* Schoolingreep aan of uit voor fase 33                          */
    #define schschoolingreep34        247 /* Schoolingreep aan of uit voor fase 34                          */
    #define schsi33                   248 /* Senioreningreep aan of uit voor fase 33                        */
    #define schsi34                   249 /* Senioreningreep aan of uit voor fase 34                        */
    #define schca02                   250 /* Cyclische aanvraag fase 02                                     */
    #define schca03                   251 /* Cyclische aanvraag fase 03                                     */
    #define schca05                   252 /* Cyclische aanvraag fase 05                                     */
    #define schca08                   253 /* Cyclische aanvraag fase 08                                     */
    #define schca09                   254 /* Cyclische aanvraag fase 09                                     */
    #define schca11                   255 /* Cyclische aanvraag fase 11                                     */
    #define schca21                   256 /* Cyclische aanvraag fase 21                                     */
    #define schca22                   257 /* Cyclische aanvraag fase 22                                     */
    #define schca24                   258 /* Cyclische aanvraag fase 24                                     */
    #define schca26                   259 /* Cyclische aanvraag fase 26                                     */
    #define schca28                   260 /* Cyclische aanvraag fase 28                                     */
    #define schca31                   261 /* Cyclische aanvraag fase 31                                     */
    #define schca32                   262 /* Cyclische aanvraag fase 32                                     */
    #define schca33                   263 /* Cyclische aanvraag fase 33                                     */
    #define schca34                   264 /* Cyclische aanvraag fase 34                                     */
    #define schca38                   265 /* Cyclische aanvraag fase 38                                     */
    #define schca61                   266 /* Cyclische aanvraag fase 61                                     */
    #define schca62                   267 /* Cyclische aanvraag fase 62                                     */
    #define schca67                   268 /* Cyclische aanvraag fase 67                                     */
    #define schca68                   269 /* Cyclische aanvraag fase 68                                     */
    #define schca81                   270 /* Cyclische aanvraag fase 81                                     */
    #define schca82                   271 /* Cyclische aanvraag fase 82                                     */
    #define schca84                   272 /* Cyclische aanvraag fase 84                                     */
    #define schvg02_4a                273 /* Veiligheidsgroen detector 02_4a fase 02                        */
    #define schvg02_4b                274 /* Veiligheidsgroen detector 02_4b fase 02                        */
    #define schvg08_4a                275 /* Veiligheidsgroen detector 08_4a fase 08                        */
    #define schvg08_4b                276 /* Veiligheidsgroen detector 08_4b fase 08                        */
    #define schvg11_4                 277 /* Veiligheidsgroen detector 11_4 fase 11                         */
    #define schaltg02                 278 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                 279 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                 280 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                 281 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                 282 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                 283 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                 284 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232               285 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg243484             286 /* Alternatieve realisatie toestaan fasen 24, 34, 84              */
    #define schaltg26                 287 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                 288 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                 289 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384               290 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg2434               291 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg38                 292 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                 293 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                 294 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                 295 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                 296 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg81                 297 /* Alternatieve realisatie toestaan fase 81                       */
    #define schaltg82                 298 /* Alternatieve realisatie toestaan fase 82                       */
    #define schaltg243384             299 /* Alternatieve realisatie toestaan fasen 24, 33, 84              */
    #define schwg02                   300 /* Wachtstand groen fase 02                                       */
    #define schwg03                   301 /* Wachtstand groen fase 03                                       */
    #define schwg05                   302 /* Wachtstand groen fase 05                                       */
    #define schwg08                   303 /* Wachtstand groen fase 08                                       */
    #define schwg09                   304 /* Wachtstand groen fase 09                                       */
    #define schwg11                   305 /* Wachtstand groen fase 11                                       */
    #define schwg21                   306 /* Wachtstand groen fase 21                                       */
    #define schwg22                   307 /* Wachtstand groen fase 22                                       */
    #define schwg24                   308 /* Wachtstand groen fase 24                                       */
    #define schwg26                   309 /* Wachtstand groen fase 26                                       */
    #define schwg28                   310 /* Wachtstand groen fase 28                                       */
    #define schwg31                   311 /* Wachtstand groen fase 31                                       */
    #define schwg32                   312 /* Wachtstand groen fase 32                                       */
    #define schwg33                   313 /* Wachtstand groen fase 33                                       */
    #define schwg34                   314 /* Wachtstand groen fase 34                                       */
    #define schwg38                   315 /* Wachtstand groen fase 38                                       */
    #define schwg61                   316 /* Wachtstand groen fase 61                                       */
    #define schwg62                   317 /* Wachtstand groen fase 62                                       */
    #define schwg67                   318 /* Wachtstand groen fase 67                                       */
    #define schwg68                   319 /* Wachtstand groen fase 68                                       */
    #define schwg81                   320 /* Wachtstand groen fase 81                                       */
    #define schwg82                   321 /* Wachtstand groen fase 82                                       */
    #define schwg84                   322 /* Wachtstand groen fase 84                                       */
    #define schwtv22                  323 /* Aansturing wachttijdvoorspeller fase 22 aan of uit             */
    #define schwtvbusbijhd            324 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep       */
    #define schconfidence15fix        325
    #define schtxconfidence15ar       326
    #define schspatconfidence1        327
    #define schspatconfidence3        328
    #define schspatconfidence6        329
    #define schspatconfidence9        330
    #define schspatconfidence12       331
    #define schspatconfidence15       332
    #define schtimings02              333
    #define schtimings03              334
    #define schtimings05              335
    #define schtimings08              336
    #define schtimings09              337
    #define schtimings11              338
    #define schtimings21              339
    #define schtimings22              340
    #define schtimings24              341
    #define schtimings26              342
    #define schtimings28              343
    #define schtimings31              344
    #define schtimings32              345
    #define schtimings33              346
    #define schtimings34              347
    #define schtimings38              348
    #define schtimings61              349
    #define schtimings62              350
    #define schtimings67              351
    #define schtimings68              352
    #define schtimings81              353
    #define schtimings82              354
    #define schtimings84              355
    #define schsneld02_1a             356 /* Aanvraag snel voor detector 02_1a aan of uit                   */
    #define schsneld02_1b             357 /* Aanvraag snel voor detector 02_1b aan of uit                   */
    #define schsneld03_1              358 /* Aanvraag snel voor detector 03_1 aan of uit                    */
    #define schsneld05_1              359 /* Aanvraag snel voor detector 05_1 aan of uit                    */
    #define schsneld08_1a             360 /* Aanvraag snel voor detector 08_1a aan of uit                   */
    #define schsneld08_1b             361 /* Aanvraag snel voor detector 08_1b aan of uit                   */
    #define schsneld09_1              362 /* Aanvraag snel voor detector 09_1 aan of uit                    */
    #define schsneld11_1              363 /* Aanvraag snel voor detector 11_1 aan of uit                    */
    #define schsneld211               364 /* Aanvraag snel voor detector 211 aan of uit                     */
    #define schsneld22_1              365 /* Aanvraag snel voor detector 22_1 aan of uit                    */
    #define schsneld24_1              366 /* Aanvraag snel voor detector 24_1 aan of uit                    */
    #define schsneld261               367 /* Aanvraag snel voor detector 261 aan of uit                     */
    #define schsneld28_1              368 /* Aanvraag snel voor detector 28_1 aan of uit                    */
    #define schsneld61_1              369 /* Aanvraag snel voor detector 61_1 aan of uit                    */
    #define schsneld62_1a             370 /* Aanvraag snel voor detector 62_1a aan of uit                   */
    #define schsneld62_1b             371 /* Aanvraag snel voor detector 62_1b aan of uit                   */
    #define schsneld67_1              372 /* Aanvraag snel voor detector 67_1 aan of uit                    */
    #define schsneld68_1a             373 /* Aanvraag snel voor detector 68_1a aan of uit                   */
    #define schsneld68_1b             374 /* Aanvraag snel voor detector 68_1b aan of uit                   */
    #define schsneld81_1              375 /* Aanvraag snel voor detector 81_1 aan of uit                    */
    #define schsneld82_1              376 /* Aanvraag snel voor detector 82_1 aan of uit                    */
    #define schsneld84_1              377 /* Aanvraag snel voor detector 84_1 aan of uit                    */
    #define SCHMAX1                   378

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
    #define prmspringverleng_09_2          9 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3         10 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
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
    #define prmtypema0261                195 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                196 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                197 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                198 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                199 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                200 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                201 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                202 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                203 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                204 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                205 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                206 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                207 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                208 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                209 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                210 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                211 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                212 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                213 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                214 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                215 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                216 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      217 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      218 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      219 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      220 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      221 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      222 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      223 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      224 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      225 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      226 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      227 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      228 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      229 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      230 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      231 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      232 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      233 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      234 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      235 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      236 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      237 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      238 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                      239 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    240 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    241 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    242 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    243 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    244 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    245 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    246 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    247 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    248 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    249 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    250 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    251 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    252 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    253 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    254 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    255 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    256 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    257 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    258 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    259 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    260 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    261 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    262 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmxnl0262                   263 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868                   264 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168                   265 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221                   266 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132                   267 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231                   268 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334                   269 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433                   270 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281                   271 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg          272 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           273 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus       274 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus        275 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus        276 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus       277 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus        278 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus        279 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus       280 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus        281 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus        282 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus       283 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus        284 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus        285 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus       286 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus        287 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus        288 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus       289 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus        290 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus        291 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus       292 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus        293 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus        294 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus       295 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus        296 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus        297 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus       298 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus        299 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus        300 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus       301 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus        302 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus        303 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      304 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    305 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    306 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    307 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    308 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    309 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   310 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  311 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   312 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    313 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    314 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    315 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   316 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  317 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   318 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    319 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    320 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    321 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   322 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  323 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   324 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    325 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    326 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    327 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   328 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  329 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   330 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    331 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    332 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    333 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   334 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  335 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   336 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    337 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    338 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    339 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   340 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  341 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   342 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    343 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    344 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    345 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   346 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  347 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   348 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    349 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    350 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    351 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   352 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  353 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   354 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    355 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    356 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    357 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   358 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  359 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   360 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    361 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    362 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    363 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   364 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  365 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   366 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    367 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    368 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    369 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   370 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  371 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   372 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    373 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    374 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    375 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    376 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    377 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    378 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    379 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    380 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    381 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    382 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    383 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    384 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    385 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   386 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  387 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   388 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    389 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    390 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    391 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   392 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  393 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   394 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    395 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    396 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    397 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   398 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  399 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   400 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    401 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    402 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    403 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   404 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  405 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   406 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    407 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    408 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    409 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   410 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  411 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   412 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    413 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    414 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    415 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   416 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  417 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   418 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    419 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    420 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    421 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   422 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  423 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   424 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                  425 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                 426 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                  427 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                  428 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus               429 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                 430 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov                431 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov               432 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov                433 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov                434 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov               435 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov           436
    #define prmrisend02risov             437
    #define prmriseta02risov             438
    #define prmrisrole02risov            439
    #define prmrissubrole02risov         440
    #define prmrisimportance02risov      441
    #define prmrisstationtype02risov     442
    #define prmrisapproachid02risov      443
    #define prmrislaneid02risov_1        444
    #define prmrislaneid02risov_2        445
    #define prmrto02risvrw               446 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw              447 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw               448 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw               449 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw              450 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw          451
    #define prmrisend02risvrw            452
    #define prmriseta02risvrw            453
    #define prmrisrole02risvrw           454
    #define prmrissubrole02risvrw        455
    #define prmrisimportance02risvrw     456
    #define prmrisstationtype02risvrw    457
    #define prmrisapproachid02risvrw     458
    #define prmrislaneid02risvrw_1       459
    #define prmrislaneid02risvrw_2       460
    #define prmrto03bus                  461 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                 462 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                  463 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                  464 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus               465 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                 466 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov                467 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov               468 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov                469 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov                470 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov               471 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov           472
    #define prmrisend03risov             473
    #define prmriseta03risov             474
    #define prmrisrole03risov            475
    #define prmrissubrole03risov         476
    #define prmrisimportance03risov      477
    #define prmrisstationtype03risov     478
    #define prmrisapproachid03risov      479
    #define prmrislaneid03risov_1        480
    #define prmrto03risvrw               481 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw              482 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw               483 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw               484 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw              485 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw          486
    #define prmrisend03risvrw            487
    #define prmriseta03risvrw            488
    #define prmrisrole03risvrw           489
    #define prmrissubrole03risvrw        490
    #define prmrisimportance03risvrw     491
    #define prmrisstationtype03risvrw    492
    #define prmrisapproachid03risvrw     493
    #define prmrislaneid03risvrw_1       494
    #define prmrto05bus                  495 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                 496 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                  497 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                  498 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus               499 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                 500 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov                501 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov               502 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov                503 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov                504 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov               505 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov           506
    #define prmrisend05risov             507
    #define prmriseta05risov             508
    #define prmrisrole05risov            509
    #define prmrissubrole05risov         510
    #define prmrisimportance05risov      511
    #define prmrisstationtype05risov     512
    #define prmrisapproachid05risov      513
    #define prmrislaneid05risov_1        514
    #define prmrto05risvrw               515 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw              516 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw               517 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw               518 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw              519 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw          520
    #define prmrisend05risvrw            521
    #define prmriseta05risvrw            522
    #define prmrisrole05risvrw           523
    #define prmrissubrole05risvrw        524
    #define prmrisimportance05risvrw     525
    #define prmrisstationtype05risvrw    526
    #define prmrisapproachid05risvrw     527
    #define prmrislaneid05risvrw_1       528
    #define prmrto08bus                  529 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                 530 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                  531 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                  532 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus               533 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                 534 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov                535 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov               536 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov                537 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov                538 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov               539 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov           540
    #define prmrisend08risov             541
    #define prmriseta08risov             542
    #define prmrisrole08risov            543
    #define prmrissubrole08risov         544
    #define prmrisimportance08risov      545
    #define prmrisstationtype08risov     546
    #define prmrisapproachid08risov      547
    #define prmrislaneid08risov_1        548
    #define prmrislaneid08risov_2        549
    #define prmrto08risvrw               550 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw              551 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw               552 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw               553 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw              554 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw          555
    #define prmrisend08risvrw            556
    #define prmriseta08risvrw            557
    #define prmrisrole08risvrw           558
    #define prmrissubrole08risvrw        559
    #define prmrisimportance08risvrw     560
    #define prmrisstationtype08risvrw    561
    #define prmrisapproachid08risvrw     562
    #define prmrislaneid08risvrw_1       563
    #define prmrislaneid08risvrw_2       564
    #define prmrto09bus                  565 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                 566 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                  567 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                  568 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus               569 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                 570 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov                571 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov               572 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov                573 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov                574 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov               575 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov           576
    #define prmrisend09risov             577
    #define prmriseta09risov             578
    #define prmrisrole09risov            579
    #define prmrissubrole09risov         580
    #define prmrisimportance09risov      581
    #define prmrisstationtype09risov     582
    #define prmrisapproachid09risov      583
    #define prmrislaneid09risov_1        584
    #define prmrto09risvrw               585 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw              586 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw               587 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw               588 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw              589 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw          590
    #define prmrisend09risvrw            591
    #define prmriseta09risvrw            592
    #define prmrisrole09risvrw           593
    #define prmrissubrole09risvrw        594
    #define prmrisimportance09risvrw     595
    #define prmrisstationtype09risvrw    596
    #define prmrisapproachid09risvrw     597
    #define prmrislaneid09risvrw_1       598
    #define prmrto11bus                  599 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                 600 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                  601 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                  602 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus               603 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                 604 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov                605 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov               606 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov                607 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov                608 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov               609 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov           610
    #define prmrisend11risov             611
    #define prmriseta11risov             612
    #define prmrisrole11risov            613
    #define prmrissubrole11risov         614
    #define prmrisimportance11risov      615
    #define prmrisstationtype11risov     616
    #define prmrisapproachid11risov      617
    #define prmrislaneid11risov_1        618
    #define prmrto11risvrw               619 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw              620 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw               621 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw               622 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw              623 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw          624
    #define prmrisend11risvrw            625
    #define prmriseta11risvrw            626
    #define prmrisrole11risvrw           627
    #define prmrissubrole11risvrw        628
    #define prmrisimportance11risvrw     629
    #define prmrisstationtype11risvrw    630
    #define prmrisapproachid11risvrw     631
    #define prmrislaneid11risvrw_1       632
    #define prmftsblok22fietsfiets       633 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  634 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets     635 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets      636 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets  637 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets                638 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               639 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                640 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                641 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets               642 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets           643
    #define prmrisend22fiets             644
    #define prmrisrole22fiets            645
    #define prmrissubrole22fiets         646
    #define prmrisimportance22fiets      647
    #define prmrisstationtype22fiets     648
    #define prmrisapproachid22fiets      649
    #define prmrislaneid22fiets_1        650
    #define prmrislaneid22fiets_2        651
    #define prmftsblok28fietsfiets       652 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  653 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets     654 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets      655 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets  656 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets                657 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               658 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                659 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                660 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmprio28fiets               661 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets           662
    #define prmrisend28fiets             663
    #define prmrisrole28fiets            664
    #define prmrissubrole28fiets         665
    #define prmrisimportance28fiets      666
    #define prmrisstationtype28fiets     667
    #define prmrisapproachid28fiets      668
    #define prmrislaneid28fiets_1        669
    #define prmrto61bus                  670 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                 671 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                  672 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                  673 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus               674 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                 675 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov                676 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov               677 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov                678 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov                679 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov               680 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov           681
    #define prmrisend61risov             682
    #define prmriseta61risov             683
    #define prmrisrole61risov            684
    #define prmrissubrole61risov         685
    #define prmrisimportance61risov      686
    #define prmrisstationtype61risov     687
    #define prmrisapproachid61risov      688
    #define prmrislaneid61risov_1        689
    #define prmrto61risvrw               690 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw              691 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw               692 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw               693 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw              694 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw          695
    #define prmrisend61risvrw            696
    #define prmriseta61risvrw            697
    #define prmrisrole61risvrw           698
    #define prmrissubrole61risvrw        699
    #define prmrisimportance61risvrw     700
    #define prmrisstationtype61risvrw    701
    #define prmrisapproachid61risvrw     702
    #define prmrislaneid61risvrw_1       703
    #define prmrto62bus                  704 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                 705 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                  706 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                  707 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus               708 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                 709 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov                710 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov               711 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov                712 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov                713 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov               714 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov           715
    #define prmrisend62risov             716
    #define prmriseta62risov             717
    #define prmrisrole62risov            718
    #define prmrissubrole62risov         719
    #define prmrisimportance62risov      720
    #define prmrisstationtype62risov     721
    #define prmrisapproachid62risov      722
    #define prmrislaneid62risov_1        723
    #define prmrislaneid62risov_2        724
    #define prmrto62risvrw               725 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw              726 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw               727 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw               728 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw              729 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw          730
    #define prmrisend62risvrw            731
    #define prmriseta62risvrw            732
    #define prmrisrole62risvrw           733
    #define prmrissubrole62risvrw        734
    #define prmrisimportance62risvrw     735
    #define prmrisstationtype62risvrw    736
    #define prmrisapproachid62risvrw     737
    #define prmrislaneid62risvrw_1       738
    #define prmrislaneid62risvrw_2       739
    #define prmrto67bus                  740 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                 741 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                  742 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                  743 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus               744 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                 745 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov                746 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov               747 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov                748 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov                749 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov               750 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov           751
    #define prmrisend67risov             752
    #define prmriseta67risov             753
    #define prmrisrole67risov            754
    #define prmrissubrole67risov         755
    #define prmrisimportance67risov      756
    #define prmrisstationtype67risov     757
    #define prmrisapproachid67risov      758
    #define prmrislaneid67risov_1        759
    #define prmrto67risvrw               760 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw              761 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw               762 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw               763 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw              764 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw          765
    #define prmrisend67risvrw            766
    #define prmriseta67risvrw            767
    #define prmrisrole67risvrw           768
    #define prmrissubrole67risvrw        769
    #define prmrisimportance67risvrw     770
    #define prmrisstationtype67risvrw    771
    #define prmrisapproachid67risvrw     772
    #define prmrislaneid67risvrw_1       773
    #define prmrto68bus                  774 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                 775 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                  776 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                  777 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus               778 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                 779 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov                780 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov               781 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov                782 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov                783 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov               784 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov           785
    #define prmrisend68risov             786
    #define prmriseta68risov             787
    #define prmrisrole68risov            788
    #define prmrissubrole68risov         789
    #define prmrisimportance68risov      790
    #define prmrisstationtype68risov     791
    #define prmrisapproachid68risov      792
    #define prmrislaneid68risov_1        793
    #define prmrislaneid68risov_2        794
    #define prmrto68risvrw               795 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw              796 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw               797 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw               798 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw              799 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw          800
    #define prmrisend68risvrw            801
    #define prmriseta68risvrw            802
    #define prmrisrole68risvrw           803
    #define prmrissubrole68risvrw        804
    #define prmrisimportance68risvrw     805
    #define prmrisstationtype68risvrw    806
    #define prmrisapproachid68risvrw     807
    #define prmrislaneid68risvrw_1       808
    #define prmrislaneid68risvrw_2       809
    #define prmpriohd02                  810 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                   811 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                  812 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                   813 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd              814
    #define prmrisend02hd                815
    #define prmriseta02hd                816
    #define prmrisrole02hd               817
    #define prmrissubrole02hd            818
    #define prmrisimportance02hd         819
    #define prmrisstationtype02hd        820
    #define prmrisapproachid02hd         821
    #define prmrislaneid02hd_1           822
    #define prmrislaneid02hd_2           823
    #define prmpriohd03                  824 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                   825 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                  826 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                   827 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd              828
    #define prmrisend03hd                829
    #define prmriseta03hd                830
    #define prmrisrole03hd               831
    #define prmrissubrole03hd            832
    #define prmrisimportance03hd         833
    #define prmrisstationtype03hd        834
    #define prmrisapproachid03hd         835
    #define prmrislaneid03hd_1           836
    #define prmpriohd05                  837 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                   838 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                  839 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                   840 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd              841
    #define prmrisend05hd                842
    #define prmriseta05hd                843
    #define prmrisrole05hd               844
    #define prmrissubrole05hd            845
    #define prmrisimportance05hd         846
    #define prmrisstationtype05hd        847
    #define prmrisapproachid05hd         848
    #define prmrislaneid05hd_1           849
    #define prmpriohd08                  850 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                   851 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                  852 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                   853 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd              854
    #define prmrisend08hd                855
    #define prmriseta08hd                856
    #define prmrisrole08hd               857
    #define prmrissubrole08hd            858
    #define prmrisimportance08hd         859
    #define prmrisstationtype08hd        860
    #define prmrisapproachid08hd         861
    #define prmrislaneid08hd_1           862
    #define prmrislaneid08hd_2           863
    #define prmpriohd09                  864 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                   865 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                  866 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                   867 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd              868
    #define prmrisend09hd                869
    #define prmriseta09hd                870
    #define prmrisrole09hd               871
    #define prmrissubrole09hd            872
    #define prmrisimportance09hd         873
    #define prmrisstationtype09hd        874
    #define prmrisapproachid09hd         875
    #define prmrislaneid09hd_1           876
    #define prmpriohd11                  877 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                   878 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                  879 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                   880 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd              881
    #define prmrisend11hd                882
    #define prmriseta11hd                883
    #define prmrisrole11hd               884
    #define prmrissubrole11hd            885
    #define prmrisimportance11hd         886
    #define prmrisstationtype11hd        887
    #define prmrisapproachid11hd         888
    #define prmrislaneid11hd_1           889
    #define prmpriohd61                  890 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                   891 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                  892 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                   893 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd              894
    #define prmrisend61hd                895
    #define prmriseta61hd                896
    #define prmrisrole61hd               897
    #define prmrissubrole61hd            898
    #define prmrisimportance61hd         899
    #define prmrisstationtype61hd        900
    #define prmrisapproachid61hd         901
    #define prmrislaneid61hd_1           902
    #define prmpriohd62                  903 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                   904 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                  905 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                   906 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd              907
    #define prmrisend62hd                908
    #define prmriseta62hd                909
    #define prmrisrole62hd               910
    #define prmrissubrole62hd            911
    #define prmrisimportance62hd         912
    #define prmrisstationtype62hd        913
    #define prmrisapproachid62hd         914
    #define prmrislaneid62hd_1           915
    #define prmrislaneid62hd_2           916
    #define prmpriohd67                  917 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                   918 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                  919 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                   920 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd              921
    #define prmrisend67hd                922
    #define prmriseta67hd                923
    #define prmrisrole67hd               924
    #define prmrissubrole67hd            925
    #define prmrisimportance67hd         926
    #define prmrisstationtype67hd        927
    #define prmrisapproachid67hd         928
    #define prmrislaneid67hd_1           929
    #define prmpriohd68                  930 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                   931 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                  932 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                   933 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd              934
    #define prmrisend68hd                935
    #define prmriseta68hd                936
    #define prmrisrole68hd               937
    #define prmrissubrole68hd            938
    #define prmrisimportance68hd         939
    #define prmrisstationtype68hd        940
    #define prmrisapproachid68hd         941
    #define prmrislaneid68hd_1           942
    #define prmrislaneid68hd_2           943
    #define prmkarsg02                   944 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                   945 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                   946 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                   947 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                   948 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                   949 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                   950 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                   951 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                   952 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                   953 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                 954 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                 955 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                 956 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                 957 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                 958 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                 959 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                 960 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                 961 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                 962 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                 963 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                     964 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                     965 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                     966 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                     967 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                     968 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                     969 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                     970 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                     971 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                     972 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                     973 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                     974 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                     975 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                     976 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                     977 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                     978 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                     979 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                     980 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                     981 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                     982 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                     983 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                     984 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1           985 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1           986 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1           987 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2           988 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2           989 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2           990 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3           991 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3           992 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3           993 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02                    994 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                    995 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                    996 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                    997 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                    998 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                    999 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1000 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1001 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1002 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1003 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1004 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1005 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1006 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1007 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1008 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1009 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1010 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1011 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1012 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1013 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1014 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1015 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1016 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1017 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1018 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1019 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1020 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1021 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1022 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1023 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1024 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1025 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1026 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1027 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1028 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1029 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1030 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1031 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1032 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1033 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1034 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1035 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1036 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1037 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1038 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1039 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1040 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1041 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1042 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1043 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1044 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1045 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1046 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1047 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1048 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1049 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1050 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1051 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1052 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1053 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1054 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1055 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1056 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1057 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1058 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1059 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1060 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1061 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1062 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1063 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1064 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1065 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1066 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1067 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1068 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1069 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1070 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1071 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1072 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1073 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1074 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1075 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1076 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1077 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1078 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1079 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1080 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1081 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1082 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1083 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1084 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1085 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1086 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1087 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1088 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1089 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1090 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1091 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1092 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1093 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1094 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1095 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1096 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1097 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1098 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1099 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1100 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1101 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1102 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1103 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1104 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1105 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1106 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1107 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1108 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1109 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1110 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1111 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1112 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1113 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1114 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1115 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1116 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1117 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1118 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1119 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmrisapproachid02          1120 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1121 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1122 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1123 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1124 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1125 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1126 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1127 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1128 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1129 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1130 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1131 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1132 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1133 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1134 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1135 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1136 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1137 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1138 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1139 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1140 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1141 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1142 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1143 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1144 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1145 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1146 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1147 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1148 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1149 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1150 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1151 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1152 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1153 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1154 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1155 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1156 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1157 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1158 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1159 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1160 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1161 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1162 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1163 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1164 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1165 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1166 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1167 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1168 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1169 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1170 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1171 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1172 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1173 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1174 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1175 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1176 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1177 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1178 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1179 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1180 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1181 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1182 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1183 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1184 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1185 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1186 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1187 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart03mveh1         1188 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1189 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1190 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1191 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1192 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1193 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1194 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1195 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1196 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1197 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1198 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1199 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1200 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1201 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart24fts1          1202 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1203 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1204 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1205 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1206 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1207 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1208 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1209 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1210 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1211 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1212 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1213 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1214 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1215 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1216 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1217 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1218 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1219 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1220 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1221 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1222 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1223 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1224 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1225 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1226 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1227 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1228 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1229 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1230 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1231 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1232 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1233 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1234 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1235 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1236 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1237 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         1238 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1239 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          1240 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1241 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          1242 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1243 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          1244 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1245 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend03mveh1           1246 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1247 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1248 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1249 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1250 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1251 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           1252 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       1253 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           1254 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       1255 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           1256 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       1257 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            1258 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        1259 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend24fts1            1260 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        1261 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            1262 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        1263 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            1264 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        1265 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            1266 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        1267 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            1268 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        1269 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            1270 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        1271 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            1272 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        1273 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            1274 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        1275 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            1276 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        1277 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            1278 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        1279 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            1280 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        1281 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            1282 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        1283 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            1284 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        1285 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           1286 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       1287 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           1288 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       1289 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           1290 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       1291 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           1292 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       1293 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           1294 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       1295 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           1296 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       1297 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            1298 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        1299 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            1300 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        1301 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            1302 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        1303 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart03mveh1         1304 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     1305 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         1306 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     1307 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         1308 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     1309 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         1310 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     1311 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         1312 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     1313 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         1314 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     1315 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          1316 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      1317 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart24fts1          1318 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      1319 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          1320 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      1321 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          1322 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      1323 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          1324 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      1325 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          1326 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      1327 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          1328 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      1329 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          1330 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      1331 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          1332 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      1333 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          1334 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      1335 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          1336 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      1337 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          1338 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      1339 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          1340 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      1341 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          1342 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      1343 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         1344 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     1345 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         1346 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     1347 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         1348 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     1349 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         1350 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     1351 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         1352 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     1353 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         1354 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     1355 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          1356 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      1357 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          1358 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      1359 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          1360 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      1361 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend03mveh1           1362 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       1363 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           1364 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       1365 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           1366 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       1367 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           1368 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       1369 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           1370 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       1371 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           1372 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       1373 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            1374 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        1375 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend24fts1            1376 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        1377 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            1378 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        1379 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            1380 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        1381 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            1382 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        1383 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            1384 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        1385 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            1386 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        1387 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            1388 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        1389 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            1390 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        1391 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            1392 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        1393 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            1394 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        1395 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            1396 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        1397 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            1398 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        1399 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            1400 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        1401 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           1402 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       1403 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           1404 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       1405 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           1406 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       1407 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           1408 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       1409 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           1410 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       1411 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           1412 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       1413 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            1414 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        1415 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            1416 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        1417 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            1418 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        1419 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          1420 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          1421 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          1422 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            1423 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            1424 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            1425 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                1426 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1427 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1428 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1429 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1430 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1431 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1432 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1433 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1434 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1435 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1436 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1437 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1438 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1439 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1440 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1441 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1442 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1443 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1444 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1445 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1446 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1447 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                1448 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                1449 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmsiexgrperc33             1450 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             1451 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               1452 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1453 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1454 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1455 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1456 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1457 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1458 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1459 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1460 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1461 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1462 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1463 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1464 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1465 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1466 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1467 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1468 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1469 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1470 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1471 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1472 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1473 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1474 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1475 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1476 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1477 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1478 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1479 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1480 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1481 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1482 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1483 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1484 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1485 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1486 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1487 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1488 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1489 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1490 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1491 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 1492 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   1493 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               1494 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   1495 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1496 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1497 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   1498 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   1499 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1500 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1501 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   1502 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 1503 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   1504 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 1505 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   1506 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   1507 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   1508 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1509 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1510 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1511 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1512 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1513 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1514 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1515 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1516 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1517 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1518 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1519 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1520 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               1521 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmminwtv                   1522 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              1523 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              1524 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmttxconfidence15          1525
    #define prmlatencyminendsg          1526
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1527 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1528 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1529 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1530
#else
    #define PRMMAX1                     1527
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

