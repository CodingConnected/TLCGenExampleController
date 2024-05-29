/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.6
   CCOLGEN:   12.4.0.6
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.6   24-05-2024   TLCGen      Release versie TLCGen 
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.4.0.6 20240524"
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
    #define ussegm1            (FCMAX +   0) /* Aansturing segmenten display                                                */
    #define ussegm2            (FCMAX +   1) /* Aansturing segmenten display                                                */
    #define ussegm3            (FCMAX +   2) /* Aansturing segmenten display                                                */
    #define ussegm4            (FCMAX +   3) /* Aansturing segmenten display                                                */
    #define ussegm5            (FCMAX +   4) /* Aansturing segmenten display                                                */
    #define ussegm6            (FCMAX +   5) /* Aansturing segmenten display                                                */
    #define ussegm7            (FCMAX +   6) /* Aansturing segmenten display                                                */
    #define usML1              (FCMAX +   7) /* Verklikken actief zijn ML1                                                  */
    #define usML2              (FCMAX +   8) /* Verklikken actief zijn ML2                                                  */
    #define usML3              (FCMAX +   9) /* Verklikken actief zijn ML3                                                  */
    #define usML4              (FCMAX +  10) /* Verklikken actief zijn ML4                                                  */
    #define usML5              (FCMAX +  11) /* Verklikken actief zijn ML5                                                  */
    #define usincontrol        (FCMAX +  12) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt                     */
    #define usnocontrol        (FCMAX +  13) /* Verklikken of applicatie niet in staat is te regelen                        */
    #define usFile68af         (FCMAX +  14) /* File ingreep File68af actief                                                */
    #define usplact            (FCMAX +  15) /* Signaalplan regelen actief                                                  */
    #define uskpact            (FCMAX +  16) /* Koppeling signaalplan regelen actief                                        */
    #define usmlact            (FCMAX +  17) /* Module regelen actief                                                       */
    #define usmlpl             (FCMAX +  18) /* ML tijdens VA of PL tijdens halfstar bedrijf                                */
    #define ustxtimer          (FCMAX +  19) /* TX_timer tijdens halfstar bedrijf                                           */
    #define usklok             (FCMAX +  20) /* Programma door klok bepaald                                                 */
    #define ushand             (FCMAX +  21) /* Aansturing handmatig aangepast                                              */
    #define usPL1              (FCMAX +  22) /* Plan PL1 actief                                                             */
    #define usPL2              (FCMAX +  23) /* Plan PL2 actief                                                             */
    #define usPL3              (FCMAX +  24) /* Plan PL3 actief                                                             */
    #define usovtevroeg03bus   (FCMAX +  25) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03bus    (FCMAX +  26) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03bus    (FCMAX +  27) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05bus   (FCMAX +  28) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05bus    (FCMAX +  29) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05bus    (FCMAX +  30) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08bus   (FCMAX +  31) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08bus    (FCMAX +  32) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08bus    (FCMAX +  33) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09bus   (FCMAX +  34) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09bus    (FCMAX +  35) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09bus    (FCMAX +  36) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11bus   (FCMAX +  37) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11bus    (FCMAX +  38) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11bus    (FCMAX +  39) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61bus   (FCMAX +  40) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61bus    (FCMAX +  41) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61bus    (FCMAX +  42) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62bus   (FCMAX +  43) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62bus    (FCMAX +  44) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62bus    (FCMAX +  45) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67bus   (FCMAX +  46) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67bus    (FCMAX +  47) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67bus    (FCMAX +  48) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68bus   (FCMAX +  49) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68bus    (FCMAX +  50) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68bus    (FCMAX +  51) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt            (FCMAX +  52) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding       (FCMAX +  53) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog            (FCMAX +  54) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02karbus    (FCMAX +  55) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risov     (FCMAX +  56) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risvrw    (FCMAX +  57) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03bus       (FCMAX +  58) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risov     (FCMAX +  59) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risvrw    (FCMAX +  60) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05bus       (FCMAX +  61) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risov     (FCMAX +  62) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risvrw    (FCMAX +  63) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08bus       (FCMAX +  64) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risov     (FCMAX +  65) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risvrw    (FCMAX +  66) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09bus       (FCMAX +  67) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risov     (FCMAX +  68) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risvrw    (FCMAX +  69) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11bus       (FCMAX +  70) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risov     (FCMAX +  71) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risvrw    (FCMAX +  72) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets     (FCMAX +  73) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets     (FCMAX +  74) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61bus       (FCMAX +  75) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risov     (FCMAX +  76) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risvrw    (FCMAX +  77) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62bus       (FCMAX +  78) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risov     (FCMAX +  79) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risvrw    (FCMAX +  80) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67bus       (FCMAX +  81) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risov     (FCMAX +  82) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risvrw    (FCMAX +  83) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68bus       (FCMAX +  84) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risov     (FCMAX +  85) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risvrw    (FCMAX +  86) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02          (FCMAX +  87) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03          (FCMAX +  88) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05          (FCMAX +  89) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08          (FCMAX +  90) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09          (FCMAX +  91) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11          (FCMAX +  92) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61          (FCMAX +  93) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62          (FCMAX +  94) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67          (FCMAX +  95) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68          (FCMAX +  96) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02       (FCMAX +  97) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usperdef           (FCMAX +  98) /* Default periode actief                                                      */
    #define usper1             (FCMAX +  99) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1   (FCMAX + 100) /* Periode actief                                                              */
    #define usperoFietsprio2   (FCMAX + 101) /* Periode actief                                                              */
    #define usperoFietsprio3   (FCMAX + 102) /* Periode actief                                                              */
    #define usper2             (FCMAX + 103) /* Periode Dag periode actief                                                  */
    #define usper3             (FCMAX + 104) /* Periode Ochtendspits actief                                                 */
    #define usper4             (FCMAX + 105) /* Periode Avondspits actief                                                   */
    #define usper5             (FCMAX + 106) /* Periode Koopavond actief                                                    */
    #define usper6             (FCMAX + 107) /* Periode Weekend actief                                                      */
    #define usper7             (FCMAX + 108) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke (FCMAX + 109) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err (FCMAX + 110) /* Verklikken PTP error ptp123456                                              */
    #define usrgv              (FCMAX + 111) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv22            (FCMAX + 112) /* Verklikken aansturing wachttijdvoorspeller fase 22                          */
    #define uswtv24            (FCMAX + 113) /* Verklikken aansturing wachttijdvoorspeller fase 24                          */
    #define uswtv26            (FCMAX + 114) /* Verklikken aansturing wachttijdvoorspeller fase 26                          */
    #define uswtv28            (FCMAX + 115) /* Verklikken aansturing wachttijdvoorspeller fase 28                          */
    #define uswtk21            (FCMAX + 116) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22            (FCMAX + 117) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24            (FCMAX + 118) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26            (FCMAX + 119) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28            (FCMAX + 120) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a           (FCMAX + 121) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b           (FCMAX + 122) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a           (FCMAX + 123) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b           (FCMAX + 124) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a           (FCMAX + 125) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b           (FCMAX + 126) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a           (FCMAX + 127) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b           (FCMAX + 128) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a           (FCMAX + 129) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b           (FCMAX + 130) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81            (FCMAX + 131) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82            (FCMAX + 132) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84            (FCMAX + 133) /* Aansturing waitsignaal detector k84                                         */
    #define USMAX1             (FCMAX + 134)

/* detectie */
/* -------- */
    #define d02_1a                0
    #define d02_1b                1
    #define d02_2a                2
    #define d02_2b                3
    #define d02_3a                4
    #define d02_3b                5
    #define d02_4a                6
    #define d02_4b                7
    #define d03_1                 8
    #define d03_2                 9
    #define d05_1                10
    #define d05_2                11
    #define d08_1a               12
    #define d08_1b               13
    #define d08_2a               14
    #define d08_2b               15
    #define d08_3a               16
    #define d08_3b               17
    #define d08_4a               18
    #define d08_4b               19
    #define d09_1                20
    #define d09_2                21
    #define d09_3                22
    #define d11_1                23
    #define d11_2                24
    #define d11_3                25
    #define d11_4                26
    #define d211                 27
    #define dk21                 28
    #define d22_1                29
    #define dk22                 30
    #define d24_1                31
    #define d24_2                32
    #define d24_3                33
    #define dk24                 34
    #define d261                 35
    #define dk26                 36
    #define d28_1                37
    #define d28_2                38
    #define dk28                 39
    #define dk31a                40
    #define dk31b                41
    #define dk32a                42
    #define dk32b                43
    #define dk33a                44
    #define dk33b                45
    #define dk34a                46
    #define dk34b                47
    #define dk38a                48
    #define dk38b                49
    #define d61_1                50
    #define d61_2                51
    #define d62_1a               52
    #define d62_1b               53
    #define d62_2a               54
    #define d62_2b               55
    #define d67_1                56
    #define d67_2                57
    #define d68_1a               58
    #define d68_1b               59
    #define d68_2a               60
    #define d68_2b               61
    #define d68_9a               62
    #define d68_9b               63
    #define d81_1                64
    #define dk81                 65
    #define d82_1                66
    #define dk82                 67
    #define d84_1                68
    #define dk84                 69
    #define dopt02               70
    #define dopt05               71
    #define dopt08               72
    #define dopt11               73
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define ddummykarin02karbus  74
    #define ddummykarin03bus     75
    #define ddummykarin05bus     76
    #define ddummykarin08bus     77
    #define ddummykarin09bus     78
    #define ddummykarin11bus     79
    #define ddummykarin61bus     80
    #define ddummykarin62bus     81
    #define ddummykarin67bus     82
    #define ddummykarin68bus     83
    #define ddummykaruit02karbus 84
    #define ddummykaruit03bus    85
    #define ddummykaruit05bus    86
    #define ddummykaruit08bus    87
    #define ddummykaruit09bus    88
    #define ddummykaruit11bus    89
    #define ddummykaruit61bus    90
    #define ddummykaruit62bus    91
    #define ddummykaruit67bus    92
    #define ddummykaruit68bus    93
    #define ddummyhdkarin02      94
    #define ddummyhdkaruit02     95
    #define ddummyhdkarin03      96
    #define ddummyhdkaruit03     97
    #define ddummyhdkarin05      98
    #define ddummyhdkaruit05     99
    #define ddummyhdkarin08      100
    #define ddummyhdkaruit08     101
    #define ddummyhdkarin09      102
    #define ddummyhdkaruit09     103
    #define ddummyhdkarin11      104
    #define ddummyhdkaruit11     105
    #define ddummyhdkarin61      106
    #define ddummyhdkaruit61     107
    #define ddummyhdkarin62      108
    #define ddummyhdkaruit62     109
    #define ddummyhdkarin67      110
    #define ddummyhdkaruit67     111
    #define ddummyhdkarin68      112
    #define ddummyhdkaruit68     113
    #define DPMAX1               114 /* aantal detectoren testomgeving */
