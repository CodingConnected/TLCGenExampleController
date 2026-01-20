/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.18
   CCOLGEN:   12.4.0.18
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
    #define usML5               (FCMAX +  11) /* Verklikken actief zijn ML5                                                  */
    #define usincontrol         (FCMAX +  12) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt                     */
    #define usnocontrol         (FCMAX +  13) /* Verklikken of applicatie niet in staat is te regelen                        */
    #define usFile68af          (FCMAX +  14) /* File ingreep File68af actief                                                */
    #define usovtevroeg02karbus (FCMAX +  15) /* Voorste OV voertuig bij 02 te vroeg Bus                                     */
    #define usovoptijd02karbus  (FCMAX +  16) /* Voorste OV voertuig bij 02 op tijd Bus                                      */
    #define usovtelaat02karbus  (FCMAX +  17) /* Voorste OV voertuig bij 02 te laat Bus                                      */
    #define usovtevroeg03karbus (FCMAX +  18) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03karbus  (FCMAX +  19) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03karbus  (FCMAX +  20) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05karbus (FCMAX +  21) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05karbus  (FCMAX +  22) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05karbus  (FCMAX +  23) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08karbus (FCMAX +  24) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08karbus  (FCMAX +  25) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08karbus  (FCMAX +  26) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09karbus (FCMAX +  27) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09karbus  (FCMAX +  28) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09karbus  (FCMAX +  29) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11karbus (FCMAX +  30) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11karbus  (FCMAX +  31) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11karbus  (FCMAX +  32) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61karbus (FCMAX +  33) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61karbus  (FCMAX +  34) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61karbus  (FCMAX +  35) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62karbus (FCMAX +  36) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62karbus  (FCMAX +  37) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62karbus  (FCMAX +  38) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67karbus (FCMAX +  39) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67karbus  (FCMAX +  40) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67karbus  (FCMAX +  41) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68karbus (FCMAX +  42) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68karbus  (FCMAX +  43) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68karbus  (FCMAX +  44) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt             (FCMAX +  45) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding        (FCMAX +  46) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog             (FCMAX +  47) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02karbus     (FCMAX +  48) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03karbus     (FCMAX +  49) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05karbus     (FCMAX +  50) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08karbus     (FCMAX +  51) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09karbus     (FCMAX +  52) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11karbus     (FCMAX +  53) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets      (FCMAX +  54) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets      (FCMAX +  55) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61karbus     (FCMAX +  56) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62karbus     (FCMAX +  57) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67karbus     (FCMAX +  58) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68karbus     (FCMAX +  59) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02           (FCMAX +  60) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03           (FCMAX +  61) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05           (FCMAX +  62) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08           (FCMAX +  63) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09           (FCMAX +  64) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11           (FCMAX +  65) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61           (FCMAX +  66) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62           (FCMAX +  67) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67           (FCMAX +  68) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68           (FCMAX +  69) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02        (FCMAX +  70) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1              (FCMAX +  71) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1    (FCMAX +  72) /* Periode actief                                                              */
    #define usperoFietsprio2    (FCMAX +  73) /* Periode actief                                                              */
    #define usper2              (FCMAX +  74) /* Periode Dag periode actief                                                  */
    #define usper3              (FCMAX +  75) /* Periode Ochtendspits actief                                                 */
    #define usper4              (FCMAX +  76) /* Periode Avondspits actief                                                   */
    #define usper5              (FCMAX +  77) /* Periode Koopavond actief                                                    */
    #define usper6              (FCMAX +  78) /* Periode Weekend actief                                                      */
    #define usper7              (FCMAX +  79) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke  (FCMAX +  80) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err  (FCMAX +  81) /* Verklikken PTP error ptp123456                                              */
    #define usrgv               (FCMAX +  82) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv24             (FCMAX +  83) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtk21             (FCMAX +  84) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22             (FCMAX +  85) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24             (FCMAX +  86) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26             (FCMAX +  87) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28             (FCMAX +  88) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a            (FCMAX +  89) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b            (FCMAX +  90) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a            (FCMAX +  91) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b            (FCMAX +  92) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a            (FCMAX +  93) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b            (FCMAX +  94) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a            (FCMAX +  95) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b            (FCMAX +  96) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a            (FCMAX +  97) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b            (FCMAX +  98) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81             (FCMAX +  99) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82             (FCMAX + 100) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84             (FCMAX + 101) /* Aansturing waitsignaal detector k84                                         */
    #define usisgtijd02         (FCMAX + 102) /* Verklikken PRIO 02 tbv interfunc                                            */
    #define usisgtijd03         (FCMAX + 103) /* Verklikken PRIO 03 tbv interfunc                                            */
    #define usisgtijd05         (FCMAX + 104) /* Verklikken PRIO 05 tbv interfunc                                            */
    #define usisgtijd08         (FCMAX + 105) /* Verklikken PRIO 08 tbv interfunc                                            */
    #define usisgtijd09         (FCMAX + 106) /* Verklikken PRIO 09 tbv interfunc                                            */
    #define usisgtijd11         (FCMAX + 107) /* Verklikken PRIO 11 tbv interfunc                                            */
    #define usisgtijd21         (FCMAX + 108) /* Verklikken PRIO 21 tbv interfunc                                            */
    #define usisgtijd22         (FCMAX + 109) /* Verklikken PRIO 22 tbv interfunc                                            */
    #define usisgtijd24         (FCMAX + 110) /* Verklikken PRIO 24 tbv interfunc                                            */
    #define usisgtijd26         (FCMAX + 111) /* Verklikken PRIO 26 tbv interfunc                                            */
    #define usisgtijd28         (FCMAX + 112) /* Verklikken PRIO 28 tbv interfunc                                            */
    #define usisgtijd31         (FCMAX + 113) /* Verklikken PRIO 31 tbv interfunc                                            */
    #define usisgtijd32         (FCMAX + 114) /* Verklikken PRIO 32 tbv interfunc                                            */
    #define usisgtijd33         (FCMAX + 115) /* Verklikken PRIO 33 tbv interfunc                                            */
    #define usisgtijd34         (FCMAX + 116) /* Verklikken PRIO 34 tbv interfunc                                            */
    #define usisgtijd38         (FCMAX + 117) /* Verklikken PRIO 38 tbv interfunc                                            */
    #define usisgtijd61         (FCMAX + 118) /* Verklikken PRIO 61 tbv interfunc                                            */
    #define usisgtijd62         (FCMAX + 119) /* Verklikken PRIO 62 tbv interfunc                                            */
    #define usisgtijd67         (FCMAX + 120) /* Verklikken PRIO 67 tbv interfunc                                            */
    #define usisgtijd68         (FCMAX + 121) /* Verklikken PRIO 68 tbv interfunc                                            */
    #define usisgtijd81         (FCMAX + 122) /* Verklikken PRIO 81 tbv interfunc                                            */
    #define usisgtijd82         (FCMAX + 123) /* Verklikken PRIO 82 tbv interfunc                                            */
    #define usisgtijd84         (FCMAX + 124) /* Verklikken PRIO 84 tbv interfunc                                            */
    #define USMAX1              (FCMAX + 125)

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
    #define hnleg0262             35 /* Hulpelement naloop EG van 02 naar 62                               */
    #define hnla02_1a             36 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b             37 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnleg0868             38 /* Hulpelement naloop EG van 08 naar 68                               */
    #define hnla08_1a             39 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b             40 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnleg1168             41 /* Hulpelement naloop EG van 11 naar 68                               */
    #define hnla11_1              42 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnleg2221             43 /* Hulpelement naloop EG van 22 naar 21                               */
    #define hnla22_1              44 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlsg3132             45 /* Hulpelement naloop SG van 31 naar 32                               */
    #define hnlak31a              46 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlsg3231             47 /* Hulpelement naloop SG van 32 naar 31                               */
    #define hnlak32a              48 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlsg3334             49 /* Hulpelement naloop SG van 33 naar 34                               */
    #define hnlak33a              50 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlsg3433             51 /* Hulpelement naloop SG van 34 naar 33                               */
    #define hnlak34a              52 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnleg8281             53 /* Hulpelement naloop EG van 82 naar 81                               */
    #define hnla82_1              54 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02karbus          55 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03karbus          56 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05karbus          57 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08karbus          58 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09karbus          59 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11karbus          60 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61karbus          61 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62karbus          62 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67karbus          63 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68karbus          64 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02karbus         65 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02karbus       66 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbus      67 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02karbuskar    68 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbuskar   69 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03karbus         70 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03karbus       71 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbus      72 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03karbuskar    73 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbuskar   74 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05karbus         75 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05karbus       76 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbus      77 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05karbuskar    78 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbuskar   79 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08karbus         80 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08karbus       81 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbus      82 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08karbuskar    83 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbuskar   84 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09karbus         85 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09karbus       86 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbus      87 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09karbuskar    88 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbuskar   89 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11karbus         90 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11karbus       91 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbus      92 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11karbuskar    93 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbuskar   94 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio22fiets          95 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets        96 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets       97 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets   98 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets  99 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets         100 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets       101 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets      102 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets  103 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets 104 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61karbus        105 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61karbus      106 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbus     107 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61karbuskar   108 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbuskar  109 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62karbus        110 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62karbus      111 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbus     112 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62karbuskar   113 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbuskar  114 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67karbus        115 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67karbus      116 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbus     117 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67karbuskar   118 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbuskar  119 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68karbus        120 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68karbus      121 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbus     122 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68karbuskar   123 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbuskar  124 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02                125 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              126 /* HD inmelding 02                                                    */
    #define hhduit02             127 /* HD uitmelding 02                                                   */
    #define hhdin02kar           128 /* HD inmelding 02                                                    */
    #define hhduit02kar          129 /* HD uitmelding 02                                                   */
    #define hhd03                130 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              131 /* HD inmelding 03                                                    */
    #define hhduit03             132 /* HD uitmelding 03                                                   */
    #define hhdin03kar           133 /* HD inmelding 03                                                    */
    #define hhduit03kar          134 /* HD uitmelding 03                                                   */
    #define hhd05                135 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              136 /* HD inmelding 05                                                    */
    #define hhduit05             137 /* HD uitmelding 05                                                   */
    #define hhdin05kar           138 /* HD inmelding 05                                                    */
    #define hhduit05kar          139 /* HD uitmelding 05                                                   */
    #define hhd08                140 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              141 /* HD inmelding 08                                                    */
    #define hhduit08             142 /* HD uitmelding 08                                                   */
    #define hhdin08kar           143 /* HD inmelding 08                                                    */
    #define hhduit08kar          144 /* HD uitmelding 08                                                   */
    #define hhd09                145 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              146 /* HD inmelding 09                                                    */
    #define hhduit09             147 /* HD uitmelding 09                                                   */
    #define hhdin09kar           148 /* HD inmelding 09                                                    */
    #define hhduit09kar          149 /* HD uitmelding 09                                                   */
    #define hhd11                150 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              151 /* HD inmelding 11                                                    */
    #define hhduit11             152 /* HD uitmelding 11                                                   */
    #define hhdin11kar           153 /* HD inmelding 11                                                    */
    #define hhduit11kar          154 /* HD uitmelding 11                                                   */
    #define hhd61                155 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              156 /* HD inmelding 61                                                    */
    #define hhduit61             157 /* HD uitmelding 61                                                   */
    #define hhdin61kar           158 /* HD inmelding 61                                                    */
    #define hhduit61kar          159 /* HD uitmelding 61                                                   */
    #define hhd62                160 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              161 /* HD inmelding 62                                                    */
    #define hhduit62             162 /* HD uitmelding 62                                                   */
    #define hhdin62kar           163 /* HD inmelding 62                                                    */
    #define hhduit62kar          164 /* HD uitmelding 62                                                   */
    #define hhd67                165 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              166 /* HD inmelding 67                                                    */
    #define hhduit67             167 /* HD uitmelding 67                                                   */
    #define hhdin67kar           168 /* HD inmelding 67                                                    */
    #define hhduit67kar          169 /* HD uitmelding 67                                                   */
    #define hhd68                170 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              171 /* HD inmelding 68                                                    */
    #define hhduit68             172 /* HD uitmelding 68                                                   */
    #define hhdin68kar           173 /* HD inmelding 68                                                    */
    #define hhduit68kar          174 /* HD uitmelding 68                                                   */
    #define hpelinKOP02          175 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02      176 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit  177 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit  178 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1    179 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2    180 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01      181 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02      182 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03      183 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04      184 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05      185 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06      186 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07      187 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08      188 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09      189 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10      190 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11      191 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12      192 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13      193 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14      194 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15      195 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16      196 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01      197 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02      198 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03      199 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04      200 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05      201 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06      202 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07      203 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08      204 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09      205 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10      206 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11      207 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12      208 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13      209 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14      210 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15      211 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16      212 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke    213 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err    214 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0   215 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1   216 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2   217 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2      218 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              219 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            220 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            221 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            222 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            223 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11            224 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            225 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            226 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepdk31a  227 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31a */
    #define hschoolingreepdk31b  228 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31b */
    #define hschoolingreepdk32a  229 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32a */
    #define hschoolingreepdk32b  230 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32b */
    #define hschoolingreepdk33a  231 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b  232 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a  233 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b  234 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr31            235 /* Onthouden actief zijn senioreningreep bij fase 31                  */
    #define hsiexgr32            236 /* Onthouden actief zijn senioreningreep bij fase 32                  */
    #define hsiexgr33            237 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34            238 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hwtv24               239 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hlos31               240 /* Toestaan los realiseren fase 31 (naloop naar)                      */
    #define hlos32               241 /* Toestaan los realiseren fase 32 (naloop naar)                      */
    #define hlos33               242 /* Toestaan los realiseren fase 33 (naloop naar)                      */
    #define hlos34               243 /* Toestaan los realiseren fase 34 (naloop naar)                      */
    #define HEMAX1               244

