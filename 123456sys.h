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
 * 12.2.1   14-03-2023   TLCGen      Ontwikkel versie TLCGen (portable)
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.2.1 20230314"
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
    #define usovinm02ristest (FCMAX +  51) /* Verklikken inmelding OV fase 02                         */
    #define usovinm03bus     (FCMAX +  52) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risov   (FCMAX +  53) /* Verklikken inmelding OV fase 03                         */
    #define usovinm03risvrw  (FCMAX +  54) /* Verklikken inmelding OV fase 03                         */
    #define usovinm05bus     (FCMAX +  55) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risov   (FCMAX +  56) /* Verklikken inmelding OV fase 05                         */
    #define usovinm05risvrw  (FCMAX +  57) /* Verklikken inmelding OV fase 05                         */
    #define usovinm08bus     (FCMAX +  58) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risov   (FCMAX +  59) /* Verklikken inmelding OV fase 08                         */
    #define usovinm08risvrw  (FCMAX +  60) /* Verklikken inmelding OV fase 08                         */
    #define usovinm09bus     (FCMAX +  61) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risov   (FCMAX +  62) /* Verklikken inmelding OV fase 09                         */
    #define usovinm09risvrw  (FCMAX +  63) /* Verklikken inmelding OV fase 09                         */
    #define usovinm11bus     (FCMAX +  64) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risov   (FCMAX +  65) /* Verklikken inmelding OV fase 11                         */
    #define usovinm11risvrw  (FCMAX +  66) /* Verklikken inmelding OV fase 11                         */
    #define usovinm22fiets   (FCMAX +  67) /* Verklikken inmelding OV fase 22                         */
    #define usovinm28fiets   (FCMAX +  68) /* Verklikken inmelding OV fase 28                         */
    #define usovinm61bus     (FCMAX +  69) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risov   (FCMAX +  70) /* Verklikken inmelding OV fase 61                         */
    #define usovinm61risvrw  (FCMAX +  71) /* Verklikken inmelding OV fase 61                         */
    #define usovinm62bus     (FCMAX +  72) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risov   (FCMAX +  73) /* Verklikken inmelding OV fase 62                         */
    #define usovinm62risvrw  (FCMAX +  74) /* Verklikken inmelding OV fase 62                         */
    #define usovinm67bus     (FCMAX +  75) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risov   (FCMAX +  76) /* Verklikken inmelding OV fase 67                         */
    #define usovinm67risvrw  (FCMAX +  77) /* Verklikken inmelding OV fase 67                         */
    #define usovinm68bus     (FCMAX +  78) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risov   (FCMAX +  79) /* Verklikken inmelding OV fase 68                         */
    #define usovinm68risvrw  (FCMAX +  80) /* Verklikken inmelding OV fase 68                         */
    #define ushdinm02        (FCMAX +  81) /* Verklikken inmelding HD fase 02                         */
    #define ushdinm03        (FCMAX +  82) /* Verklikken inmelding HD fase 03                         */
    #define ushdinm05        (FCMAX +  83) /* Verklikken inmelding HD fase 05                         */
    #define ushdinm08        (FCMAX +  84) /* Verklikken inmelding HD fase 08                         */
    #define ushdinm09        (FCMAX +  85) /* Verklikken inmelding HD fase 09                         */
    #define ushdinm11        (FCMAX +  86) /* Verklikken inmelding HD fase 11                         */
    #define ushdinm61        (FCMAX +  87) /* Verklikken inmelding HD fase 61                         */
    #define ushdinm62        (FCMAX +  88) /* Verklikken inmelding HD fase 62                         */
    #define ushdinm67        (FCMAX +  89) /* Verklikken inmelding HD fase 67                         */
    #define ushdinm68        (FCMAX +  90) /* Verklikken inmelding HD fase 68                         */
    #define usperdef         (FCMAX +  91) /* Default periode actief                                  */
    #define usper1           (FCMAX +  92) /* Periode Reserve actief                                  */
    #define usperoFietsprio1 (FCMAX +  93) /* Periode actief                                          */
    #define usperoFietsprio2 (FCMAX +  94) /* Periode actief                                          */
    #define usperoFietsprio3 (FCMAX +  95) /* Periode actief                                          */
    #define usper2           (FCMAX +  96) /* Periode Dag periode actief                              */
    #define usper3           (FCMAX +  97) /* Periode Ochtendspits actief                             */
    #define usper4           (FCMAX +  98) /* Periode Avondspits actief                               */
    #define usper5           (FCMAX +  99) /* Periode Koopavond actief                                */
    #define usper6           (FCMAX + 100) /* Periode Weekend actief                                  */
    #define usper7           (FCMAX + 101) /* Periode Reserve actief                                  */
    #define usrgv            (FCMAX + 102) /* Verklikken actief zijn RoBuGrover                       */
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
    #define hnla02_1a                34 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b                35 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a                36 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b                37 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1                 38 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 39 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 40 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 41 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 42 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 43 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 44 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus                45 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus                46 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                47 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                48 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                49 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                50 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                51 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                52 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                53 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                54 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus               55 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus             56 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus            57 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar          58 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar         59 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             60 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           61 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risov          62 /* Prioriteit uitmelding 02 NG                                        */
    #define hprioin02risovris        63 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risovris       64 /* Prioriteit uitmelding 02 NG                                        */
    #define hprio02risvrw            65 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          66 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         67 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       68 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      69 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio02ristest           70 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02ristest         71 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02ristest        72 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02ristestris      73 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02ristestris     74 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03bus               75 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             76 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            77 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          78 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         79 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             80 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           81 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          82 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        83 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       84 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            85 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          86 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         87 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       88 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      89 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus               90 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus             91 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus            92 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar          93 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar         94 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov             95 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov           96 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov          97 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris        98 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris       99 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw           100 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw         101 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw        102 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris      103 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris     104 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus              105 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus            106 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus           107 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar         108 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        109 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            110 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          111 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         112 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       113 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      114 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           115 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         116 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        117 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      118 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     119 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              120 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            121 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           122 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         123 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        124 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            125 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          126 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         127 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       128 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      129 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           130 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         131 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        132 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      133 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     134 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              135 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            136 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           137 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         138 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        139 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            140 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          141 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         142 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       143 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      144 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           145 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         146 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        147 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      148 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     149 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            150 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          151 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         152 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets22_1 153 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    154 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            155 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          156 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         157 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 158 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    159 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61bus              160 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus            161 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus           162 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar         163 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar        164 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov            165 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov          166 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov         167 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris       168 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris      169 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw           170 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw         171 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw        172 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris      173 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris     174 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus              175 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus            176 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus           177 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar         178 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar        179 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov            180 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov          181 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov         182 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris       183 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris      184 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw           185 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw         186 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw        187 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris      188 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris     189 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus              190 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus            191 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus           192 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar         193 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar        194 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov            195 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov          196 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov         197 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris       198 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris      199 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw           200 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw         201 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw        202 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris      203 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris     204 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus              205 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus            206 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus           207 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar         208 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar        209 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov            210 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov          211 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov         212 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris       213 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris      214 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw           215 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw         216 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw        217 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris      218 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris     219 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hhd02                   220 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                 221 /* HD inmelding 02                                                    */
    #define hhduit02                222 /* HD uitmelding 02                                                   */
    #define hhdin02kar              223 /* HD inmelding 02                                                    */
    #define hhduit02kar             224 /* HD uitmelding 02                                                   */
    #define hhdin02ris              225 /* HD inmelding 02                                                    */
    #define hhduit02ris             226 /* HD uitmelding 02                                                   */
    #define hhd03                   227 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                 228 /* HD inmelding 03                                                    */
    #define hhduit03                229 /* HD uitmelding 03                                                   */
    #define hhdin03kar              230 /* HD inmelding 03                                                    */
    #define hhduit03kar             231 /* HD uitmelding 03                                                   */
    #define hhdin03ris              232 /* HD inmelding 03                                                    */
    #define hhduit03ris             233 /* HD uitmelding 03                                                   */
    #define hhd05                   234 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                 235 /* HD inmelding 05                                                    */
    #define hhduit05                236 /* HD uitmelding 05                                                   */
    #define hhdin05kar              237 /* HD inmelding 05                                                    */
    #define hhduit05kar             238 /* HD uitmelding 05                                                   */
    #define hhdin05ris              239 /* HD inmelding 05                                                    */
    #define hhduit05ris             240 /* HD uitmelding 05                                                   */
    #define hhd08                   241 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                 242 /* HD inmelding 08                                                    */
    #define hhduit08                243 /* HD uitmelding 08                                                   */
    #define hhdin08kar              244 /* HD inmelding 08                                                    */
    #define hhduit08kar             245 /* HD uitmelding 08                                                   */
    #define hhdin08ris              246 /* HD inmelding 08                                                    */
    #define hhduit08ris             247 /* HD uitmelding 08                                                   */
    #define hhd09                   248 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                 249 /* HD inmelding 09                                                    */
    #define hhduit09                250 /* HD uitmelding 09                                                   */
    #define hhdin09kar              251 /* HD inmelding 09                                                    */
    #define hhduit09kar             252 /* HD uitmelding 09                                                   */
    #define hhdin09ris              253 /* HD inmelding 09                                                    */
    #define hhduit09ris             254 /* HD uitmelding 09                                                   */
    #define hhd11                   255 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                 256 /* HD inmelding 11                                                    */
    #define hhduit11                257 /* HD uitmelding 11                                                   */
    #define hhdin11kar              258 /* HD inmelding 11                                                    */
    #define hhduit11kar             259 /* HD uitmelding 11                                                   */
    #define hhdin11ris              260 /* HD inmelding 11                                                    */
    #define hhduit11ris             261 /* HD uitmelding 11                                                   */
    #define hhd61                   262 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                 263 /* HD inmelding 61                                                    */
    #define hhduit61                264 /* HD uitmelding 61                                                   */
    #define hhdin61kar              265 /* HD inmelding 61                                                    */
    #define hhduit61kar             266 /* HD uitmelding 61                                                   */
    #define hhdin61ris              267 /* HD inmelding 61                                                    */
    #define hhduit61ris             268 /* HD uitmelding 61                                                   */
    #define hhd62                   269 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                 270 /* HD inmelding 62                                                    */
    #define hhduit62                271 /* HD uitmelding 62                                                   */
    #define hhdin62kar              272 /* HD inmelding 62                                                    */
    #define hhduit62kar             273 /* HD uitmelding 62                                                   */
    #define hhdin62ris              274 /* HD inmelding 62                                                    */
    #define hhduit62ris             275 /* HD uitmelding 62                                                   */
    #define hhd67                   276 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                 277 /* HD inmelding 67                                                    */
    #define hhduit67                278 /* HD uitmelding 67                                                   */
    #define hhdin67kar              279 /* HD inmelding 67                                                    */
    #define hhduit67kar             280 /* HD uitmelding 67                                                   */
    #define hhdin67ris              281 /* HD inmelding 67                                                    */
    #define hhduit67ris             282 /* HD uitmelding 67                                                   */
    #define hhd68                   283 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                 284 /* HD inmelding 68                                                    */
    #define hhduit68                285 /* HD uitmelding 68                                                   */
    #define hhdin68kar              286 /* HD inmelding 68                                                    */
    #define hhduit68kar             287 /* HD uitmelding 68                                                   */
    #define hhdin68ris              288 /* HD inmelding 68                                                    */
    #define hhduit68ris             289 /* HD uitmelding 68                                                   */
    #define hperiodFietsprio1       290 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       291 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3       292 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2         293 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 294 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               295 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               296 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               297 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               298 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11               299 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               300 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               301 /* Bijhouden primaire realisatie fase 28                              */
    #define hprreal68               302 /* Bijhouden primaire realisatie fase 68                              */
    #define hschoolingreepdk33a     303 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     304 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     305 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     306 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr33               307 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               308 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262               309
    #define hnleg0868               310
    #define hnleg1168               311
    #define hnleg2221               312
    #define hnlsg3132               313
    #define hnlsg3231               314
    #define hnlsg3334               315
    #define hnlsg3433               316
    #define hnleg8281               317
    #define hinl32                  318 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  319 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  320 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  321 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  322 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  323 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  324 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  325 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  326 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  327 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  328 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  329 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  330

