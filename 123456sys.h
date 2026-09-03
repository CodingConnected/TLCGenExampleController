/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.19
   CCOLGEN:   12.4.0.19
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
 *
 ************************************************************************************/

#define SYSTEM "123456"
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
    #define ussegm1             (FCMAX +   0) /* Aansturing segmenten display                                                */
    #define ussegm2             (FCMAX +   1) /* Aansturing segmenten display                                                */
    #define ussegm3             (FCMAX +   2) /* Aansturing segmenten display                                                */
    #define ussegm4             (FCMAX +   3) /* Aansturing segmenten display                                                */
    #define ussegm5             (FCMAX +   4) /* Aansturing segmenten display                                                */
    #define ussegm6             (FCMAX +   5) /* Aansturing segmenten display                                                */
    #define ussegm7             (FCMAX +   6) /* Aansturing segmenten display                                                */
    #define usML1               (FCMAX +   7) /* Verklikken actief zijn ML1                                                  */
    #define usML2               (FCMAX +   8) /* Verklikken actief zijn ML2                                                  */
    #define usML3               (FCMAX +   9) /* Verklikken actief zijn ML3                                                  */
    #define usML4               (FCMAX +  10) /* Verklikken actief zijn ML4                                                  */
    #define usincontrol         (FCMAX +  11) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt                     */
    #define usnocontrol         (FCMAX +  12) /* Verklikken of applicatie niet in staat is te regelen                        */
    #define usFile68af          (FCMAX +  13) /* File ingreep File68af actief                                                */
    #define usplact             (FCMAX +  14) /* Signaalplan regelen actief                                                  */
    #define uskpact             (FCMAX +  15) /* Koppeling signaalplan regelen actief                                        */
    #define usmlact             (FCMAX +  16) /* Module regelen actief                                                       */
    #define usmlpl              (FCMAX +  17) /* ML tijdens VA of PL tijdens halfstar bedrijf                                */
    #define ustxtimer           (FCMAX +  18) /* TX_timer tijdens halfstar bedrijf                                           */
    #define usklok              (FCMAX +  19) /* Programma door klok bepaald                                                 */
    #define ushand              (FCMAX +  20) /* Aansturing handmatig aangepast                                              */
    #define usPL1               (FCMAX +  21) /* Plan PL1 actief                                                             */
    #define usPL2               (FCMAX +  22) /* Plan PL2 actief                                                             */
    #define usPL3               (FCMAX +  23) /* Plan PL3 actief                                                             */
    #define usovtevroeg02karbus (FCMAX +  24) /* Voorste OV voertuig bij 02 te vroeg Bus                                     */
    #define usovoptijd02karbus  (FCMAX +  25) /* Voorste OV voertuig bij 02 op tijd Bus                                      */
    #define usovtelaat02karbus  (FCMAX +  26) /* Voorste OV voertuig bij 02 te laat Bus                                      */
    #define usovtevroeg03karbus (FCMAX +  27) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03karbus  (FCMAX +  28) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03karbus  (FCMAX +  29) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05karbus (FCMAX +  30) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05karbus  (FCMAX +  31) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05karbus  (FCMAX +  32) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08karbus (FCMAX +  33) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08karbus  (FCMAX +  34) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08karbus  (FCMAX +  35) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09karbus (FCMAX +  36) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09karbus  (FCMAX +  37) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09karbus  (FCMAX +  38) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11karbus (FCMAX +  39) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11karbus  (FCMAX +  40) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11karbus  (FCMAX +  41) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61karbus (FCMAX +  42) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61karbus  (FCMAX +  43) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61karbus  (FCMAX +  44) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62karbus (FCMAX +  45) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62karbus  (FCMAX +  46) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62karbus  (FCMAX +  47) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67karbus (FCMAX +  48) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67karbus  (FCMAX +  49) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67karbus  (FCMAX +  50) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68karbus (FCMAX +  51) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68karbus  (FCMAX +  52) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68karbus  (FCMAX +  53) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt             (FCMAX +  54) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding        (FCMAX +  55) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog             (FCMAX +  56) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02karbus     (FCMAX +  57) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03karbus     (FCMAX +  58) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05karbus     (FCMAX +  59) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08karbus     (FCMAX +  60) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09karbus     (FCMAX +  61) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11karbus     (FCMAX +  62) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets      (FCMAX +  63) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets      (FCMAX +  64) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61karbus     (FCMAX +  65) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62karbus     (FCMAX +  66) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67karbus     (FCMAX +  67) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68karbus     (FCMAX +  68) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02           (FCMAX +  69) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03           (FCMAX +  70) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05           (FCMAX +  71) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08           (FCMAX +  72) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09           (FCMAX +  73) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11           (FCMAX +  74) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61           (FCMAX +  75) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62           (FCMAX +  76) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67           (FCMAX +  77) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68           (FCMAX +  78) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02        (FCMAX +  79) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1              (FCMAX +  80) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1    (FCMAX +  81) /* Periode actief                                                              */
    #define usperoFietsprio2    (FCMAX +  82) /* Periode actief                                                              */
    #define usper2              (FCMAX +  83) /* Periode Dag periode actief                                                  */
    #define usper3              (FCMAX +  84) /* Periode Ochtendspits actief                                                 */
    #define usper4              (FCMAX +  85) /* Periode Avondspits actief                                                   */
    #define usper5              (FCMAX +  86) /* Periode Koopavond actief                                                    */
    #define usper6              (FCMAX +  87) /* Periode Weekend actief                                                      */
    #define usper7              (FCMAX +  88) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke  (FCMAX +  89) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err  (FCMAX +  90) /* Verklikken PTP error ptp123456                                              */
    #define usrgv               (FCMAX +  91) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv21             (FCMAX +  92) /* Multivalente aansturing wachttijdvoorspeller fase 21                        */
    #define uswtv22             (FCMAX +  93) /* Multivalente aansturing wachttijdvoorspeller fase 22                        */
    #define uswtv24             (FCMAX +  94) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtv26             (FCMAX +  95) /* Multivalente aansturing wachttijdvoorspeller fase 26                        */
    #define uswtv28             (FCMAX +  96) /* Multivalente aansturing wachttijdvoorspeller fase 28                        */
    #define uswtv81             (FCMAX +  97) /* Multivalente aansturing wachttijdvoorspeller fase 81                        */
    #define uswtv82             (FCMAX +  98) /* Multivalente aansturing wachttijdvoorspeller fase 82                        */
    #define uswtv84             (FCMAX +  99) /* Multivalente aansturing wachttijdvoorspeller fase 84                        */
    #define uswtk21             (FCMAX + 100) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22             (FCMAX + 101) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24             (FCMAX + 102) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26             (FCMAX + 103) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28             (FCMAX + 104) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a            (FCMAX + 105) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b            (FCMAX + 106) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a            (FCMAX + 107) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b            (FCMAX + 108) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a            (FCMAX + 109) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b            (FCMAX + 110) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a            (FCMAX + 111) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b            (FCMAX + 112) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a            (FCMAX + 113) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b            (FCMAX + 114) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81             (FCMAX + 115) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82             (FCMAX + 116) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84             (FCMAX + 117) /* Aansturing waitsignaal detector k84                                         */
    #define usstarprogwissel    (FCMAX + 118) /* Verklikken actief zijn wisselen naar star programma                         */
    #define usstar01            (FCMAX + 119) /* Star programma star01 actief                                                */
    #define usstar02            (FCMAX + 120) /* Star programma star02 actief                                                */
    #define usisgtijd02         (FCMAX + 121) /* Verklikken PRIO 02 tbv interfunc                                            */
    #define usisgtijd03         (FCMAX + 122) /* Verklikken PRIO 03 tbv interfunc                                            */
    #define usisgtijd05         (FCMAX + 123) /* Verklikken PRIO 05 tbv interfunc                                            */
    #define usisgtijd08         (FCMAX + 124) /* Verklikken PRIO 08 tbv interfunc                                            */
    #define usisgtijd09         (FCMAX + 125) /* Verklikken PRIO 09 tbv interfunc                                            */
    #define usisgtijd11         (FCMAX + 126) /* Verklikken PRIO 11 tbv interfunc                                            */
    #define usisgtijd21         (FCMAX + 127) /* Verklikken PRIO 21 tbv interfunc                                            */
    #define usisgtijd22         (FCMAX + 128) /* Verklikken PRIO 22 tbv interfunc                                            */
    #define usisgtijd24         (FCMAX + 129) /* Verklikken PRIO 24 tbv interfunc                                            */
    #define usisgtijd26         (FCMAX + 130) /* Verklikken PRIO 26 tbv interfunc                                            */
    #define usisgtijd28         (FCMAX + 131) /* Verklikken PRIO 28 tbv interfunc                                            */
    #define usisgtijd31         (FCMAX + 132) /* Verklikken PRIO 31 tbv interfunc                                            */
    #define usisgtijd32         (FCMAX + 133) /* Verklikken PRIO 32 tbv interfunc                                            */
    #define usisgtijd33         (FCMAX + 134) /* Verklikken PRIO 33 tbv interfunc                                            */
    #define usisgtijd34         (FCMAX + 135) /* Verklikken PRIO 34 tbv interfunc                                            */
    #define usisgtijd38         (FCMAX + 136) /* Verklikken PRIO 38 tbv interfunc                                            */
    #define usisgtijd61         (FCMAX + 137) /* Verklikken PRIO 61 tbv interfunc                                            */
    #define usisgtijd62         (FCMAX + 138) /* Verklikken PRIO 62 tbv interfunc                                            */
    #define usisgtijd67         (FCMAX + 139) /* Verklikken PRIO 67 tbv interfunc                                            */
    #define usisgtijd68         (FCMAX + 140) /* Verklikken PRIO 68 tbv interfunc                                            */
    #define usisgtijd81         (FCMAX + 141) /* Verklikken PRIO 81 tbv interfunc                                            */
    #define usisgtijd82         (FCMAX + 142) /* Verklikken PRIO 82 tbv interfunc                                            */
    #define usisgtijd84         (FCMAX + 143) /* Verklikken PRIO 84 tbv interfunc                                            */
    #define USMAX1              (FCMAX + 144)

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
    #define ddummykarin03karbus  75
    #define ddummykarin05karbus  76
    #define ddummykarin08karbus  77
    #define ddummykarin09karbus  78
    #define ddummykarin11karbus  79
    #define ddummykarin61karbus  80
    #define ddummykarin62karbus  81
    #define ddummykarin67karbus  82
    #define ddummykarin68karbus  83
    #define ddummykaruit02karbus 84
    #define ddummykaruit03karbus 85
    #define ddummykaruit05karbus 86
    #define ddummykaruit08karbus 87
    #define ddummykaruit09karbus 88
    #define ddummykaruit11karbus 89
    #define ddummykaruit61karbus 90
    #define ddummykaruit62karbus 91
    #define ddummykaruit67karbus 92
    #define ddummykaruit68karbus 93
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
    #define isfix (DPMAX + 0) /* Fixatie regeling */
    #define ISMAX1 (DPMAX + 1)