#else
    #define DPMAX1               74 /* aantal detectoren automaat omgeving */
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
    #define hplhd                    34 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                   35 /* Halfstar actief                                                    */
    #define hkpact                   36 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                   37 /* Module regelen actief                                              */
    #define hpervar                  38 /* Periode VA regelen                                                 */
    #define hperarh                  39 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh             40 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                   41 /* Bijhouden actief zijn levensignaal                                 */
    #define hxpl2232                 42 /* Tegenhouden richtingen tbv gelijkstart 22 32                       */
    #define hxpl243484               43 /* Tegenhouden richtingen tbv gelijkstart 24 34 84                    */
    #define hxpl2838                 44 /* Tegenhouden richtingen tbv gelijkstart 28 38                       */
    #define hxpl3384                 45 /* Tegenhouden richtingen tbv gelijkstart 33 84                       */
    #define hxpl2434                 46 /* Tegenhouden richtingen tbv gelijkstart 24 34                       */
    #define hxpl243384               47 /* Tegenhouden richtingen tbv gelijkstart 24 33 84                    */
    #define hnla02_1a                48 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b                49 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a                50 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b                51 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1                 52 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 53 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 54 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 55 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 56 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 57 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 58 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp03bus                59 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                60 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                61 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                62 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                63 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                64 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                65 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                66 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                67 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02karbus            68 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02karbus          69 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbus         70 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02karbuskar       71 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbuskar      72 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             73 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           74 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov          75 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris        76 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris       77 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw            78 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          79 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         80 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       81 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      82 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus               83 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             84 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            85 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          86 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         87 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             88 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           89 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          90 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        91 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       92 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            93 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          94 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         95 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       96 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      97 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus               98 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus             99 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus           100 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar         101 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar        102 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov            103 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov          104 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov         105 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris       106 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris      107 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw           108 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw         109 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw        110 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris      111 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris     112 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus              113 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus            114 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus           115 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar         116 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        117 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            118 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          119 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         120 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       121 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      122 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           123 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         124 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        125 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      126 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     127 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              128 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            129 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           130 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         131 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        132 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            133 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          134 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         135 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       136 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      137 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           138 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         139 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        140 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      141 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     142 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              143 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            144 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           145 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         146 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        147 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            148 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          149 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         150 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       151 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      152 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           153 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         154 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        155 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      156 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     157 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            158 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          159 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         160 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets22_1 161 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    162 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            163 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          164 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         165 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 166 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    167 /* Prioriteit uitmelding 28 Fiets                                     */
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
    #define hpelinKOP02             298 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02         299 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit     300 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit     301 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1       302 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       303 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3       304 /* Periode Fietsprio3 actief                                          */
    #define hptp123456iks01         305 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02         306 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03         307 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04         308 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05         309 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06         310 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07         311 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08         312 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09         313 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10         314 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11         315 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12         316 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13         317 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14         318 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15         319 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16         320 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01         321 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02         322 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03         323 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04         324 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05         325 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06         326 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07         327 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08         328 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09         329 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10         330 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11         331 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12         332 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13         333 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14         334 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15         335 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16         336 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke       337 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err       338 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0      339 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1      340 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2      341 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2         342 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 343 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               344 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               345 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               346 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               347 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11               348 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               349 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               350 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepdk33a     351 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     352 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     353 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     354 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr33               355 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               356 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262               357
    #define hnleg0868               358
    #define hnleg1168               359
    #define hnleg2221               360
    #define hnlsg3132               361
    #define hnlsg3231               362
    #define hnlsg3334               363
    #define hnlsg3433               364
    #define hnleg8281               365
    #define hwtv22                  366 /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    #define hwtv24                  367 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hwtv26                  368 /* Onthouden aansturing wachttijdvoorspeller fase 26                  */
    #define hwtv28                  369 /* Onthouden aansturing wachttijdvoorspeller fase 28                  */
    #define hinl32                  370 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  371 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  372 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  373 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  374 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  375 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  376 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  377 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  378 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  379 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  380 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  381 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  382

/* geheugen elementen */
/* ------------------ */
    #define mperiod                  0 /* Onthouden actieve periode                                               */
    #define mlcycl                   1 /* Onthouden laatste cyclustijd                                            */
    #define mmk03                    2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03            */
    #define mmk05                    3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05            */
    #define mmk08                    4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08            */
    #define mmk09                    5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09            */
    #define mmk11                    6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11            */
    #define mmk61                    7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61            */
    #define mmk62                    8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62            */
    #define mmk67                    9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67            */
    #define mmk68                   10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68            */
    #define mleven                  11 /* Bijhouden actief zijn levensignaal                                      */
    #define mklok                   12 /* Halfstar of VA obv klokperioden                                         */
    #define mhand                   13 /* Halstar of VA handmatig bepaald                                         */
    #define mstp03bus               14 /* Stiptheid voorste OV voertuig bij 03 Bus                                */
    #define mstp05bus               15 /* Stiptheid voorste OV voertuig bij 05 Bus                                */
    #define mstp08bus               16 /* Stiptheid voorste OV voertuig bij 08 Bus                                */
    #define mstp09bus               17 /* Stiptheid voorste OV voertuig bij 09 Bus                                */
    #define mstp11bus               18 /* Stiptheid voorste OV voertuig bij 11 Bus                                */
    #define mstp61bus               19 /* Stiptheid voorste OV voertuig bij 61 Bus                                */
    #define mstp62bus               20 /* Stiptheid voorste OV voertuig bij 62 Bus                                */
    #define mstp67bus               21 /* Stiptheid voorste OV voertuig bij 67 Bus                                */
    #define mstp68bus               22 /* Stiptheid voorste OV voertuig bij 68 Bus                                */
    #define mftstelris22fietsfiets  23 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets                      */
    #define mftstelris28fietsfiets  24 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets                      */
    #define mpelvtgKOP02            25 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    #define mpelinKOP02             26 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    #define mwtv22                  27 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 22              */
    #define mwtvm22                 28 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 22             */
    #define mwtv24                  29 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24              */
    #define mwtvm24                 30 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24             */
    #define mwtv26                  31 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 26              */
    #define mwtvm26                 32 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 26             */
    #define mwtv28                  33 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 28              */
    #define mwtvm28                 34 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 28             */
    #define mrealtijd02             35 /* Realisatie tijd fase 02                                                 */
    #define mrealtijd03             36 /* Realisatie tijd fase 03                                                 */
    #define mrealtijd05             37 /* Realisatie tijd fase 05                                                 */
    #define mrealtijd08             38 /* Realisatie tijd fase 08                                                 */
    #define mrealtijd09             39 /* Realisatie tijd fase 09                                                 */
    #define mrealtijd11             40 /* Realisatie tijd fase 11                                                 */
    #define mrealtijd21             41 /* Realisatie tijd fase 21                                                 */
    #define mrealtijd22             42 /* Realisatie tijd fase 22                                                 */
    #define mrealtijd24             43 /* Realisatie tijd fase 24                                                 */
    #define mrealtijd26             44 /* Realisatie tijd fase 26                                                 */
    #define mrealtijd28             45 /* Realisatie tijd fase 28                                                 */
    #define mrealtijd31             46 /* Realisatie tijd fase 31                                                 */
    #define mrealtijd32             47 /* Realisatie tijd fase 32                                                 */
    #define mrealtijd33             48 /* Realisatie tijd fase 33                                                 */
    #define mrealtijd34             49 /* Realisatie tijd fase 34                                                 */
    #define mrealtijd38             50 /* Realisatie tijd fase 38                                                 */
    #define mrealtijd61             51 /* Realisatie tijd fase 61                                                 */
    #define mrealtijd62             52 /* Realisatie tijd fase 62                                                 */
    #define mrealtijd67             53 /* Realisatie tijd fase 67                                                 */
    #define mrealtijd68             54 /* Realisatie tijd fase 68                                                 */
    #define mrealtijd81             55 /* Realisatie tijd fase 81                                                 */
    #define mrealtijd82             56 /* Realisatie tijd fase 82                                                 */
    #define mrealtijd84             57 /* Realisatie tijd fase 84                                                 */
    #define mrealtijdmin02          58 /* Realisatie minimum tijd fase 02                                         */
    #define mrealtijdmin03          59 /* Realisatie minimum tijd fase 03                                         */
    #define mrealtijdmin05          60 /* Realisatie minimum tijd fase 05                                         */
    #define mrealtijdmin08          61 /* Realisatie minimum tijd fase 08                                         */
    #define mrealtijdmin09          62 /* Realisatie minimum tijd fase 09                                         */
    #define mrealtijdmin11          63 /* Realisatie minimum tijd fase 11                                         */
    #define mrealtijdmin21          64 /* Realisatie minimum tijd fase 21                                         */
    #define mrealtijdmin22          65 /* Realisatie minimum tijd fase 22                                         */
    #define mrealtijdmin24          66 /* Realisatie minimum tijd fase 24                                         */
    #define mrealtijdmin26          67 /* Realisatie minimum tijd fase 26                                         */
    #define mrealtijdmin28          68 /* Realisatie minimum tijd fase 28                                         */
    #define mrealtijdmin31          69 /* Realisatie minimum tijd fase 31                                         */
    #define mrealtijdmin32          70 /* Realisatie minimum tijd fase 32                                         */
    #define mrealtijdmin33          71 /* Realisatie minimum tijd fase 33                                         */
    #define mrealtijdmin34          72 /* Realisatie minimum tijd fase 34                                         */
    #define mrealtijdmin38          73 /* Realisatie minimum tijd fase 38                                         */
    #define mrealtijdmin61          74 /* Realisatie minimum tijd fase 61                                         */
    #define mrealtijdmin62          75 /* Realisatie minimum tijd fase 62                                         */
    #define mrealtijdmin67          76 /* Realisatie minimum tijd fase 67                                         */
    #define mrealtijdmin68          77 /* Realisatie minimum tijd fase 68                                         */
    #define mrealtijdmin81          78 /* Realisatie minimum tijd fase 81                                         */
    #define mrealtijdmin82          79 /* Realisatie minimum tijd fase 82                                         */
    #define mrealtijdmin84          80 /* Realisatie minimum tijd fase 84                                         */
    #define mrealtijdmax02          81 /* Realisatie maximum tijd fase 02                                         */
    #define mrealtijdmax03          82 /* Realisatie maximum tijd fase 03                                         */
    #define mrealtijdmax05          83 /* Realisatie maximum tijd fase 05                                         */
    #define mrealtijdmax08          84 /* Realisatie maximum tijd fase 08                                         */
    #define mrealtijdmax09          85 /* Realisatie maximum tijd fase 09                                         */
    #define mrealtijdmax11          86 /* Realisatie maximum tijd fase 11                                         */
    #define mrealtijdmax21          87 /* Realisatie maximum tijd fase 21                                         */
    #define mrealtijdmax22          88 /* Realisatie maximum tijd fase 22                                         */
    #define mrealtijdmax24          89 /* Realisatie maximum tijd fase 24                                         */
    #define mrealtijdmax26          90 /* Realisatie maximum tijd fase 26                                         */
    #define mrealtijdmax28          91 /* Realisatie maximum tijd fase 28                                         */
    #define mrealtijdmax31          92 /* Realisatie maximum tijd fase 31                                         */
    #define mrealtijdmax32          93 /* Realisatie maximum tijd fase 32                                         */
    #define mrealtijdmax33          94 /* Realisatie maximum tijd fase 33                                         */
    #define mrealtijdmax34          95 /* Realisatie maximum tijd fase 34                                         */
    #define mrealtijdmax38          96 /* Realisatie maximum tijd fase 38                                         */
    #define mrealtijdmax61          97 /* Realisatie maximum tijd fase 61                                         */
    #define mrealtijdmax62          98 /* Realisatie maximum tijd fase 62                                         */
    #define mrealtijdmax67          99 /* Realisatie maximum tijd fase 67                                         */
    #define mrealtijdmax68         100 /* Realisatie maximum tijd fase 68                                         */
    #define mrealtijdmax81         101 /* Realisatie maximum tijd fase 81                                         */
    #define mrealtijdmax82         102 /* Realisatie maximum tijd fase 82                                         */
    #define mrealtijdmax84         103 /* Realisatie maximum tijd fase 84                                         */
    #define mar02                  104 /* Alternatieve ruimte fase 02                                             */
    #define mar03                  105 /* Alternatieve ruimte fase 03                                             */
    #define mar05                  106 /* Alternatieve ruimte fase 05                                             */
    #define mar08                  107 /* Alternatieve ruimte fase 08                                             */
    #define mar09                  108 /* Alternatieve ruimte fase 09                                             */
    #define mar11                  109 /* Alternatieve ruimte fase 11                                             */
    #define mar21                  110 /* Alternatieve ruimte fase 21                                             */
    #define mar22                  111 /* Alternatieve ruimte fase 22                                             */
    #define mar24                  112 /* Alternatieve ruimte fase 24                                             */
    #define mar26                  113 /* Alternatieve ruimte fase 26                                             */
    #define mar28                  114 /* Alternatieve ruimte fase 28                                             */
    #define mar31                  115 /* Alternatieve ruimte fase 31                                             */
    #define mar32                  116 /* Alternatieve ruimte fase 32                                             */
    #define mar33                  117 /* Alternatieve ruimte fase 33                                             */
    #define mar34                  118 /* Alternatieve ruimte fase 34                                             */
    #define mar38                  119 /* Alternatieve ruimte fase 38                                             */
    #define mar61                  120 /* Alternatieve ruimte fase 61                                             */
    #define mar62                  121 /* Alternatieve ruimte fase 62                                             */
    #define mar67                  122 /* Alternatieve ruimte fase 67                                             */
    #define mar68                  123 /* Alternatieve ruimte fase 68                                             */
    #define mar81                  124 /* Alternatieve ruimte fase 81                                             */
    #define mar82                  125 /* Alternatieve ruimte fase 82                                             */
    #define mar84                  126 /* Alternatieve ruimte fase 84                                             */
    #define MEMAX1                 127

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
    #define tleven                     149 /* Frequentie verstuurd levenssignaal                                                       */
    #define tnlfg0262                  150 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnlfgd0262                 151 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                             */
    #define tnleg0262                  152 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlegd0262                 153 /* Detectieafhankelijke naloop op einde groen van 02 naar 62                                */
    #define tnlfg0868                  154 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 155 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  156 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 157 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tnlfg1168                  158 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 159 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  160 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 161 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  162 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 163 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  164 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 165 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsg3132                  166 /* Naloop op start groen van 31 naar 32                                                     */
    #define tnlsgd3132                 167 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsg3231                  168 /* Naloop op start groen van 32 naar 31                                                     */
    #define tnlsgd3231                 169 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 170 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 171 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  172 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 173 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  174 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 175 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                176 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     177 /* Ondergedrag KAR                                                                          */
    #define tprioin02karbuskar         178 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbuskar        179 /* Anti jutter tijd uitmelden 02                                                            */
    #define tprioin02karbus            180 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbus           181 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02karbus             182 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02karbus                183 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02karbus                184 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02karbus               185 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risov             186 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            187 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              188 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 189 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 190 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                191 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrw            192 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           193 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             194 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                195 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                196 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               197 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                198 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   199 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   200 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  201 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          202 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            203 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              204 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 205 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 206 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                207 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         208 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           209 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             210 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                211 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                212 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               213 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                214 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   215 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   216 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  217 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          218 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            219 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              220 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 221 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 222 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                223 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         224 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           225 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             226 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                227 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                228 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               229 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                230 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   231 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   232 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  233 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          234 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            235 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              236 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 237 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 238 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                239 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         240 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           241 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             242 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                243 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                244 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               245 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                246 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   247 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   248 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  249 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          250 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            251 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              252 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 253 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 254 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                255 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         256 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           257 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             258 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                259 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                260 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               261 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                262 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   263 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   264 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  265 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          266 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            267 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              268 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 269 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 270 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                271 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         272 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           273 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             274 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                275 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                276 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               277 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            278 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              279 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 280 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 281 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                282 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tprioin28fietsfiets28_2    283 /* Anti jutter tijd inmelden 28 Fiets                                                       */
    #define tpriouit28fiets            284 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              285 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 286 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 287 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                288 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg61bus                289 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   290 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   291 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  292 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          293 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            294 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              295 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 296 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 297 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                298 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         299 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           300 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             301 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                302 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                303 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               304 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                305 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   306 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   307 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  308 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          309 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            310 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              311 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 312 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 313 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                314 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         315 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           316 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             317 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                318 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                319 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               320 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                321 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   322 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   323 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  324 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          325 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            326 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              327 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 328 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 329 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                330 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         331 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           332 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             333 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                334 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                335 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               336 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            337 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                338 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   339 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   340 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  341 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          342 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            343 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              344 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 345 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 346 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                347 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         348 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           349 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             350 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                351 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                352 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               353 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    354 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    355 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 356 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 357 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                358 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    359 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    360 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 361 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 362 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                363 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    364 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    365 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 366 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 367 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                368 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    369 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    370 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 371 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 372 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                373 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    374 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    375 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 376 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 377 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                378 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    379 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    380 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 381 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 382 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                383 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    384 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    385 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 386 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 387 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                388 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    389 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    390 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 391 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 392 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                393 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    394 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    395 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 396 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 397 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                398 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    399 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    400 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 401 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 402 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                403 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                404
    #define tris02risvrw               405
    #define tris03risov                406
    #define tris03risvrw               407
    #define tris05risov                408
    #define tris05risvrw               409
    #define tris08risov                410
    #define tris08risvrw               411
    #define tris09risov                412
    #define tris09risvrw               413
    #define tris11risov                414
    #define tris11risvrw               415
    #define tris61risov                416
    #define tris61risvrw               417
    #define tris62risov                418
    #define tris62risvrw               419
    #define tris67risov                420
    #define tris67risvrw               421
    #define tris68risov                422
    #define tris68risvrw               423
    #define tpelmeetKOP02              424 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          425 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                426 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             427 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           428 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 429 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  430 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 431 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            432 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            433 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   434 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   435 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   436 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   437 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   438 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   439 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    440 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    441 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    442 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    443 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   444 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   445 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   446 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   447 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   448 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   449 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    450 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    451 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    452 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    453 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    454 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    455 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    456 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
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
    #define twtv22                     509 /* T.b.v. aansturing wachttijdvoorspeller fase 22                                           */
    #define twtv24                     510 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define twtv26                     511 /* T.b.v. aansturing wachttijdvoorspeller fase 26                                           */
    #define twtv28                     512 /* T.b.v. aansturing wachttijdvoorspeller fase 28                                           */
    #define tvs2205                    513 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs2611                    514 /* Voorstarttijd fase 26 op fase 11                                                         */
    #define tvs3205                    515 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr6202                    516 /* Late release tijd fase 62 naar fase 02                                                   */
    #define tlr6808                    517 /* Late release tijd fase 68 naar fase 08                                                   */
    #define tlr6811                    518 /* Late release tijd fase 68 naar fase 11                                                   */
    #define tlr2122                    519 /* Late release tijd fase 21 naar fase 22                                                   */
    #define tlr8182                    520 /* Late release tijd fase 81 naar fase 82                                                   */
    #define til3231                    521 /* Inloop tijd fase 32 naar fase 31                                                         */
    #define til3132                    522 /* Inloop tijd fase 31 naar fase 32                                                         */
    #define til3433                    523 /* Inloop tijd fase 34 naar fase 33                                                         */
    #define til3334                    524 /* Inloop tijd fase 33 naar fase 34                                                         */
    #define tfo0522                    525 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo1126                    526 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define tfo0532                    527 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define TMMAX1                     528