/* geheugen elementen */
/* ------------------ */
    #define mperiod                  0 /* Onthouden actieve periode                                    */
    #define mlcycl                   1 /* Onthouden laatste cyclustijd                                 */
    #define mmk03                    2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03 */
    #define mmk05                    3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05 */
    #define mmk08                    4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08 */
    #define mmk09                    5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09 */
    #define mmk11                    6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11 */
    #define mmk61                    7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61 */
    #define mmk62                    8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62 */
    #define mmk67                    9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67 */
    #define mmk68                   10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68 */
    #define mstp02bus               11 /* Stiptheid voorste OV voertuig bij 02 Bus                     */
    #define mstp03bus               12 /* Stiptheid voorste OV voertuig bij 03 Bus                     */
    #define mstp05bus               13 /* Stiptheid voorste OV voertuig bij 05 Bus                     */
    #define mstp08bus               14 /* Stiptheid voorste OV voertuig bij 08 Bus                     */
    #define mstp09bus               15 /* Stiptheid voorste OV voertuig bij 09 Bus                     */
    #define mstp11bus               16 /* Stiptheid voorste OV voertuig bij 11 Bus                     */
    #define mstp61bus               17 /* Stiptheid voorste OV voertuig bij 61 Bus                     */
    #define mstp62bus               18 /* Stiptheid voorste OV voertuig bij 62 Bus                     */
    #define mstp67bus               19 /* Stiptheid voorste OV voertuig bij 67 Bus                     */
    #define mstp68bus               20 /* Stiptheid voorste OV voertuig bij 68 Bus                     */
    #define mftstelris22fietsfiets  21 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets           */
    #define mftstelris28fietsfiets  22 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets           */
    #define mrealtijd02             23 /* Realisatie tijd fase 02                                      */
    #define mrealtijd03             24 /* Realisatie tijd fase 03                                      */
    #define mrealtijd05             25 /* Realisatie tijd fase 05                                      */
    #define mrealtijd08             26 /* Realisatie tijd fase 08                                      */
    #define mrealtijd09             27 /* Realisatie tijd fase 09                                      */
    #define mrealtijd11             28 /* Realisatie tijd fase 11                                      */
    #define mrealtijd21             29 /* Realisatie tijd fase 21                                      */
    #define mrealtijd22             30 /* Realisatie tijd fase 22                                      */
    #define mrealtijd24             31 /* Realisatie tijd fase 24                                      */
    #define mrealtijd26             32 /* Realisatie tijd fase 26                                      */
    #define mrealtijd28             33 /* Realisatie tijd fase 28                                      */
    #define mrealtijd31             34 /* Realisatie tijd fase 31                                      */
    #define mrealtijd32             35 /* Realisatie tijd fase 32                                      */
    #define mrealtijd33             36 /* Realisatie tijd fase 33                                      */
    #define mrealtijd34             37 /* Realisatie tijd fase 34                                      */
    #define mrealtijd38             38 /* Realisatie tijd fase 38                                      */
    #define mrealtijd61             39 /* Realisatie tijd fase 61                                      */
    #define mrealtijd62             40 /* Realisatie tijd fase 62                                      */
    #define mrealtijd67             41 /* Realisatie tijd fase 67                                      */
    #define mrealtijd68             42 /* Realisatie tijd fase 68                                      */
    #define mrealtijd81             43 /* Realisatie tijd fase 81                                      */
    #define mrealtijd82             44 /* Realisatie tijd fase 82                                      */
    #define mrealtijd84             45 /* Realisatie tijd fase 84                                      */
    #define mrealtijdmin02          46 /* Realisatie minimum tijd fase 02                              */
    #define mrealtijdmin03          47 /* Realisatie minimum tijd fase 03                              */
    #define mrealtijdmin05          48 /* Realisatie minimum tijd fase 05                              */
    #define mrealtijdmin08          49 /* Realisatie minimum tijd fase 08                              */
    #define mrealtijdmin09          50 /* Realisatie minimum tijd fase 09                              */
    #define mrealtijdmin11          51 /* Realisatie minimum tijd fase 11                              */
    #define mrealtijdmin21          52 /* Realisatie minimum tijd fase 21                              */
    #define mrealtijdmin22          53 /* Realisatie minimum tijd fase 22                              */
    #define mrealtijdmin24          54 /* Realisatie minimum tijd fase 24                              */
    #define mrealtijdmin26          55 /* Realisatie minimum tijd fase 26                              */
    #define mrealtijdmin28          56 /* Realisatie minimum tijd fase 28                              */
    #define mrealtijdmin31          57 /* Realisatie minimum tijd fase 31                              */
    #define mrealtijdmin32          58 /* Realisatie minimum tijd fase 32                              */
    #define mrealtijdmin33          59 /* Realisatie minimum tijd fase 33                              */
    #define mrealtijdmin34          60 /* Realisatie minimum tijd fase 34                              */
    #define mrealtijdmin38          61 /* Realisatie minimum tijd fase 38                              */
    #define mrealtijdmin61          62 /* Realisatie minimum tijd fase 61                              */
    #define mrealtijdmin62          63 /* Realisatie minimum tijd fase 62                              */
    #define mrealtijdmin67          64 /* Realisatie minimum tijd fase 67                              */
    #define mrealtijdmin68          65 /* Realisatie minimum tijd fase 68                              */
    #define mrealtijdmin81          66 /* Realisatie minimum tijd fase 81                              */
    #define mrealtijdmin82          67 /* Realisatie minimum tijd fase 82                              */
    #define mrealtijdmin84          68 /* Realisatie minimum tijd fase 84                              */
    #define mrealtijdmax02          69 /* Realisatie maximum tijd fase 02                              */
    #define mrealtijdmax03          70 /* Realisatie maximum tijd fase 03                              */
    #define mrealtijdmax05          71 /* Realisatie maximum tijd fase 05                              */
    #define mrealtijdmax08          72 /* Realisatie maximum tijd fase 08                              */
    #define mrealtijdmax09          73 /* Realisatie maximum tijd fase 09                              */
    #define mrealtijdmax11          74 /* Realisatie maximum tijd fase 11                              */
    #define mrealtijdmax21          75 /* Realisatie maximum tijd fase 21                              */
    #define mrealtijdmax22          76 /* Realisatie maximum tijd fase 22                              */
    #define mrealtijdmax24          77 /* Realisatie maximum tijd fase 24                              */
    #define mrealtijdmax26          78 /* Realisatie maximum tijd fase 26                              */
    #define mrealtijdmax28          79 /* Realisatie maximum tijd fase 28                              */
    #define mrealtijdmax31          80 /* Realisatie maximum tijd fase 31                              */
    #define mrealtijdmax32          81 /* Realisatie maximum tijd fase 32                              */
    #define mrealtijdmax33          82 /* Realisatie maximum tijd fase 33                              */
    #define mrealtijdmax34          83 /* Realisatie maximum tijd fase 34                              */
    #define mrealtijdmax38          84 /* Realisatie maximum tijd fase 38                              */
    #define mrealtijdmax61          85 /* Realisatie maximum tijd fase 61                              */
    #define mrealtijdmax62          86 /* Realisatie maximum tijd fase 62                              */
    #define mrealtijdmax67          87 /* Realisatie maximum tijd fase 67                              */
    #define mrealtijdmax68          88 /* Realisatie maximum tijd fase 68                              */
    #define mrealtijdmax81          89 /* Realisatie maximum tijd fase 81                              */
    #define mrealtijdmax82          90 /* Realisatie maximum tijd fase 82                              */
    #define mrealtijdmax84          91 /* Realisatie maximum tijd fase 84                              */
    #define mar02                   92 /* Alternatieve ruimte fase 02                                  */
    #define mar03                   93 /* Alternatieve ruimte fase 03                                  */
    #define mar05                   94 /* Alternatieve ruimte fase 05                                  */
    #define mar08                   95 /* Alternatieve ruimte fase 08                                  */
    #define mar09                   96 /* Alternatieve ruimte fase 09                                  */
    #define mar11                   97 /* Alternatieve ruimte fase 11                                  */
    #define mar21                   98 /* Alternatieve ruimte fase 21                                  */
    #define mar22                   99 /* Alternatieve ruimte fase 22                                  */
    #define mar24                  100 /* Alternatieve ruimte fase 24                                  */
    #define mar26                  101 /* Alternatieve ruimte fase 26                                  */
    #define mar28                  102 /* Alternatieve ruimte fase 28                                  */
    #define mar31                  103 /* Alternatieve ruimte fase 31                                  */
    #define mar32                  104 /* Alternatieve ruimte fase 32                                  */
    #define mar33                  105 /* Alternatieve ruimte fase 33                                  */
    #define mar34                  106 /* Alternatieve ruimte fase 34                                  */
    #define mar38                  107 /* Alternatieve ruimte fase 38                                  */
    #define mar61                  108 /* Alternatieve ruimte fase 61                                  */
    #define mar62                  109 /* Alternatieve ruimte fase 62                                  */
    #define mar67                  110 /* Alternatieve ruimte fase 67                                  */
    #define mar68                  111 /* Alternatieve ruimte fase 68                                  */
    #define mar81                  112 /* Alternatieve ruimte fase 81                                  */
    #define mar82                  113 /* Alternatieve ruimte fase 82                                  */
    #define mar84                  114 /* Alternatieve ruimte fase 84                                  */
    #define MEMAX1                 115

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
    #define tprioin02ristestris        193 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02ristest          194 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02ristest            195 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02ristest               196 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02ristest               197 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02ristest              198 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                199 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   200 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   201 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  202 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          203 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            204 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              205 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 206 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 207 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                208 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         209 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           210 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             211 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                212 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                213 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               214 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                215 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   216 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   217 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  218 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          219 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            220 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              221 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 222 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 223 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                224 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         225 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           226 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             227 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                228 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                229 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               230 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                231 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   232 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   233 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  234 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          235 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            236 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              237 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 238 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 239 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                240 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         241 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           242 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             243 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                244 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                245 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               246 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                247 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   248 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   249 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  250 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          251 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            252 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              253 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 254 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 255 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                256 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         257 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           258 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             259 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                260 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                261 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               262 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                263 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   264 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   265 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  266 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          267 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            268 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              269 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 270 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 271 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                272 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         273 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           274 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             275 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                276 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                277 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               278 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            279 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              280 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 281 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 282 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                283 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tprioin28fietsfiets28_2    284 /* Anti jutter tijd inmelden 28 Fiets                                                       */
    #define tpriouit28fiets            285 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              286 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 287 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 288 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                289 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg61bus                290 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   291 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   292 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  293 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          294 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            295 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              296 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 297 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 298 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                299 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         300 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           301 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             302 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                303 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                304 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               305 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                306 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   307 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   308 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  309 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          310 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            311 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              312 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 313 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 314 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                315 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         316 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           317 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             318 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                319 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                320 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               321 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                322 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   323 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   324 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  325 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          326 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            327 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              328 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 329 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 330 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                331 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         332 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           333 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             334 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                335 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                336 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               337 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            338 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                339 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   340 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   341 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  342 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          343 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            344 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              345 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 346 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 347 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                348 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         349 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           350 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             351 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                352 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                353 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               354 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    355 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    356 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 357 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 358 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                359 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    360 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    361 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 362 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 363 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                364 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    365 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    366 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 367 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 368 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                369 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    370 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    371 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 372 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 373 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                374 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    375 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    376 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 377 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 378 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                379 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    380 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    381 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 382 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 383 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                384 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    385 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    386 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 387 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 388 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                389 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    390 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    391 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 392 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 393 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                394 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    395 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    396 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 397 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 398 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                399 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    400 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    401 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 402 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 403 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                404 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                405
    #define tris02risvrw               406
    #define tris02ristest              407
    #define tris03risov                408
    #define tris03risvrw               409
    #define tris05risov                410
    #define tris05risvrw               411
    #define tris08risov                412
    #define tris08risvrw               413
    #define tris09risov                414
    #define tris09risvrw               415
    #define tris11risov                416
    #define tris11risvrw               417
    #define tris61risov                418
    #define tris61risvrw               419
    #define tris62risov                420
    #define tris62risvrw               421
    #define tris67risov                422
    #define tris67risvrw               423
    #define tris68risov                424
    #define tris68risvrw               425
    #define trgad24_3                  426 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 427 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            428 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            429 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   430 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   431 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   432 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   433 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   434 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   435 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    436 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    437 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    438 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    439 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   440 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   441 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   442 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   443 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   444 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   445 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    446 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    447 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    448 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    449 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    450 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    451 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    452 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tfd68_1a                   453 /* File meting RoBuGrover fase 68 detector 68_1a                                            */
    #define tfd68_1b                   454 /* File meting RoBuGrover fase 68 detector 68_1b                                            */
    #define thd68_2a                   455 /* RoBuGrover hiaat meting fase 68 detector 68_2a                                           */
    #define thd68_2b                   456 /* RoBuGrover hiaat meting fase 68 detector 68_2b                                           */
    #define tschoolingreepmaxg33       457 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 458 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 459 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       460 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 461 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 462 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr33                  463 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             464 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             465 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  466 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             467 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             468 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   469 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             470 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             471 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             472 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               473 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               474 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               475 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               476 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               477 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               478 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               479 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               480 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               481 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               482 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               483 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               484 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               485 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               486 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               487 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               488 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               489 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               490 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               491 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               492 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               493 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               494 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               495 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   496 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               497 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              498 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               499 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              500 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   501 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               502 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              503 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               504 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              505 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   506 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                507 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               508 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define tvs2205                    509 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs2611                    510 /* Voorstarttijd fase 26 op fase 11                                                         */
    #define tvs3205                    511 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr6202                    512 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    513 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    514 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    515 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    516 /* Late release tijd fase 81 naar fase 82                                                   */
    #define tinl3231                   517 /* Inloop tijd fase 32                                                                      */
    #define tinl3132                   518 /* Inloop tijd fase 31                                                                      */
    #define tinl3433                   519 /* Inloop tijd fase 34                                                                      */
    #define tinl3334                   520 /* Inloop tijd fase 33                                                                      */
    #define tfo0522                    521 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo1126                    522 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define tfo0532                    523 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define TMMAX1                     524