/* hulp elementen */
/* -------------- */
    #define hopdrempelen08         0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08        1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a         2 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b         3 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a         4 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b         5 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a         6 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b         7 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a         8 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b         9 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09        10 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09       11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1         12 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2         13 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3         14 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11        15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11       16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1         17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2         18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3         19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4         20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a              21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b              22 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a              23 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b              24 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a              25 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b              26 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a              27 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b              28 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af         29 /* File File68af actief                                               */
    #define hfile68_9a            30 /* File 68_9a actief                                                  */
    #define hfile68_9b            31 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af    32 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af    33 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hfixatietegenh        34 /* Fixatie tegenhouden                                                */
    #define hplhd                 35 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                36 /* Halfstar actief                                                    */
    #define hkpact                37 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                38 /* Module regelen actief                                              */
    #define hpervar               39 /* Periode VA regelen                                                 */
    #define hperarh               40 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh          41 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                42 /* Bijhouden actief zijn levensignaal                                 */
    #define hnleg0262             43 /* Hulpelement naloop EG van 02 naar 62                               */
    #define hnla02_1a             44 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b             45 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnleg0868             46 /* Hulpelement naloop EG van 08 naar 68                               */
    #define hnla08_1a             47 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b             48 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnleg1168             49 /* Hulpelement naloop EG van 11 naar 68                               */
    #define hnla11_1              50 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnleg2221             51 /* Hulpelement naloop EG van 22 naar 21                               */
    #define hnla22_1              52 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlsg3132             53 /* Hulpelement naloop SG van 31 naar 32                               */
    #define hnlak31a              54 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlsg3231             55 /* Hulpelement naloop SG van 32 naar 31                               */
    #define hnlak32a              56 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlsg3334             57 /* Hulpelement naloop SG van 33 naar 34                               */
    #define hnlak33a              58 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlsg3433             59 /* Hulpelement naloop SG van 34 naar 33                               */
    #define hnlak34a              60 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnleg8281             61 /* Hulpelement naloop EG van 82 naar 81                               */
    #define hnla82_1              62 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02karbus          63 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03karbus          64 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05karbus          65 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08karbus          66 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09karbus          67 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11karbus          68 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61karbus          69 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62karbus          70 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67karbus          71 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68karbus          72 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02karbus         73 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02karbus       74 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbus      75 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02karbuskar    76 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbuskar   77 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03karbus         78 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03karbus       79 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbus      80 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03karbuskar    81 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbuskar   82 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05karbus         83 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05karbus       84 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbus      85 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05karbuskar    86 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbuskar   87 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08karbus         88 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08karbus       89 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbus      90 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08karbuskar    91 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbuskar   92 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09karbus         93 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09karbus       94 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbus      95 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09karbuskar    96 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbuskar   97 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11karbus         98 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11karbus       99 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbus     100 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11karbuskar   101 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbuskar  102 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio22fiets         103 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets       104 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets      105 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets  106 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets 107 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets         108 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets       109 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets      110 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets  111 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets 112 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61karbus        113 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61karbus      114 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbus     115 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61karbuskar   116 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbuskar  117 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62karbus        118 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62karbus      119 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbus     120 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62karbuskar   121 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbuskar  122 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67karbus        123 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67karbus      124 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbus     125 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67karbuskar   126 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbuskar  127 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68karbus        128 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68karbus      129 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbus     130 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68karbuskar   131 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbuskar  132 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02                133 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              134 /* HD inmelding 02                                                    */
    #define hhduit02             135 /* HD uitmelding 02                                                   */
    #define hhdin02kar           136 /* HD inmelding 02                                                    */
    #define hhduit02kar          137 /* HD uitmelding 02                                                   */
    #define hhdin02opt           138 /* HD inmelding 02                                                    */
    #define hhduit02opt          139 /* HD uitmelding 02                                                   */
    #define hhd03                140 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              141 /* HD inmelding 03                                                    */
    #define hhduit03             142 /* HD uitmelding 03                                                   */
    #define hhdin03kar           143 /* HD inmelding 03                                                    */
    #define hhduit03kar          144 /* HD uitmelding 03                                                   */
    #define hhd05                145 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              146 /* HD inmelding 05                                                    */
    #define hhduit05             147 /* HD uitmelding 05                                                   */
    #define hhdin05kar           148 /* HD inmelding 05                                                    */
    #define hhduit05kar          149 /* HD uitmelding 05                                                   */
    #define hhdin05opt           150 /* HD inmelding 05                                                    */
    #define hhduit05opt          151 /* HD uitmelding 05                                                   */
    #define hhd08                152 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              153 /* HD inmelding 08                                                    */
    #define hhduit08             154 /* HD uitmelding 08                                                   */
    #define hhdin08kar           155 /* HD inmelding 08                                                    */
    #define hhduit08kar          156 /* HD uitmelding 08                                                   */
    #define hhdin08opt           157 /* HD inmelding 08                                                    */
    #define hhduit08opt          158 /* HD uitmelding 08                                                   */
    #define hhd09                159 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              160 /* HD inmelding 09                                                    */
    #define hhduit09             161 /* HD uitmelding 09                                                   */
    #define hhdin09kar           162 /* HD inmelding 09                                                    */
    #define hhduit09kar          163 /* HD uitmelding 09                                                   */
    #define hhd11                164 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              165 /* HD inmelding 11                                                    */
    #define hhduit11             166 /* HD uitmelding 11                                                   */
    #define hhdin11kar           167 /* HD inmelding 11                                                    */
    #define hhduit11kar          168 /* HD uitmelding 11                                                   */
    #define hhdin11opt           169 /* HD inmelding 11                                                    */
    #define hhduit11opt          170 /* HD uitmelding 11                                                   */
    #define hhd61                171 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              172 /* HD inmelding 61                                                    */
    #define hhduit61             173 /* HD uitmelding 61                                                   */
    #define hhdin61kar           174 /* HD inmelding 61                                                    */
    #define hhduit61kar          175 /* HD uitmelding 61                                                   */
    #define hhd62                176 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              177 /* HD inmelding 62                                                    */
    #define hhduit62             178 /* HD uitmelding 62                                                   */
    #define hhdin62kar           179 /* HD inmelding 62                                                    */
    #define hhduit62kar          180 /* HD uitmelding 62                                                   */
    #define hhd67                181 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              182 /* HD inmelding 67                                                    */
    #define hhduit67             183 /* HD uitmelding 67                                                   */
    #define hhdin67kar           184 /* HD inmelding 67                                                    */
    #define hhduit67kar          185 /* HD uitmelding 67                                                   */
    #define hhd68                186 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              187 /* HD inmelding 68                                                    */
    #define hhduit68             188 /* HD uitmelding 68                                                   */
    #define hhdin68kar           189 /* HD inmelding 68                                                    */
    #define hhduit68kar          190 /* HD uitmelding 68                                                   */
    #define hpelinKOP02          191 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02      192 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit  193 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit  194 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1    195 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2    196 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01      197 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02      198 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03      199 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04      200 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05      201 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06      202 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07      203 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08      204 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09      205 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10      206 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11      207 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12      208 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13      209 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14      210 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15      211 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16      212 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01      213 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02      214 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03      215 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04      216 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05      217 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06      218 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07      219 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08      220 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09      221 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10      222 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11      223 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12      224 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13      225 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14      226 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15      227 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16      228 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke    229 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err    230 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0   231 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1   232 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2   233 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2      234 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              235 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            236 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            237 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            238 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            239 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11            240 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            241 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            242 /* Bijhouden primaire realisatie fase 28                              */
    #define hwtv21               243 /* Onthouden aansturing wachttijdvoorspeller fase 21                  */
    #define hwtv22               244 /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    #define hwtv24               245 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hwtv26               246 /* Onthouden aansturing wachttijdvoorspeller fase 26                  */
    #define hwtv28               247 /* Onthouden aansturing wachttijdvoorspeller fase 28                  */
    #define hwtv81               248 /* Onthouden aansturing wachttijdvoorspeller fase 81                  */
    #define hwtv82               249 /* Onthouden aansturing wachttijdvoorspeller fase 82                  */
    #define hwtv84               250 /* Onthouden aansturing wachttijdvoorspeller fase 84                  */
    #define hlos31               251 /* Toestaan los realiseren fase 31 (naloop naar)                      */
    #define hlos32               252 /* Toestaan los realiseren fase 32 (naloop naar)                      */
    #define hlos33               253 /* Toestaan los realiseren fase 33 (naloop naar)                      */
    #define hlos34               254 /* Toestaan los realiseren fase 34 (naloop naar)                      */
    #define HEMAX1               255