/* geheugen elementen */
/* ------------------ */
    #define mperiod       0 /* Onthouden actieve periode                                                   */
    #define mlcycl        1 /* Onthouden laatste cyclustijd                                                */
    #define mmk03         2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    #define mmk05         3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    #define mmk08         4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    #define mmk09         5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    #define mmk11         6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    #define mmk61         7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    #define mmk62         8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    #define mmk67         9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    #define mmk68        10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    #define mfilemem08   11 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    #define mfilemem11   12 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    #define mstp02karbus 13 /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    #define mstp03karbus 14 /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    #define mstp05karbus 15 /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    #define mstp08karbus 16 /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    #define mstp09karbus 17 /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    #define mstp11karbus 18 /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    #define mstp61karbus 19 /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    #define mstp62karbus 20 /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    #define mstp67karbus 21 /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    #define mstp68karbus 22 /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    #define mpelvtgKOP02 23 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02     */
    #define mpelinKOP02  24 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02       */
    #define mwtv24       25 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    #define mwtvm24      26 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    #define mwijzpb      27 /* Wijziging aan PB doorgeven                                                  */
    #define mfci         28 /* Index fc met gewijzigde TVG_max[]                                           */
    #define mar02        29 /* Alternatieve ruimte fase 02                                                 */
    #define mar03        30 /* Alternatieve ruimte fase 03                                                 */
    #define mar05        31 /* Alternatieve ruimte fase 05                                                 */
    #define mar08        32 /* Alternatieve ruimte fase 08                                                 */
    #define mar09        33 /* Alternatieve ruimte fase 09                                                 */
    #define mar11        34 /* Alternatieve ruimte fase 11                                                 */
    #define mar21        35 /* Alternatieve ruimte fase 21                                                 */
    #define mar22        36 /* Alternatieve ruimte fase 22                                                 */
    #define mar24        37 /* Alternatieve ruimte fase 24                                                 */
    #define mar26        38 /* Alternatieve ruimte fase 26                                                 */
    #define mar28        39 /* Alternatieve ruimte fase 28                                                 */
    #define mar31        40 /* Alternatieve ruimte fase 31                                                 */
    #define mar32        41 /* Alternatieve ruimte fase 32                                                 */
    #define mar33        42 /* Alternatieve ruimte fase 33                                                 */
    #define mar34        43 /* Alternatieve ruimte fase 34                                                 */
    #define mar38        44 /* Alternatieve ruimte fase 38                                                 */
    #define mar61        45 /* Alternatieve ruimte fase 61                                                 */
    #define mar62        46 /* Alternatieve ruimte fase 62                                                 */
    #define mar67        47 /* Alternatieve ruimte fase 67                                                 */
    #define mar68        48 /* Alternatieve ruimte fase 68                                                 */
    #define mar81        49 /* Alternatieve ruimte fase 81                                                 */
    #define mar82        50 /* Alternatieve ruimte fase 82                                                 */
    #define mar84        51 /* Alternatieve ruimte fase 84                                                 */
    #define MEMAX1       52

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
    #define tvgnaloop0262              153 /* Timer naloop EG van 02 naar 62                                                           */
    #define tnlfg0868                  154 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 155 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  156 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 157 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tvgnaloop0868              158 /* Timer naloop EG van 08 naar 68                                                           */
    #define tnlfg1168                  159 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 160 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  161 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 162 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tvgnaloop1168              163 /* Timer naloop EG van 11 naar 68                                                           */
    #define tnlfg2221                  164 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 165 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  166 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 167 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tvgnaloop2221              168 /* Timer naloop EG van 22 naar 21                                                           */
    #define tnlsgd3132                 169 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 170 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 171 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 172 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  173 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 174 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  175 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 176 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tvgnaloop8281              177 /* Timer naloop EG van 82 naar 81                                                           */
    #define tkarmelding                178 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     179 /* Ondergedrag KAR                                                                          */
    #define tprioin02karbuskar         180 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbuskar        181 /* Anti jutter tijd uitmelden 02                                                            */
    #define tprioin02karbus            182 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbus           183 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02karbus             184 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02karbus                185 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02karbus                186 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02karbus               187 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin03karbuskar         188 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbuskar        189 /* Anti jutter tijd uitmelden 03                                                            */
    #define tprioin03karbus            190 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbus           191 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03karbus             192 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03karbus                193 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03karbus                194 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03karbus               195 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin05karbuskar         196 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbuskar        197 /* Anti jutter tijd uitmelden 05                                                            */
    #define tprioin05karbus            198 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbus           199 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05karbus             200 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05karbus                201 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05karbus                202 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05karbus               203 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin08karbuskar         204 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbuskar        205 /* Anti jutter tijd uitmelden 08                                                            */
    #define tprioin08karbus            206 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbus           207 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08karbus             208 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08karbus                209 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08karbus                210 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08karbus               211 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin09karbuskar         212 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbuskar        213 /* Anti jutter tijd uitmelden 09                                                            */
    #define tprioin09karbus            214 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbus           215 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09karbus             216 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09karbus                217 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09karbus                218 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09karbus               219 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin11karbuskar         220 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbuskar        221 /* Anti jutter tijd uitmelden 11                                                            */
    #define tprioin11karbus            222 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbus           223 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11karbus             224 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11karbus                225 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11karbus                226 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11karbus               227 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg22fiets              228 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 229 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 230 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                231 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tbtovg28fiets              232 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 233 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 234 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                235 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tprioin61karbuskar         236 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbuskar        237 /* Anti jutter tijd uitmelden 61                                                            */
    #define tprioin61karbus            238 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbus           239 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61karbus             240 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61karbus                241 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61karbus                242 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61karbus               243 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin62karbuskar         244 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbuskar        245 /* Anti jutter tijd uitmelden 62                                                            */
    #define tprioin62karbus            246 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbus           247 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62karbus             248 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62karbus                249 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62karbus                250 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62karbus               251 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin67karbuskar         252 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbuskar        253 /* Anti jutter tijd uitmelden 67                                                            */
    #define tprioin67karbus            254 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbus           255 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67karbus             256 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67karbus                257 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67karbus                258 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67karbus               259 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68karbuskar         260 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbuskar        261 /* Anti jutter tijd uitmelden 68                                                            */
    #define tprioin68karbus            262 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbus           263 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68karbus             264 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68karbus                265 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68karbus                266 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68karbus               267 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    268 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    269 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 270 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 271 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                272 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    273 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    274 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 275 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 276 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                277 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    278 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    279 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 280 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 281 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                282 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    283 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    284 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 285 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 286 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                287 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    288 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    289 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 290 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 291 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                292 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    293 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    294 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 295 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 296 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                297 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    298 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    299 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 300 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 301 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                302 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    303 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    304 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 305 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 306 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                307 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    308 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    309 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 310 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 311 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                312 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    313 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    314 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 315 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 316 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                317 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tpelmeetKOP02              318 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          319 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                320 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             321 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           322 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 323 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  324 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 325 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            326 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            327 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   328 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   329 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   330 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   331 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   332 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   333 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    334 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    335 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    336 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    337 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   338 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   339 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   340 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   341 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   342 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   343 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    344 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    345 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    346 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    347 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    348 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    349 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    350 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tschoolingreepmaxg31       351 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 31                        */
    #define tdbsidk31a                 352 /* Bezettijd detector k31a t.b.v. schoolingreep                                             */
    #define tdbsidk31b                 353 /* Bezettijd detector k31b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg32       354 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 32                        */
    #define tdbsidk32a                 355 /* Bezettijd detector k32a t.b.v. schoolingreep                                             */
    #define tdbsidk32b                 356 /* Bezettijd detector k32b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg33       357 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 358 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 359 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       360 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 361 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 362 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr31                  363 /* Meten duur extra groen bij senioreningreep op fase 31                                    */
    #define tdbsiexgrdk31a             364 /* Bezettijd detector k31a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk31b             365 /* Bezettijd detector k31b t.b.v. Senioreningreep                                           */
    #define tsiexgr32                  366 /* Meten duur extra groen bij senioreningreep op fase 32                                    */
    #define tdbsiexgrdk32a             367 /* Bezettijd detector k32a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk32b             368 /* Bezettijd detector k32b t.b.v. Senioreningreep                                           */
    #define tsiexgr33                  369 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             370 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             371 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  372 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             373 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             374 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   375 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             376 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             377 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             378 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               379 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               380 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               381 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               382 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               383 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               384 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               385 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               386 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               387 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               388 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               389 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               390 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               391 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               392 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               393 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               394 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               395 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               396 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               397 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               398 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               399 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               400 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               401 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   402 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               403 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              404 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               405 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              406 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   407 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               408 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              409 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               410 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              411 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   412 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                413 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               414 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv24                     415 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define tvs2205                    416 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tfo0522                    417 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 05                              */
    #define tvs2232                    418 /* Voorstarttijd fase 22 op fase 32                                                         */
    #define tfo3222                    419 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 32                              */
    #define tvs2434                    420 /* Voorstarttijd fase 24 op fase 34                                                         */
    #define tfo3424                    421 /* Fictieve ontruimingstijd/intergroentijd van 24 naar fase 34                              */
    #define tvs2838                    422 /* Voorstarttijd fase 28 op fase 38                                                         */
    #define tfo3828                    423 /* Fictieve ontruimingstijd/intergroentijd van 28 naar fase 38                              */
    #define tvs3205                    424 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tfo0532                    425 /* Fictieve ontruimingstijd/intergroentijd van 32 naar fase 05                              */
    #define tvs8433                    426 /* Voorstarttijd fase 84 op fase 33                                                         */
    #define tfo3384                    427 /* Fictieve ontruimingstijd/intergroentijd van 84 naar fase 33                              */
    #define tlr2611                    428 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tfo2611                    429 /* Fictieve ontruimingstijd/intergroentijd van 26 naar fase 11                              */
    #define txnl0262                   430 /* Tegenhouden fase 02 tbv naloop naar fase 62                                              */
    #define txnl0868                   431 /* Tegenhouden fase 08 tbv naloop naar fase 68                                              */
    #define txnl1168                   432 /* Tegenhouden fase 11 tbv naloop naar fase 68                                              */
    #define txnl2221                   433 /* Tegenhouden fase 22 tbv naloop naar fase 21                                              */
    #define txnl3132                   434 /* Tegenhouden fase 31 tbv naloop naar fase 32                                              */
    #define txnl3231                   435 /* Tegenhouden fase 32 tbv naloop naar fase 31                                              */
    #define txnl3334                   436 /* Tegenhouden fase 33 tbv naloop naar fase 34                                              */
    #define txnl3433                   437 /* Tegenhouden fase 34 tbv naloop naar fase 33                                              */
    #define txnl8281                   438 /* Tegenhouden fase 82 tbv naloop naar fase 81                                              */
    #define TMMAX1                     439