/* teller elementen */
/* ---------------- */
    #define cvc02bus             0 /* Bijhouden prio inmeldingen fase 02 type Bus             */
    #define cvc02risov           1 /* Bijhouden prio inmeldingen fase 02 type NG              */
    #define cvc02risvrw          2 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen     */
    #define cvc02ristest         3 /* Bijhouden prio inmeldingen fase 02 type Bus             */
    #define cvc03bus             4 /* Bijhouden prio inmeldingen fase 03 type Bus             */
    #define cvc03risov           5 /* Bijhouden prio inmeldingen fase 03 type Bus             */
    #define cvc03risvrw          6 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen     */
    #define cvc05bus             7 /* Bijhouden prio inmeldingen fase 05 type Bus             */
    #define cvc05risov           8 /* Bijhouden prio inmeldingen fase 05 type Bus             */
    #define cvc05risvrw          9 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen     */
    #define cvc08bus            10 /* Bijhouden prio inmeldingen fase 08 type Bus             */
    #define cvc08risov          11 /* Bijhouden prio inmeldingen fase 08 type Bus             */
    #define cvc08risvrw         12 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen     */
    #define cvc09bus            13 /* Bijhouden prio inmeldingen fase 09 type Bus             */
    #define cvc09risov          14 /* Bijhouden prio inmeldingen fase 09 type Bus             */
    #define cvc09risvrw         15 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen     */
    #define cvc11bus            16 /* Bijhouden prio inmeldingen fase 11 type Bus             */
    #define cvc11risov          17 /* Bijhouden prio inmeldingen fase 11 type Bus             */
    #define cvc11risvrw         18 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen     */
    #define cftscyc22fietsfiets 19 /* Bijhouden realisaties tbv peloton prio voor fase 22     */
    #define cftsvtg22fietsfiets 20 /* Bijhouden aantal fietsers tbv peloton prio voor fase 22 */
    #define cvc22fiets          21 /* Bijhouden prio inmeldingen fase 22 type Fiets           */
    #define cftscyc28fietsfiets 22 /* Bijhouden realisaties tbv peloton prio voor fase 28     */
    #define cftsvtg28fietsfiets 23 /* Bijhouden aantal fietsers tbv peloton prio voor fase 28 */
    #define cvc28fiets          24 /* Bijhouden prio inmeldingen fase 28 type Fiets           */
    #define cvc61bus            25 /* Bijhouden prio inmeldingen fase 61 type Bus             */
    #define cvc61risov          26 /* Bijhouden prio inmeldingen fase 61 type Bus             */
    #define cvc61risvrw         27 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen     */
    #define cvc62bus            28 /* Bijhouden prio inmeldingen fase 62 type Bus             */
    #define cvc62risov          29 /* Bijhouden prio inmeldingen fase 62 type Bus             */
    #define cvc62risvrw         30 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen     */
    #define cvc67bus            31 /* Bijhouden prio inmeldingen fase 67 type Bus             */
    #define cvc67risov          32 /* Bijhouden prio inmeldingen fase 67 type Bus             */
    #define cvc67risvrw         33 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen     */
    #define cvc68bus            34 /* Bijhouden prio inmeldingen fase 68 type Bus             */
    #define cvc68risov          35 /* Bijhouden prio inmeldingen fase 68 type Bus             */
    #define cvc68risvrw         36 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen     */
    #define cvchd02             37 /* Bijhouden prio inmeldingen fase 02                      */
    #define cvchd03             38 /* Bijhouden prio inmeldingen fase 03                      */
    #define cvchd05             39 /* Bijhouden prio inmeldingen fase 05                      */
    #define cvchd08             40 /* Bijhouden prio inmeldingen fase 08                      */
    #define cvchd09             41 /* Bijhouden prio inmeldingen fase 09                      */
    #define cvchd11             42 /* Bijhouden prio inmeldingen fase 11                      */
    #define cvchd61             43 /* Bijhouden prio inmeldingen fase 61                      */
    #define cvchd62             44 /* Bijhouden prio inmeldingen fase 62                      */
    #define cvchd67             45 /* Bijhouden prio inmeldingen fase 67                      */
    #define cvchd68             46 /* Bijhouden prio inmeldingen fase 68                      */
    #define CTMAX1              47

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
    #define schma0261                  20 /* Meeaanvraag van 02 naar 61 actief                              */
    #define schma0262                  21 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521                  22 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522                  23 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532                  24 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868                  25 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126                  26 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma1168                  27 /* Meeaanvraag van 11 naar 68 actief                              */
    #define schma2221                  28 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma2611                  29 /* Meeaanvraag van 26 naar 11 actief                              */
    #define schma3122                  30 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                  31 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                  32 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                  33 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                  34 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                  35 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                  36 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                  37 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                  38 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                  39 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                  40 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                    41 /* Meeverlengen fase 02                                           */
    #define schmv03                    42 /* Meeverlengen fase 03                                           */
    #define schmv05                    43 /* Meeverlengen fase 05                                           */
    #define schmv08                    44 /* Meeverlengen fase 08                                           */
    #define schmv09                    45 /* Meeverlengen fase 09                                           */
    #define schmv11                    46 /* Meeverlengen fase 11                                           */
    #define schmv21                    47 /* Meeverlengen fase 21                                           */
    #define schmv22                    48 /* Meeverlengen fase 22                                           */
    #define schhardmv2205              49 /* Hard meeverlengen fase 22 met fase 05                          */
    #define schmv24                    50 /* Meeverlengen fase 24                                           */
    #define schmv26                    51 /* Meeverlengen fase 26                                           */
    #define schhardmv2611              52 /* Hard meeverlengen fase 26 met fase 11                          */
    #define schmv28                    53 /* Meeverlengen fase 28                                           */
    #define schmv31                    54 /* Meeverlengen fase 31                                           */
    #define schmv32                    55 /* Meeverlengen fase 32                                           */
    #define schhardmv3205              56 /* Hard meeverlengen fase 32 met fase 05                          */
    #define schmv33                    57 /* Meeverlengen fase 33                                           */
    #define schmv34                    58 /* Meeverlengen fase 34                                           */
    #define schmv38                    59 /* Meeverlengen fase 38                                           */
    #define schmv61                    60 /* Meeverlengen fase 61                                           */
    #define schmv62                    61 /* Meeverlengen fase 62                                           */
    #define schmv67                    62 /* Meeverlengen fase 67                                           */
    #define schmv68                    63 /* Meeverlengen fase 68                                           */
    #define schmv81                    64 /* Meeverlengen fase 81                                           */
    #define schmv82                    65 /* Meeverlengen fase 82                                           */
    #define schmv84                    66 /* Meeverlengen fase 84                                           */
    #define schmlprm                   67 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus            68 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus            69 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus            70 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus            71 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus            72 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus            73 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus            74 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus            75 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus            76 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus            77 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schcovuber                 78 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                 */
    #define schcheckdstype             79 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar          80 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar         81 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus            82 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin02risovris        83 /* Inmelden 02 via NG toestaan                                    */
    #define schpriouit02risovris       84 /* Uitmelden 02 via NG toestaan                                   */
    #define schupinagb02risov          85 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin02risvrwris       86 /* Inmelden 02 via Vrachtwagen toestaan                           */
    #define schpriouit02risvrwris      87 /* Uitmelden 02 via Vrachtwagen toestaan                          */
    #define schupinagb02risvrw         88 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin02ristestris      89 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02ristestris     90 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02ristest        91 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar          92 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar         93 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus            94 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin03risovris        95 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03risovris       96 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03risov          97 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin03risvrwris       98 /* Inmelden 03 via Vrachtwagen toestaan                           */
    #define schpriouit03risvrwris      99 /* Uitmelden 03 via Vrachtwagen toestaan                          */
    #define schupinagb03risvrw        100 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar         101 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar        102 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus           103 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin05risovris       104 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05risovris      105 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05risov         106 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin05risvrwris      107 /* Inmelden 05 via Vrachtwagen toestaan                           */
    #define schpriouit05risvrwris     108 /* Uitmelden 05 via Vrachtwagen toestaan                          */
    #define schupinagb05risvrw        109 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar         110 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar        111 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus           112 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin08risovris       113 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08risovris      114 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08risov         115 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin08risvrwris      116 /* Inmelden 08 via Vrachtwagen toestaan                           */
    #define schpriouit08risvrwris     117 /* Uitmelden 08 via Vrachtwagen toestaan                          */
    #define schupinagb08risvrw        118 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar         119 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar        120 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus           121 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin09risovris       122 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09risovris      123 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09risov         124 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin09risvrwris      125 /* Inmelden 09 via Vrachtwagen toestaan                           */
    #define schpriouit09risvrwris     126 /* Uitmelden 09 via Vrachtwagen toestaan                          */
    #define schupinagb09risvrw        127 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar         128 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar        129 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus           130 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin11risovris       131 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11risovris      132 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11risov         133 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin11risvrwris      134 /* Inmelden 11 via Vrachtwagen toestaan                           */
    #define schpriouit11risvrwris     135 /* Uitmelden 11 via Vrachtwagen toestaan                          */
    #define schupinagb11risvrw        136 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schprioin22fietsfiets22_1 137 /* Inmelden 22 via Fiets toestaan                                 */
    #define schpriouit22fietsfiets    138 /* Uitmelden 22 via Fiets toestaan                                */
    #define schupinagb22fiets         139 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22  */
    #define schprioin28fietsfiets28_2 140 /* Inmelden 28 via Fiets toestaan                                 */
    #define schpriouit28fietsfiets    141 /* Uitmelden 28 via Fiets toestaan                                */
    #define schupinagb28fiets         142 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28  */
    #define schprioin61buskar         143 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61buskar        144 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61bus           145 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin61risovris       146 /* Inmelden 61 via Bus toestaan                                   */
    #define schpriouit61risovris      147 /* Uitmelden 61 via Bus toestaan                                  */
    #define schupinagb61risov         148 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin61risvrwris      149 /* Inmelden 61 via Vrachtwagen toestaan                           */
    #define schpriouit61risvrwris     150 /* Uitmelden 61 via Vrachtwagen toestaan                          */
    #define schupinagb61risvrw        151 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61  */
    #define schprioin62buskar         152 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62buskar        153 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62bus           154 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin62risovris       155 /* Inmelden 62 via Bus toestaan                                   */
    #define schpriouit62risovris      156 /* Uitmelden 62 via Bus toestaan                                  */
    #define schupinagb62risov         157 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin62risvrwris      158 /* Inmelden 62 via Vrachtwagen toestaan                           */
    #define schpriouit62risvrwris     159 /* Uitmelden 62 via Vrachtwagen toestaan                          */
    #define schupinagb62risvrw        160 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62  */
    #define schprioin67buskar         161 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67buskar        162 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67bus           163 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin67risovris       164 /* Inmelden 67 via Bus toestaan                                   */
    #define schpriouit67risovris      165 /* Uitmelden 67 via Bus toestaan                                  */
    #define schupinagb67risov         166 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin67risvrwris      167 /* Inmelden 67 via Vrachtwagen toestaan                           */
    #define schpriouit67risvrwris     168 /* Uitmelden 67 via Vrachtwagen toestaan                          */
    #define schupinagb67risvrw        169 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67  */
    #define schprioin68buskar         170 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68buskar        171 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68bus           172 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schprioin68risovris       173 /* Inmelden 68 via Bus toestaan                                   */
    #define schpriouit68risovris      174 /* Uitmelden 68 via Bus toestaan                                  */
    #define schupinagb68risov         175 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schprioin68risvrwris      176 /* Inmelden 68 via Vrachtwagen toestaan                           */
    #define schpriouit68risvrwris     177 /* Uitmelden 68 via Vrachtwagen toestaan                          */
    #define schupinagb68risvrw        178 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68  */
    #define schupinagbhd02            179 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar              180 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar             181 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02          182 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schhdin02ris              183 /* Inmelden 02 via RIS HD toestaan                                */
    #define schhduit02ris             184 /* Uitmelden 02 via RIS HD toestaan                               */
    #define schupinagbhd03            185 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar              186 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar             187 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03          188 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schhdin03ris              189 /* Inmelden 03 via RIS HD toestaan                                */
    #define schhduit03ris             190 /* Uitmelden 03 via RIS HD toestaan                               */
    #define schupinagbhd05            191 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar              192 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar             193 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05          194 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schhdin05ris              195 /* Inmelden 05 via RIS HD toestaan                                */
    #define schhduit05ris             196 /* Uitmelden 05 via RIS HD toestaan                               */
    #define schupinagbhd08            197 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar              198 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar             199 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08          200 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schhdin08ris              201 /* Inmelden 08 via RIS HD toestaan                                */
    #define schhduit08ris             202 /* Uitmelden 08 via RIS HD toestaan                               */
    #define schupinagbhd09            203 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar              204 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar             205 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09          206 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schhdin09ris              207 /* Inmelden 09 via RIS HD toestaan                                */
    #define schhduit09ris             208 /* Uitmelden 09 via RIS HD toestaan                               */
    #define schupinagbhd11            209 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar              210 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar             211 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11          212 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schhdin11ris              213 /* Inmelden 11 via RIS HD toestaan                                */
    #define schhduit11ris             214 /* Uitmelden 11 via RIS HD toestaan                               */
    #define schupinagbhd61            215 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar              216 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar             217 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61          218 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schhdin61ris              219 /* Inmelden 61 via RIS HD toestaan                                */
    #define schhduit61ris             220 /* Uitmelden 61 via RIS HD toestaan                               */
    #define schupinagbhd62            221 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar              222 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar             223 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62          224 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schhdin62ris              225 /* Inmelden 62 via RIS HD toestaan                                */
    #define schhduit62ris             226 /* Uitmelden 62 via RIS HD toestaan                               */
    #define schupinagbhd67            227 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar              228 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar             229 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67          230 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schhdin67ris              231 /* Inmelden 67 via RIS HD toestaan                                */
    #define schhduit67ris             232 /* Uitmelden 67 via RIS HD toestaan                               */
    #define schupinagbhd68            233 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar              234 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar             235 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68          236 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schhdin68ris              237 /* Inmelden 68 via RIS HD toestaan                                */
    #define schhduit68ris             238 /* Uitmelden 68 via RIS HD toestaan                               */
    #define schrisgeencheckopsg       239 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen    */
    #define schrisaanvraag            240 /* Globaal in of uitschakelen aanvragen via RIS                   */
    #define schrisverlengen           241 /* Globaal in of uitschakelen verlengen via RIS                   */
    #define schrgadd24_3              242 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv                    243 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel               244 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schschoolingreep33        245 /* Schoolingreep aan of uit voor fase 33                          */
    #define schschoolingreep34        246 /* Schoolingreep aan of uit voor fase 34                          */
    #define schsi33                   247 /* Senioreningreep aan of uit voor fase 33                        */
    #define schsi34                   248 /* Senioreningreep aan of uit voor fase 34                        */
    #define schca02                   249 /* Cyclische aanvraag fase 02                                     */
    #define schca03                   250 /* Cyclische aanvraag fase 03                                     */
    #define schca05                   251 /* Cyclische aanvraag fase 05                                     */
    #define schca08                   252 /* Cyclische aanvraag fase 08                                     */
    #define schca09                   253 /* Cyclische aanvraag fase 09                                     */
    #define schca11                   254 /* Cyclische aanvraag fase 11                                     */
    #define schca21                   255 /* Cyclische aanvraag fase 21                                     */
    #define schca22                   256 /* Cyclische aanvraag fase 22                                     */
    #define schca24                   257 /* Cyclische aanvraag fase 24                                     */
    #define schca26                   258 /* Cyclische aanvraag fase 26                                     */
    #define schca28                   259 /* Cyclische aanvraag fase 28                                     */
    #define schca31                   260 /* Cyclische aanvraag fase 31                                     */
    #define schca32                   261 /* Cyclische aanvraag fase 32                                     */
    #define schca33                   262 /* Cyclische aanvraag fase 33                                     */
    #define schca34                   263 /* Cyclische aanvraag fase 34                                     */
    #define schca38                   264 /* Cyclische aanvraag fase 38                                     */
    #define schca61                   265 /* Cyclische aanvraag fase 61                                     */
    #define schca62                   266 /* Cyclische aanvraag fase 62                                     */
    #define schca67                   267 /* Cyclische aanvraag fase 67                                     */
    #define schca68                   268 /* Cyclische aanvraag fase 68                                     */
    #define schca81                   269 /* Cyclische aanvraag fase 81                                     */
    #define schca82                   270 /* Cyclische aanvraag fase 82                                     */
    #define schca84                   271 /* Cyclische aanvraag fase 84                                     */
    #define schvg02_4a                272 /* Veiligheidsgroen detector 02_4a fase 02                        */
    #define schvg02_4b                273 /* Veiligheidsgroen detector 02_4b fase 02                        */
    #define schvg08_4a                274 /* Veiligheidsgroen detector 08_4a fase 08                        */
    #define schvg08_4b                275 /* Veiligheidsgroen detector 08_4b fase 08                        */
    #define schvg11_4                 276 /* Veiligheidsgroen detector 11_4 fase 11                         */
    #define schaltg02                 277 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                 278 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                 279 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                 280 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                 281 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                 282 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                 283 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232               284 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg243484             285 /* Alternatieve realisatie toestaan fasen 24, 34, 84              */
    #define schaltg26                 286 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                 287 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                 288 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384               289 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg2434               290 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg38                 291 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                 292 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                 293 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                 294 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                 295 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg81                 296 /* Alternatieve realisatie toestaan fase 81                       */
    #define schaltg82                 297 /* Alternatieve realisatie toestaan fase 82                       */
    #define schaltg243384             298 /* Alternatieve realisatie toestaan fasen 24, 33, 84              */
    #define schwg02                   299 /* Wachtstand groen fase 02                                       */
    #define schwg03                   300 /* Wachtstand groen fase 03                                       */
    #define schwg05                   301 /* Wachtstand groen fase 05                                       */
    #define schwg08                   302 /* Wachtstand groen fase 08                                       */
    #define schwg09                   303 /* Wachtstand groen fase 09                                       */
    #define schwg11                   304 /* Wachtstand groen fase 11                                       */
    #define schwg21                   305 /* Wachtstand groen fase 21                                       */
    #define schwg22                   306 /* Wachtstand groen fase 22                                       */
    #define schwg24                   307 /* Wachtstand groen fase 24                                       */
    #define schwg26                   308 /* Wachtstand groen fase 26                                       */
    #define schwg28                   309 /* Wachtstand groen fase 28                                       */
    #define schwg31                   310 /* Wachtstand groen fase 31                                       */
    #define schwg32                   311 /* Wachtstand groen fase 32                                       */
    #define schwg33                   312 /* Wachtstand groen fase 33                                       */
    #define schwg34                   313 /* Wachtstand groen fase 34                                       */
    #define schwg38                   314 /* Wachtstand groen fase 38                                       */
    #define schwg61                   315 /* Wachtstand groen fase 61                                       */
    #define schwg62                   316 /* Wachtstand groen fase 62                                       */
    #define schwg67                   317 /* Wachtstand groen fase 67                                       */
    #define schwg68                   318 /* Wachtstand groen fase 68                                       */
    #define schwg81                   319 /* Wachtstand groen fase 81                                       */
    #define schwg82                   320 /* Wachtstand groen fase 82                                       */
    #define schwg84                   321 /* Wachtstand groen fase 84                                       */
    #define schgs2232                 322 /* Schakelbare gelijkstart tussen fase 32 en 22                   */
    #define schgs2434                 323 /* Schakelbare gelijkstart tussen fase 34 en 24                   */
    #define schgs2484                 324 /* Schakelbare gelijkstart tussen fase 84 en 24                   */
    #define schgs3384                 325 /* Schakelbare gelijkstart tussen fase 84 en 33                   */
    #define schlos32_1                326 /* Toestaan los realiseren fase 32                                */
    #define schlos32_2                327 /* Toestaan los realiseren fase 32                                */
    #define schlos31_1                328 /* Toestaan los realiseren fase 31                                */
    #define schlos31_2                329 /* Toestaan los realiseren fase 31                                */
    #define schlos34_1                330 /* Toestaan los realiseren fase 34                                */
    #define schlos34_2                331 /* Toestaan los realiseren fase 34                                */
    #define schlos33_1                332 /* Toestaan los realiseren fase 33                                */
    #define schlos33_2                333 /* Toestaan los realiseren fase 33                                */
    #define schconfidence15fix        334
    #define schtxconfidence15ar       335
    #define schspatconfidence1        336
    #define schspatconfidence3        337
    #define schspatconfidence6        338
    #define schspatconfidence9        339
    #define schspatconfidence12       340
    #define schspatconfidence15       341
    #define schtimings02              342
    #define schtimings03              343
    #define schtimings05              344
    #define schtimings08              345
    #define schtimings09              346
    #define schtimings11              347
    #define schtimings21              348
    #define schtimings22              349
    #define schtimings24              350
    #define schtimings26              351
    #define schtimings28              352
    #define schtimings31              353
    #define schtimings32              354
    #define schtimings33              355
    #define schtimings34              356
    #define schtimings38              357
    #define schtimings61              358
    #define schtimings62              359
    #define schtimings67              360
    #define schtimings68              361
    #define schtimings81              362
    #define schtimings82              363
    #define schtimings84              364
    #define schsneld02_1a             365 /* Aanvraag snel voor detector 02_1a aan of uit                   */
    #define schsneld02_1b             366 /* Aanvraag snel voor detector 02_1b aan of uit                   */
    #define schsneld03_1              367 /* Aanvraag snel voor detector 03_1 aan of uit                    */
    #define schsneld05_1              368 /* Aanvraag snel voor detector 05_1 aan of uit                    */
    #define schsneld08_1a             369 /* Aanvraag snel voor detector 08_1a aan of uit                   */
    #define schsneld08_1b             370 /* Aanvraag snel voor detector 08_1b aan of uit                   */
    #define schsneld09_1              371 /* Aanvraag snel voor detector 09_1 aan of uit                    */
    #define schsneld11_1              372 /* Aanvraag snel voor detector 11_1 aan of uit                    */
    #define schsneld211               373 /* Aanvraag snel voor detector 211 aan of uit                     */
    #define schsneld22_1              374 /* Aanvraag snel voor detector 22_1 aan of uit                    */
    #define schsneld24_1              375 /* Aanvraag snel voor detector 24_1 aan of uit                    */
    #define schsneld261               376 /* Aanvraag snel voor detector 261 aan of uit                     */
    #define schsneld28_1              377 /* Aanvraag snel voor detector 28_1 aan of uit                    */
    #define schsneld61_1              378 /* Aanvraag snel voor detector 61_1 aan of uit                    */
    #define schsneld62_1a             379 /* Aanvraag snel voor detector 62_1a aan of uit                   */
    #define schsneld62_1b             380 /* Aanvraag snel voor detector 62_1b aan of uit                   */
    #define schsneld67_1              381 /* Aanvraag snel voor detector 67_1 aan of uit                    */
    #define schsneld68_1a             382 /* Aanvraag snel voor detector 68_1a aan of uit                   */
    #define schsneld68_1b             383 /* Aanvraag snel voor detector 68_1b aan of uit                   */
    #define schsneld81_1              384 /* Aanvraag snel voor detector 81_1 aan of uit                    */
    #define schsneld82_1              385 /* Aanvraag snel voor detector 82_1 aan of uit                    */
    #define schsneld84_1              386 /* Aanvraag snel voor detector 84_1 aan of uit                    */
    #define SCHMAX1                   387

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
    #define prmmv03                      217 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      218 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      219 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      220 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      221 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      222 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      223 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      224 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      225 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      226 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      227 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      228 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      229 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      230 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      231 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      232 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      233 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      234 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      235 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      236 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      237 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                      238 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    239 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    240 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    241 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    242 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    243 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    244 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    245 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    246 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    247 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    248 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    249 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    250 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    251 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    252 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    253 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    254 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    255 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    256 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    257 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    258 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    259 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    260 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    261 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg          262 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           263 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus       264 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus        265 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus        266 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus       267 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus        268 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus        269 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus       270 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus        271 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus        272 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus       273 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus        274 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus        275 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus       276 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus        277 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus        278 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus       279 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus        280 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus        281 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus       282 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus        283 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus        284 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus       285 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus        286 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus        287 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus       288 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus        289 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus        290 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus       291 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus        292 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus        293 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      294 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    295 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    296 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    297 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    298 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    299 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   300 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  301 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   302 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    303 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    304 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    305 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   306 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  307 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   308 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    309 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    310 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    311 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   312 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  313 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   314 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    315 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    316 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    317 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   318 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  319 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   320 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    321 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    322 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    323 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   324 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  325 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   326 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    327 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    328 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    329 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   330 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  331 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   332 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    333 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    334 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    335 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   336 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  337 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   338 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    339 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    340 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    341 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   342 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  343 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   344 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    345 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    346 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    347 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   348 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  349 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   350 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    351 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    352 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    353 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   354 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  355 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   356 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    357 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    358 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    359 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   360 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  361 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   362 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    363 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    364 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    365 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    366 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    367 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    368 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    369 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    370 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    371 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    372 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    373 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    374 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    375 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   376 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  377 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   378 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    379 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    380 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    381 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   382 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  383 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   384 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    385 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    386 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    387 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   388 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  389 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   390 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    391 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    392 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    393 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   394 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  395 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   396 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    397 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    398 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    399 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   400 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  401 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   402 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    403 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    404 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    405 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   406 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  407 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   408 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    409 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    410 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    411 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   412 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  413 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   414 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                  415 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                 416 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                  417 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                  418 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus               419 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                 420 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov                421 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov               422 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov                423 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov                424 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov               425 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov           426
    #define prmrisend02risov             427
    #define prmriseta02risov             428
    #define prmrisrole02risov            429
    #define prmrissubrole02risov         430
    #define prmrisimportance02risov      431
    #define prmrisstationtype02risov     432
    #define prmrisapproachid02risov      433
    #define prmrislaneid02risov_1        434
    #define prmrislaneid02risov_2        435
    #define prmrto02risvrw               436 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw              437 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw               438 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw               439 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw              440 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw          441
    #define prmrisend02risvrw            442
    #define prmriseta02risvrw            443
    #define prmrisrole02risvrw           444
    #define prmrissubrole02risvrw        445
    #define prmrisimportance02risvrw     446
    #define prmrisstationtype02risvrw    447
    #define prmrisapproachid02risvrw     448
    #define prmrislaneid02risvrw_1       449
    #define prmrislaneid02risvrw_2       450
    #define prmrto02ristest              451 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02ristest             452 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02ristest              453 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02ristest              454 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02ristest             455 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02ristest         456
    #define prmrisend02ristest           457
    #define prmriseta02ristest           458
    #define prmrisrole02ristest          459
    #define prmrissubrole02ristest       460
    #define prmrisimportance02ristest    461
    #define prmrisstationtype02ristest   462
    #define prmrisapproachid02ristest    463
    #define prmrislaneid02ristest_1      464
    #define prmrislaneid02ristest_2      465
    #define prmrto03bus                  466 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                 467 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                  468 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                  469 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus               470 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                 471 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov                472 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov               473 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov                474 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov                475 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov               476 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov           477
    #define prmrisend03risov             478
    #define prmriseta03risov             479
    #define prmrisrole03risov            480
    #define prmrissubrole03risov         481
    #define prmrisimportance03risov      482
    #define prmrisstationtype03risov     483
    #define prmrisapproachid03risov      484
    #define prmrislaneid03risov_1        485
    #define prmrto03risvrw               486 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw              487 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw               488 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw               489 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw              490 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw          491
    #define prmrisend03risvrw            492
    #define prmriseta03risvrw            493
    #define prmrisrole03risvrw           494
    #define prmrissubrole03risvrw        495
    #define prmrisimportance03risvrw     496
    #define prmrisstationtype03risvrw    497
    #define prmrisapproachid03risvrw     498
    #define prmrislaneid03risvrw_1       499
    #define prmrto05bus                  500 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                 501 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                  502 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                  503 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus               504 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                 505 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov                506 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov               507 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov                508 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov                509 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov               510 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov           511
    #define prmrisend05risov             512
    #define prmriseta05risov             513
    #define prmrisrole05risov            514
    #define prmrissubrole05risov         515
    #define prmrisimportance05risov      516
    #define prmrisstationtype05risov     517
    #define prmrisapproachid05risov      518
    #define prmrislaneid05risov_1        519
    #define prmrto05risvrw               520 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw              521 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw               522 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw               523 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risvrw              524 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw          525
    #define prmrisend05risvrw            526
    #define prmriseta05risvrw            527
    #define prmrisrole05risvrw           528
    #define prmrissubrole05risvrw        529
    #define prmrisimportance05risvrw     530
    #define prmrisstationtype05risvrw    531
    #define prmrisapproachid05risvrw     532
    #define prmrislaneid05risvrw_1       533
    #define prmrto08bus                  534 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                 535 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                  536 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                  537 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus               538 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                 539 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov                540 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov               541 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov                542 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov                543 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov               544 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov           545
    #define prmrisend08risov             546
    #define prmriseta08risov             547
    #define prmrisrole08risov            548
    #define prmrissubrole08risov         549
    #define prmrisimportance08risov      550
    #define prmrisstationtype08risov     551
    #define prmrisapproachid08risov      552
    #define prmrislaneid08risov_1        553
    #define prmrislaneid08risov_2        554
    #define prmrto08risvrw               555 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw              556 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw               557 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw               558 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw              559 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw          560
    #define prmrisend08risvrw            561
    #define prmriseta08risvrw            562
    #define prmrisrole08risvrw           563
    #define prmrissubrole08risvrw        564
    #define prmrisimportance08risvrw     565
    #define prmrisstationtype08risvrw    566
    #define prmrisapproachid08risvrw     567
    #define prmrislaneid08risvrw_1       568
    #define prmrislaneid08risvrw_2       569
    #define prmrto09bus                  570 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                 571 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                  572 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                  573 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus               574 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                 575 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov                576 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov               577 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov                578 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov                579 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov               580 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov           581
    #define prmrisend09risov             582
    #define prmriseta09risov             583
    #define prmrisrole09risov            584
    #define prmrissubrole09risov         585
    #define prmrisimportance09risov      586
    #define prmrisstationtype09risov     587
    #define prmrisapproachid09risov      588
    #define prmrislaneid09risov_1        589
    #define prmrto09risvrw               590 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw              591 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw               592 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw               593 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risvrw              594 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw          595
    #define prmrisend09risvrw            596
    #define prmriseta09risvrw            597
    #define prmrisrole09risvrw           598
    #define prmrissubrole09risvrw        599
    #define prmrisimportance09risvrw     600
    #define prmrisstationtype09risvrw    601
    #define prmrisapproachid09risvrw     602
    #define prmrislaneid09risvrw_1       603
    #define prmrto11bus                  604 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                 605 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                  606 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                  607 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus               608 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                 609 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov                610 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov               611 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov                612 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov                613 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risov               614 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov           615
    #define prmrisend11risov             616
    #define prmriseta11risov             617
    #define prmrisrole11risov            618
    #define prmrissubrole11risov         619
    #define prmrisimportance11risov      620
    #define prmrisstationtype11risov     621
    #define prmrisapproachid11risov      622
    #define prmrislaneid11risov_1        623
    #define prmrto11risvrw               624 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw              625 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw               626 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw               627 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmprio11risvrw              628 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw          629
    #define prmrisend11risvrw            630
    #define prmriseta11risvrw            631
    #define prmrisrole11risvrw           632
    #define prmrissubrole11risvrw        633
    #define prmrisimportance11risvrw     634
    #define prmrisstationtype11risvrw    635
    #define prmrisapproachid11risvrw     636
    #define prmrislaneid11risvrw_1       637
    #define prmftsblok22fietsfiets       638 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  639 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets     640 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets      641 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets  642 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets                643 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               644 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                645 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                646 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets               647 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets           648
    #define prmrisend22fiets             649
    #define prmrisrole22fiets            650
    #define prmrissubrole22fiets         651
    #define prmrisimportance22fiets      652
    #define prmrisstationtype22fiets     653
    #define prmrisapproachid22fiets      654
    #define prmrislaneid22fiets_1        655
    #define prmrislaneid22fiets_2        656
    #define prmftsblok28fietsfiets       657 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  658 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets     659 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets      660 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets  661 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets                662 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               663 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                664 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                665 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmprio28fiets               666 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets           667
    #define prmrisend28fiets             668
    #define prmrisrole28fiets            669
    #define prmrissubrole28fiets         670
    #define prmrisimportance28fiets      671
    #define prmrisstationtype28fiets     672
    #define prmrisapproachid28fiets      673
    #define prmrislaneid28fiets_1        674
    #define prmrto61bus                  675 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                 676 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                  677 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                  678 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus               679 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                 680 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov                681 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov               682 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov                683 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov                684 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov               685 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov           686
    #define prmrisend61risov             687
    #define prmriseta61risov             688
    #define prmrisrole61risov            689
    #define prmrissubrole61risov         690
    #define prmrisimportance61risov      691
    #define prmrisstationtype61risov     692
    #define prmrisapproachid61risov      693
    #define prmrislaneid61risov_1        694
    #define prmrto61risvrw               695 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw              696 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw               697 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw               698 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw              699 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw          700
    #define prmrisend61risvrw            701
    #define prmriseta61risvrw            702
    #define prmrisrole61risvrw           703
    #define prmrissubrole61risvrw        704
    #define prmrisimportance61risvrw     705
    #define prmrisstationtype61risvrw    706
    #define prmrisapproachid61risvrw     707
    #define prmrislaneid61risvrw_1       708
    #define prmrto62bus                  709 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                 710 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                  711 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                  712 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus               713 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                 714 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov                715 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov               716 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov                717 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov                718 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov               719 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov           720
    #define prmrisend62risov             721
    #define prmriseta62risov             722
    #define prmrisrole62risov            723
    #define prmrissubrole62risov         724
    #define prmrisimportance62risov      725
    #define prmrisstationtype62risov     726
    #define prmrisapproachid62risov      727
    #define prmrislaneid62risov_1        728
    #define prmrislaneid62risov_2        729
    #define prmrto62risvrw               730 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw              731 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw               732 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw               733 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw              734 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw          735
    #define prmrisend62risvrw            736
    #define prmriseta62risvrw            737
    #define prmrisrole62risvrw           738
    #define prmrissubrole62risvrw        739
    #define prmrisimportance62risvrw     740
    #define prmrisstationtype62risvrw    741
    #define prmrisapproachid62risvrw     742
    #define prmrislaneid62risvrw_1       743
    #define prmrislaneid62risvrw_2       744
    #define prmrto67bus                  745 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                 746 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                  747 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                  748 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus               749 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                 750 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov                751 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov               752 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov                753 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov                754 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov               755 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov           756
    #define prmrisend67risov             757
    #define prmriseta67risov             758
    #define prmrisrole67risov            759
    #define prmrissubrole67risov         760
    #define prmrisimportance67risov      761
    #define prmrisstationtype67risov     762
    #define prmrisapproachid67risov      763
    #define prmrislaneid67risov_1        764
    #define prmrto67risvrw               765 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw              766 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw               767 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw               768 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw              769 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw          770
    #define prmrisend67risvrw            771
    #define prmriseta67risvrw            772
    #define prmrisrole67risvrw           773
    #define prmrissubrole67risvrw        774
    #define prmrisimportance67risvrw     775
    #define prmrisstationtype67risvrw    776
    #define prmrisapproachid67risvrw     777
    #define prmrislaneid67risvrw_1       778
    #define prmrto68bus                  779 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                 780 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                  781 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                  782 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus               783 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                 784 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov                785 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov               786 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov                787 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov                788 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov               789 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov           790
    #define prmrisend68risov             791
    #define prmriseta68risov             792
    #define prmrisrole68risov            793
    #define prmrissubrole68risov         794
    #define prmrisimportance68risov      795
    #define prmrisstationtype68risov     796
    #define prmrisapproachid68risov      797
    #define prmrislaneid68risov_1        798
    #define prmrislaneid68risov_2        799
    #define prmrto68risvrw               800 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw              801 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw               802 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw               803 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw              804 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw          805
    #define prmrisend68risvrw            806
    #define prmriseta68risvrw            807
    #define prmrisrole68risvrw           808
    #define prmrissubrole68risvrw        809
    #define prmrisimportance68risvrw     810
    #define prmrisstationtype68risvrw    811
    #define prmrisapproachid68risvrw     812
    #define prmrislaneid68risvrw_1       813
    #define prmrislaneid68risvrw_2       814
    #define prmpriohd02                  815 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                   816 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                  817 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                   818 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd              819
    #define prmrisend02hd                820
    #define prmriseta02hd                821
    #define prmrisrole02hd               822
    #define prmrissubrole02hd            823
    #define prmrisimportance02hd         824
    #define prmrisstationtype02hd        825
    #define prmrisapproachid02hd         826
    #define prmrislaneid02hd_1           827
    #define prmrislaneid02hd_2           828
    #define prmpriohd03                  829 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                   830 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                  831 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                   832 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd              833
    #define prmrisend03hd                834
    #define prmriseta03hd                835
    #define prmrisrole03hd               836
    #define prmrissubrole03hd            837
    #define prmrisimportance03hd         838
    #define prmrisstationtype03hd        839
    #define prmrisapproachid03hd         840
    #define prmrislaneid03hd_1           841
    #define prmpriohd05                  842 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                   843 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                  844 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                   845 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd              846
    #define prmrisend05hd                847
    #define prmriseta05hd                848
    #define prmrisrole05hd               849
    #define prmrissubrole05hd            850
    #define prmrisimportance05hd         851
    #define prmrisstationtype05hd        852
    #define prmrisapproachid05hd         853
    #define prmrislaneid05hd_1           854
    #define prmpriohd08                  855 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                   856 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                  857 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                   858 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd              859
    #define prmrisend08hd                860
    #define prmriseta08hd                861
    #define prmrisrole08hd               862
    #define prmrissubrole08hd            863
    #define prmrisimportance08hd         864
    #define prmrisstationtype08hd        865
    #define prmrisapproachid08hd         866
    #define prmrislaneid08hd_1           867
    #define prmrislaneid08hd_2           868
    #define prmpriohd09                  869 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                   870 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                  871 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                   872 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd              873
    #define prmrisend09hd                874
    #define prmriseta09hd                875
    #define prmrisrole09hd               876
    #define prmrissubrole09hd            877
    #define prmrisimportance09hd         878
    #define prmrisstationtype09hd        879
    #define prmrisapproachid09hd         880
    #define prmrislaneid09hd_1           881
    #define prmpriohd11                  882 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                   883 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                  884 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                   885 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd              886
    #define prmrisend11hd                887
    #define prmriseta11hd                888
    #define prmrisrole11hd               889
    #define prmrissubrole11hd            890
    #define prmrisimportance11hd         891
    #define prmrisstationtype11hd        892
    #define prmrisapproachid11hd         893
    #define prmrislaneid11hd_1           894
    #define prmpriohd61                  895 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                   896 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                  897 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                   898 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd              899
    #define prmrisend61hd                900
    #define prmriseta61hd                901
    #define prmrisrole61hd               902
    #define prmrissubrole61hd            903
    #define prmrisimportance61hd         904
    #define prmrisstationtype61hd        905
    #define prmrisapproachid61hd         906
    #define prmrislaneid61hd_1           907
    #define prmpriohd62                  908 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                   909 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                  910 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                   911 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd              912
    #define prmrisend62hd                913
    #define prmriseta62hd                914
    #define prmrisrole62hd               915
    #define prmrissubrole62hd            916
    #define prmrisimportance62hd         917
    #define prmrisstationtype62hd        918
    #define prmrisapproachid62hd         919
    #define prmrislaneid62hd_1           920
    #define prmrislaneid62hd_2           921
    #define prmpriohd67                  922 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                   923 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                  924 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                   925 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd              926
    #define prmrisend67hd                927
    #define prmriseta67hd                928
    #define prmrisrole67hd               929
    #define prmrissubrole67hd            930
    #define prmrisimportance67hd         931
    #define prmrisstationtype67hd        932
    #define prmrisapproachid67hd         933
    #define prmrislaneid67hd_1           934
    #define prmpriohd68                  935 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                   936 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                  937 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                   938 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd              939
    #define prmrisend68hd                940
    #define prmriseta68hd                941
    #define prmrisrole68hd               942
    #define prmrissubrole68hd            943
    #define prmrisimportance68hd         944
    #define prmrisstationtype68hd        945
    #define prmrisapproachid68hd         946
    #define prmrislaneid68hd_1           947
    #define prmrislaneid68hd_2           948
    #define prmkarsg02                   949 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                   950 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                   951 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                   952 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                   953 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                   954 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                   955 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                   956 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                   957 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                   958 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                 959 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                 960 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                 961 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                 962 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                 963 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                 964 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                 965 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                 966 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                 967 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                 968 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmstkp1                     969 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                     970 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                     971 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                     972 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                     973 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                     974 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                     975 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                     976 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                     977 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                     978 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                     979 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                     980 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                     981 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                     982 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                     983 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                     984 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                     985 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                     986 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                     987 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                     988 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                     989 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1           990 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1           991 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1           992 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2           993 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2           994 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2           995 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3           996 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3           997 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3           998 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02                    999 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1000 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1001 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1002 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1003 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1004 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1005 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1006 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1007 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1008 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1009 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1010 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1011 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1012 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1013 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1014 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1015 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1016 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1017 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1018 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1019 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1020 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1021 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1022 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1023 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1024 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1025 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1026 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1027 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1028 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1029 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1030 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1031 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1032 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1033 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1034 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1035 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1036 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1037 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1038 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1039 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1040 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1041 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1042 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1043 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1044 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1045 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1046 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1047 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1048 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1049 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1050 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1051 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1052 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1053 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1054 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1055 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1056 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1057 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1058 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1059 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1060 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1061 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1062 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1063 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1064 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1065 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1066 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1067 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1068 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1069 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1070 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1071 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1072 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1073 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1074 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1075 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1076 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1077 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1078 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1079 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1080 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1081 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1082 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1083 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1084 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1085 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1086 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1087 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1088 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1089 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1090 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1091 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1092 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1093 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1094 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1095 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1096 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1097 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1098 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1099 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1100 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1101 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1102 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1103 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1104 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1105 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1106 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1107 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1108 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1109 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1110 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1111 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1112 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1113 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1114 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1115 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1116 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1117 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1118 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1119 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1120 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1121 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1122 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1123 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1124 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmrisapproachid02          1125 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1126 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1127 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1128 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1129 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1130 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1131 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1132 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1133 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1134 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1135 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1136 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1137 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1138 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1139 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1140 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1141 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1142 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1143 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1144 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1145 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1146 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1147 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1148 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1149 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1150 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1151 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1152 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1153 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1154 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1155 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1156 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1157 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1158 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1159 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1160 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1161 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1162 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1163 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1164 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1165 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1166 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1167 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1168 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1169 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1170 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1171 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1172 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1173 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1174 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1175 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1176 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1177 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1178 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1179 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1180 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1181 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1182 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1183 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1184 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1185 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1186 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1187 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1188 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1189 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1190 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1191 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1192 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart03mveh1         1193 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1194 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1195 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1196 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1197 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1198 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1199 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1200 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1201 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1202 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1203 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1204 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1205 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1206 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart24fts1          1207 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1208 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1209 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1210 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1211 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1212 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1213 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1214 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1215 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1216 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1217 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1218 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1219 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1220 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1221 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1222 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1223 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1224 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1225 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1226 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1227 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1228 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1229 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1230 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1231 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1232 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1233 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1234 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1235 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1236 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1237 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1238 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1239 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1240 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1241 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1242 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         1243 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1244 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          1245 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1246 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          1247 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1248 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          1249 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1250 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend03mveh1           1251 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1252 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1253 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1254 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1255 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1256 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           1257 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       1258 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           1259 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       1260 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           1261 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       1262 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            1263 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        1264 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend24fts1            1265 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        1266 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            1267 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        1268 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            1269 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        1270 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            1271 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        1272 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            1273 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        1274 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            1275 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        1276 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            1277 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        1278 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            1279 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        1280 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            1281 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        1282 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            1283 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        1284 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            1285 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        1286 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            1287 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        1288 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            1289 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        1290 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           1291 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       1292 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           1293 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       1294 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           1295 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       1296 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           1297 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       1298 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           1299 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       1300 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           1301 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       1302 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            1303 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        1304 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            1305 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        1306 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            1307 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        1308 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart03mveh1         1309 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     1310 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         1311 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     1312 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         1313 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     1314 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         1315 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     1316 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         1317 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     1318 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         1319 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     1320 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          1321 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      1322 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart24fts1          1323 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      1324 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          1325 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      1326 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          1327 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      1328 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          1329 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      1330 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          1331 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      1332 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          1333 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      1334 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          1335 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      1336 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          1337 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      1338 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          1339 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      1340 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          1341 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      1342 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          1343 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      1344 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          1345 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      1346 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          1347 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      1348 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         1349 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     1350 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         1351 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     1352 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         1353 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     1354 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         1355 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     1356 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         1357 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     1358 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         1359 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     1360 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          1361 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      1362 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          1363 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      1364 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          1365 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      1366 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend03mveh1           1367 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       1368 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           1369 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       1370 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           1371 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       1372 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           1373 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       1374 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           1375 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       1376 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           1377 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       1378 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            1379 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        1380 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend24fts1            1381 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        1382 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            1383 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        1384 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            1385 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        1386 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            1387 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        1388 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            1389 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        1390 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            1391 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        1392 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            1393 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        1394 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            1395 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        1396 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            1397 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        1398 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            1399 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        1400 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            1401 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        1402 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            1403 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        1404 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            1405 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        1406 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           1407 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       1408 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           1409 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       1410 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           1411 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       1412 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           1413 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       1414 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           1415 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       1416 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           1417 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       1418 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            1419 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        1420 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            1421 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        1422 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            1423 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        1424 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          1425 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          1426 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          1427 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            1428 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            1429 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            1430 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                1431 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1432 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1433 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1434 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1435 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1436 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1437 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1438 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1439 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1440 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1441 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1442 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1443 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1444 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1445 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1446 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1447 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1448 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1449 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1450 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1451 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1452 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmintvg_68                1453 /* Minimale verlenggroentijd fase 68                                                                                              */
    #define prmmaxtvg_68                1454 /* Maximale verlenggroentijd fase 68                                                                                              */
    #define prmsiexgrperc33             1455 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             1456 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               1457 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1458 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1459 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1460 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1461 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1462 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1463 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1464 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1465 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1466 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1467 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1468 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1469 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1470 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1471 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1472 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1473 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1474 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1475 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1476 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1477 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1478 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1479 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1480 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1481 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1482 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1483 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1484 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1485 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1486 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1487 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1488 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1489 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1490 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1491 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1492 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1493 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1494 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1495 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1496 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 1497 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   1498 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               1499 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   1500 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1501 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1502 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   1503 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   1504 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1505 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1506 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   1507 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 1508 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   1509 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 1510 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   1511 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   1512 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   1513 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1514 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1515 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1516 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1517 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1518 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1519 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1520 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1521 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1522 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1523 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1524 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1525 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               1526 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmttxconfidence15          1527
    #define prmlatencyminendsg          1528
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1529 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1530 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1531 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1532
#else
    #define PRMMAX1                     1529
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02bus 0
    #define prioFC02risov 1
    #define prioFC02risvrw 2
    #define prioFC02ristest 3
    #define prioFC03bus 4
    #define prioFC03risov 5
    #define prioFC03risvrw 6
    #define prioFC05bus 7
    #define prioFC05risov 8
    #define prioFC05risvrw 9
    #define prioFC08bus 10
    #define prioFC08risov 11
    #define prioFC08risvrw 12
    #define prioFC09bus 13
    #define prioFC09risov 14
    #define prioFC09risvrw 15
    #define prioFC11bus 16
    #define prioFC11risov 17
    #define prioFC11risvrw 18
    #define prioFC22fiets 19
    #define prioFC28fiets 20
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