/* geheugen elementen */
/* ------------------ */
    #define mperiod          0 /* Onthouden actieve periode                                                   */
    #define mlcycl           1 /* Onthouden laatste cyclustijd                                                */
    #define mmk03            2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    #define mmk05            3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    #define mmk08            4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    #define mmk09            5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    #define mmk11            6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    #define mmk61            7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    #define mmk62            8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    #define mmk67            9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    #define mmk68           10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    #define mfilemem08      11 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    #define mfilemem11      12 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    #define mleven          13 /* Bijhouden actief zijn levensignaal                                          */
    #define mklok           14 /* Halfstar of VA obv klokperioden                                             */
    #define mhand           15 /* Halstar of VA handmatig bepaald                                             */
    #define mstp02karbus    16 /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    #define mstp03karbus    17 /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    #define mstp05karbus    18 /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    #define mstp08karbus    19 /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    #define mstp09karbus    20 /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    #define mstp11karbus    21 /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    #define mstp61karbus    22 /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    #define mstp62karbus    23 /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    #define mstp67karbus    24 /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    #define mstp68karbus    25 /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    #define mpelvtgKOP02    26 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02     */
    #define mpelinKOP02     27 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02       */
    #define mwtv21          28 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 21                  */
    #define mwtvm21         29 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 21                 */
    #define mwtv22          30 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 22                  */
    #define mwtvm22         31 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 22                 */
    #define mwtv24          32 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    #define mwtvm24         33 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    #define mwtv26          34 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 26                  */
    #define mwtvm26         35 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 26                 */
    #define mwtv28          36 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 28                  */
    #define mwtvm28         37 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 28                 */
    #define mwtv81          38 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 81                  */
    #define mwtvm81         39 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 81                 */
    #define mwtv82          40 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 82                  */
    #define mwtvm82         41 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 82                 */
    #define mwtv84          42 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 84                  */
    #define mwtvm84         43 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 84                 */
    #define mstarprog       44 /* Onthouden actief star programma                                             */
    #define mstarprogwens   45 /* Onthouden gewenst star programma                                            */
    #define mstarprogwissel 46 /* Onthouden actief zijn wisselen naar star programma                          */
    #define mwijzpb         47 /* Wijziging aan PB doorgeven                                                  */
    #define mfci            48 /* Index fc met gewijzigde TVG_max[]                                           */
    #define mar02           49 /* Alternatieve ruimte fase 02                                                 */
    #define mar03           50 /* Alternatieve ruimte fase 03                                                 */
    #define mar05           51 /* Alternatieve ruimte fase 05                                                 */
    #define mar08           52 /* Alternatieve ruimte fase 08                                                 */
    #define mar09           53 /* Alternatieve ruimte fase 09                                                 */
    #define mar11           54 /* Alternatieve ruimte fase 11                                                 */
    #define mar21           55 /* Alternatieve ruimte fase 21                                                 */
    #define mar22           56 /* Alternatieve ruimte fase 22                                                 */
    #define mar24           57 /* Alternatieve ruimte fase 24                                                 */
    #define mar26           58 /* Alternatieve ruimte fase 26                                                 */
    #define mar28           59 /* Alternatieve ruimte fase 28                                                 */
    #define mar31           60 /* Alternatieve ruimte fase 31                                                 */
    #define mar32           61 /* Alternatieve ruimte fase 32                                                 */
    #define mar33           62 /* Alternatieve ruimte fase 33                                                 */
    #define mar34           63 /* Alternatieve ruimte fase 34                                                 */
    #define mar38           64 /* Alternatieve ruimte fase 38                                                 */
    #define mar61           65 /* Alternatieve ruimte fase 61                                                 */
    #define mar62           66 /* Alternatieve ruimte fase 62                                                 */
    #define mar67           67 /* Alternatieve ruimte fase 67                                                 */
    #define mar68           68 /* Alternatieve ruimte fase 68                                                 */
    #define mar81           69 /* Alternatieve ruimte fase 81                                                 */
    #define mar82           70 /* Alternatieve ruimte fase 82                                                 */
    #define mar84           71 /* Alternatieve ruimte fase 84                                                 */
    #define MEMAX1          72

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
    #define tvgnaloop0262              154 /* Timer naloop EG van 02 naar 62                                                           */
    #define tnlfg0868                  155 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 156 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  157 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 158 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tvgnaloop0868              159 /* Timer naloop EG van 08 naar 68                                                           */
    #define tnlfg1168                  160 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 161 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  162 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 163 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tvgnaloop1168              164 /* Timer naloop EG van 11 naar 68                                                           */
    #define tnlfg2221                  165 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 166 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  167 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 168 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tvgnaloop2221              169 /* Timer naloop EG van 22 naar 21                                                           */
    #define tnlsgd3132                 170 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 171 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 172 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 173 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  174 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 175 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  176 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 177 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tvgnaloop8281              178 /* Timer naloop EG van 82 naar 81                                                           */
    #define tkarmelding                179 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     180 /* Ondergedrag KAR                                                                          */
    #define tprioin02karbuskar         181 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbuskar        182 /* Anti jutter tijd uitmelden 02                                                            */
    #define tprioin02karbus            183 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbus           184 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02karbus             185 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02karbus                186 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02karbus                187 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02karbus               188 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin03karbuskar         189 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbuskar        190 /* Anti jutter tijd uitmelden 03                                                            */
    #define tprioin03karbus            191 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbus           192 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03karbus             193 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03karbus                194 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03karbus                195 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03karbus               196 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin05karbuskar         197 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbuskar        198 /* Anti jutter tijd uitmelden 05                                                            */
    #define tprioin05karbus            199 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbus           200 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05karbus             201 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05karbus                202 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05karbus                203 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05karbus               204 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin08karbuskar         205 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbuskar        206 /* Anti jutter tijd uitmelden 08                                                            */
    #define tprioin08karbus            207 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbus           208 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08karbus             209 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08karbus                210 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08karbus                211 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08karbus               212 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin09karbuskar         213 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbuskar        214 /* Anti jutter tijd uitmelden 09                                                            */
    #define tprioin09karbus            215 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbus           216 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09karbus             217 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09karbus                218 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09karbus                219 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09karbus               220 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin11karbuskar         221 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbuskar        222 /* Anti jutter tijd uitmelden 11                                                            */
    #define tprioin11karbus            223 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbus           224 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11karbus             225 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11karbus                226 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11karbus                227 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11karbus               228 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg22fiets              229 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 230 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 231 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                232 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tbtovg28fiets              233 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 234 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 235 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                236 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tprioin61karbuskar         237 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbuskar        238 /* Anti jutter tijd uitmelden 61                                                            */
    #define tprioin61karbus            239 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbus           240 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61karbus             241 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61karbus                242 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61karbus                243 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61karbus               244 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin62karbuskar         245 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbuskar        246 /* Anti jutter tijd uitmelden 62                                                            */
    #define tprioin62karbus            247 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbus           248 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62karbus             249 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62karbus                250 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62karbus                251 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62karbus               252 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin67karbuskar         253 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbuskar        254 /* Anti jutter tijd uitmelden 67                                                            */
    #define tprioin67karbus            255 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbus           256 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67karbus             257 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67karbus                258 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67karbus                259 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67karbus               260 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68karbuskar         261 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbuskar        262 /* Anti jutter tijd uitmelden 68                                                            */
    #define tprioin68karbus            263 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbus           264 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68karbus             265 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68karbus                266 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68karbus                267 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68karbus               268 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    269 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    270 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 271 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 272 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                273 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define thdin02opt                 274 /* Anti jutter tijd inmelden HD 02 Opticom                                                  */
    #define tgbhd03                    275 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    276 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 277 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 278 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                279 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    280 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    281 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 282 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 283 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                284 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define thdin05opt                 285 /* Anti jutter tijd inmelden HD 05 Opticom                                                  */
    #define tgbhd08                    286 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    287 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 288 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 289 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                290 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define thdin08opt                 291 /* Anti jutter tijd inmelden HD 08 Opticom                                                  */
    #define tgbhd09                    292 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    293 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 294 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 295 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                296 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    297 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    298 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 299 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 300 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                301 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define thdin11opt                 302 /* Anti jutter tijd inmelden HD 11 Opticom                                                  */
    #define tgbhd61                    303 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    304 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 305 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 306 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                307 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    308 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    309 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 310 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 311 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                312 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    313 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    314 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 315 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 316 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                317 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    318 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    319 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 320 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 321 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                322 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tpelmeetKOP02              323 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          324 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                325 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             326 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           327 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 328 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  329 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 330 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            331 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            332 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   333 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   334 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   335 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   336 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   337 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   338 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    339 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    340 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    341 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    342 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   343 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   344 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   345 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   346 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   347 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   348 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    349 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    350 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    351 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    352 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    353 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    354 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    355 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tuitgestca02               356 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               357 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               358 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               359 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               360 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               361 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               362 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               363 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               364 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               365 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               366 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               367 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               368 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               369 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               370 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               371 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               372 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               373 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               374 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               375 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               376 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               377 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               378 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   379 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               380 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              381 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               382 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              383 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   384 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               385 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              386 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               387 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              388 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   389 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                390 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               391 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv21                     392 /* T.b.v. aansturing wachttijdvoorspeller fase 21                                           */
    #define twtv22                     393 /* T.b.v. aansturing wachttijdvoorspeller fase 22                                           */
    #define twtv24                     394 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define twtv26                     395 /* T.b.v. aansturing wachttijdvoorspeller fase 26                                           */
    #define twtv28                     396 /* T.b.v. aansturing wachttijdvoorspeller fase 28                                           */
    #define twtv81                     397 /* T.b.v. aansturing wachttijdvoorspeller fase 81                                           */
    #define twtv82                     398 /* T.b.v. aansturing wachttijdvoorspeller fase 82                                           */
    #define twtv84                     399 /* T.b.v. aansturing wachttijdvoorspeller fase 84                                           */
    #define tvs2205                    400 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tfo0522                    401 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 05                              */
    #define tvs2232                    402 /* Voorstarttijd fase 22 op fase 32                                                         */
    #define tfo3222                    403 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 32                              */
    #define tvs2434                    404 /* Voorstarttijd fase 24 op fase 34                                                         */
    #define tfo3424                    405 /* Fictieve ontruimingstijd/intergroentijd van 24 naar fase 34                              */
    #define tvs2838                    406 /* Voorstarttijd fase 28 op fase 38                                                         */
    #define tfo3828                    407 /* Fictieve ontruimingstijd/intergroentijd van 28 naar fase 38                              */
    #define tvs3205                    408 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tfo0532                    409 /* Fictieve ontruimingstijd/intergroentijd van 32 naar fase 05                              */
    #define tvs8433                    410 /* Voorstarttijd fase 84 op fase 33                                                         */
    #define tfo3384                    411 /* Fictieve ontruimingstijd/intergroentijd van 84 naar fase 33                              */
    #define tlr2611                    412 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tfo2611                    413 /* Fictieve ontruimingstijd/intergroentijd van 26 naar fase 11                              */
    #define txnl0262                   414 /* Tegenhouden fase 02 tbv naloop naar fase 62                                              */
    #define txnl0868                   415 /* Tegenhouden fase 08 tbv naloop naar fase 68                                              */
    #define txnl1168                   416 /* Tegenhouden fase 11 tbv naloop naar fase 68                                              */
    #define txnl2221                   417 /* Tegenhouden fase 22 tbv naloop naar fase 21                                              */
    #define txnl3132                   418 /* Tegenhouden fase 31 tbv naloop naar fase 32                                              */
    #define txnl3231                   419 /* Tegenhouden fase 32 tbv naloop naar fase 31                                              */
    #define txnl3334                   420 /* Tegenhouden fase 33 tbv naloop naar fase 34                                              */
    #define txnl3433                   421 /* Tegenhouden fase 34 tbv naloop naar fase 33                                              */
    #define txnl8281                   422 /* Tegenhouden fase 82 tbv naloop naar fase 81                                              */
    #define TMMAX1                     423