/* teller elementen */
/* ---------------- */
    #define cvc02karbus          0 /* Bijhouden prio inmeldingen fase 02 type Bus         */
    #define cvc03karbus          1 /* Bijhouden prio inmeldingen fase 03 type Bus         */
    #define cvc05karbus          2 /* Bijhouden prio inmeldingen fase 05 type Bus         */
    #define cvc08karbus          3 /* Bijhouden prio inmeldingen fase 08 type Bus         */
    #define cvc09karbus          4 /* Bijhouden prio inmeldingen fase 09 type Bus         */
    #define cvc11karbus          5 /* Bijhouden prio inmeldingen fase 11 type Bus         */
    #define cftscyc22fietsfiets  6 /* Bijhouden realisaties tbv peloton prio voor fase 22 */
    #define cvc22fiets           7 /* Bijhouden prio inmeldingen fase 22 type Fiets       */
    #define cftscyc28fietsfiets  8 /* Bijhouden realisaties tbv peloton prio voor fase 28 */
    #define cvc28fiets           9 /* Bijhouden prio inmeldingen fase 28 type Fiets       */
    #define cvc61karbus         10 /* Bijhouden prio inmeldingen fase 61 type Bus         */
    #define cvc62karbus         11 /* Bijhouden prio inmeldingen fase 62 type Bus         */
    #define cvc67karbus         12 /* Bijhouden prio inmeldingen fase 67 type Bus         */
    #define cvc68karbus         13 /* Bijhouden prio inmeldingen fase 68 type Bus         */
    #define cvchd02             14 /* Bijhouden prio inmeldingen fase 02                  */
    #define cvchd03             15 /* Bijhouden prio inmeldingen fase 03                  */
    #define cvchd05             16 /* Bijhouden prio inmeldingen fase 05                  */
    #define cvchd08             17 /* Bijhouden prio inmeldingen fase 08                  */
    #define cvchd09             18 /* Bijhouden prio inmeldingen fase 09                  */
    #define cvchd11             19 /* Bijhouden prio inmeldingen fase 11                  */
    #define cvchd61             20 /* Bijhouden prio inmeldingen fase 61                  */
    #define cvchd62             21 /* Bijhouden prio inmeldingen fase 62                  */
    #define cvchd67             22 /* Bijhouden prio inmeldingen fase 67                  */
    #define cvchd68             23 /* Bijhouden prio inmeldingen fase 68                  */
    #define CTMAX1              24