/* teller elementen */
/* ---------------- */
    #define cvchst02karbus       0 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus         */
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
    #define cvc02karbus         32 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
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
    #define schdynhiaat08               0 /* Toepassen dynamisch hiaat bij fase 08                                     */
    #define schopdrempelen08            1 /* Opdrempelen toepassen voor fase 08                                        */
    #define schedkop_08                 2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus            */
    #define schdynhiaat09               3 /* Toepassen dynamisch hiaat bij fase 09                                     */
    #define schopdrempelen09            4 /* Opdrempelen toepassen voor fase 09                                        */
    #define schedkop_09                 5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus            */
    #define schdynhiaat11               6 /* Toepassen dynamisch hiaat bij fase 11                                     */
    #define schopdrempelen11            7 /* Opdrempelen toepassen voor fase 11                                        */
    #define schedkop_11                 8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus            */
    #define schcycl                     9 /* Bijhouden actuele cyclustijd aan of uit                                   */
    #define schcycl_reset              10 /* Reset meting cyclustijd                                                   */
    #define schdvakd02_1a              11 /* Aanvraag fase 02 bij storing op detector 02_1a                            */
    #define schdvakd02_1b              12 /* Aanvraag fase 02 bij storing op detector 02_1b                            */
    #define schdvakd03_1               13 /* Aanvraag fase 03 bij storing op detector 03_1                             */
    #define schdvakdk31a               14 /* Aanvraag fase 31 bij storing op detector k31a                             */
    #define schdvakdk31b               15 /* Aanvraag fase 31 bij storing op detector k31b                             */
    #define schfileFile68af            16 /* File ingreep File68af toepassen                                           */
    #define schfiledoserenFile68af     17 /* Toepassen doseerpercentages voor fileingreep File68af                     */
    #define schfileFile68afparstrook   18 /* Parallele file meldingen per strook file ingreep File68af                 */
    #define schbmfix                   19 /* Bijkomen tijdens fixatie mogelijk                                         */
    #define schaltghst02               20 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen          */
    #define schaltghst03               21 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen          */
    #define schaltghst05               22 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen          */
    #define schaltghst08               23 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen          */
    #define schaltghst09               24 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen          */
    #define schaltghst11               25 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen          */
    #define schaltghst21               26 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen          */
    #define schaltghst2232             27 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen     */
    #define schaltghst243484           28 /* Alternatief realiseren fasen 24, 34, 84 toestaan tijdens halfstar regelen */
    #define schaltghst26               29 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen          */
    #define schaltghst88               30 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen          */
    #define schaltghst243384           31 /* Alternatief realiseren fasen 24, 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst82               32 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen          */
    #define schaltghst81               33 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen          */
    #define schaltghst68               34 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen          */
    #define schaltghst67               35 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen          */
    #define schaltghst62               36 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen          */
    #define schaltghst61               37 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen          */
    #define schaltghst2838             38 /* Alternatief realiseren fasen 28, 38 toestaan tijdens halfstar regelen     */
    #define schaltghst2434             39 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen     */
    #define schaltghst3384             40 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen     */
    #define schaltghst31               41 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen          */
    #define schtegenov02               42 /* Tegenhouden hoofdrichting 02 bij OV ingreep                               */
    #define schafkwgov02               43 /* Afkappen WG hoofdrichting 02 bij OV ingreep                               */
    #define schafkvgov02               44 /* Afkappen VG hoofdrichting 02 bij OV ingreep                               */
    #define schtegenov08               45 /* Tegenhouden hoofdrichting 08 bij OV ingreep                               */
    #define schafkwgov08               46 /* Afkappen WG hoofdrichting 08 bij OV ingreep                               */
    #define schafkvgov08               47 /* Afkappen VG hoofdrichting 08 bij OV ingreep                               */
    #define schinstprm                 48 /* Eenmalig kopieren signaalplan parameters naar signaalplannen              */
    #define schinst                    49 /* Eenmalig instellen signaalplannen na wijziging                            */
    #define schvaml                    50 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)              */
    #define schvar                     51 /* VA regelen aan of uit                                                     */
    #define scharh                     52 /* Toestaan alternatieven voor hoofdrichtingen                               */
    #define schvarstreng               53 /* VA regelen aan of uit voor gehele streng                                  */
    #define schpervardef               54 /* VA regelen periode default                                                */
    #define schpervar1                 55 /* VA regelen periode dag                                                    */
    #define schpervar2                 56 /* VA regelen periode ochtend                                                */
    #define schpervar3                 57 /* VA regelen periode avond                                                  */
    #define schpervar4                 58 /* VA regelen periode koopavond                                              */
    #define schpervar5                 59 /* VA regelen periode weekend                                                */
    #define schpervar6                 60 /* VA regelen periode nacht                                                  */
    #define schpervar7                 61 /* VA regelen periode reserve                                                */
    #define schperarhdef               62 /* Alternatieven voor hoofdrichtingen periode default                        */
    #define schperarh1                 63 /* Alternatieven voor hoofdrichtingen periode dag                            */
    #define schperarh2                 64 /* Alternatieven voor hoofdrichtingen periode ochtend                        */
    #define schperarh3                 65 /* Alternatieven voor hoofdrichtingen periode avond                          */
    #define schperarh4                 66 /* Alternatieven voor hoofdrichtingen periode koopavond                      */
    #define schperarh5                 67 /* Alternatieven voor hoofdrichtingen periode weekend                        */
    #define schperarh6                 68 /* Alternatieven voor hoofdrichtingen periode nacht                          */
    #define schperarh7                 69 /* Alternatieven voor hoofdrichtingen periode reserve                        */
    #define schovpriople               70 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                    */
    #define schma0261                  71 /* Meeaanvraag van 02 naar 61 actief                                         */
    #define schma0262                  72 /* Meeaanvraag van 02 naar 62 actief                                         */
    #define schma0521                  73 /* Meeaanvraag van 05 naar 21 actief                                         */
    #define schma0522                  74 /* Meeaanvraag van 05 naar 22 actief                                         */
    #define schma0532                  75 /* Meeaanvraag van 05 naar 32 actief                                         */
    #define schma0868                  76 /* Meeaanvraag van 08 naar 68 actief                                         */
    #define schma1126                  77 /* Meeaanvraag van 11 naar 26 actief                                         */
    #define schma1168                  78 /* Meeaanvraag van 11 naar 68 actief                                         */
    #define schma2221                  79 /* Meeaanvraag van 22 naar 21 actief                                         */
    #define schma2611                  80 /* Meeaanvraag van 26 naar 11 actief                                         */
    #define schma3122                  81 /* Meeaanvraag van 31 naar 22 actief                                         */
    #define schma3132                  82 /* Meeaanvraag van 31 naar 32 actief                                         */
    #define schma3222                  83 /* Meeaanvraag van 32 naar 22 actief                                         */
    #define schma3231                  84 /* Meeaanvraag van 32 naar 31 actief                                         */
    #define schma3324                  85 /* Meeaanvraag van 33 naar 24 actief                                         */
    #define schma3334                  86 /* Meeaanvraag van 33 naar 34 actief                                         */
    #define schma3384                  87 /* Meeaanvraag van 33 naar 84 actief                                         */
    #define schma3424                  88 /* Meeaanvraag van 34 naar 24 actief                                         */
    #define schma3433                  89 /* Meeaanvraag van 34 naar 33 actief                                         */
    #define schma3484                  90 /* Meeaanvraag van 34 naar 84 actief                                         */
    #define schma8281                  91 /* Meeaanvraag van 82 naar 81 actief                                         */
    #define schmv02                    92 /* Meeverlengen fase 02                                                      */
    #define schmv03                    93 /* Meeverlengen fase 03                                                      */
    #define schmv05                    94 /* Meeverlengen fase 05                                                      */
    #define schmv08                    95 /* Meeverlengen fase 08                                                      */
    #define schmv09                    96 /* Meeverlengen fase 09                                                      */
    #define schmv11                    97 /* Meeverlengen fase 11                                                      */
    #define schmv21                    98 /* Meeverlengen fase 21                                                      */
    #define schmv22                    99 /* Meeverlengen fase 22                                                      */
    #define schhardmv2205             100 /* Hard meeverlengen fase 22 met fase 05                                     */
    #define schmv24                   101 /* Meeverlengen fase 24                                                      */
    #define schmv26                   102 /* Meeverlengen fase 26                                                      */
    #define schhardmv2611             103 /* Hard meeverlengen fase 26 met fase 11                                     */
    #define schmv28                   104 /* Meeverlengen fase 28                                                      */
    #define schmv31                   105 /* Meeverlengen fase 31                                                      */
    #define schmv32                   106 /* Meeverlengen fase 32                                                      */
    #define schhardmv3205             107 /* Hard meeverlengen fase 32 met fase 05                                     */
    #define schmv33                   108 /* Meeverlengen fase 33                                                      */
    #define schmv34                   109 /* Meeverlengen fase 34                                                      */
    #define schmv38                   110 /* Meeverlengen fase 38                                                      */
    #define schmv61                   111 /* Meeverlengen fase 61                                                      */
    #define schmv62                   112 /* Meeverlengen fase 62                                                      */
    #define schmv67                   113 /* Meeverlengen fase 67                                                      */
    #define schmv68                   114 /* Meeverlengen fase 68                                                      */
    #define schmv81                   115 /* Meeverlengen fase 81                                                      */
    #define schmv82                   116 /* Meeverlengen fase 82                                                      */
    #define schmv84                   117 /* Meeverlengen fase 84                                                      */
    #define schmlprm                  118 /* Toepassen parametriseerbare modulestructuur                               */
    #define schovstipt03bus           119 /* Geconditioneerde prioteit voor OV bij 03 Bus                              */
    #define schovstipt05bus           120 /* Geconditioneerde prioteit voor OV bij 05 Bus                              */
    #define schovstipt08bus           121 /* Geconditioneerde prioteit voor OV bij 08 Bus                              */
    #define schovstipt09bus           122 /* Geconditioneerde prioteit voor OV bij 09 Bus                              */
    #define schovstipt11bus           123 /* Geconditioneerde prioteit voor OV bij 11 Bus                              */
    #define schovstipt61bus           124 /* Geconditioneerde prioteit voor OV bij 61 Bus                              */
    #define schovstipt62bus           125 /* Geconditioneerde prioteit voor OV bij 62 Bus                              */
    #define schovstipt67bus           126 /* Geconditioneerde prioteit voor OV bij 67 Bus                              */
    #define schovstipt68bus           127 /* Geconditioneerde prioteit voor OV bij 68 Bus                              */
    #define schcovuber                128 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                            */
    #define schcheckdstype            129 /* Check type DSI bericht bij VECOM                                          */
    #define schprioin02karbuskar      130 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02karbuskar     131 /* Uitmelden 02 via Bus toestaan                                             */
    #define schupinagb02karbus        132 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02             */
    #define schprioin02risovris       133 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02risovris      134 /* Uitmelden 02 via Bus toestaan                                             */
    #define schupinagb02risov         135 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02             */
    #define schprioin02risvrwris      136 /* Inmelden 02 via Vrachtwagen toestaan                                      */
    #define schpriouit02risvrwris     137 /* Uitmelden 02 via Vrachtwagen toestaan                                     */
    #define schupinagb02risvrw        138 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02             */
    #define schprioin03buskar         139 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03buskar        140 /* Uitmelden 03 via Bus toestaan                                             */
    #define schupinagb03bus           141 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03             */
    #define schprioin03risovris       142 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03risovris      143 /* Uitmelden 03 via Bus toestaan                                             */
    #define schupinagb03risov         144 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03             */
    #define schprioin03risvrwris      145 /* Inmelden 03 via Vrachtwagen toestaan                                      */
    #define schpriouit03risvrwris     146 /* Uitmelden 03 via Vrachtwagen toestaan                                     */
    #define schupinagb03risvrw        147 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03             */
    #define schprioin05buskar         148 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05buskar        149 /* Uitmelden 05 via Bus toestaan                                             */
    #define schupinagb05bus           150 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05             */
    #define schprioin05risovris       151 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05risovris      152 /* Uitmelden 05 via Bus toestaan                                             */
    #define schupinagb05risov         153 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05             */
    #define schprioin05risvrwris      154 /* Inmelden 05 via Vrachtwagen toestaan                                      */
    #define schpriouit05risvrwris     155 /* Uitmelden 05 via Vrachtwagen toestaan                                     */
    #define schupinagb05risvrw        156 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05             */
    #define schprioin08buskar         157 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08buskar        158 /* Uitmelden 08 via Bus toestaan                                             */
    #define schupinagb08bus           159 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08             */
    #define schprioin08risovris       160 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08risovris      161 /* Uitmelden 08 via Bus toestaan                                             */
    #define schupinagb08risov         162 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08             */
    #define schprioin08risvrwris      163 /* Inmelden 08 via Vrachtwagen toestaan                                      */
    #define schpriouit08risvrwris     164 /* Uitmelden 08 via Vrachtwagen toestaan                                     */
    #define schupinagb08risvrw        165 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08             */
    #define schprioin09buskar         166 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09buskar        167 /* Uitmelden 09 via Bus toestaan                                             */
    #define schupinagb09bus           168 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09             */
    #define schprioin09risovris       169 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09risovris      170 /* Uitmelden 09 via Bus toestaan                                             */
    #define schupinagb09risov         171 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09             */
    #define schprioin09risvrwris      172 /* Inmelden 09 via Vrachtwagen toestaan                                      */
    #define schpriouit09risvrwris     173 /* Uitmelden 09 via Vrachtwagen toestaan                                     */
    #define schupinagb09risvrw        174 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09             */
    #define schprioin11buskar         175 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11buskar        176 /* Uitmelden 11 via Bus toestaan                                             */
    #define schupinagb11bus           177 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11             */
    #define schprioin11risovris       178 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11risovris      179 /* Uitmelden 11 via Bus toestaan                                             */
    #define schupinagb11risov         180 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11             */
    #define schprioin11risvrwris      181 /* Inmelden 11 via Vrachtwagen toestaan                                      */
    #define schpriouit11risvrwris     182 /* Uitmelden 11 via Vrachtwagen toestaan                                     */
    #define schupinagb11risvrw        183 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11             */
    #define schprioin22fietsfiets22_1 184 /* Inmelden 22 via Fiets toestaan                                            */
    #define schpriouit22fietsfiets    185 /* Uitmelden 22 via Fiets toestaan                                           */
    #define schupinagb22fiets         186 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22             */
    #define schprioin28fietsfiets28_2 187 /* Inmelden 28 via Fiets toestaan                                            */
    #define schpriouit28fietsfiets    188 /* Uitmelden 28 via Fiets toestaan                                           */
    #define schupinagb28fiets         189 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28             */
    #define schprioin61buskar         190 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61buskar        191 /* Uitmelden 61 via Bus toestaan                                             */
    #define schupinagb61bus           192 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61             */
    #define schprioin61risovris       193 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61risovris      194 /* Uitmelden 61 via Bus toestaan                                             */
    #define schupinagb61risov         195 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61             */
    #define schprioin61risvrwris      196 /* Inmelden 61 via Vrachtwagen toestaan                                      */
    #define schpriouit61risvrwris     197 /* Uitmelden 61 via Vrachtwagen toestaan                                     */
    #define schupinagb61risvrw        198 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61             */
    #define schprioin62buskar         199 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62buskar        200 /* Uitmelden 62 via Bus toestaan                                             */
    #define schupinagb62bus           201 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62             */
    #define schprioin62risovris       202 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62risovris      203 /* Uitmelden 62 via Bus toestaan                                             */
    #define schupinagb62risov         204 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62             */
    #define schprioin62risvrwris      205 /* Inmelden 62 via Vrachtwagen toestaan                                      */
    #define schpriouit62risvrwris     206 /* Uitmelden 62 via Vrachtwagen toestaan                                     */
    #define schupinagb62risvrw        207 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62             */
    #define schprioin67buskar         208 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67buskar        209 /* Uitmelden 67 via Bus toestaan                                             */
    #define schupinagb67bus           210 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67             */
    #define schprioin67risovris       211 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67risovris      212 /* Uitmelden 67 via Bus toestaan                                             */
    #define schupinagb67risov         213 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67             */
    #define schprioin67risvrwris      214 /* Inmelden 67 via Vrachtwagen toestaan                                      */
    #define schpriouit67risvrwris     215 /* Uitmelden 67 via Vrachtwagen toestaan                                     */
    #define schupinagb67risvrw        216 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67             */
    #define schprioin68buskar         217 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68buskar        218 /* Uitmelden 68 via Bus toestaan                                             */
    #define schupinagb68bus           219 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68             */
    #define schprioin68risovris       220 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68risovris      221 /* Uitmelden 68 via Bus toestaan                                             */
    #define schupinagb68risov         222 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68             */
    #define schprioin68risvrwris      223 /* Inmelden 68 via Vrachtwagen toestaan                                      */
    #define schpriouit68risvrwris     224 /* Uitmelden 68 via Vrachtwagen toestaan                                     */
    #define schupinagb68risvrw        225 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68             */
    #define schupinagbhd02            226 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02             */
    #define schhdin02kar              227 /* Inmelden 02 via KAR HD toestaan                                           */
    #define schhduit02kar             228 /* Uitmelden 02 via KAR HD toestaan                                          */
    #define schchecksirene02          229 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                    */
    #define schhdin02ris              230 /* Inmelden 02 via RIS HD toestaan                                           */
    #define schhduit02ris             231 /* Uitmelden 02 via RIS HD toestaan                                          */
    #define schupinagbhd03            232 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03             */
    #define schhdin03kar              233 /* Inmelden 03 via KAR HD toestaan                                           */
    #define schhduit03kar             234 /* Uitmelden 03 via KAR HD toestaan                                          */
    #define schchecksirene03          235 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                    */
    #define schhdin03ris              236 /* Inmelden 03 via RIS HD toestaan                                           */
    #define schhduit03ris             237 /* Uitmelden 03 via RIS HD toestaan                                          */
    #define schupinagbhd05            238 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05             */
    #define schhdin05kar              239 /* Inmelden 05 via KAR HD toestaan                                           */
    #define schhduit05kar             240 /* Uitmelden 05 via KAR HD toestaan                                          */
    #define schchecksirene05          241 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                    */
    #define schhdin05ris              242 /* Inmelden 05 via RIS HD toestaan                                           */
    #define schhduit05ris             243 /* Uitmelden 05 via RIS HD toestaan                                          */
    #define schupinagbhd08            244 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08             */
    #define schhdin08kar              245 /* Inmelden 08 via KAR HD toestaan                                           */
    #define schhduit08kar             246 /* Uitmelden 08 via KAR HD toestaan                                          */
    #define schchecksirene08          247 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                    */
    #define schhdin08ris              248 /* Inmelden 08 via RIS HD toestaan                                           */
    #define schhduit08ris             249 /* Uitmelden 08 via RIS HD toestaan                                          */
    #define schupinagbhd09            250 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09             */
    #define schhdin09kar              251 /* Inmelden 09 via KAR HD toestaan                                           */
    #define schhduit09kar             252 /* Uitmelden 09 via KAR HD toestaan                                          */
    #define schchecksirene09          253 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                    */
    #define schhdin09ris              254 /* Inmelden 09 via RIS HD toestaan                                           */
    #define schhduit09ris             255 /* Uitmelden 09 via RIS HD toestaan                                          */
    #define schupinagbhd11            256 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11             */
    #define schhdin11kar              257 /* Inmelden 11 via KAR HD toestaan                                           */
    #define schhduit11kar             258 /* Uitmelden 11 via KAR HD toestaan                                          */
    #define schchecksirene11          259 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                    */
    #define schhdin11ris              260 /* Inmelden 11 via RIS HD toestaan                                           */
    #define schhduit11ris             261 /* Uitmelden 11 via RIS HD toestaan                                          */
    #define schupinagbhd61            262 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61             */
    #define schhdin61kar              263 /* Inmelden 61 via KAR HD toestaan                                           */
    #define schhduit61kar             264 /* Uitmelden 61 via KAR HD toestaan                                          */
    #define schchecksirene61          265 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                    */
    #define schhdin61ris              266 /* Inmelden 61 via RIS HD toestaan                                           */
    #define schhduit61ris             267 /* Uitmelden 61 via RIS HD toestaan                                          */
    #define schupinagbhd62            268 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62             */
    #define schhdin62kar              269 /* Inmelden 62 via KAR HD toestaan                                           */
    #define schhduit62kar             270 /* Uitmelden 62 via KAR HD toestaan                                          */
    #define schchecksirene62          271 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                    */
    #define schhdin62ris              272 /* Inmelden 62 via RIS HD toestaan                                           */
    #define schhduit62ris             273 /* Uitmelden 62 via RIS HD toestaan                                          */
    #define schupinagbhd67            274 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67             */
    #define schhdin67kar              275 /* Inmelden 67 via KAR HD toestaan                                           */
    #define schhduit67kar             276 /* Uitmelden 67 via KAR HD toestaan                                          */
    #define schchecksirene67          277 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                    */
    #define schhdin67ris              278 /* Inmelden 67 via RIS HD toestaan                                           */
    #define schhduit67ris             279 /* Uitmelden 67 via RIS HD toestaan                                          */
    #define schupinagbhd68            280 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68             */
    #define schhdin68kar              281 /* Inmelden 68 via KAR HD toestaan                                           */
    #define schhduit68kar             282 /* Uitmelden 68 via KAR HD toestaan                                          */
    #define schchecksirene68          283 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                    */
    #define schhdin68ris              284 /* Inmelden 68 via RIS HD toestaan                                           */
    #define schhduit68ris             285 /* Uitmelden 68 via RIS HD toestaan                                          */
    #define schpelrwKOP02             286 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02      */
    #define schpelmkKOP02             287 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02          */
    #define schpelaKOP02              288 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02               */
    #define schpkuKOP68_uit68         289 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit      */
    #define schrisgeencheckopsg       290 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen               */
    #define schrisaanvraag            291 /* Globaal in of uitschakelen aanvragen via RIS                              */
    #define schrisverlengen           292 /* Globaal in of uitschakelen verlengen via RIS                              */
    #define schrgadd24_3              293 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                */
    #define schrgad24_3               294 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgvd24_3               295 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgv                    296 /* RoBuGrover aan of uit                                                     */
    #define schrgv_snel               297 /* RoBuGrover versneld ophogen of verlagen                                   */
    #define schschoolingreep33        298 /* Schoolingreep aan of uit voor fase 33                                     */
    #define schschoolingreep34        299 /* Schoolingreep aan of uit voor fase 34                                     */
    #define schsi33                   300 /* Senioreningreep aan of uit voor fase 33                                   */
    #define schsi34                   301 /* Senioreningreep aan of uit voor fase 34                                   */
    #define schca02                   302 /* Cyclische aanvraag fase 02                                                */
    #define schca03                   303 /* Cyclische aanvraag fase 03                                                */
    #define schca05                   304 /* Cyclische aanvraag fase 05                                                */
    #define schca08                   305 /* Cyclische aanvraag fase 08                                                */
    #define schca09                   306 /* Cyclische aanvraag fase 09                                                */
    #define schca11                   307 /* Cyclische aanvraag fase 11                                                */
    #define schca21                   308 /* Cyclische aanvraag fase 21                                                */
    #define schca22                   309 /* Cyclische aanvraag fase 22                                                */
    #define schca24                   310 /* Cyclische aanvraag fase 24                                                */
    #define schca26                   311 /* Cyclische aanvraag fase 26                                                */
    #define schca28                   312 /* Cyclische aanvraag fase 28                                                */
    #define schca31                   313 /* Cyclische aanvraag fase 31                                                */
    #define schca32                   314 /* Cyclische aanvraag fase 32                                                */
    #define schca33                   315 /* Cyclische aanvraag fase 33                                                */
    #define schca34                   316 /* Cyclische aanvraag fase 34                                                */
    #define schca38                   317 /* Cyclische aanvraag fase 38                                                */
    #define schca61                   318 /* Cyclische aanvraag fase 61                                                */
    #define schca62                   319 /* Cyclische aanvraag fase 62                                                */
    #define schca67                   320 /* Cyclische aanvraag fase 67                                                */
    #define schca68                   321 /* Cyclische aanvraag fase 68                                                */
    #define schca81                   322 /* Cyclische aanvraag fase 81                                                */
    #define schca82                   323 /* Cyclische aanvraag fase 82                                                */
    #define schca84                   324 /* Cyclische aanvraag fase 84                                                */
    #define schvg02_4a                325 /* Veiligheidsgroen detector 02_4a fase 02                                   */
    #define schvg02_4b                326 /* Veiligheidsgroen detector 02_4b fase 02                                   */
    #define schvg08_4a                327 /* Veiligheidsgroen detector 08_4a fase 08                                   */
    #define schvg08_4b                328 /* Veiligheidsgroen detector 08_4b fase 08                                   */
    #define schvg11_4                 329 /* Veiligheidsgroen detector 11_4 fase 11                                    */
    #define schaltg02                 330 /* Alternatieve realisatie toestaan fase 02                                  */
    #define schaltg03                 331 /* Alternatieve realisatie toestaan fase 03                                  */
    #define schaltg05                 332 /* Alternatieve realisatie toestaan fase 05                                  */
    #define schaltg08                 333 /* Alternatieve realisatie toestaan fase 08                                  */
    #define schaltg09                 334 /* Alternatieve realisatie toestaan fase 09                                  */
    #define schaltg11                 335 /* Alternatieve realisatie toestaan fase 11                                  */
    #define schaltg21                 336 /* Alternatieve realisatie toestaan fase 21                                  */
    #define schaltg2232               337 /* Alternatieve realisatie toestaan fasen 22, 32                             */
    #define schaltg243484             338 /* Alternatieve realisatie toestaan fasen 24, 34, 84                         */
    #define schaltg26                 339 /* Alternatieve realisatie toestaan fase 26                                  */
    #define schaltg2838               340 /* Alternatieve realisatie toestaan fasen 28, 38                             */
    #define schaltg31                 341 /* Alternatieve realisatie toestaan fase 31                                  */
    #define schaltg3384               342 /* Alternatieve realisatie toestaan fasen 33, 84                             */
    #define schaltg2434               343 /* Alternatieve realisatie toestaan fasen 24, 34                             */
    #define schaltg61                 344 /* Alternatieve realisatie toestaan fase 61                                  */
    #define schaltg62                 345 /* Alternatieve realisatie toestaan fase 62                                  */
    #define schaltg67                 346 /* Alternatieve realisatie toestaan fase 67                                  */
    #define schaltg68                 347 /* Alternatieve realisatie toestaan fase 68                                  */
    #define schaltg81                 348 /* Alternatieve realisatie toestaan fase 81                                  */
    #define schaltg82                 349 /* Alternatieve realisatie toestaan fase 82                                  */
    #define schaltg243384             350 /* Alternatieve realisatie toestaan fasen 24, 33, 84                         */
    #define schwg02                   351 /* Wachtstand groen fase 02                                                  */
    #define schwg03                   352 /* Wachtstand groen fase 03                                                  */
    #define schwg05                   353 /* Wachtstand groen fase 05                                                  */
    #define schwg08                   354 /* Wachtstand groen fase 08                                                  */
    #define schwg09                   355 /* Wachtstand groen fase 09                                                  */
    #define schwg11                   356 /* Wachtstand groen fase 11                                                  */
    #define schwg21                   357 /* Wachtstand groen fase 21                                                  */
    #define schwg22                   358 /* Wachtstand groen fase 22                                                  */
    #define schwg24                   359 /* Wachtstand groen fase 24                                                  */
    #define schwg26                   360 /* Wachtstand groen fase 26                                                  */
    #define schwg28                   361 /* Wachtstand groen fase 28                                                  */
    #define schwg31                   362 /* Wachtstand groen fase 31                                                  */
    #define schwg32                   363 /* Wachtstand groen fase 32                                                  */
    #define schwg33                   364 /* Wachtstand groen fase 33                                                  */
    #define schwg34                   365 /* Wachtstand groen fase 34                                                  */
    #define schwg38                   366 /* Wachtstand groen fase 38                                                  */
    #define schwg61                   367 /* Wachtstand groen fase 61                                                  */
    #define schwg62                   368 /* Wachtstand groen fase 62                                                  */
    #define schwg67                   369 /* Wachtstand groen fase 67                                                  */
    #define schwg68                   370 /* Wachtstand groen fase 68                                                  */
    #define schwg81                   371 /* Wachtstand groen fase 81                                                  */
    #define schwg82                   372 /* Wachtstand groen fase 82                                                  */
    #define schwg84                   373 /* Wachtstand groen fase 84                                                  */
    #define schwtv22                  374 /* Aansturing wachttijdvoorspeller fase 22 aan of uit                        */
    #define schwtv24                  375 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                        */
    #define schwtv26                  376 /* Aansturing wachttijdvoorspeller fase 26 aan of uit                        */
    #define schwtv28                  377 /* Aansturing wachttijdvoorspeller fase 28 aan of uit                        */
    #define schwtvbusbijhd            378 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                  */
    #define schgs2232                 379 /* Schakelbare gelijkstart tussen fase 32 en 22                              */
    #define schgs2434                 380 /* Schakelbare gelijkstart tussen fase 34 en 24                              */
    #define schgs2484                 381 /* Schakelbare gelijkstart tussen fase 84 en 24                              */
    #define schgs3384                 382 /* Schakelbare gelijkstart tussen fase 84 en 33                              */
    #define schlos32_1                383 /* Toestaan los realiseren fase 32                                           */
    #define schlos32_2                384 /* Toestaan los realiseren fase 32                                           */
    #define schlos31_1                385 /* Toestaan los realiseren fase 31                                           */
    #define schlos31_2                386 /* Toestaan los realiseren fase 31                                           */
    #define schlos34_1                387 /* Toestaan los realiseren fase 34                                           */
    #define schlos34_2                388 /* Toestaan los realiseren fase 34                                           */
    #define schlos33_1                389 /* Toestaan los realiseren fase 33                                           */
    #define schlos33_2                390 /* Toestaan los realiseren fase 33                                           */
    #define schconfidence15fix        391
    #define schtxconfidence15ar       392
    #define schspatconfidence1        393
    #define schspatconfidence3        394
    #define schspatconfidence6        395
    #define schspatconfidence9        396
    #define schspatconfidence12       397
    #define schspatconfidence15       398
    #define schtimings02              399
    #define schtimings03              400
    #define schtimings05              401
    #define schtimings08              402
    #define schtimings09              403
    #define schtimings11              404
    #define schtimings21              405
    #define schtimings22              406
    #define schtimings24              407
    #define schtimings26              408
    #define schtimings28              409
    #define schtimings31              410
    #define schtimings32              411
    #define schtimings33              412
    #define schtimings34              413
    #define schtimings38              414
    #define schtimings61              415
    #define schtimings62              416
    #define schtimings67              417
    #define schtimings68              418
    #define schtimings81              419
    #define schtimings82              420
    #define schtimings84              421
    #define schsneld02_1a             422 /* Aanvraag snel voor detector 02_1a aan of uit                              */
    #define schsneld02_1b             423 /* Aanvraag snel voor detector 02_1b aan of uit                              */
    #define schsneld03_1              424 /* Aanvraag snel voor detector 03_1 aan of uit                               */
    #define schsneld05_1              425 /* Aanvraag snel voor detector 05_1 aan of uit                               */
    #define schsneld08_1a             426 /* Aanvraag snel voor detector 08_1a aan of uit                              */
    #define schsneld08_1b             427 /* Aanvraag snel voor detector 08_1b aan of uit                              */
    #define schsneld09_1              428 /* Aanvraag snel voor detector 09_1 aan of uit                               */
    #define schsneld11_1              429 /* Aanvraag snel voor detector 11_1 aan of uit                               */
    #define schsneld211               430 /* Aanvraag snel voor detector 211 aan of uit                                */
    #define schsneld22_1              431 /* Aanvraag snel voor detector 22_1 aan of uit                               */
    #define schsneld24_1              432 /* Aanvraag snel voor detector 24_1 aan of uit                               */
    #define schsneld261               433 /* Aanvraag snel voor detector 261 aan of uit                                */
    #define schsneld28_1              434 /* Aanvraag snel voor detector 28_1 aan of uit                               */
    #define schsneld61_1              435 /* Aanvraag snel voor detector 61_1 aan of uit                               */
    #define schsneld62_1a             436 /* Aanvraag snel voor detector 62_1a aan of uit                              */
    #define schsneld62_1b             437 /* Aanvraag snel voor detector 62_1b aan of uit                              */
    #define schsneld67_1              438 /* Aanvraag snel voor detector 67_1 aan of uit                               */
    #define schsneld68_1a             439 /* Aanvraag snel voor detector 68_1a aan of uit                              */
    #define schsneld68_1b             440 /* Aanvraag snel voor detector 68_1b aan of uit                              */
    #define schsneld81_1              441 /* Aanvraag snel voor detector 81_1 aan of uit                               */
    #define schsneld82_1              442 /* Aanvraag snel voor detector 82_1 aan of uit                               */
    #define schsneld84_1              443 /* Aanvraag snel voor detector 84_1 aan of uit                               */
    #define SCHMAX1                   444

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
    #define prmaltphst02                 195 /* Alternatieve ruimte fase 02 tijdens halfstar regelen                                                                           */
    #define prmaltphst03                 196 /* Alternatieve ruimte fase 03 tijdens halfstar regelen                                                                           */
    #define prmaltphst05                 197 /* Alternatieve ruimte fase 05 tijdens halfstar regelen                                                                           */
    #define prmaltphst08                 198 /* Alternatieve ruimte fase 08 tijdens halfstar regelen                                                                           */
    #define prmaltphst09                 199 /* Alternatieve ruimte fase 09 tijdens halfstar regelen                                                                           */
    #define prmaltphst11                 200 /* Alternatieve ruimte fase 11 tijdens halfstar regelen                                                                           */
    #define prmaltphst21                 201 /* Alternatieve ruimte fase 21 tijdens halfstar regelen                                                                           */
    #define prmaltphst2232               202 /* Alternatieve ruimte fasen 22, 32 tijdens halfstar regelen                                                                      */
    #define prmaltphst243484             203 /* Alternatieve ruimte fasen 24, 34, 84 tijdens halfstar regelen                                                                  */
    #define prmaltphst26                 204 /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 205 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst243384             206 /* Alternatieve ruimte fasen 24, 33, 84 tijdens halfstar regelen                                                                  */
    #define prmaltphst82                 207 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst81                 208 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst68                 209 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 210 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 211 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 212 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst2838               213 /* Alternatieve ruimte fasen 28, 38 tijdens halfstar regelen                                                                      */
    #define prmaltphst2434               214 /* Alternatieve ruimte fasen 24, 34 tijdens halfstar regelen                                                                      */
    #define prmaltphst3384               215 /* Alternatieve ruimte fasen 33, 84 tijdens halfstar regelen                                                                      */
    #define prmaltphst31                 216 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmpriohst02karbus           217 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risov            218 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risvrw           219 /* Prioriteit fase 02 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst03bus              220 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risov            221 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risvrw           222 /* Prioriteit fase 03 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst05bus              223 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risov            224 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risvrw           225 /* Prioriteit fase 05 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst08bus              226 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risov            227 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risvrw           228 /* Prioriteit fase 08 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst09bus              229 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risov            230 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risvrw           231 /* Prioriteit fase 09 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst11bus              232 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risov            233 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risvrw           234 /* Prioriteit fase 11 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst22fiets            235 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst28fiets            236 /* Prioriteit fase 28 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61bus              237 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            238 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           239 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62bus              240 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            241 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           242 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67bus              243 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            244 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           245 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68bus              246 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            247 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           248 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmnatxdhst02karbus          249 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           250 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          251 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             252 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           253 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          254 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             255 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           256 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          257 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61bus             269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                281 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                282 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                283 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                284 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                285 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                286 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                287 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                288 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                289 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                290 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                291 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                292 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                293 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                294 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                295 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                296 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                297 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                298 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                299 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                300 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                301 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                302 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                303 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                304 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                305 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                306 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                307 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                308 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                309 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                310 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                311 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                312 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                313 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                314 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                315 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                316 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                317 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                318 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                319 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                320 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                321 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                322 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                323 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                324 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                325 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                326 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                327 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                328 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                329 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                330 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                331 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                332 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                333 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                334 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                335 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                336 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                337 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                338 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                339 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                340 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                341 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                342 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                343 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                344 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                345 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                346 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                347 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                348 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                349 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                350 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                351 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                352 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                353 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                354 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                355 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                356 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                357 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                358 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                359 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                360 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                361 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                362 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                363 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                364 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                365 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                366 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                367 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                368 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                369 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                370 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                371 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                372 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                373 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                374 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                375 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                376 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                377 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                378 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                379 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                380 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                381 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                382 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                383 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                384 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                385 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                386 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                387 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                388 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                389 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                390 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                391 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                392 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                393 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                394 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                395 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                396 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                397 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                398 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                399 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                400 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                401 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                402 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                403 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                404 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                405 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                406 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                407 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                408 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                409 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                410 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                411 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                412 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                413 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                414 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                415 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                416 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                417 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                418 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                419 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                420 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                421 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                422 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                423 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                424 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                425 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                426 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                427 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                428 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                429 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                430 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                431 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                432 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                433 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                434 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                435 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                436 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                437 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                438 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                439 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                440 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                441 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                442 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                443 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                444 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                445 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                446 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                447 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                448 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                449 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                450 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                451 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                452 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                453 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                454 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                455 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                456 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                457 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                458 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                459 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                460 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                461 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                462 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                463 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                464 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                465 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                466 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                467 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                468 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                469 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                470 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                471 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                472 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                473 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                474 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                475 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                476 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                477 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                478 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                479 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                480 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                481 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                482 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                483 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                484 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                485 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                486 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                487 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                488 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                489 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                490 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                491 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                492 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                493 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                494 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                495 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                496 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                497 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                498 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                499 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                500 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                501 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                502 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                503 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                504 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                505 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                506 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                507 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                508 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                509 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                510 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                511 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                512 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                513 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                514 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                515 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                516 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                517 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                518 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                519 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                520 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                521 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                522 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                523 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                524 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                525 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                526 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                527 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                528 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                529 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                530 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                531 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                532 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                533 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                534 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                535 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                536 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                537 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                538 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                539 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                540 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                541 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                542 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                543 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                544 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                545 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                546 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                547 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                548 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                549 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                550 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                551 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                552 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                553 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                554 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                555 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                556 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                557 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                558 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                559 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                560 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                561 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                562 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                563 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                564 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                565 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                566 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                567 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                568 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                569 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                570 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                571 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                572 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                573 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                574 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                575 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                576 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                577 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                578 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                579 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                580 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                581 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                582 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                583 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                584 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                585 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                586 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                587 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                588 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                589 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                590 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                591 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                592 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                593 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                594 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                595 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                596 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                597 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                598 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                599 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                600 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                601 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                602 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                603 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                604 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                605 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                606 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                607 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                608 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                609 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                610 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                611 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                612 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                613 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                614 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                615 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                616 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                617 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                618 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                619 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                620 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                621 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                622 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                623 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                624 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                625 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                626 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                627 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                628 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                629 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                630 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                631 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                632 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                633 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                634 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                635 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                636 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                637 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                638 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                639 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                640 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                641 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                642 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                643 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                644 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                645 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                646 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                647 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                648 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                649 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                650 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                651 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                652 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                653 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                654 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                655 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                656 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                657 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                658 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                659 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                660 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                661 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                662 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                663 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                664 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                665 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                666 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                667 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                668 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                669 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                670 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                671 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                672 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                673 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                674 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                675 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                676 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                677 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                678 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                679 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                680 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                681 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                682 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                683 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                684 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                685 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                686 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                687 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                688 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                689 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                690 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                691 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                692 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                693 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                694 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                695 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                696 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                697 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                698 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                699 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                700 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                701 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                702 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                703 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                704 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                705 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                706 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                707 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                708 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                709 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                710 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                711 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                712 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                713 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                714 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                715 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                716 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                717 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                718 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                719 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                720 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                721 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                722 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                723 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                724 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                725 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                726 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                727 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                728 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                729 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                730 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                731 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                732 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                733 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                734 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                735 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                736 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                737 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                738 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                739 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                740 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                741 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                742 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                743 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                744 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                745 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                746 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                747 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                748 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                749 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                750 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                751 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                752 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                753 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                754 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                755 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                756 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                757 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                758 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                759 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                760 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                761 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                762 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                763 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                764 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                765 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                766 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                767 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                768 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                769 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                770 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                771 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                772 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                773 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                774 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                775 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                776 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                777 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                778 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                779 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                780 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                781 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                782 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                783 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                784 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                785 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                786 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                787 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                788 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                789 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                790 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                791 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                792 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                793 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                794 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                795 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                796 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                797 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                798 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                799 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                800 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                801 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                802 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                803 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                804 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                805 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                806 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                807 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                808 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                809 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                810 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                811 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                812 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                813 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                814 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                815 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                816 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                817 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                818 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                819 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                820 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                821 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                822 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                823 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                824 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                825 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                826 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                827 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                828 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                829 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                830 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                831 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                832 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                833 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                834 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                835 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                836 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                837 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                838 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                839 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                840 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                841 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                842 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                843 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                844 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                845 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                846 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                847 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                848 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                849 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                850 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                851 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                852 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                853 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                854 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                855 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                856 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                857 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                858 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                859 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                860 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                861 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                862 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                863 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                864 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                865 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                866 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                867 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                868 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                869 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                870 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                871 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                872 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                873 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                874 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                875 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                876 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                877 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                878 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                879 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                880 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                881 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                882 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                883 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                884 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                885 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                886 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                887 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                888 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                889 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                890 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                891 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                892 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                893 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                894 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                895 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                896 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                897 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                898 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                899 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                900 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                901 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                902 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                903 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                904 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                905 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                906 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                907 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                908 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                909 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                910 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                911 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                912 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                913 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                914 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                915 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                916 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                917 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                918 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                919 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                920 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                921 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                922 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                923 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                924 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                925 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                926 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                927 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                928 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                929 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                930 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                931 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                932 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                933 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                934 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                935 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                936 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                937 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                938 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                939 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                940 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                941 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                942 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                943 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                944 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                945 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                946 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                947 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                948 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                949 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                950 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                951 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                952 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                953 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                954 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                955 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                956 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                957 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                958 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                959 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                960 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                961 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                962 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                963 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                964 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                965 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                966 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                967 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                968 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                969 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                970 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   971 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 972 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   973 /* Plan voor periode dag                                                                                                          */
    #define prmplxper2                   974 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper3                   975 /* Plan voor periode avond                                                                                                        */
    #define prmplxper4                   976 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper5                   977 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper6                   978 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper7                   979 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                980 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                981 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                982 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                983 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                984 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                985 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                986 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                987 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                988 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                989 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                990 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                991 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                992 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                993 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                994 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                995 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                996 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                997 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                998 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                999 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               1000 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               1001 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                     1002 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
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
    #define prmprml02                   1025 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                   1026 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                   1027 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                   1028 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                   1029 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                   1030 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                   1031 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                   1032 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                   1033 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                   1034 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                   1035 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                   1036 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                   1037 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                   1038 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                   1039 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                   1040 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                   1041 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                   1042 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                   1043 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                   1044 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                   1045 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                   1046 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                   1047 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg         1048 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1049 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg03bus      1050 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus       1051 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus       1052 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus      1053 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus       1054 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus       1055 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus      1056 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus       1057 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus       1058 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus      1059 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus       1060 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus       1061 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus      1062 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus       1063 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus       1064 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus      1065 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus       1066 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus       1067 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus      1068 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus       1069 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus       1070 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus      1071 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus       1072 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus       1073 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus      1074 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus       1075 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus       1076 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1077 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1078 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1079 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1080 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1081 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1082 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1083 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1084 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1085 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1086 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1087 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1088 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1089 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1090 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1091 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1092 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1093 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1094 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1095 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1096 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1097 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1098 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1099 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1100 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1101 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1102 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1103 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1104 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1105 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1106 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1107 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1108 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1109 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1110 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1111 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1112 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1113 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1114 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1115 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1116 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1117 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1118 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1119 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1120 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1121 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1122 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1123 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1124 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1125 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1126 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1127 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1128 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1129 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1130 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1131 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1132 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1133 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1134 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1135 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1136 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1137 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1138 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1139 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1140 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1141 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1142 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1143 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1144 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1145 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1146 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1147 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1148 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1149 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1150 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1151 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1152 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1153 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1154 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1155 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1156 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1157 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1158 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1159 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1160 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1161 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1162 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1163 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1164 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1165 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1166 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1167 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1168 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1169 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1170 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1171 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1172 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1173 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1174 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1175 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1176 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1177 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1178 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1179 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1180 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1181 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1182 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1183 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1184 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1185 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1186 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1187 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1188 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1189 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1190 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1191 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1192 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1193 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1194 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1195 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1196 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1197 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus              1198 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus             1199 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus              1200 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus              1201 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02karbus           1202 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus             1203 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov               1204 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov              1205 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov               1206 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov               1207 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risov              1208 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov          1209
    #define prmrisend02risov            1210
    #define prmriseta02risov            1211
    #define prmrisrole02risov           1212
    #define prmrissubrole02risov        1213
    #define prmrisimportance02risov     1214
    #define prmrisstationtype02risov    1215
    #define prmrisgrenspriotype02risov  1216 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risov     1217
    #define prmrislaneid02risov_1       1218
    #define prmrislaneid02risov_2       1219
    #define prmrto02risvrw              1220 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw             1221 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw              1222 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw              1223 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmprio02risvrw             1224 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw         1225
    #define prmrisend02risvrw           1226
    #define prmriseta02risvrw           1227
    #define prmrisrole02risvrw          1228
    #define prmrissubrole02risvrw       1229
    #define prmrisimportance02risvrw    1230
    #define prmrisstationtype02risvrw   1231
    #define prmrisgrenspriotype02risvrw 1232 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risvrw    1233
    #define prmrislaneid02risvrw_1      1234
    #define prmrislaneid02risvrw_2      1235
    #define prmrto03bus                 1236 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                1237 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                 1238 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                 1239 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus              1240 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                1241 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov               1242 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov              1243 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov               1244 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov               1245 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risov              1246 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov          1247
    #define prmrisend03risov            1248
    #define prmriseta03risov            1249
    #define prmrisrole03risov           1250
    #define prmrissubrole03risov        1251
    #define prmrisimportance03risov     1252
    #define prmrisstationtype03risov    1253
    #define prmrisgrenspriotype03risov  1254 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risov     1255
    #define prmrislaneid03risov_1       1256
    #define prmrto03risvrw              1257 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw             1258 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw              1259 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw              1260 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmprio03risvrw             1261 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw         1262
    #define prmrisend03risvrw           1263
    #define prmriseta03risvrw           1264
    #define prmrisrole03risvrw          1265
    #define prmrissubrole03risvrw       1266
    #define prmrisimportance03risvrw    1267
    #define prmrisstationtype03risvrw   1268
    #define prmrisgrenspriotype03risvrw 1269 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risvrw    1270
    #define prmrislaneid03risvrw_1      1271
    #define prmrto05bus                 1272 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                1273 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                 1274 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                 1275 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus              1276 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                1277 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov               1278 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov              1279 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov               1280 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov               1281 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmprio05risov              1282 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov          1283
    #define prmrisend05risov            1284
    #define prmriseta05risov            1285
    #define prmrisrole05risov           1286
    #define prmrissubrole05risov        1287
    #define prmrisimportance05risov     1288
    #define prmrisstationtype05risov    1289
    #define prmrisgrenspriotype05risov  1290 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
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
    #define prmrisimportance05risvrw    1303
    #define prmrisstationtype05risvrw   1304
    #define prmrisgrenspriotype05risvrw 1305 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risvrw    1306
    #define prmrislaneid05risvrw_1      1307
    #define prmrto08bus                 1308 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                1309 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                 1310 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                 1311 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus              1312 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                1313 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov               1314 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov              1315 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov               1316 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov               1317 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risov              1318 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov          1319
    #define prmrisend08risov            1320
    #define prmriseta08risov            1321
    #define prmrisrole08risov           1322
    #define prmrissubrole08risov        1323
    #define prmrisimportance08risov     1324
    #define prmrisstationtype08risov    1325
    #define prmrisgrenspriotype08risov  1326 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risov     1327
    #define prmrislaneid08risov_1       1328
    #define prmrislaneid08risov_2       1329
    #define prmrto08risvrw              1330 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw             1331 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw              1332 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw              1333 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmprio08risvrw             1334 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw         1335
    #define prmrisend08risvrw           1336
    #define prmriseta08risvrw           1337
    #define prmrisrole08risvrw          1338
    #define prmrissubrole08risvrw       1339
    #define prmrisimportance08risvrw    1340
    #define prmrisstationtype08risvrw   1341
    #define prmrisgrenspriotype08risvrw 1342 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risvrw    1343
    #define prmrislaneid08risvrw_1      1344
    #define prmrislaneid08risvrw_2      1345
    #define prmrto09bus                 1346 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                1347 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                 1348 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                 1349 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus              1350 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                1351 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov               1352 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov              1353 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov               1354 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov               1355 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmprio09risov              1356 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov          1357
    #define prmrisend09risov            1358
    #define prmriseta09risov            1359
    #define prmrisrole09risov           1360
    #define prmrissubrole09risov        1361
    #define prmrisimportance09risov     1362
    #define prmrisstationtype09risov    1363
    #define prmrisgrenspriotype09risov  1364 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
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
    #define prmrisimportance09risvrw    1377
    #define prmrisstationtype09risvrw   1378
    #define prmrisgrenspriotype09risvrw 1379 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
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
    #define prmrisimportance11risov     1398
    #define prmrisstationtype11risov    1399
    #define prmrisgrenspriotype11risov  1400 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
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
    #define prmrisimportance11risvrw    1413
    #define prmrisstationtype11risvrw   1414
    #define prmrisgrenspriotype11risvrw 1415 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risvrw    1416
    #define prmrislaneid11risvrw_1      1417
    #define prmftsblok22fietsfiets      1418 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1419 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets    1420 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets     1421 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets 1422 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets               1423 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1424 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1425 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1426 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmprio22fiets              1427 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets          1428
    #define prmrisend22fiets            1429
    #define prmrisrole22fiets           1430
    #define prmrissubrole22fiets        1431
    #define prmrisimportance22fiets     1432
    #define prmrisstationtype22fiets    1433
    #define prmrisgrenspriotype22fiets  1434 /* Greenswaarde type prioriteit RIS voor fase 22                                                                                  */
    #define prmrisapproachid22fiets     1435
    #define prmrislaneid22fiets_1       1436
    #define prmrislaneid22fiets_2       1437
    #define prmftsblok28fietsfiets      1438 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 1439 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets    1440 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets     1441 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets 1442 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets               1443 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              1444 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               1445 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               1446 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmprio28fiets              1447 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets          1448
    #define prmrisend28fiets            1449
    #define prmrisrole28fiets           1450
    #define prmrissubrole28fiets        1451
    #define prmrisimportance28fiets     1452
    #define prmrisstationtype28fiets    1453
    #define prmrisgrenspriotype28fiets  1454 /* Greenswaarde type prioriteit RIS voor fase 28                                                                                  */
    #define prmrisapproachid28fiets     1455
    #define prmrislaneid28fiets_1       1456
    #define prmrto61bus                 1457 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                1458 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                 1459 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                 1460 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmvtgcat61bus              1461 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                1462 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov               1463 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov              1464 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov               1465 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov               1466 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risov              1467 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov          1468
    #define prmrisend61risov            1469
    #define prmriseta61risov            1470
    #define prmrisrole61risov           1471
    #define prmrissubrole61risov        1472
    #define prmrisimportance61risov     1473
    #define prmrisstationtype61risov    1474
    #define prmrisgrenspriotype61risov  1475 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risov     1476
    #define prmrislaneid61risov_1       1477
    #define prmrto61risvrw              1478 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw             1479 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw              1480 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw              1481 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmprio61risvrw             1482 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw         1483
    #define prmrisend61risvrw           1484
    #define prmriseta61risvrw           1485
    #define prmrisrole61risvrw          1486
    #define prmrissubrole61risvrw       1487
    #define prmrisimportance61risvrw    1488
    #define prmrisstationtype61risvrw   1489
    #define prmrisgrenspriotype61risvrw 1490 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risvrw    1491
    #define prmrislaneid61risvrw_1      1492
    #define prmrto62bus                 1493 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                1494 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                 1495 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                 1496 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmvtgcat62bus              1497 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                1498 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1499 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1500 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1501 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1502 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risov              1503 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1504
    #define prmrisend62risov            1505
    #define prmriseta62risov            1506
    #define prmrisrole62risov           1507
    #define prmrissubrole62risov        1508
    #define prmrisimportance62risov     1509
    #define prmrisstationtype62risov    1510
    #define prmrisgrenspriotype62risov  1511 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risov     1512
    #define prmrislaneid62risov_1       1513
    #define prmrislaneid62risov_2       1514
    #define prmrto62risvrw              1515 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1516 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1517 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1518 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmprio62risvrw             1519 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1520
    #define prmrisend62risvrw           1521
    #define prmriseta62risvrw           1522
    #define prmrisrole62risvrw          1523
    #define prmrissubrole62risvrw       1524
    #define prmrisimportance62risvrw    1525
    #define prmrisstationtype62risvrw   1526
    #define prmrisgrenspriotype62risvrw 1527 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risvrw    1528
    #define prmrislaneid62risvrw_1      1529
    #define prmrislaneid62risvrw_2      1530
    #define prmrto67bus                 1531 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                1532 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                 1533 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                 1534 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmvtgcat67bus              1535 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                1536 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1537 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1538 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1539 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1540 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risov              1541 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1542
    #define prmrisend67risov            1543
    #define prmriseta67risov            1544
    #define prmrisrole67risov           1545
    #define prmrissubrole67risov        1546
    #define prmrisimportance67risov     1547
    #define prmrisstationtype67risov    1548
    #define prmrisgrenspriotype67risov  1549 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risov     1550
    #define prmrislaneid67risov_1       1551
    #define prmrto67risvrw              1552 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1553 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1554 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1555 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmprio67risvrw             1556 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1557
    #define prmrisend67risvrw           1558
    #define prmriseta67risvrw           1559
    #define prmrisrole67risvrw          1560
    #define prmrissubrole67risvrw       1561
    #define prmrisimportance67risvrw    1562
    #define prmrisstationtype67risvrw   1563
    #define prmrisgrenspriotype67risvrw 1564 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risvrw    1565
    #define prmrislaneid67risvrw_1      1566
    #define prmrto68bus                 1567 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                1568 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                 1569 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                 1570 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmvtgcat68bus              1571 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                1572 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1573 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1574 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1575 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1576 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risov              1577 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1578
    #define prmrisend68risov            1579
    #define prmriseta68risov            1580
    #define prmrisrole68risov           1581
    #define prmrissubrole68risov        1582
    #define prmrisimportance68risov     1583
    #define prmrisstationtype68risov    1584
    #define prmrisgrenspriotype68risov  1585 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risov     1586
    #define prmrislaneid68risov_1       1587
    #define prmrislaneid68risov_2       1588
    #define prmrto68risvrw              1589 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1590 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1591 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1592 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmprio68risvrw             1593 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1594
    #define prmrisend68risvrw           1595
    #define prmriseta68risvrw           1596
    #define prmrisrole68risvrw          1597
    #define prmrissubrole68risvrw       1598
    #define prmrisimportance68risvrw    1599
    #define prmrisstationtype68risvrw   1600
    #define prmrisgrenspriotype68risvrw 1601 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risvrw    1602
    #define prmrislaneid68risvrw_1      1603
    #define prmrislaneid68risvrw_2      1604
    #define prmpriohd02                 1605 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1606 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1607 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1608 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmrisstart02hd             1609
    #define prmrisend02hd               1610
    #define prmriseta02hd               1611
    #define prmrisrole02hd              1612
    #define prmrissubrole02hd           1613
    #define prmrisimportance02hd        1614
    #define prmrisstationtype02hd       1615
    #define prmrisgrenspriotype02hd     1616 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02hd        1617
    #define prmrislaneid02hd_1          1618
    #define prmrislaneid02hd_2          1619
    #define prmpriohd03                 1620 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1621 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1622 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1623 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmrisstart03hd             1624
    #define prmrisend03hd               1625
    #define prmriseta03hd               1626
    #define prmrisrole03hd              1627
    #define prmrissubrole03hd           1628
    #define prmrisimportance03hd        1629
    #define prmrisstationtype03hd       1630
    #define prmrisgrenspriotype03hd     1631 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03hd        1632
    #define prmrislaneid03hd_1          1633
    #define prmpriohd05                 1634 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1635 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1636 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1637 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd             1638
    #define prmrisend05hd               1639
    #define prmriseta05hd               1640
    #define prmrisrole05hd              1641
    #define prmrissubrole05hd           1642
    #define prmrisimportance05hd        1643
    #define prmrisstationtype05hd       1644
    #define prmrisgrenspriotype05hd     1645 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05hd        1646
    #define prmrislaneid05hd_1          1647
    #define prmpriohd08                 1648 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1649 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1650 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1651 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd             1652
    #define prmrisend08hd               1653
    #define prmriseta08hd               1654
    #define prmrisrole08hd              1655
    #define prmrissubrole08hd           1656
    #define prmrisimportance08hd        1657
    #define prmrisstationtype08hd       1658
    #define prmrisgrenspriotype08hd     1659 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08hd        1660
    #define prmrislaneid08hd_1          1661
    #define prmrislaneid08hd_2          1662
    #define prmpriohd09                 1663 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1664 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1665 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1666 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd             1667
    #define prmrisend09hd               1668
    #define prmriseta09hd               1669
    #define prmrisrole09hd              1670
    #define prmrissubrole09hd           1671
    #define prmrisimportance09hd        1672
    #define prmrisstationtype09hd       1673
    #define prmrisgrenspriotype09hd     1674 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09hd        1675
    #define prmrislaneid09hd_1          1676
    #define prmpriohd11                 1677 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1678 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1679 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1680 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd             1681
    #define prmrisend11hd               1682
    #define prmriseta11hd               1683
    #define prmrisrole11hd              1684
    #define prmrissubrole11hd           1685
    #define prmrisimportance11hd        1686
    #define prmrisstationtype11hd       1687
    #define prmrisgrenspriotype11hd     1688 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11hd        1689
    #define prmrislaneid11hd_1          1690
    #define prmpriohd61                 1691 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1692 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1693 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1694 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd             1695
    #define prmrisend61hd               1696
    #define prmriseta61hd               1697
    #define prmrisrole61hd              1698
    #define prmrissubrole61hd           1699
    #define prmrisimportance61hd        1700
    #define prmrisstationtype61hd       1701
    #define prmrisgrenspriotype61hd     1702 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61hd        1703
    #define prmrislaneid61hd_1          1704
    #define prmpriohd62                 1705 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1706 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1707 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1708 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd             1709
    #define prmrisend62hd               1710
    #define prmriseta62hd               1711
    #define prmrisrole62hd              1712
    #define prmrissubrole62hd           1713
    #define prmrisimportance62hd        1714
    #define prmrisstationtype62hd       1715
    #define prmrisgrenspriotype62hd     1716 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62hd        1717
    #define prmrislaneid62hd_1          1718
    #define prmrislaneid62hd_2          1719
    #define prmpriohd67                 1720 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1721 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1722 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1723 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd             1724
    #define prmrisend67hd               1725
    #define prmriseta67hd               1726
    #define prmrisrole67hd              1727
    #define prmrissubrole67hd           1728
    #define prmrisimportance67hd        1729
    #define prmrisstationtype67hd       1730
    #define prmrisgrenspriotype67hd     1731 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67hd        1732
    #define prmrislaneid67hd_1          1733
    #define prmpriohd68                 1734 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1735 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1736 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1737 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd             1738
    #define prmrisend68hd               1739
    #define prmriseta68hd               1740
    #define prmrisrole68hd              1741
    #define prmrissubrole68hd           1742
    #define prmrisimportance68hd        1743
    #define prmrisstationtype68hd       1744
    #define prmrisgrenspriotype68hd     1745 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68hd        1746
    #define prmrislaneid68hd_1          1747
    #define prmrislaneid68hd_2          1748
    #define prmkarsg02                  1749 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1750 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1751 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1752 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1753 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1754 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1755 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1756 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1757 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1758 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1759 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1760 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1761 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1762 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1763 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1764 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1765 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1766 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1767 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1768 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1769 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1770 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1771 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1772 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1773 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1774 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1775 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1776 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1777 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1778 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1779 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1780 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1781 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1782 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1783 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1784 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1785 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1786 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1787 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1788 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1789 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1790 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1791 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1792 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1793 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1794 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1795 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1796 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3          1797 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3          1798 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3          1799 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02                   1800 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1801 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1802 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1803 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1804 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1805 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1806 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1807 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1808 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1809 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1810 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1811 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1812 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1813 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1814 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1815 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1816 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1817 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1818 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1819 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1820 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1821 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1822 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1823 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1824 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1825 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1826 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1827 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1828 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1829 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1830 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1831 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1832 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1833 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1834 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1835 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1836 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1837 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1838 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1839 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1840 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1841 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1842 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1843 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1844 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1845 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1846 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1847 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1848 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1849 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1850 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1851 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1852 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1853 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1854 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1855 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1856 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1857 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1858 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1859 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1860 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1861 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1862 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1863 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1864 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1865 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1866 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1867 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1868 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1869 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1870 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1871 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1872 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1873 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1874 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1875 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1876 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1877 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1878 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1879 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1880 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1881 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1882 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1883 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1884 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1885 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1886 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1887 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1888 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1889 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1890 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1891 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1892 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1893 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1894 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1895 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1896 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1897 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1898 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1899 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1900 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1901 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1902 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1903 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1904 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1905 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1906 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1907 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1908 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1909 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1910 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1911 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1912 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1913 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1914 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1915 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1916 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1917 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1918 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1919 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1920 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1921 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1922 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1923 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1924 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1925 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1926 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1927 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1928 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1929 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1930 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1931 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1932 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1933 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1934 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1935 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1936 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1937 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1938 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1939 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1940 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1941 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1942 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1943 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1944 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1945 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1946 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1947 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1948 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1949 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1950 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1951 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1952 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1953 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1954 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1955 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1956 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1957 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1958 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1959 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1960 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1961 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1962 /* PTP error 2 ptp123456                                                                                                          */
    #define prmrisapproachid02          1963 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1964 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1965 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1966 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1967 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1968 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1969 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1970 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1971 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1972 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1973 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1974 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1975 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1976 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1977 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1978 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1979 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1980 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1981 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1982 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1983 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1984 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1985 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1986 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1987 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1988 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1989 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1990 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1991 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1992 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1993 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1994 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1995 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1996 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1997 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1998 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1999 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            2000 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       2001 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  2002 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            2003 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       2004 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  2005 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            2006 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       2007 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  2008 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            2009 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       2010 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  2011 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            2012 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            2013 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            2014 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            2015 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            2016 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            2017 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            2018 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            2019 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            2020 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            2021 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            2022 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            2023 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            2024 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            2025 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            2026 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            2027 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            2028 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            2029 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            2030 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart03mveh1         2031 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     2032 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         2033 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     2034 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         2035 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     2036 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         2037 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     2038 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         2039 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     2040 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         2041 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     2042 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          2043 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      2044 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart24fts1          2045 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      2046 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          2047 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      2048 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          2049 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      2050 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          2051 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      2052 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          2053 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      2054 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          2055 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      2056 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          2057 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      2058 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          2059 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      2060 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          2061 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      2062 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          2063 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      2064 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          2065 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      2066 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          2067 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      2068 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          2069 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      2070 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         2071 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     2072 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         2073 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     2074 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         2075 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     2076 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         2077 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     2078 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         2079 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     2080 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         2081 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     2082 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          2083 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      2084 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          2085 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      2086 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          2087 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      2088 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend03mveh1           2089 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       2090 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           2091 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       2092 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           2093 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       2094 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           2095 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       2096 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           2097 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       2098 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           2099 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       2100 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            2101 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        2102 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend24fts1            2103 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        2104 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            2105 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        2106 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            2107 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        2108 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            2109 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        2110 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            2111 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        2112 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            2113 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        2114 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            2115 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        2116 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            2117 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        2118 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            2119 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        2120 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            2121 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        2122 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            2123 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        2124 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            2125 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        2126 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            2127 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        2128 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           2129 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       2130 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           2131 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       2132 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           2133 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       2134 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           2135 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       2136 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           2137 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       2138 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           2139 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       2140 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            2141 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        2142 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            2143 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        2144 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            2145 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        2146 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart03mveh1         2147 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     2148 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         2149 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     2150 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         2151 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     2152 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         2153 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     2154 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         2155 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     2156 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         2157 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     2158 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          2159 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      2160 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart24fts1          2161 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      2162 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          2163 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      2164 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          2165 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      2166 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          2167 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      2168 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          2169 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      2170 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          2171 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      2172 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          2173 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      2174 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          2175 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      2176 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          2177 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      2178 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          2179 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      2180 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          2181 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      2182 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          2183 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      2184 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          2185 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      2186 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         2187 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     2188 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         2189 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     2190 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         2191 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     2192 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         2193 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     2194 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         2195 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     2196 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         2197 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     2198 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          2199 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      2200 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          2201 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      2202 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          2203 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      2204 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend03mveh1           2205 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       2206 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           2207 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       2208 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           2209 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       2210 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           2211 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       2212 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           2213 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       2214 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           2215 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       2216 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            2217 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        2218 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend24fts1            2219 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        2220 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            2221 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        2222 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            2223 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        2224 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            2225 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        2226 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            2227 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        2228 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            2229 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        2230 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            2231 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        2232 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            2233 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        2234 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            2235 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        2236 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            2237 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        2238 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            2239 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        2240 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            2241 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        2242 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            2243 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        2244 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           2245 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       2246 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           2247 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       2248 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           2249 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       2250 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           2251 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       2252 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           2253 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       2254 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           2255 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       2256 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            2257 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        2258 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            2259 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        2260 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            2261 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        2262 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          2263 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          2264 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          2265 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            2266 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            2267 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            2268 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                2269 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      2270 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              2271 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              2272 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               2273 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               2274 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             2275 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           2276 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                2277 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                2278 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                2279 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                2280 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                2281 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                2282 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                2283 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                2284 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                2285 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                2286 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                2287 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                2288 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                2289 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                2290 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc33             2291 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             2292 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               2293 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               2294 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  2295 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  2296 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  2297 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  2298 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  2299 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  2300 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  2301 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  2302 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  2303 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  2304 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  2305 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  2306 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  2307 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  2308 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  2309 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  2310 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  2311 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  2312 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  2313 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  2314 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  2315 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  2316 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  2317 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   2318 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   2319 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   2320 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   2321 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   2322 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   2323 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   2324 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   2325 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   2326 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   2327 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   2328 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   2329 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   2330 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   2331 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   2332 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 2333 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   2334 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               2335 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   2336 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   2337 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   2338 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp2838                 2339 /* Minimale ruimte tbv alternatieve realisatie fasen 28, 38                                                                       */
    #define prmaltg31                   2340 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   2341 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   2342 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   2343 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 2344 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   2345 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 2346 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   2347 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltg61                   2348 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   2349 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   2350 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   2351 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   2352 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   2353 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   2354 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   2355 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   2356 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   2357 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   2358 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   2359 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   2360 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               2361 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmminwtv                   2362 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              2363 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              2364 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
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

    #define prioFC02karbus 0
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