/* teller elementen */
/* ---------------- */
    #define cvchst02karbus       0 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus   */
    #define cvchst03karbus       1 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus   */
    #define cvchst05karbus       2 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus   */
    #define cvchst08karbus       3 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus   */
    #define cvchst09karbus       4 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus   */
    #define cvchst11karbus       5 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus   */
    #define cvchst22fiets        6 /* OV inmeldingen fase 22 tijdens halfstar regelen Fiets */
    #define cvchst28fiets        7 /* OV inmeldingen fase 28 tijdens halfstar regelen Fiets */
    #define cvchst61karbus       8 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus   */
    #define cvchst62karbus       9 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus   */
    #define cvchst67karbus      10 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus   */
    #define cvchst68karbus      11 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus   */
    #define cvc02karbus         12 /* Bijhouden prio inmeldingen fase 02 type Bus           */
    #define cvc03karbus         13 /* Bijhouden prio inmeldingen fase 03 type Bus           */
    #define cvc05karbus         14 /* Bijhouden prio inmeldingen fase 05 type Bus           */
    #define cvc08karbus         15 /* Bijhouden prio inmeldingen fase 08 type Bus           */
    #define cvc09karbus         16 /* Bijhouden prio inmeldingen fase 09 type Bus           */
    #define cvc11karbus         17 /* Bijhouden prio inmeldingen fase 11 type Bus           */
    #define cftscyc22fietsfiets 18 /* Bijhouden realisaties tbv peloton prio voor fase 22   */
    #define cvc22fiets          19 /* Bijhouden prio inmeldingen fase 22 type Fiets         */
    #define cftscyc28fietsfiets 20 /* Bijhouden realisaties tbv peloton prio voor fase 28   */
    #define cvc28fiets          21 /* Bijhouden prio inmeldingen fase 28 type Fiets         */
    #define cvc61karbus         22 /* Bijhouden prio inmeldingen fase 61 type Bus           */
    #define cvc62karbus         23 /* Bijhouden prio inmeldingen fase 62 type Bus           */
    #define cvc67karbus         24 /* Bijhouden prio inmeldingen fase 67 type Bus           */
    #define cvc68karbus         25 /* Bijhouden prio inmeldingen fase 68 type Bus           */
    #define cvchd02             26 /* Bijhouden prio inmeldingen fase 02                    */
    #define cvchd03             27 /* Bijhouden prio inmeldingen fase 03                    */
    #define cvchd05             28 /* Bijhouden prio inmeldingen fase 05                    */
    #define cvchd08             29 /* Bijhouden prio inmeldingen fase 08                    */
    #define cvchd09             30 /* Bijhouden prio inmeldingen fase 09                    */
    #define cvchd11             31 /* Bijhouden prio inmeldingen fase 11                    */
    #define cvchd61             32 /* Bijhouden prio inmeldingen fase 61                    */
    #define cvchd62             33 /* Bijhouden prio inmeldingen fase 62                    */
    #define cvchd67             34 /* Bijhouden prio inmeldingen fase 67                    */
    #define cvchd68             35 /* Bijhouden prio inmeldingen fase 68                    */
    #define CTMAX1              36