/* schakelaars */
/* ----------- */
    #define schdynhiaat08              0 /* Toepassen dynamisch hiaat bij fase 08                                */
    #define schopdrempelen08           1 /* Opdrempelen toepassen voor fase 08                                   */
    #define schedkop_08                2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus       */
    #define schdynhiaat09              3 /* Toepassen dynamisch hiaat bij fase 09                                */
    #define schopdrempelen09           4 /* Opdrempelen toepassen voor fase 09                                   */
    #define schedkop_09                5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus       */
    #define schdynhiaat11              6 /* Toepassen dynamisch hiaat bij fase 11                                */
    #define schopdrempelen11           7 /* Opdrempelen toepassen voor fase 11                                   */
    #define schedkop_11                8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus       */
    #define schtypeuswt                9 /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag    */
    #define schcycl                   10 /* Bijhouden actuele cyclustijd aan of uit                              */
    #define schcycl_reset             11 /* Reset meting cyclustijd                                              */
    #define schdvakd02_1a             12 /* Aanvraag fase 02 bij storing op detector 02_1a                       */
    #define schdvakd02_1b             13 /* Aanvraag fase 02 bij storing op detector 02_1b                       */
    #define schdvakd03_1              14 /* Aanvraag fase 03 bij storing op detector 03_1                        */
    #define schdvakdk31a              15 /* Aanvraag fase 31 bij storing op detector k31a                        */
    #define schdvakdk31b              16 /* Aanvraag fase 31 bij storing op detector k31b                        */
    #define schfileFile68af           17 /* File ingreep File68af toepassen                                      */
    #define schfiledoserenFile68af    18 /* Toepassen doseerpercentages voor fileingreep File68af                */
    #define schfileFile68afparstrook  19 /* Parallele file meldingen per strook file ingreep File68af            */
    #define schbmfix                  20 /* Bijkomen tijdens fixatie mogelijk                                    */
    #define schma0261                 21 /* Meeaanvraag van 02 naar 61 actief                                    */
    #define schma0262                 22 /* Meeaanvraag van 02 naar 62 actief                                    */
    #define schma0521                 23 /* Meeaanvraag van 05 naar 21 actief                                    */
    #define schma0522                 24 /* Meeaanvraag van 05 naar 22 actief                                    */
    #define schma0532                 25 /* Meeaanvraag van 05 naar 32 actief                                    */
    #define schma0868                 26 /* Meeaanvraag van 08 naar 68 actief                                    */
    #define schma1126                 27 /* Meeaanvraag van 11 naar 26 actief                                    */
    #define schma1168                 28 /* Meeaanvraag van 11 naar 68 actief                                    */
    #define schma2221                 29 /* Meeaanvraag van 22 naar 21 actief                                    */
    #define schma2611                 30 /* Meeaanvraag van 26 naar 11 actief                                    */
    #define schma3122                 31 /* Meeaanvraag van 31 naar 22 actief                                    */
    #define schma3132                 32 /* Meeaanvraag van 31 naar 32 actief                                    */
    #define schma3222                 33 /* Meeaanvraag van 32 naar 22 actief                                    */
    #define schma3231                 34 /* Meeaanvraag van 32 naar 31 actief                                    */
    #define schma3324                 35 /* Meeaanvraag van 33 naar 24 actief                                    */
    #define schma3334                 36 /* Meeaanvraag van 33 naar 34 actief                                    */
    #define schma3384                 37 /* Meeaanvraag van 33 naar 84 actief                                    */
    #define schma3424                 38 /* Meeaanvraag van 34 naar 24 actief                                    */
    #define schma3433                 39 /* Meeaanvraag van 34 naar 33 actief                                    */
    #define schma3484                 40 /* Meeaanvraag van 34 naar 84 actief                                    */
    #define schma3828                 41 /* Meeaanvraag van 38 naar 28 actief                                    */
    #define schma8281                 42 /* Meeaanvraag van 82 naar 81 actief                                    */
    #define schmv02                   43 /* Meeverlengen fase 02                                                 */
    #define schmv03                   44 /* Meeverlengen fase 03                                                 */
    #define schmv05                   45 /* Meeverlengen fase 05                                                 */
    #define schmv08                   46 /* Meeverlengen fase 08                                                 */
    #define schmv09                   47 /* Meeverlengen fase 09                                                 */
    #define schmv11                   48 /* Meeverlengen fase 11                                                 */
    #define schmv21                   49 /* Meeverlengen fase 21                                                 */
    #define schmv22                   50 /* Meeverlengen fase 22                                                 */
    #define schhardmv2205             51 /* Hard meeverlengen fase 22 met fase 05                                */
    #define schmv24                   52 /* Meeverlengen fase 24                                                 */
    #define schmv26                   53 /* Meeverlengen fase 26                                                 */
    #define schhardmv2611             54 /* Hard meeverlengen fase 26 met fase 11                                */
    #define schmv28                   55 /* Meeverlengen fase 28                                                 */
    #define schmv31                   56 /* Meeverlengen fase 31                                                 */
    #define schmv32                   57 /* Meeverlengen fase 32                                                 */
    #define schhardmv3205             58 /* Hard meeverlengen fase 32 met fase 05                                */
    #define schmv33                   59 /* Meeverlengen fase 33                                                 */
    #define schmv34                   60 /* Meeverlengen fase 34                                                 */
    #define schmv38                   61 /* Meeverlengen fase 38                                                 */
    #define schmv61                   62 /* Meeverlengen fase 61                                                 */
    #define schmv62                   63 /* Meeverlengen fase 62                                                 */
    #define schmv67                   64 /* Meeverlengen fase 67                                                 */
    #define schmv68                   65 /* Meeverlengen fase 68                                                 */
    #define schmv81                   66 /* Meeverlengen fase 81                                                 */
    #define schmv82                   67 /* Meeverlengen fase 82                                                 */
    #define schmv84                   68 /* Meeverlengen fase 84                                                 */
    #define schmlprm                  69 /* Toepassen parametriseerbare modulestructuur                          */
    #define schovstipt02karbus        70 /* Geconditioneerde prioteit voor OV bij 02 Bus                         */
    #define schovstipt03karbus        71 /* Geconditioneerde prioteit voor OV bij 03 Bus                         */
    #define schovstipt05karbus        72 /* Geconditioneerde prioteit voor OV bij 05 Bus                         */
    #define schovstipt08karbus        73 /* Geconditioneerde prioteit voor OV bij 08 Bus                         */
    #define schovstipt09karbus        74 /* Geconditioneerde prioteit voor OV bij 09 Bus                         */
    #define schovstipt11karbus        75 /* Geconditioneerde prioteit voor OV bij 11 Bus                         */
    #define schovstipt61karbus        76 /* Geconditioneerde prioteit voor OV bij 61 Bus                         */
    #define schovstipt62karbus        77 /* Geconditioneerde prioteit voor OV bij 62 Bus                         */
    #define schovstipt67karbus        78 /* Geconditioneerde prioteit voor OV bij 67 Bus                         */
    #define schovstipt68karbus        79 /* Geconditioneerde prioteit voor OV bij 68 Bus                         */
    #define schcovuber                80 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                       */
    #define schcheckdstype            81 /* Check type DSI bericht bij VECOM                                     */
    #define schprioin02karbuskar      82 /* Inmelden 02 via Bus toestaan                                         */
    #define schpriouit02karbuskar     83 /* Uitmelden 02 via Bus toestaan                                        */
    #define schprioin03karbuskar      84 /* Inmelden 03 via Bus toestaan                                         */
    #define schpriouit03karbuskar     85 /* Uitmelden 03 via Bus toestaan                                        */
    #define schprioin05karbuskar      86 /* Inmelden 05 via Bus toestaan                                         */
    #define schpriouit05karbuskar     87 /* Uitmelden 05 via Bus toestaan                                        */
    #define schprioin08karbuskar      88 /* Inmelden 08 via Bus toestaan                                         */
    #define schpriouit08karbuskar     89 /* Uitmelden 08 via Bus toestaan                                        */
    #define schprioin09karbuskar      90 /* Inmelden 09 via Bus toestaan                                         */
    #define schpriouit09karbuskar     91 /* Uitmelden 09 via Bus toestaan                                        */
    #define schprioin11karbuskar      92 /* Inmelden 11 via Bus toestaan                                         */
    #define schpriouit11karbuskar     93 /* Uitmelden 11 via Bus toestaan                                        */
    #define schprioin22fietsfiets     94 /* Inmelden 22 via Fiets toestaan                                       */
    #define schpriouit22fietsfiets    95 /* Uitmelden 22 via Fiets toestaan                                      */
    #define schprioin28fietsfiets     96 /* Inmelden 28 via Fiets toestaan                                       */
    #define schpriouit28fietsfiets    97 /* Uitmelden 28 via Fiets toestaan                                      */
    #define schprioin61karbuskar      98 /* Inmelden 61 via Bus toestaan                                         */
    #define schpriouit61karbuskar     99 /* Uitmelden 61 via Bus toestaan                                        */
    #define schprioin62karbuskar     100 /* Inmelden 62 via Bus toestaan                                         */
    #define schpriouit62karbuskar    101 /* Uitmelden 62 via Bus toestaan                                        */
    #define schprioin67karbuskar     102 /* Inmelden 67 via Bus toestaan                                         */
    #define schpriouit67karbuskar    103 /* Uitmelden 67 via Bus toestaan                                        */
    #define schprioin68karbuskar     104 /* Inmelden 68 via Bus toestaan                                         */
    #define schpriouit68karbuskar    105 /* Uitmelden 68 via Bus toestaan                                        */
    #define schhdin02kar             106 /* Inmelden 02 via KAR HD toestaan                                      */
    #define schhduit02kar            107 /* Uitmelden 02 via KAR HD toestaan                                     */
    #define schchecksirene02         108 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR               */
    #define schhdin03kar             109 /* Inmelden 03 via KAR HD toestaan                                      */
    #define schhduit03kar            110 /* Uitmelden 03 via KAR HD toestaan                                     */
    #define schchecksirene03         111 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR               */
    #define schhdin05kar             112 /* Inmelden 05 via KAR HD toestaan                                      */
    #define schhduit05kar            113 /* Uitmelden 05 via KAR HD toestaan                                     */
    #define schchecksirene05         114 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR               */
    #define schhdin08kar             115 /* Inmelden 08 via KAR HD toestaan                                      */
    #define schhduit08kar            116 /* Uitmelden 08 via KAR HD toestaan                                     */
    #define schchecksirene08         117 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR               */
    #define schhdin09kar             118 /* Inmelden 09 via KAR HD toestaan                                      */
    #define schhduit09kar            119 /* Uitmelden 09 via KAR HD toestaan                                     */
    #define schchecksirene09         120 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR               */
    #define schhdin11kar             121 /* Inmelden 11 via KAR HD toestaan                                      */
    #define schhduit11kar            122 /* Uitmelden 11 via KAR HD toestaan                                     */
    #define schchecksirene11         123 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR               */
    #define schhdin61kar             124 /* Inmelden 61 via KAR HD toestaan                                      */
    #define schhduit61kar            125 /* Uitmelden 61 via KAR HD toestaan                                     */
    #define schchecksirene61         126 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR               */
    #define schhdin62kar             127 /* Inmelden 62 via KAR HD toestaan                                      */
    #define schhduit62kar            128 /* Uitmelden 62 via KAR HD toestaan                                     */
    #define schchecksirene62         129 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR               */
    #define schhdin67kar             130 /* Inmelden 67 via KAR HD toestaan                                      */
    #define schhduit67kar            131 /* Uitmelden 67 via KAR HD toestaan                                     */
    #define schchecksirene67         132 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR               */
    #define schhdin68kar             133 /* Inmelden 68 via KAR HD toestaan                                      */
    #define schhduit68kar            134 /* Uitmelden 68 via KAR HD toestaan                                     */
    #define schchecksirene68         135 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR               */
    #define schpelrwKOP02            136 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02 */
    #define schpelmkKOP02            137 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02     */
    #define schpelaKOP02             138 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02          */
    #define schpkuKOP68_uit68        139 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit */
    #define schrgadd24_3             140 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2           */
    #define schrgad24_3              141 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2        */
    #define schrgvd24_3              142 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2        */
    #define schrgv                   143 /* RoBuGrover aan of uit                                                */
    #define schrgv_snel              144 /* RoBuGrover versneld ophogen of verlagen                              */
    #define schschoolingreep31       145 /* Schoolingreep aan of uit voor fase 31                                */
    #define schschoolingreep32       146 /* Schoolingreep aan of uit voor fase 32                                */
    #define schschoolingreep33       147 /* Schoolingreep aan of uit voor fase 33                                */
    #define schschoolingreep34       148 /* Schoolingreep aan of uit voor fase 34                                */
    #define schsi31                  149 /* Senioreningreep aan of uit voor fase 31                              */
    #define schsi32                  150 /* Senioreningreep aan of uit voor fase 32                              */
    #define schsi33                  151 /* Senioreningreep aan of uit voor fase 33                              */
    #define schsi34                  152 /* Senioreningreep aan of uit voor fase 34                              */
    #define schca02                  153 /* Cyclische aanvraag fase 02                                           */
    #define schca03                  154 /* Cyclische aanvraag fase 03                                           */
    #define schca05                  155 /* Cyclische aanvraag fase 05                                           */
    #define schca08                  156 /* Cyclische aanvraag fase 08                                           */
    #define schca09                  157 /* Cyclische aanvraag fase 09                                           */
    #define schca11                  158 /* Cyclische aanvraag fase 11                                           */
    #define schca21                  159 /* Cyclische aanvraag fase 21                                           */
    #define schca22                  160 /* Cyclische aanvraag fase 22                                           */
    #define schca24                  161 /* Cyclische aanvraag fase 24                                           */
    #define schca26                  162 /* Cyclische aanvraag fase 26                                           */
    #define schca28                  163 /* Cyclische aanvraag fase 28                                           */
    #define schca31                  164 /* Cyclische aanvraag fase 31                                           */
    #define schca32                  165 /* Cyclische aanvraag fase 32                                           */
    #define schca33                  166 /* Cyclische aanvraag fase 33                                           */
    #define schca34                  167 /* Cyclische aanvraag fase 34                                           */
    #define schca38                  168 /* Cyclische aanvraag fase 38                                           */
    #define schca61                  169 /* Cyclische aanvraag fase 61                                           */
    #define schca62                  170 /* Cyclische aanvraag fase 62                                           */
    #define schca67                  171 /* Cyclische aanvraag fase 67                                           */
    #define schca68                  172 /* Cyclische aanvraag fase 68                                           */
    #define schca81                  173 /* Cyclische aanvraag fase 81                                           */
    #define schca82                  174 /* Cyclische aanvraag fase 82                                           */
    #define schca84                  175 /* Cyclische aanvraag fase 84                                           */
    #define schvg02_4a               176 /* Veiligheidsgroen detector 02_4a fase 02                              */
    #define schvg02_4b               177 /* Veiligheidsgroen detector 02_4b fase 02                              */
    #define schvg08_4a               178 /* Veiligheidsgroen detector 08_4a fase 08                              */
    #define schvg08_4b               179 /* Veiligheidsgroen detector 08_4b fase 08                              */
    #define schvg11_4                180 /* Veiligheidsgroen detector 11_4 fase 11                               */
    #define schaltg02                181 /* Alternatieve realisatie toestaan fase 02                             */
    #define schaltg03                182 /* Alternatieve realisatie toestaan fase 03                             */
    #define schaltg05                183 /* Alternatieve realisatie toestaan fase 05                             */
    #define schaltg08                184 /* Alternatieve realisatie toestaan fase 08                             */
    #define schaltg09                185 /* Alternatieve realisatie toestaan fase 09                             */
    #define schaltg11                186 /* Alternatieve realisatie toestaan fase 11                             */
    #define schaltg21                187 /* Alternatieve realisatie toestaan fase 21                             */
    #define schaltg22                188 /* Alternatieve realisatie toestaan fase 22                             */
    #define schaltg24                189 /* Alternatieve realisatie toestaan fase 24                             */
    #define schaltg26                190 /* Alternatieve realisatie toestaan fase 26                             */
    #define schaltg28                191 /* Alternatieve realisatie toestaan fase 28                             */
    #define schaltg31                192 /* Alternatieve realisatie toestaan fase 31                             */
    #define schaltg32                193 /* Alternatieve realisatie toestaan fase 32                             */
    #define schaltg33                194 /* Alternatieve realisatie toestaan fase 33                             */
    #define schaltg34                195 /* Alternatieve realisatie toestaan fase 34                             */
    #define schaltg38                196 /* Alternatieve realisatie toestaan fase 38                             */
    #define schaltg61                197 /* Alternatieve realisatie toestaan fase 61                             */
    #define schaltg62                198 /* Alternatieve realisatie toestaan fase 62                             */
    #define schaltg67                199 /* Alternatieve realisatie toestaan fase 67                             */
    #define schaltg68                200 /* Alternatieve realisatie toestaan fase 68                             */
    #define schaltg81                201 /* Alternatieve realisatie toestaan fase 81                             */
    #define schaltg82                202 /* Alternatieve realisatie toestaan fase 82                             */
    #define schaltg84                203 /* Alternatieve realisatie toestaan fase 84                             */
    #define schwg02                  204 /* Wachtstand groen fase 02                                             */
    #define schwg03                  205 /* Wachtstand groen fase 03                                             */
    #define schwg05                  206 /* Wachtstand groen fase 05                                             */
    #define schwg08                  207 /* Wachtstand groen fase 08                                             */
    #define schwg09                  208 /* Wachtstand groen fase 09                                             */
    #define schwg11                  209 /* Wachtstand groen fase 11                                             */
    #define schwg21                  210 /* Wachtstand groen fase 21                                             */
    #define schwg22                  211 /* Wachtstand groen fase 22                                             */
    #define schwg24                  212 /* Wachtstand groen fase 24                                             */
    #define schwg26                  213 /* Wachtstand groen fase 26                                             */
    #define schwg28                  214 /* Wachtstand groen fase 28                                             */
    #define schwg31                  215 /* Wachtstand groen fase 31                                             */
    #define schwg32                  216 /* Wachtstand groen fase 32                                             */
    #define schwg33                  217 /* Wachtstand groen fase 33                                             */
    #define schwg34                  218 /* Wachtstand groen fase 34                                             */
    #define schwg38                  219 /* Wachtstand groen fase 38                                             */
    #define schwg61                  220 /* Wachtstand groen fase 61                                             */
    #define schwg62                  221 /* Wachtstand groen fase 62                                             */
    #define schwg67                  222 /* Wachtstand groen fase 67                                             */
    #define schwg68                  223 /* Wachtstand groen fase 68                                             */
    #define schwg81                  224 /* Wachtstand groen fase 81                                             */
    #define schwg82                  225 /* Wachtstand groen fase 82                                             */
    #define schwg84                  226 /* Wachtstand groen fase 84                                             */
    #define schwtv24                 227 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                   */
    #define schwtvbusbijhd           228 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep             */
    #define schisgdebug              229 /* Debug aan/uit voor ISG func (testomgeving)                           */
    #define schlos0262               230 /* Wel/niet toestaan losse realisatie 02                                */
    #define schlosgeennla0262_2      231 /* Wel/niet toestaan losse realisatie 02                                */
    #define schlos0868               232 /* Wel/niet toestaan losse realisatie 08                                */
    #define schlosgeennla0868_2      233 /* Wel/niet toestaan losse realisatie 08                                */
    #define schlos1168               234 /* Wel/niet toestaan losse realisatie 11                                */
    #define schlosgeennla1168_2      235 /* Wel/niet toestaan losse realisatie 11                                */
    #define schlos2221               236 /* Wel/niet toestaan losse realisatie 22                                */
    #define schlosgeennla2221_2      237 /* Wel/niet toestaan losse realisatie 22                                */
    #define schlos3132               238 /* Wel/niet toestaan losse realisatie 31                                */
    #define schlosgeennla3132_2      239 /* Wel/niet toestaan losse realisatie 31                                */
    #define schlos3231               240 /* Wel/niet toestaan losse realisatie 32                                */
    #define schlosgeennla3231_2      241 /* Wel/niet toestaan losse realisatie 32                                */
    #define schlos3334               242 /* Wel/niet toestaan losse realisatie 33                                */
    #define schlosgeennla3334_2      243 /* Wel/niet toestaan losse realisatie 33                                */
    #define schlos3433               244 /* Wel/niet toestaan losse realisatie 34                                */
    #define schlosgeennla3433_2      245 /* Wel/niet toestaan losse realisatie 34                                */
    #define schlos8281               246 /* Wel/niet toestaan losse realisatie 82                                */
    #define schlosgeennla8281_2      247 /* Wel/niet toestaan losse realisatie 82                                */
    #define schsneld02_1a            248 /* Aanvraag snel voor detector 02_1a aan of uit                         */
    #define schsneld02_1b            249 /* Aanvraag snel voor detector 02_1b aan of uit                         */
    #define schsneld03_1             250 /* Aanvraag snel voor detector 03_1 aan of uit                          */
    #define schsneld05_1             251 /* Aanvraag snel voor detector 05_1 aan of uit                          */
    #define schsneld08_1a            252 /* Aanvraag snel voor detector 08_1a aan of uit                         */
    #define schsneld08_1b            253 /* Aanvraag snel voor detector 08_1b aan of uit                         */
    #define schsneld09_1             254 /* Aanvraag snel voor detector 09_1 aan of uit                          */
    #define schsneld11_1             255 /* Aanvraag snel voor detector 11_1 aan of uit                          */
    #define schsneld211              256 /* Aanvraag snel voor detector 211 aan of uit                           */
    #define schsneld22_1             257 /* Aanvraag snel voor detector 22_1 aan of uit                          */
    #define schsneld24_1             258 /* Aanvraag snel voor detector 24_1 aan of uit                          */
    #define schsneld261              259 /* Aanvraag snel voor detector 261 aan of uit                           */
    #define schsneld28_1             260 /* Aanvraag snel voor detector 28_1 aan of uit                          */
    #define schsneld61_1             261 /* Aanvraag snel voor detector 61_1 aan of uit                          */
    #define schsneld62_1a            262 /* Aanvraag snel voor detector 62_1a aan of uit                         */
    #define schsneld62_1b            263 /* Aanvraag snel voor detector 62_1b aan of uit                         */
    #define schsneld67_1             264 /* Aanvraag snel voor detector 67_1 aan of uit                          */
    #define schsneld68_1a            265 /* Aanvraag snel voor detector 68_1a aan of uit                         */
    #define schsneld68_1b            266 /* Aanvraag snel voor detector 68_1b aan of uit                         */
    #define schsneld81_1             267 /* Aanvraag snel voor detector 81_1 aan of uit                          */
    #define schsneld82_1             268 /* Aanvraag snel voor detector 82_1 aan of uit                          */
    #define schsneld84_1             269 /* Aanvraag snel voor detector 84_1 aan of uit                          */
    #define SCHMAX1                  270