/* schakelaars */
/* ----------- */
    #define schdynhiaat08              0 /* Toepassen dynamisch hiaat bij fase 08                                    */
    #define schopdrempelen08           1 /* Opdrempelen toepassen voor fase 08                                       */
    #define schedkop_08                2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus           */
    #define schdynhiaat09              3 /* Toepassen dynamisch hiaat bij fase 09                                    */
    #define schopdrempelen09           4 /* Opdrempelen toepassen voor fase 09                                       */
    #define schedkop_09                5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus           */
    #define schdynhiaat11              6 /* Toepassen dynamisch hiaat bij fase 11                                    */
    #define schopdrempelen11           7 /* Opdrempelen toepassen voor fase 11                                       */
    #define schedkop_11                8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus           */
    #define schtypeuswt                9 /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag        */
    #define schcycl                   10 /* Bijhouden actuele cyclustijd aan of uit                                  */
    #define schcycl_reset             11 /* Reset meting cyclustijd                                                  */
    #define schdvakd02_1a             12 /* Aanvraag fase 02 bij storing op detector 02_1a                           */
    #define schdvakd02_1b             13 /* Aanvraag fase 02 bij storing op detector 02_1b                           */
    #define schdvakd03_1              14 /* Aanvraag fase 03 bij storing op detector 03_1                            */
    #define schdvakdk31a              15 /* Aanvraag fase 31 bij storing op detector k31a                            */
    #define schdvakdk31b              16 /* Aanvraag fase 31 bij storing op detector k31b                            */
    #define schfileFile68af           17 /* File ingreep File68af toepassen                                          */
    #define schfiledoserenFile68af    18 /* Toepassen doseerpercentages voor fileingreep File68af                    */
    #define schfileFile68afparstrook  19 /* Parallele file meldingen per strook file ingreep File68af                */
    #define schbmfix                  20 /* Bijkomen tijdens fixatie mogelijk                                        */
    #define schaltghst02              21 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen         */
    #define schaltghst03              22 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen         */
    #define schaltghst05              23 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen         */
    #define schaltghst08              24 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen         */
    #define schaltghst09              25 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen         */
    #define schaltghst11              26 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen         */
    #define schaltghst21              27 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen         */
    #define schaltghst22              28 /* Alternatief realiseren fase 22 toestaan tijdens halfstar regelen         */
    #define schaltghst24              29 /* Alternatief realiseren fase 24 toestaan tijdens halfstar regelen         */
    #define schaltghst26              30 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen         */
    #define schaltghst28              31 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen         */
    #define schaltghst31              32 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen         */
    #define schaltghst32              33 /* Alternatief realiseren fase 32 toestaan tijdens halfstar regelen         */
    #define schaltghst88              34 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen         */
    #define schaltghst84              35 /* Alternatief realiseren fase 84 toestaan tijdens halfstar regelen         */
    #define schaltghst82              36 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen         */
    #define schaltghst81              37 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen         */
    #define schaltghst68              38 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen         */
    #define schaltghst67              39 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen         */
    #define schaltghst62              40 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen         */
    #define schaltghst61              41 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen         */
    #define schaltghst38              42 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen         */
    #define schaltghst34              43 /* Alternatief realiseren fase 34 toestaan tijdens halfstar regelen         */
    #define schaltghst33              44 /* Alternatief realiseren fase 33 toestaan tijdens halfstar regelen         */
    #define schtegenov02              45 /* Tegenhouden hoofdrichting 02 bij OV ingreep                              */
    #define schafkwgov02              46 /* Afkappen WG hoofdrichting 02 bij OV ingreep                              */
    #define schafkvgov02              47 /* Afkappen VG hoofdrichting 02 bij OV ingreep                              */
    #define schtegenov08              48 /* Tegenhouden hoofdrichting 08 bij OV ingreep                              */
    #define schafkwgov08              49 /* Afkappen WG hoofdrichting 08 bij OV ingreep                              */
    #define schafkvgov08              50 /* Afkappen VG hoofdrichting 08 bij OV ingreep                              */
    #define schinstprm                51 /* Eenmalig kopieren signaalplan parameters naar signaalplannen             */
    #define schinst                   52 /* Eenmalig instellen signaalplannen na wijziging                           */
    #define schvaml                   53 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)             */
    #define schvar                    54 /* VA regelen aan of uit                                                    */
    #define scharh                    55 /* Toestaan alternatieven voor hoofdrichtingen                              */
    #define schvarstreng              56 /* VA regelen aan of uit voor gehele streng                                 */
    #define schpervardef              57 /* VA regelen periode default                                               */
    #define schpervar1                58 /* VA regelen periode nacht                                                 */
    #define schpervar2                59 /* VA regelen periode dag                                                   */
    #define schpervar3                60 /* VA regelen periode ochtend                                               */
    #define schpervar4                61 /* VA regelen periode avond                                                 */
    #define schpervar5                62 /* VA regelen periode koopavond                                             */
    #define schpervar6                63 /* VA regelen periode weekend                                               */
    #define schpervar7                64 /* VA regelen periode reserve                                               */
    #define schperarhdef              65 /* Alternatieven voor hoofdrichtingen periode default                       */
    #define schperarh1                66 /* Alternatieven voor hoofdrichtingen periode nacht                         */
    #define schperarh2                67 /* Alternatieven voor hoofdrichtingen periode dag                           */
    #define schperarh3                68 /* Alternatieven voor hoofdrichtingen periode ochtend                       */
    #define schperarh4                69 /* Alternatieven voor hoofdrichtingen periode avond                         */
    #define schperarh5                70 /* Alternatieven voor hoofdrichtingen periode koopavond                     */
    #define schperarh6                71 /* Alternatieven voor hoofdrichtingen periode weekend                       */
    #define schperarh7                72 /* Alternatieven voor hoofdrichtingen periode reserve                       */
    #define schovpriople              73 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                   */
    #define schma0261                 74 /* Meeaanvraag van 02 naar 61 actief                                        */
    #define schma0262                 75 /* Meeaanvraag van 02 naar 62 actief                                        */
    #define schma0521                 76 /* Meeaanvraag van 05 naar 21 actief                                        */
    #define schma0522                 77 /* Meeaanvraag van 05 naar 22 actief                                        */
    #define schma0532                 78 /* Meeaanvraag van 05 naar 32 actief                                        */
    #define schma0868                 79 /* Meeaanvraag van 08 naar 68 actief                                        */
    #define schma1126                 80 /* Meeaanvraag van 11 naar 26 actief                                        */
    #define schma1168                 81 /* Meeaanvraag van 11 naar 68 actief                                        */
    #define schma2221                 82 /* Meeaanvraag van 22 naar 21 actief                                        */
    #define schma2611                 83 /* Meeaanvraag van 26 naar 11 actief                                        */
    #define schma3122                 84 /* Meeaanvraag van 31 naar 22 actief                                        */
    #define schma3132                 85 /* Meeaanvraag van 31 naar 32 actief                                        */
    #define schma3222                 86 /* Meeaanvraag van 32 naar 22 actief                                        */
    #define schma3231                 87 /* Meeaanvraag van 32 naar 31 actief                                        */
    #define schma3324                 88 /* Meeaanvraag van 33 naar 24 actief                                        */
    #define schma3334                 89 /* Meeaanvraag van 33 naar 34 actief                                        */
    #define schma3384                 90 /* Meeaanvraag van 33 naar 84 actief                                        */
    #define schma3424                 91 /* Meeaanvraag van 34 naar 24 actief                                        */
    #define schma3433                 92 /* Meeaanvraag van 34 naar 33 actief                                        */
    #define schma3484                 93 /* Meeaanvraag van 34 naar 84 actief                                        */
    #define schma3828                 94 /* Meeaanvraag van 38 naar 28 actief                                        */
    #define schma8281                 95 /* Meeaanvraag van 82 naar 81 actief                                        */
    #define schmv02                   96 /* Meeverlengen fase 02                                                     */
    #define schmv03                   97 /* Meeverlengen fase 03                                                     */
    #define schmv05                   98 /* Meeverlengen fase 05                                                     */
    #define schmv08                   99 /* Meeverlengen fase 08                                                     */
    #define schmv09                  100 /* Meeverlengen fase 09                                                     */
    #define schmv11                  101 /* Meeverlengen fase 11                                                     */
    #define schmv21                  102 /* Meeverlengen fase 21                                                     */
    #define schmv22                  103 /* Meeverlengen fase 22                                                     */
    #define schhardmv2205            104 /* Hard meeverlengen fase 22 met fase 05                                    */
    #define schmv24                  105 /* Meeverlengen fase 24                                                     */
    #define schmv26                  106 /* Meeverlengen fase 26                                                     */
    #define schhardmv2611            107 /* Hard meeverlengen fase 26 met fase 11                                    */
    #define schmv28                  108 /* Meeverlengen fase 28                                                     */
    #define schmv31                  109 /* Meeverlengen fase 31                                                     */
    #define schmv32                  110 /* Meeverlengen fase 32                                                     */
    #define schhardmv3205            111 /* Hard meeverlengen fase 32 met fase 05                                    */
    #define schmv33                  112 /* Meeverlengen fase 33                                                     */
    #define schmv34                  113 /* Meeverlengen fase 34                                                     */
    #define schmv38                  114 /* Meeverlengen fase 38                                                     */
    #define schmv61                  115 /* Meeverlengen fase 61                                                     */
    #define schmv62                  116 /* Meeverlengen fase 62                                                     */
    #define schmv67                  117 /* Meeverlengen fase 67                                                     */
    #define schmv68                  118 /* Meeverlengen fase 68                                                     */
    #define schmv81                  119 /* Meeverlengen fase 81                                                     */
    #define schmv82                  120 /* Meeverlengen fase 82                                                     */
    #define schmv84                  121 /* Meeverlengen fase 84                                                     */
    #define schmlprm                 122 /* Toepassen parametriseerbare modulestructuur                              */
    #define schovstipt02karbus       123 /* Geconditioneerde prioteit voor OV bij 02 Bus                             */
    #define schovstipt03karbus       124 /* Geconditioneerde prioteit voor OV bij 03 Bus                             */
    #define schovstipt05karbus       125 /* Geconditioneerde prioteit voor OV bij 05 Bus                             */
    #define schovstipt08karbus       126 /* Geconditioneerde prioteit voor OV bij 08 Bus                             */
    #define schovstipt09karbus       127 /* Geconditioneerde prioteit voor OV bij 09 Bus                             */
    #define schovstipt11karbus       128 /* Geconditioneerde prioteit voor OV bij 11 Bus                             */
    #define schovstipt61karbus       129 /* Geconditioneerde prioteit voor OV bij 61 Bus                             */
    #define schovstipt62karbus       130 /* Geconditioneerde prioteit voor OV bij 62 Bus                             */
    #define schovstipt67karbus       131 /* Geconditioneerde prioteit voor OV bij 67 Bus                             */
    #define schovstipt68karbus       132 /* Geconditioneerde prioteit voor OV bij 68 Bus                             */
    #define schcovuber               133 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                           */
    #define schcheckdstype           134 /* Check type DSI bericht bij VECOM                                         */
    #define schprioin02karbuskar     135 /* Inmelden 02 via Bus toestaan                                             */
    #define schpriouit02karbuskar    136 /* Uitmelden 02 via Bus toestaan                                            */
    #define schprioin03karbuskar     137 /* Inmelden 03 via Bus toestaan                                             */
    #define schpriouit03karbuskar    138 /* Uitmelden 03 via Bus toestaan                                            */
    #define schprioin05karbuskar     139 /* Inmelden 05 via Bus toestaan                                             */
    #define schpriouit05karbuskar    140 /* Uitmelden 05 via Bus toestaan                                            */
    #define schprioin08karbuskar     141 /* Inmelden 08 via Bus toestaan                                             */
    #define schpriouit08karbuskar    142 /* Uitmelden 08 via Bus toestaan                                            */
    #define schprioin09karbuskar     143 /* Inmelden 09 via Bus toestaan                                             */
    #define schpriouit09karbuskar    144 /* Uitmelden 09 via Bus toestaan                                            */
    #define schprioin11karbuskar     145 /* Inmelden 11 via Bus toestaan                                             */
    #define schpriouit11karbuskar    146 /* Uitmelden 11 via Bus toestaan                                            */
    #define schprioin22fietsfiets    147 /* Inmelden 22 via Fiets toestaan                                           */
    #define schpriouit22fietsfiets   148 /* Uitmelden 22 via Fiets toestaan                                          */
    #define schprioin28fietsfiets    149 /* Inmelden 28 via Fiets toestaan                                           */
    #define schpriouit28fietsfiets   150 /* Uitmelden 28 via Fiets toestaan                                          */
    #define schprioin61karbuskar     151 /* Inmelden 61 via Bus toestaan                                             */
    #define schpriouit61karbuskar    152 /* Uitmelden 61 via Bus toestaan                                            */
    #define schprioin62karbuskar     153 /* Inmelden 62 via Bus toestaan                                             */
    #define schpriouit62karbuskar    154 /* Uitmelden 62 via Bus toestaan                                            */
    #define schprioin67karbuskar     155 /* Inmelden 67 via Bus toestaan                                             */
    #define schpriouit67karbuskar    156 /* Uitmelden 67 via Bus toestaan                                            */
    #define schprioin68karbuskar     157 /* Inmelden 68 via Bus toestaan                                             */
    #define schpriouit68karbuskar    158 /* Uitmelden 68 via Bus toestaan                                            */
    #define schhdin02kar             159 /* Inmelden 02 via KAR HD toestaan                                          */
    #define schhduit02kar            160 /* Uitmelden 02 via KAR HD toestaan                                         */
    #define schchecksirene02         161 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                   */
    #define schhdinuit02opt          162 /* In- en uitmelden 02 via Opticom HD toestaan                              */
    #define schhdin03kar             163 /* Inmelden 03 via KAR HD toestaan                                          */
    #define schhduit03kar            164 /* Uitmelden 03 via KAR HD toestaan                                         */
    #define schchecksirene03         165 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                   */
    #define schhdin05kar             166 /* Inmelden 05 via KAR HD toestaan                                          */
    #define schhduit05kar            167 /* Uitmelden 05 via KAR HD toestaan                                         */
    #define schchecksirene05         168 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                   */
    #define schhdinuit05opt          169 /* In- en uitmelden 05 via Opticom HD toestaan                              */
    #define schhdin08kar             170 /* Inmelden 08 via KAR HD toestaan                                          */
    #define schhduit08kar            171 /* Uitmelden 08 via KAR HD toestaan                                         */
    #define schchecksirene08         172 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                   */
    #define schhdinuit08opt          173 /* In- en uitmelden 08 via Opticom HD toestaan                              */
    #define schhdin09kar             174 /* Inmelden 09 via KAR HD toestaan                                          */
    #define schhduit09kar            175 /* Uitmelden 09 via KAR HD toestaan                                         */
    #define schchecksirene09         176 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                   */
    #define schhdin11kar             177 /* Inmelden 11 via KAR HD toestaan                                          */
    #define schhduit11kar            178 /* Uitmelden 11 via KAR HD toestaan                                         */
    #define schchecksirene11         179 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                   */
    #define schhdinuit11opt          180 /* In- en uitmelden 11 via Opticom HD toestaan                              */
    #define schhdin61kar             181 /* Inmelden 61 via KAR HD toestaan                                          */
    #define schhduit61kar            182 /* Uitmelden 61 via KAR HD toestaan                                         */
    #define schchecksirene61         183 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                   */
    #define schhdin62kar             184 /* Inmelden 62 via KAR HD toestaan                                          */
    #define schhduit62kar            185 /* Uitmelden 62 via KAR HD toestaan                                         */
    #define schchecksirene62         186 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                   */
    #define schhdin67kar             187 /* Inmelden 67 via KAR HD toestaan                                          */
    #define schhduit67kar            188 /* Uitmelden 67 via KAR HD toestaan                                         */
    #define schchecksirene67         189 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                   */
    #define schhdin68kar             190 /* Inmelden 68 via KAR HD toestaan                                          */
    #define schhduit68kar            191 /* Uitmelden 68 via KAR HD toestaan                                         */
    #define schchecksirene68         192 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                   */
    #define schpelrwKOP02            193 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02     */
    #define schpelmkKOP02            194 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02         */
    #define schpelaKOP02             195 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02              */
    #define schpkuKOP68_uit68        196 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit     */
    #define schrgadd24_3             197 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2               */
    #define schrgad24_3              198 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2            */
    #define schrgvd24_3              199 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2            */
    #define schrgv                   200 /* RoBuGrover aan of uit                                                    */
    #define schrgv_snel              201 /* RoBuGrover versneld ophogen of verlagen                                  */
    #define schca02                  202 /* Cyclische aanvraag fase 02                                               */
    #define schca03                  203 /* Cyclische aanvraag fase 03                                               */
    #define schca05                  204 /* Cyclische aanvraag fase 05                                               */
    #define schca08                  205 /* Cyclische aanvraag fase 08                                               */
    #define schca09                  206 /* Cyclische aanvraag fase 09                                               */
    #define schca11                  207 /* Cyclische aanvraag fase 11                                               */
    #define schca21                  208 /* Cyclische aanvraag fase 21                                               */
    #define schca22                  209 /* Cyclische aanvraag fase 22                                               */
    #define schca24                  210 /* Cyclische aanvraag fase 24                                               */
    #define schca26                  211 /* Cyclische aanvraag fase 26                                               */
    #define schca28                  212 /* Cyclische aanvraag fase 28                                               */
    #define schca31                  213 /* Cyclische aanvraag fase 31                                               */
    #define schca32                  214 /* Cyclische aanvraag fase 32                                               */
    #define schca33                  215 /* Cyclische aanvraag fase 33                                               */
    #define schca34                  216 /* Cyclische aanvraag fase 34                                               */
    #define schca38                  217 /* Cyclische aanvraag fase 38                                               */
    #define schca61                  218 /* Cyclische aanvraag fase 61                                               */
    #define schca62                  219 /* Cyclische aanvraag fase 62                                               */
    #define schca67                  220 /* Cyclische aanvraag fase 67                                               */
    #define schca68                  221 /* Cyclische aanvraag fase 68                                               */
    #define schca81                  222 /* Cyclische aanvraag fase 81                                               */
    #define schca82                  223 /* Cyclische aanvraag fase 82                                               */
    #define schca84                  224 /* Cyclische aanvraag fase 84                                               */
    #define schvg02_4a               225 /* Veiligheidsgroen detector 02_4a fase 02                                  */
    #define schvg02_4b               226 /* Veiligheidsgroen detector 02_4b fase 02                                  */
    #define schvg08_4a               227 /* Veiligheidsgroen detector 08_4a fase 08                                  */
    #define schvg08_4b               228 /* Veiligheidsgroen detector 08_4b fase 08                                  */
    #define schvg11_4                229 /* Veiligheidsgroen detector 11_4 fase 11                                   */
    #define schaltg02                230 /* Alternatieve realisatie toestaan fase 02                                 */
    #define schaltg03                231 /* Alternatieve realisatie toestaan fase 03                                 */
    #define schaltg05                232 /* Alternatieve realisatie toestaan fase 05                                 */
    #define schaltg08                233 /* Alternatieve realisatie toestaan fase 08                                 */
    #define schaltg09                234 /* Alternatieve realisatie toestaan fase 09                                 */
    #define schaltg11                235 /* Alternatieve realisatie toestaan fase 11                                 */
    #define schaltg21                236 /* Alternatieve realisatie toestaan fase 21                                 */
    #define schaltg22                237 /* Alternatieve realisatie toestaan fase 22                                 */
    #define schaltg24                238 /* Alternatieve realisatie toestaan fase 24                                 */
    #define schaltg26                239 /* Alternatieve realisatie toestaan fase 26                                 */
    #define schaltg28                240 /* Alternatieve realisatie toestaan fase 28                                 */
    #define schaltg31                241 /* Alternatieve realisatie toestaan fase 31                                 */
    #define schaltg32                242 /* Alternatieve realisatie toestaan fase 32                                 */
    #define schaltg33                243 /* Alternatieve realisatie toestaan fase 33                                 */
    #define schaltg34                244 /* Alternatieve realisatie toestaan fase 34                                 */
    #define schaltg38                245 /* Alternatieve realisatie toestaan fase 38                                 */
    #define schaltg61                246 /* Alternatieve realisatie toestaan fase 61                                 */
    #define schaltg62                247 /* Alternatieve realisatie toestaan fase 62                                 */
    #define schaltg67                248 /* Alternatieve realisatie toestaan fase 67                                 */
    #define schaltg68                249 /* Alternatieve realisatie toestaan fase 68                                 */
    #define schaltg81                250 /* Alternatieve realisatie toestaan fase 81                                 */
    #define schaltg82                251 /* Alternatieve realisatie toestaan fase 82                                 */
    #define schaltg84                252 /* Alternatieve realisatie toestaan fase 84                                 */
    #define schwg02                  253 /* Wachtstand groen fase 02                                                 */
    #define schwg03                  254 /* Wachtstand groen fase 03                                                 */
    #define schwg05                  255 /* Wachtstand groen fase 05                                                 */
    #define schwg08                  256 /* Wachtstand groen fase 08                                                 */
    #define schwg09                  257 /* Wachtstand groen fase 09                                                 */
    #define schwg11                  258 /* Wachtstand groen fase 11                                                 */
    #define schwg21                  259 /* Wachtstand groen fase 21                                                 */
    #define schwg22                  260 /* Wachtstand groen fase 22                                                 */
    #define schwg24                  261 /* Wachtstand groen fase 24                                                 */
    #define schwg26                  262 /* Wachtstand groen fase 26                                                 */
    #define schwg28                  263 /* Wachtstand groen fase 28                                                 */
    #define schwg31                  264 /* Wachtstand groen fase 31                                                 */
    #define schwg32                  265 /* Wachtstand groen fase 32                                                 */
    #define schwg33                  266 /* Wachtstand groen fase 33                                                 */
    #define schwg34                  267 /* Wachtstand groen fase 34                                                 */
    #define schwg38                  268 /* Wachtstand groen fase 38                                                 */
    #define schwg61                  269 /* Wachtstand groen fase 61                                                 */
    #define schwg62                  270 /* Wachtstand groen fase 62                                                 */
    #define schwg67                  271 /* Wachtstand groen fase 67                                                 */
    #define schwg68                  272 /* Wachtstand groen fase 68                                                 */
    #define schwg81                  273 /* Wachtstand groen fase 81                                                 */
    #define schwg82                  274 /* Wachtstand groen fase 82                                                 */
    #define schwg84                  275 /* Wachtstand groen fase 84                                                 */
    #define schwtv21                 276 /* Aansturing wachttijdvoorspeller fase 21 aan of uit                       */
    #define schwtv22                 277 /* Aansturing wachttijdvoorspeller fase 22 aan of uit                       */
    #define schwtv24                 278 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                       */
    #define schwtv26                 279 /* Aansturing wachttijdvoorspeller fase 26 aan of uit                       */
    #define schwtv28                 280 /* Aansturing wachttijdvoorspeller fase 28 aan of uit                       */
    #define schwtv81                 281 /* Aansturing wachttijdvoorspeller fase 81 aan of uit                       */
    #define schwtv82                 282 /* Aansturing wachttijdvoorspeller fase 82 aan of uit                       */
    #define schwtv84                 283 /* Aansturing wachttijdvoorspeller fase 84 aan of uit                       */
    #define schwtvbusbijhd           284 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                 */
    #define schstar                  285 /* Inschakelen star programma                                               */
    #define schisgdebug              286 /* Debug aan/uit voor ISG func (testomgeving)                               */
    #define schlos0262               287 /* Wel/niet toestaan losse realisatie 02                                    */
    #define schgeennla0262           288 /* Toestaan realiseren fase 02 (naloop naar) mits geen aanvraag naloop      */
    #define schlos0868               289 /* Wel/niet toestaan losse realisatie 08                                    */
    #define schgeennla0868           290 /* Toestaan realiseren fase 08 (naloop naar) mits geen aanvraag naloop      */
    #define schlos1168               291 /* Wel/niet toestaan losse realisatie 11                                    */
    #define schgeennla1168           292 /* Toestaan realiseren fase 11 (naloop naar) mits geen aanvraag naloop      */
    #define schlos2221               293 /* Wel/niet toestaan losse realisatie 22                                    */
    #define schgeennla2221           294 /* Toestaan realiseren fase 22 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3132      295 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3132               296 /* Wel/niet toestaan losse realisatie 31                                    */
    #define schgeennla3132           297 /* Toestaan realiseren fase 31 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3231      298 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3231               299 /* Wel/niet toestaan losse realisatie 32                                    */
    #define schgeennla3231           300 /* Toestaan realiseren fase 32 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3334      301 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3334               302 /* Wel/niet toestaan losse realisatie 33                                    */
    #define schgeennla3334           303 /* Toestaan realiseren fase 33 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3433      304 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3433               305 /* Wel/niet toestaan losse realisatie 34                                    */
    #define schgeennla3433           306 /* Toestaan realiseren fase 34 (naloop naar) mits geen aanvraag naloop      */
    #define schlos8281               307 /* Wel/niet toestaan losse realisatie 82                                    */
    #define schgeennla8281           308 /* Toestaan realiseren fase 82 (naloop naar) mits geen aanvraag naloop      */
    #define schsneld02_1a            309 /* Aanvraag snel voor detector 02_1a aan of uit                             */
    #define schsneld02_1b            310 /* Aanvraag snel voor detector 02_1b aan of uit                             */
    #define schsneld03_1             311 /* Aanvraag snel voor detector 03_1 aan of uit                              */
    #define schsneld05_1             312 /* Aanvraag snel voor detector 05_1 aan of uit                              */
    #define schsneld08_1a            313 /* Aanvraag snel voor detector 08_1a aan of uit                             */
    #define schsneld08_1b            314 /* Aanvraag snel voor detector 08_1b aan of uit                             */
    #define schsneld09_1             315 /* Aanvraag snel voor detector 09_1 aan of uit                              */
    #define schsneld11_1             316 /* Aanvraag snel voor detector 11_1 aan of uit                              */
    #define schsneld211              317 /* Aanvraag snel voor detector 211 aan of uit                               */
    #define schsneld22_1             318 /* Aanvraag snel voor detector 22_1 aan of uit                              */
    #define schsneld24_1             319 /* Aanvraag snel voor detector 24_1 aan of uit                              */
    #define schsneld261              320 /* Aanvraag snel voor detector 261 aan of uit                               */
    #define schsneld28_1             321 /* Aanvraag snel voor detector 28_1 aan of uit                              */
    #define schsneld61_1             322 /* Aanvraag snel voor detector 61_1 aan of uit                              */
    #define schsneld62_1a            323 /* Aanvraag snel voor detector 62_1a aan of uit                             */
    #define schsneld62_1b            324 /* Aanvraag snel voor detector 62_1b aan of uit                             */
    #define schsneld67_1             325 /* Aanvraag snel voor detector 67_1 aan of uit                              */
    #define schsneld68_1a            326 /* Aanvraag snel voor detector 68_1a aan of uit                             */
    #define schsneld68_1b            327 /* Aanvraag snel voor detector 68_1b aan of uit                             */
    #define schsneld81_1             328 /* Aanvraag snel voor detector 81_1 aan of uit                              */
    #define schsneld82_1             329 /* Aanvraag snel voor detector 82_1 aan of uit                              */
    #define schsneld84_1             330 /* Aanvraag snel voor detector 84_1 aan of uit                              */
    #define SCHMAX1                  331

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
    #define prmaltphst22                 202 /* Alternatieve ruimte fase 22 tijdens halfstar regelen                                                                           */
    #define prmaltphst24                 203 /* Alternatieve ruimte fase 24 tijdens halfstar regelen                                                                           */
    #define prmaltphst26                 204 /* Alternatieve ruimte fase 26 tijdens halfstar regelen                                                                           */
    #define prmaltphst28                 205 /* Alternatieve ruimte fase 28 tijdens halfstar regelen                                                                           */
    #define prmaltphst31                 206 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmaltphst32                 207 /* Alternatieve ruimte fase 32 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 208 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst84                 209 /* Alternatieve ruimte fase 84 tijdens halfstar regelen                                                                           */
    #define prmaltphst82                 210 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst81                 211 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst68                 212 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 213 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 214 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 215 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst38                 216 /* Alternatieve ruimte fase 38 tijdens halfstar regelen                                                                           */
    #define prmaltphst34                 217 /* Alternatieve ruimte fase 34 tijdens halfstar regelen                                                                           */
    #define prmaltphst33                 218 /* Alternatieve ruimte fase 33 tijdens halfstar regelen                                                                           */
    #define prmpriohst02karbus           219 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03karbus           220 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05karbus           221 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08karbus           222 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09karbus           223 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11karbus           224 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst22fiets            225 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst28fiets            226 /* Prioriteit fase 28 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61karbus           227 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62karbus           228 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67karbus           229 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68karbus           230 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmnatxdhst02karbus          231 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03karbus          232 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05karbus          233 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08karbus          234 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09karbus          235 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11karbus          236 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           237 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           238 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61karbus          239 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62karbus          240 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67karbus          241 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68karbus          242 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                243 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                244 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                245 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                246 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                247 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                248 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                249 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                250 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                251 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                252 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                253 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                254 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                255 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                256 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                257 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                258 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                259 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                260 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                261 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                262 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                263 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                264 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                265 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                266 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                267 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                268 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                269 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                270 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                271 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                272 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                273 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                274 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                275 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                276 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                277 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                278 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                279 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                280 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                281 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                282 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                283 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                284 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                285 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                286 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                287 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                288 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                289 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                290 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                291 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                292 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                293 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                294 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                295 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                296 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                297 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                298 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                299 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                300 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                301 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                302 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                303 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                304 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                305 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                306 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                307 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                308 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                309 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                310 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                311 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                312 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                313 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                314 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                315 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                316 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                317 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                318 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                319 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                320 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                321 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                322 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                323 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                324 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                325 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                326 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                327 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                328 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                329 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                330 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                331 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                332 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                333 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                334 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                335 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                336 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                337 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                338 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                339 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                340 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                341 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                342 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                343 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                344 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                345 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                346 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                347 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                348 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                349 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                350 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                351 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                352 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                353 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                354 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                355 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                356 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                357 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                358 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                359 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                360 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                361 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                362 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                363 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                364 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                365 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                366 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                367 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                368 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                369 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                370 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                371 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                372 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                373 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                374 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                375 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                376 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                377 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                378 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                379 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                380 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                381 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                382 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                383 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                384 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                385 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                386 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                387 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                388 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                389 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                390 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                391 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                392 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                393 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                394 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                395 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                396 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                397 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                398 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                399 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                400 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                401 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                402 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                403 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                404 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                405 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                406 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                407 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                408 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                409 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                410 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                411 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                412 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                413 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                414 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                415 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                416 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                417 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                418 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                419 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                420 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                421 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                422 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                423 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                424 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                425 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                426 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                427 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                428 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                429 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                430 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                431 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                432 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                433 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                434 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                435 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                436 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                437 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                438 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                439 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                440 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                441 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                442 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                443 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                444 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                445 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                446 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                447 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                448 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                449 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                450 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                451 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                452 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                453 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                454 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                455 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                456 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                457 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                458 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                459 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                460 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                461 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                462 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                463 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                464 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                465 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                466 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                467 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                468 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                469 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                470 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                471 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                472 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                473 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                474 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                475 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                476 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                477 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                478 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                479 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                480 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                481 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                482 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                483 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                484 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                485 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                486 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                487 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                488 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                489 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                490 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                491 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                492 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                493 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                494 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                495 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                496 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                497 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                498 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                499 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                500 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                501 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                502 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                503 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                504 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                505 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                506 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                507 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                508 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                509 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                510 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                511 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                512 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                513 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                514 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                515 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                516 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                517 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                518 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                519 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                520 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                521 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                522 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                523 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                524 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                525 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                526 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                527 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                528 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                529 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                530 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                531 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                532 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                533 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                534 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                535 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                536 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                537 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                538 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                539 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                540 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                541 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                542 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                543 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                544 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                545 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                546 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                547 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                548 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                549 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                550 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                551 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                552 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                553 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                554 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                555 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                556 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                557 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                558 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                559 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                560 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                561 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                562 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                563 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                564 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                565 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                566 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                567 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                568 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                569 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                570 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                571 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                572 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                573 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                574 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                575 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                576 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                577 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                578 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                579 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                580 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                581 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                582 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                583 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                584 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                585 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                586 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                587 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                588 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                589 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                590 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                591 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                592 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                593 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                594 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                595 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                596 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                597 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                598 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                599 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                600 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                601 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                602 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                603 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                604 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                605 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                606 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                607 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                608 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                609 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                610 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                611 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                612 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                613 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                614 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                615 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                616 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                617 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                618 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                619 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                620 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                621 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                622 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                623 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                624 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                625 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                626 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                627 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                628 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                629 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                630 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                631 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                632 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                633 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                634 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                635 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                636 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                637 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                638 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                639 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                640 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                641 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                642 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                643 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                644 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                645 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                646 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                647 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                648 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                649 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                650 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                651 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                652 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                653 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                654 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                655 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                656 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                657 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                658 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                659 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                660 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                661 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                662 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                663 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                664 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                665 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                666 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                667 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                668 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                669 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                670 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                671 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                672 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                673 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                674 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                675 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                676 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                677 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                678 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                679 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                680 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                681 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                682 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                683 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                684 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                685 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                686 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                687 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                688 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                689 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                690 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                691 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                692 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                693 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                694 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                695 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                696 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                697 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                698 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                699 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                700 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                701 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                702 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                703 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                704 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                705 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                706 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                707 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                708 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                709 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                710 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                711 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                712 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                713 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                714 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                715 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                716 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                717 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                718 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                719 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                720 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                721 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                722 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                723 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                724 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                725 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                726 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                727 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                728 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                729 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                730 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                731 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                732 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                733 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                734 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                735 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                736 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                737 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                738 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                739 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                740 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                741 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                742 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                743 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                744 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                745 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                746 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                747 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                748 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                749 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                750 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                751 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                752 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                753 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                754 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                755 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                756 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                757 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                758 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                759 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                760 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                761 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                762 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                763 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                764 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                765 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                766 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                767 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                768 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                769 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                770 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                771 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                772 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                773 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                774 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                775 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                776 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                777 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                778 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                779 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                780 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                781 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                782 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                783 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                784 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                785 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                786 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                787 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                788 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                789 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                790 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                791 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                792 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                793 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                794 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                795 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                796 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                797 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                798 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                799 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                800 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                801 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                802 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                803 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                804 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                805 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                806 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                807 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                808 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                809 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                810 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                811 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                812 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                813 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                814 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                815 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                816 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                817 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                818 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                819 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                820 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                821 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                822 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                823 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                824 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                825 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                826 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                827 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                828 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                829 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                830 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                831 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                832 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                833 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                834 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                835 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                836 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                837 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                838 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                839 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                840 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                841 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                842 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                843 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                844 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                845 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                846 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                847 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                848 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                849 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                850 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                851 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                852 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                853 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                854 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                855 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                856 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                857 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                858 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                859 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                860 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                861 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                862 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                863 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                864 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                865 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                866 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                867 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                868 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                869 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                870 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                871 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                872 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                873 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                874 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                875 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                876 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                877 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                878 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                879 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                880 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                881 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                882 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                883 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                884 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                885 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                886 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                887 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                888 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                889 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                890 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                891 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                892 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                893 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                894 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                895 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                896 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                897 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                898 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                899 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                900 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                901 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                902 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                903 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                904 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                905 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                906 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                907 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                908 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                909 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                910 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                911 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                912 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                913 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                914 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                915 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                916 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                917 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                918 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                919 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                920 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                921 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                922 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                923 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                924 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                925 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                926 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                927 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                928 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                929 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                930 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                931 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                932 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   933 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 934 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   935 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   936 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   937 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   938 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   939 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   940 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   941 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                942 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                943 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                944 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                945 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                946 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                947 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                948 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                949 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                950 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                951 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                952 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                953 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                954 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                955 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                956 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                957 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                958 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                959 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                960 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                961 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                962 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                963 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      964 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      965 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      966 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      967 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      968 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      969 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      970 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      971 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil22              972 /* Tijd dat fase 22 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv24                      973 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      974 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      975 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      976 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      977 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      978 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      979 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      980 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      981 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      982 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      983 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      984 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      985 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      986 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil82              987 /* Tijd dat fase 82 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv84                      988 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    989 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    990 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    991 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    992 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    993 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    994 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    995 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    996 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    997 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    998 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    999 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                   1000 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                   1001 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                   1002 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                   1003 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                   1004 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                   1005 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                   1006 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                   1007 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                   1008 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                   1009 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                   1010 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                   1011 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg         1012 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1013 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02karbus   1014 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02karbus    1015 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02karbus    1016 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03karbus   1017 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03karbus    1018 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03karbus    1019 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05karbus   1020 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05karbus    1021 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05karbus    1022 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08karbus   1023 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08karbus    1024 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08karbus    1025 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09karbus   1026 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09karbus    1027 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09karbus    1028 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11karbus   1029 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11karbus    1030 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11karbus    1031 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61karbus   1032 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61karbus    1033 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61karbus    1034 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62karbus   1035 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62karbus    1036 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62karbus    1037 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67karbus   1038 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67karbus    1039 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67karbus    1040 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68karbus   1041 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68karbus    1042 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68karbus    1043 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1044 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1045 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1046 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1047 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1048 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1049 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1050 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1051 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1052 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1053 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1054 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1055 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1056 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1057 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1058 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1059 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1060 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1061 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1062 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1063 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1064 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1065 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1066 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1067 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1068 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1069 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1070 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1071 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1072 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1073 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1074 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1075 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1076 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1077 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1078 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1079 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1080 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1081 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1082 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1083 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1084 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1085 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1086 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1087 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1088 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1089 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1090 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1091 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1092 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1093 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1094 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1095 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1096 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1097 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1098 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1099 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1100 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1101 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1102 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1103 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1104 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1105 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1106 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1107 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1108 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1109 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1110 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1111 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1112 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1113 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1114 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1115 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1116 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1117 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1118 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1119 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1120 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1121 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1122 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1123 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1124 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1125 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1126 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1127 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1128 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1129 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1130 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1131 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1132 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1133 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1134 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1135 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1136 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1137 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1138 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1139 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1140 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1141 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1142 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1143 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1144 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1145 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1146 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1147 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1148 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1149 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1150 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1151 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1152 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1153 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1154 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1155 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1156 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1157 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1158 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1159 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1160 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1161 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1162 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1163 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1164 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus              1165 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus             1166 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus              1167 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus              1168 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus          1169 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus           1170 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus             1171 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03karbus              1172 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03karbus             1173 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03karbus              1174 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03karbus              1175 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03karbus          1176 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03karbus           1177 /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    #define prmprio03karbus             1178 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05karbus              1179 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05karbus             1180 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05karbus              1181 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05karbus              1182 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05karbus          1183 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05karbus           1184 /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    #define prmprio05karbus             1185 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08karbus              1186 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08karbus             1187 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08karbus              1188 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08karbus              1189 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08karbus          1190 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08karbus           1191 /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    #define prmprio08karbus             1192 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09karbus              1193 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09karbus             1194 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09karbus              1195 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09karbus              1196 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09karbus          1197 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09karbus           1198 /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    #define prmprio09karbus             1199 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11karbus              1200 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11karbus             1201 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11karbus              1202 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11karbus              1203 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11karbus          1204 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11karbus           1205 /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    #define prmprio11karbus             1206 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmftsblok22fietsfiets      1207 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1208 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1209 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1210 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1211 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1212 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1213 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets           1214 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets              1215 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets      1216 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 1217 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminwt28fietsfiets     1218 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets               1219 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              1220 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               1221 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               1222 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets           1223 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets              1224 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto61karbus              1225 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61karbus             1226 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61karbus              1227 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61karbus              1228 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61karbus          1229 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61karbus           1230 /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    #define prmprio61karbus             1231 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62karbus              1232 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62karbus             1233 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62karbus              1234 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62karbus              1235 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62karbus          1236 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62karbus           1237 /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    #define prmprio62karbus             1238 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67karbus              1239 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67karbus             1240 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67karbus              1241 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67karbus              1242 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67karbus          1243 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67karbus           1244 /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    #define prmprio67karbus             1245 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68karbus              1246 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68karbus             1247 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68karbus              1248 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68karbus              1249 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68karbus          1250 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68karbus           1251 /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    #define prmprio68karbus             1252 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02                 1253 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1254 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1255 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1256 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02              1257 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmpriohd03                 1258 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1259 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1260 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1261 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03              1262 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmpriohd05                 1263 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1264 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1265 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1266 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              1267 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmpriohd08                 1268 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1269 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1270 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1271 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              1272 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmpriohd09                 1273 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1274 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1275 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1276 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              1277 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmpriohd11                 1278 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1279 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1280 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1281 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              1282 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmpriohd61                 1283 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1284 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1285 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1286 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              1287 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmpriohd62                 1288 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1289 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1290 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1291 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              1292 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmpriohd67                 1293 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1294 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1295 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1296 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              1297 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmpriohd68                 1298 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1299 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1300 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1301 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              1302 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmkarsg02                  1303 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1304 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1305 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1306 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1307 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1308 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1309 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1310 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1311 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1312 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1313 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1314 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1315 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1316 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1317 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1318 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1319 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1320 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1321 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1322 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1323 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1324 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1325 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1326 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1327 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1328 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1329 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1330 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1331 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1332 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1333 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1334 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1335 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1336 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1337 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1338 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1339 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1340 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1341 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1342 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1343 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1344 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1345 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1346 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1347 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1348 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1349 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1350 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmvg1_02                   1351 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1352 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1353 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1354 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1355 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1356 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1357 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1358 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1359 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1360 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1361 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1362 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1363 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1364 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1365 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1366 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1367 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1368 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1369 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1370 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1371 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1372 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1373 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1374 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1375 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1376 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1377 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1378 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1379 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1380 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1381 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1382 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1383 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1384 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1385 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1386 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1387 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1388 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1389 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1390 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1391 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1392 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1393 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1394 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1395 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1396 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1397 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1398 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1399 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1400 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1401 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1402 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1403 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1404 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1405 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1406 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1407 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1408 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1409 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1410 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1411 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1412 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1413 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1414 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1415 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1416 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1417 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1418 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1419 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1420 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1421 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1422 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1423 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1424 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1425 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1426 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1427 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1428 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1429 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1430 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1431 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1432 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1433 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1434 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1435 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1436 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1437 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1438 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1439 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1440 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1441 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1442 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1443 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1444 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1445 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1446 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1447 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1448 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1449 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1450 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1451 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1452 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1453 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1454 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1455 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1456 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1457 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1458 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1459 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1460 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1461 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1462 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1463 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1464 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1465 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1466 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1467 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1468 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1469 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1470 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1471 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1472 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1473 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1474 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1475 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1476 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1477 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1478 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1479 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1480 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1481 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1482 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1483 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1484 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1485 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1486 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1487 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1488 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1489 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1490 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1491 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1492 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1493 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1494 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1495 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1496 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1497 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1498 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1499 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1500 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1501 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1502 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1503 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1504 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1505 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1506 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1507 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1508 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1509 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1510 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1511 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1512 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1513 /* PTP error 2 ptp123456                                                                                                          */
    #define prmsrcptp123456             1514 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            1515 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           1516 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           1517 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           1518 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            1519 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmmkrgd24_3                1520 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1521 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1522 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1523 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1524 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1525 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1526 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1527 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1528 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1529 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1530 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1531 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1532 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1533 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1534 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1535 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1536 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1537 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1538 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1539 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1540 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1541 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvgvlog               1542 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1543 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1544 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1545 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1546 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1547 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1548 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1549 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1550 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1551 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1552 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1553 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1554 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1555 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1556 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1557 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1558 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1559 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1560 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1561 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1562 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1563 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1564 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1565 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1566 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1567 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1568 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1569 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1570 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1571 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1572 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1573 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1574 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1575 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1576 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1577 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1578 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1579 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1580 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1581 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp22                   1582 /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    #define prmaltg24                   1583 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp24                   1584 /* Minimale ruimte tbv alternatieve realisatie fase 24                                                                            */
    #define prmaltg26                   1585 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1586 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1587 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   1588 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   1589 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1590 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1591 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltp32                   1592 /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    #define prmaltg33                   1593 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp33                   1594 /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    #define prmaltg34                   1595 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp34                   1596 /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    #define prmaltg38                   1597 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   1598 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   1599 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1600 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1601 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1602 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1603 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1604 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1605 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1606 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1607 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1608 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1609 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1610 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1611 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp84                   1612 /* Minimale ruimte tbv alternatieve realisatie fase 84                                                                            */
    #define prmwg02                     1613 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                     1614 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                     1615 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                     1616 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                     1617 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                     1618 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                     1619 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                     1620 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                     1621 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                     1622 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                     1623 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                     1624 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                     1625 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                     1626 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                     1627 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                     1628 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                     1629 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                     1630 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                     1631 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                     1632 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                     1633 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                     1634 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                     1635 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                   1636 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              1637 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              1638 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmstarprogdef              1639 /* Default star programma                                                                                                         */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1640 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1641 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1642 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1643
#else
    #define PRMMAX1                     1640
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02karbus 0
    #define prioFC03karbus 1
    #define prioFC05karbus 2
    #define prioFC08karbus 3
    #define prioFC09karbus 4
    #define prioFC11karbus 5
    #define prioFC22fiets 6
    #define prioFC28fiets 7
    #define prioFC61karbus 8
    #define prioFC62karbus 9
    #define prioFC67karbus 10
    #define prioFC68karbus 11
    #define hdFC02 12
    #define hdFC03 13
    #define hdFC05 14
    #define hdFC08 15
    #define hdFC09 16
    #define hdFC11 17
    #define hdFC61 18
    #define hdFC62 19
    #define hdFC67 20
    #define hdFC68 21
    #define prioFCMAX 22

/* modulen */
/* ------- */
    #define MLMAX1 4 /* aantal modulen */

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

    #define tvgmaxprm02 0 /* fc02 heeft prmvg#_02 parameters */
    #define tvgmaxprm03 1 /* fc03 heeft prmvg#_03 parameters */
    #define tvgmaxprm05 2 /* fc05 heeft prmvg#_05 parameters */
    #define tvgmaxprm08 3 /* fc08 heeft prmvg#_08 parameters */
    #define tvgmaxprm09 4 /* fc09 heeft prmvg#_09 parameters */
    #define tvgmaxprm11 5 /* fc11 heeft prmvg#_11 parameters */
    #define tvgmaxprm21 6 /* fc21 heeft prmvg#_21 parameters */
    #define tvgmaxprm22 7 /* fc22 heeft prmvg#_22 parameters */
    #define tvgmaxprm24 8 /* fc24 heeft prmvg#_24 parameters */
    #define tvgmaxprm26 9 /* fc26 heeft prmvg#_26 parameters */
    #define tvgmaxprm28 10 /* fc28 heeft prmvg#_28 parameters */
    #define tvgmaxprm61 11 /* fc61 heeft prmvg#_61 parameters */
    #define tvgmaxprm62 12 /* fc62 heeft prmvg#_62 parameters */
    #define tvgmaxprm67 13 /* fc67 heeft prmvg#_67 parameters */
    #define tvgmaxprm68 14 /* fc68 heeft prmvg#_68 parameters */
    #define tvgmaxprm81 15 /* fc81 heeft prmvg#_81 parameters */
    #define tvgmaxprm82 16 /* fc82 heeft prmvg#_82 parameters */
    #define tvgmaxprm84 17 /* fc84 heeft prmvg#_84 parameters */
    #define aanttvgmaxprm 18 /* aantal fc met max. verlenggroenparameters (prmvg#_$$, ..)  */

/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