/* parameters */
/* ---------- */
    #define prmspringverleng_08_1a        0 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b        1 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a        2 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b        3 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a        4 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b        5 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a        6 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b        7 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmspringverleng_09_1         8 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2         9 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3        10 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_1        11 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2        12 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3        13 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4        14 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmfb                        15 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                        16 /* Versiebeheer xx                                                                                                                */
    #define prmyy                        17 /* Versiebeheer yy                                                                                                                */
    #define prmzz                        18 /* Versiebeheer zz                                                                                                                */
    #define prmovmextragroen_02          19
    #define prmovmmindergroen_02         20
    #define prmovmextragroen_03          21
    #define prmovmmindergroen_03         22
    #define prmovmextragroen_05          23
    #define prmovmmindergroen_05         24
    #define prmovmextragroen_08          25
    #define prmovmmindergroen_08         26
    #define prmovmextragroen_09          27
    #define prmovmmindergroen_09         28
    #define prmovmextragroen_11          29
    #define prmovmmindergroen_11         30
    #define prmovmextragroen_61          31
    #define prmovmmindergroen_61         32
    #define prmovmextragroen_62          33
    #define prmovmmindergroen_62         34
    #define prmovmextragroen_67          35
    #define prmovmmindergroen_67         36
    #define prmovmextragroen_68          37
    #define prmovmmindergroen_68         38
    #define prmaltb02                    39 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03                    40 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05                    41 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08                    42 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09                    43 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11                    44 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21                    45 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22                    46 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24                    47 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26                    48 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28                    49 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31                    50 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32                    51 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33                    52 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34                    53 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38                    54 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61                    55 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62                    56 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67                    57 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68                    58 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81                    59 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82                    60 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84                    61 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a                   62 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b                   63 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a                   64 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b                   65 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a                   66 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b                   67 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a                   68 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b                   69 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1                    70 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2                    71 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1                    72 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2                    73 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a                   74 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b                   75 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a                   76 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b                   77 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a                   78 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b                   79 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a                   80 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b                   81 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1                    82 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2                    83 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3                    84 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1                    85 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2                    86 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3                    87 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4                    88 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                     89 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21                     90 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1                    91 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22                     92 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1                    93 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2                    94 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3                    95 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24                     96 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261                     97 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26                     98 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1                    99 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2                   100 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28                    101 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a                   102 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b                   103 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a                   104 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b                   105 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a                   106 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b                   107 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a                   108 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b                   109 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a                   110 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b                   111 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1                   112 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2                   113 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a                  114 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b                  115 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a                  116 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b                  117 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1                   118 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2                   119 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a                  120 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b                  121 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a                  122 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b                  123 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a                  124 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b                  125 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1                   126 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81                    127 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1                   128 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82                    129 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1                   130 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84                    131 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a                  132 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b                  133 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a                  134 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b                  135 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a                  136 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b                  137 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a                  138 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b                  139 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1                   140 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2                   141 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1                   142 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2                   143 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a                  144 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b                  145 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a                  146 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b                  147 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a                  148 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b                  149 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a                  150 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b                  151 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1                   152 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2                   153 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3                   154 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1                   155 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2                   156 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3                   157 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4                   158 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211                    159 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1                   160 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1                   161 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2                   162 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3                   163 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261                    164 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1                   165 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2                   166 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1                   167 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2                   168 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a                  169 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b                  170 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a                  171 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b                  172 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1                   173 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2                   174 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a                  175 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b                  176 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a                  177 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b                  178 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a                  179 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b                  180 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1                   181 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1                   182 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1                   183 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc03                   184 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05                   185 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08                   186 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09                   187 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11                   188 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61                   189 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62                   190 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67                   191 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68                   192 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08          193 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11          194 /* Doseerpercentage 11                                                                                                            */
    #define prmtypema0261               195 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262               196 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521               197 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522               198 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532               199 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868               200 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126               201 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168               202 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221               203 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611               204 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122               205 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132               206 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222               207 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231               208 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324               209 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334               210 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384               211 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424               212 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433               213 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484               214 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828               215 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281               216 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                     217 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                     218 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                     219 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                     220 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                     221 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                     222 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                     223 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                     224 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil22             225 /* Tijd dat fase 22 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv24                     226 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                     227 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                     228 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                     229 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                     230 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                     231 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                     232 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                     233 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     234 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     235 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     236 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     237 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     238 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     239 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil82             240 /* Tijd dat fase 82 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv84                     241 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   242 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                   243 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                   244 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                   245 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                   246 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                   247 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                   248 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                   249 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                   250 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                   251 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                   252 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                   253 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                   254 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                   255 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                   256 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                   257 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                   258 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                   259 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                   260 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                   261 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                   262 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                   263 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                   264 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg         265 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          266 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02karbus   267 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02karbus    268 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02karbus    269 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03karbus   270 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03karbus    271 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03karbus    272 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05karbus   273 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05karbus    274 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05karbus    275 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08karbus   276 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08karbus    277 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08karbus    278 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09karbus   279 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09karbus    280 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09karbus    281 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11karbus   282 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11karbus    283 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11karbus    284 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61karbus   285 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61karbus    286 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61karbus    287 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62karbus   288 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62karbus    289 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62karbus    290 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67karbus   291 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67karbus    292 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67karbus    293 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68karbus   294 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68karbus    295 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68karbus    296 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     297 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   298 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   299 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   300 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   301 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   302 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  303 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 304 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  305 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   306 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   307 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   308 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  309 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 310 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  311 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   312 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   313 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   314 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  315 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 316 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  317 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   318 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   319 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   320 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  321 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 322 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  323 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   324 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   325 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   326 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  327 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 328 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  329 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   330 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   331 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   332 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  333 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 334 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  335 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   336 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   337 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   338 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  339 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 340 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  341 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   342 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   343 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   344 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  345 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 346 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  347 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   348 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   349 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   350 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  351 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 352 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  353 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   354 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   355 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   356 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  357 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 358 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  359 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   360 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   361 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   362 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  363 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 364 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  365 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   366 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   367 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   368 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   369 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   370 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   371 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   372 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   373 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   374 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   375 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   376 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   377 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   378 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  379 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 380 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  381 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   382 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   383 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   384 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  385 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 386 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  387 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   388 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   389 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   390 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  391 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 392 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  393 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   394 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   395 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   396 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  397 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 398 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  399 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   400 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   401 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   402 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  403 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 404 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  405 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   406 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   407 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   408 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  409 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 410 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  411 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   412 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   413 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   414 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  415 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 416 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  417 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus              418 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus             419 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus              420 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus              421 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus          422 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus           423 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus             424 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03karbus              425 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03karbus             426 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03karbus              427 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03karbus              428 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03karbus          429 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03karbus           430 /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    #define prmprio03karbus             431 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05karbus              432 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05karbus             433 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05karbus              434 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05karbus              435 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05karbus          436 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05karbus           437 /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    #define prmprio05karbus             438 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08karbus              439 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08karbus             440 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08karbus              441 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08karbus              442 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08karbus          443 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08karbus           444 /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    #define prmprio08karbus             445 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09karbus              446 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09karbus             447 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09karbus              448 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09karbus              449 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09karbus          450 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09karbus           451 /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    #define prmprio09karbus             452 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11karbus              453 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11karbus             454 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11karbus              455 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11karbus              456 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11karbus          457 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11karbus           458 /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    #define prmprio11karbus             459 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmftsblok22fietsfiets      460 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 461 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     462 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               463 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              464 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               465 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               466 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets           467 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets              468 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets      469 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 470 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminwt28fietsfiets     471 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets               472 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              473 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               474 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               475 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets           476 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets              477 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto61karbus              478 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61karbus             479 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61karbus              480 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61karbus              481 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61karbus          482 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61karbus           483 /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    #define prmprio61karbus             484 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62karbus              485 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62karbus             486 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62karbus              487 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62karbus              488 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62karbus          489 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62karbus           490 /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    #define prmprio62karbus             491 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67karbus              492 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67karbus             493 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67karbus              494 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67karbus              495 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67karbus          496 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67karbus           497 /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    #define prmprio67karbus             498 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68karbus              499 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68karbus             500 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68karbus              501 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68karbus              502 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68karbus          503 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68karbus           504 /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    #define prmprio68karbus             505 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02                 506 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  507 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 508 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  509 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02              510 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmpriohd03                 511 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  512 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 513 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  514 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03              515 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmpriohd05                 516 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  517 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 518 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  519 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              520 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmpriohd08                 521 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  522 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 523 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  524 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              525 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmpriohd09                 526 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  527 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 528 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  529 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              530 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmpriohd11                 531 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  532 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 533 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  534 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              535 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmpriohd61                 536 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  537 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 538 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  539 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              540 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmpriohd62                 541 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  542 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 543 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  544 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              545 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmpriohd67                 546 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  547 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 548 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  549 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              550 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmpriohd68                 551 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  552 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 553 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  554 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              555 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmkarsg02                  556 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  557 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  558 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  559 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  560 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  561 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  562 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  563 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  564 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  565 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                566 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                567 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                568 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                569 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                570 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                571 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                572 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                573 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                574 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                575 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            576 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    577 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    578 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    579 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    580 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    581 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    582 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    583 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    584 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    585 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    586 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    587 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    588 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    589 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    590 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    591 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    592 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    593 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    594 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    595 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    596 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    597 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          598 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          599 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          600 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          601 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          602 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          603 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmvg1_02                   604 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   605 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   606 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   607 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   608 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   609 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   610 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   611 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   612 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   613 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   614 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   615 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   616 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   617 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   618 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   619 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   620 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   621 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   622 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   623 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   624 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   625 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   626 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   627 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   628 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   629 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   630 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   631 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   632 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   633 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   634 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   635 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   636 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   637 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   638 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   639 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   640 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   641 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   642 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   643 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   644 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   645 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   646 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   647 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   648 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   649 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   650 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   651 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   652 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   653 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   654 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   655 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   656 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   657 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   658 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   659 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   660 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   661 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   662 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   663 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   664 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   665 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   666 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   667 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   668 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   669 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   670 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   671 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   672 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   673 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   674 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   675 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   676 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   677 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   678 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   679 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   680 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   681 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   682 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   683 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   684 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   685 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   686 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   687 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   688 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   689 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   690 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   691 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   692 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   693 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   694 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   695 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   696 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   697 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   698 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   699 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   700 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   701 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   702 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   703 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   704 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   705 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   706 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   707 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   708 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   709 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   710 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   711 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   712 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   713 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   714 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   715 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   716 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   717 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   718 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   719 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   720 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   721 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   722 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   723 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   724 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   725 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   726 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   727 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   728 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   729 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           730 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           731 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           732 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           733 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           734 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           735 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           736 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           737 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           738 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           739 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           740 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           741 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           742 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           743 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           744 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           745 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           746 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           747 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           748 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           749 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           750 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           751 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           752 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           753 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           754 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           755 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           756 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           757 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           758 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           759 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           760 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           761 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         762 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         763 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        764 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        765 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        766 /* PTP error 2 ptp123456                                                                                                          */
    #define prmsrcptp123456             767 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            768 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           769 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           770 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           771 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            772 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmmkrgd24_3                773 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      774 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              775 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              776 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               777 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               778 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             779 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           780 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                781 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                782 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                783 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                784 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                785 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                786 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                787 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                788 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                789 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                790 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                791 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                792 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                793 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                794 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc31             795 /* Extra groen percentage tov. TFG voor senioreningreep op fase 31                                                                */
    #define prmsiexgrperc32             796 /* Extra groen percentage tov. TFG voor senioreningreep op fase 32                                                                */
    #define prmsiexgrperc33             797 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             798 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               799 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               800 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  801 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  802 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  803 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  804 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  805 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  806 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  807 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  808 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  809 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  810 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  811 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  812 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  813 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  814 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  815 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  816 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  817 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  818 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  819 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  820 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  821 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  822 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  823 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   824 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   825 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   826 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   827 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   828 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   829 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   830 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   831 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   832 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   833 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   834 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   835 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   836 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   837 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   838 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp22                   839 /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    #define prmaltg24                   840 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp24                   841 /* Minimale ruimte tbv alternatieve realisatie fase 24                                                                            */
    #define prmaltg26                   842 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   843 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   844 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   845 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   846 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   847 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   848 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltp32                   849 /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    #define prmaltg33                   850 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp33                   851 /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    #define prmaltg34                   852 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp34                   853 /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    #define prmaltg38                   854 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   855 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   856 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   857 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   858 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   859 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   860 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   861 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   862 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   863 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   864 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   865 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   866 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   867 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   868 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp84                   869 /* Minimale ruimte tbv alternatieve realisatie fase 84                                                                            */
    #define prmwg02                     870 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                     871 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                     872 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                     873 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                     874 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                     875 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                     876 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                     877 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                     878 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                     879 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                     880 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                     881 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                     882 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                     883 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                     884 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                     885 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                     886 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                     887 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                     888 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                     889 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                     890 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                     891 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                     892 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                   893 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              894 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              895 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              896 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               897 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               898 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     899
#else
    #define PRMMAX1                     896
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
    #define MLMAX1 5 /* aantal modulen */

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

