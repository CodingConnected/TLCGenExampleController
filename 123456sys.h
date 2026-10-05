/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.20
   CCOLGEN:   12.4.0.20
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
    #define usovinm02hpd        (FCMAX +  69) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03hpd        (FCMAX +  70) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05hpd        (FCMAX +  71) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08hpd        (FCMAX +  72) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09hpd        (FCMAX +  73) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11hpd        (FCMAX +  74) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm61hpd        (FCMAX +  75) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62hpd        (FCMAX +  76) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67hpd        (FCMAX +  77) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68hpd        (FCMAX +  78) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02           (FCMAX +  79) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03           (FCMAX +  80) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05           (FCMAX +  81) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08           (FCMAX +  82) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09           (FCMAX +  83) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11           (FCMAX +  84) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61           (FCMAX +  85) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62           (FCMAX +  86) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67           (FCMAX +  87) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68           (FCMAX +  88) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02        (FCMAX +  89) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1              (FCMAX +  90) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1    (FCMAX +  91) /* Periode actief                                                              */
    #define usperoFietsprio2    (FCMAX +  92) /* Periode actief                                                              */
    #define usper2              (FCMAX +  93) /* Periode Dag periode actief                                                  */
    #define usper3              (FCMAX +  94) /* Periode Ochtendspits actief                                                 */
    #define usper4              (FCMAX +  95) /* Periode Avondspits actief                                                   */
    #define usper5              (FCMAX +  96) /* Periode Koopavond actief                                                    */
    #define usper6              (FCMAX +  97) /* Periode Weekend actief                                                      */
    #define usper7              (FCMAX +  98) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke  (FCMAX +  99) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err  (FCMAX + 100) /* Verklikken PTP error ptp123456                                              */
    #define usrgv               (FCMAX + 101) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv21             (FCMAX + 102) /* Multivalente aansturing wachttijdvoorspeller fase 21                        */
    #define uswtv22             (FCMAX + 103) /* Multivalente aansturing wachttijdvoorspeller fase 22                        */
    #define uswtv24             (FCMAX + 104) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtv26             (FCMAX + 105) /* Multivalente aansturing wachttijdvoorspeller fase 26                        */
    #define uswtv28             (FCMAX + 106) /* Multivalente aansturing wachttijdvoorspeller fase 28                        */
    #define uswtv81             (FCMAX + 107) /* Multivalente aansturing wachttijdvoorspeller fase 81                        */
    #define uswtv82             (FCMAX + 108) /* Multivalente aansturing wachttijdvoorspeller fase 82                        */
    #define uswtv84             (FCMAX + 109) /* Multivalente aansturing wachttijdvoorspeller fase 84                        */
    #define uswtk21             (FCMAX + 110) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22             (FCMAX + 111) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24             (FCMAX + 112) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26             (FCMAX + 113) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28             (FCMAX + 114) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a            (FCMAX + 115) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b            (FCMAX + 116) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a            (FCMAX + 117) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b            (FCMAX + 118) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a            (FCMAX + 119) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b            (FCMAX + 120) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a            (FCMAX + 121) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b            (FCMAX + 122) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a            (FCMAX + 123) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b            (FCMAX + 124) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81             (FCMAX + 125) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82             (FCMAX + 126) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84             (FCMAX + 127) /* Aansturing waitsignaal detector k84                                         */
    #define usstarprogwissel    (FCMAX + 128) /* Verklikken actief zijn wisselen naar star programma                         */
    #define usstar01            (FCMAX + 129) /* Star programma star01 actief                                                */
    #define usstar02            (FCMAX + 130) /* Star programma star02 actief                                                */
    #define usisgtijd02         (FCMAX + 131) /* Verklikken PRIO 02 tbv interfunc                                            */
    #define usisgtijd03         (FCMAX + 132) /* Verklikken PRIO 03 tbv interfunc                                            */
    #define usisgtijd05         (FCMAX + 133) /* Verklikken PRIO 05 tbv interfunc                                            */
    #define usisgtijd08         (FCMAX + 134) /* Verklikken PRIO 08 tbv interfunc                                            */
    #define usisgtijd09         (FCMAX + 135) /* Verklikken PRIO 09 tbv interfunc                                            */
    #define usisgtijd11         (FCMAX + 136) /* Verklikken PRIO 11 tbv interfunc                                            */
    #define usisgtijd21         (FCMAX + 137) /* Verklikken PRIO 21 tbv interfunc                                            */
    #define usisgtijd22         (FCMAX + 138) /* Verklikken PRIO 22 tbv interfunc                                            */
    #define usisgtijd24         (FCMAX + 139) /* Verklikken PRIO 24 tbv interfunc                                            */
    #define usisgtijd26         (FCMAX + 140) /* Verklikken PRIO 26 tbv interfunc                                            */
    #define usisgtijd28         (FCMAX + 141) /* Verklikken PRIO 28 tbv interfunc                                            */
    #define usisgtijd31         (FCMAX + 142) /* Verklikken PRIO 31 tbv interfunc                                            */
    #define usisgtijd32         (FCMAX + 143) /* Verklikken PRIO 32 tbv interfunc                                            */
    #define usisgtijd33         (FCMAX + 144) /* Verklikken PRIO 33 tbv interfunc                                            */
    #define usisgtijd34         (FCMAX + 145) /* Verklikken PRIO 34 tbv interfunc                                            */
    #define usisgtijd38         (FCMAX + 146) /* Verklikken PRIO 38 tbv interfunc                                            */
    #define usisgtijd61         (FCMAX + 147) /* Verklikken PRIO 61 tbv interfunc                                            */
    #define usisgtijd62         (FCMAX + 148) /* Verklikken PRIO 62 tbv interfunc                                            */
    #define usisgtijd67         (FCMAX + 149) /* Verklikken PRIO 67 tbv interfunc                                            */
    #define usisgtijd68         (FCMAX + 150) /* Verklikken PRIO 68 tbv interfunc                                            */
    #define usisgtijd81         (FCMAX + 151) /* Verklikken PRIO 81 tbv interfunc                                            */
    #define usisgtijd82         (FCMAX + 152) /* Verklikken PRIO 82 tbv interfunc                                            */
    #define usisgtijd84         (FCMAX + 153) /* Verklikken PRIO 84 tbv interfunc                                            */
    #define USMAX1              (FCMAX + 154)

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
    #define hopdrempelen08           0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08          1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a           2 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b           3 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a           4 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b           5 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a           6 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b           7 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a           8 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b           9 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09          10 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09         11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1           12 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2           13 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3           14 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11          15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11         16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1           17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2           18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3           19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4           20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a                21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b                22 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a                23 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b                24 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a                25 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b                26 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a                27 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b                28 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af           29 /* File File68af actief                                               */
    #define hfile68_9a              30 /* File 68_9a actief                                                  */
    #define hfile68_9b              31 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af      32 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af      33 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hfixatietegenh          34 /* Fixatie tegenhouden                                                */
    #define hplhd                   35 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                  36 /* Halfstar actief                                                    */
    #define hkpact                  37 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                  38 /* Module regelen actief                                              */
    #define hpervar                 39 /* Periode VA regelen                                                 */
    #define hperarh                 40 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh            41 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                  42 /* Bijhouden actief zijn levensignaal                                 */
    #define hnleg0262               43 /* Hulpelement naloop EG van 02 naar 62                               */
    #define hnla02_1a               44 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b               45 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnleg0868               46 /* Hulpelement naloop EG van 08 naar 68                               */
    #define hnla08_1a               47 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b               48 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnleg1168               49 /* Hulpelement naloop EG van 11 naar 68                               */
    #define hnla11_1                50 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnleg2221               51 /* Hulpelement naloop EG van 22 naar 21                               */
    #define hnla22_1                52 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlsg3132               53 /* Hulpelement naloop SG van 31 naar 32                               */
    #define hnlak31a                54 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlsg3231               55 /* Hulpelement naloop SG van 32 naar 31                               */
    #define hnlak32a                56 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlsg3334               57 /* Hulpelement naloop SG van 33 naar 34                               */
    #define hnlak33a                58 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlsg3433               59 /* Hulpelement naloop SG van 34 naar 33                               */
    #define hnlak34a                60 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnleg8281               61 /* Hulpelement naloop EG van 82 naar 81                               */
    #define hnla82_1                62 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02karbus            63 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03karbus            64 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05karbus            65 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08karbus            66 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09karbus            67 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11karbus            68 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61karbus            69 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62karbus            70 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67karbus            71 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68karbus            72 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02karbus           73 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02karbus         74 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbus        75 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02karbuskar      76 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbuskar     77 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03karbus           78 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03karbus         79 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbus        80 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03karbuskar      81 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbuskar     82 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05karbus           83 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05karbus         84 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbus        85 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05karbuskar      86 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbuskar     87 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08karbus           88 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08karbus         89 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbus        90 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08karbuskar      91 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbuskar     92 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09karbus           93 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09karbus         94 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbus        95 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09karbuskar      96 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbuskar     97 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11karbus           98 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11karbus         99 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbus       100 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11karbuskar     101 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbuskar    102 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio22fiets           103 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets         104 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets        105 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets    106 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets   107 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets           108 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets         109 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets        110 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets    111 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets   112 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61karbus          113 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61karbus        114 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbus       115 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61karbuskar     116 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbuskar    117 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62karbus          118 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62karbus        119 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbus       120 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62karbuskar     121 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbuskar    122 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67karbus          123 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67karbus        124 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbus       125 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67karbuskar     126 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbuskar    127 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68karbus          128 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68karbus        129 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbus       130 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68karbuskar     131 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbuskar    132 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio02hpd             133 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02hpd           134 /* Prioriteit inmelding fase 02 Nood- en hulpdienst                   */
    #define hpriouit02hpd          135 /* Prioriteit uitmelding 02 Nood- en hulpdienst                       */
    #define hprioin02hpdkar        136 /* Prioriteit inmelding fase 02 Nood- en hulpdienst                   */
    #define hprioin02hpdopti       137 /* Prioriteit inmelding fase 02 Opticom                               */
    #define hpriouit02hpdopti      138 /* Prioriteit uitmelding 02 Opticom                                   */
    #define hprioin02hpdoptiopt02  139 /* Prioriteit inmelding fase 02 Nood- en hulpdienst                   */
    #define hpriouit02hpdkar       140 /* Prioriteit uitmelding 02 Nood- en hulpdienst                       */
    #define hpriouit02hpdoptiopt02 141 /* Prioriteit uitmelding 02 Nood- en hulpdienst                       */
    #define hprio03hpd             142 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03hpd           143 /* Prioriteit inmelding fase 03 Nood- en hulpdienst                   */
    #define hpriouit03hpd          144 /* Prioriteit uitmelding 03 Nood- en hulpdienst                       */
    #define hprioin03hpdkar        145 /* Prioriteit inmelding fase 03 Nood- en hulpdienst                   */
    #define hpriouit03hpdkar       146 /* Prioriteit uitmelding 03 Nood- en hulpdienst                       */
    #define hprio05hpd             147 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05hpd           148 /* Prioriteit inmelding fase 05 Nood- en hulpdienst                   */
    #define hpriouit05hpd          149 /* Prioriteit uitmelding 05 Nood- en hulpdienst                       */
    #define hprioin05hpdkar        150 /* Prioriteit inmelding fase 05 Nood- en hulpdienst                   */
    #define hprioin05hpdopti       151 /* Prioriteit inmelding fase 05 Opticom                               */
    #define hpriouit05hpdopti      152 /* Prioriteit uitmelding 05 Opticom                                   */
    #define hprioin05hpdoptiopt05  153 /* Prioriteit inmelding fase 05 Nood- en hulpdienst                   */
    #define hpriouit05hpdkar       154 /* Prioriteit uitmelding 05 Nood- en hulpdienst                       */
    #define hpriouit05hpdoptiopt05 155 /* Prioriteit uitmelding 05 Nood- en hulpdienst                       */
    #define hprio08hpd             156 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08hpd           157 /* Prioriteit inmelding fase 08 Nood- en hulpdienst                   */
    #define hpriouit08hpd          158 /* Prioriteit uitmelding 08 Nood- en hulpdienst                       */
    #define hprioin08hpdkar        159 /* Prioriteit inmelding fase 08 Nood- en hulpdienst                   */
    #define hprioin08hpdopti       160 /* Prioriteit inmelding fase 08 Opticom                               */
    #define hpriouit08hpdopti      161 /* Prioriteit uitmelding 08 Opticom                                   */
    #define hprioin08hpdoptiopt08  162 /* Prioriteit inmelding fase 08 Nood- en hulpdienst                   */
    #define hpriouit08hpdkar       163 /* Prioriteit uitmelding 08 Nood- en hulpdienst                       */
    #define hpriouit08hpdoptiopt08 164 /* Prioriteit uitmelding 08 Nood- en hulpdienst                       */
    #define hprio09hpd             165 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09hpd           166 /* Prioriteit inmelding fase 09 Nood- en hulpdienst                   */
    #define hpriouit09hpd          167 /* Prioriteit uitmelding 09 Nood- en hulpdienst                       */
    #define hprioin09hpdkar        168 /* Prioriteit inmelding fase 09 Nood- en hulpdienst                   */
    #define hpriouit09hpdkar       169 /* Prioriteit uitmelding 09 Nood- en hulpdienst                       */
    #define hprio11hpd             170 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11hpd           171 /* Prioriteit inmelding fase 11 Nood- en hulpdienst                   */
    #define hpriouit11hpd          172 /* Prioriteit uitmelding 11 Nood- en hulpdienst                       */
    #define hprioin11hpdkar        173 /* Prioriteit inmelding fase 11 Nood- en hulpdienst                   */
    #define hprioin11hpdopti       174 /* Prioriteit inmelding fase 11 Opticom                               */
    #define hpriouit11hpdopti      175 /* Prioriteit uitmelding 11 Opticom                                   */
    #define hprioin11hpdoptiopt11  176 /* Prioriteit inmelding fase 11 Nood- en hulpdienst                   */
    #define hpriouit11hpdkar       177 /* Prioriteit uitmelding 11 Nood- en hulpdienst                       */
    #define hpriouit11hpdoptiopt11 178 /* Prioriteit uitmelding 11 Nood- en hulpdienst                       */
    #define hprio61hpd             179 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61hpd           180 /* Prioriteit inmelding fase 61 Nood- en hulpdienst                   */
    #define hpriouit61hpd          181 /* Prioriteit uitmelding 61 Nood- en hulpdienst                       */
    #define hprioin61hpdkar        182 /* Prioriteit inmelding fase 61 Nood- en hulpdienst                   */
    #define hpriouit61hpdkar       183 /* Prioriteit uitmelding 61 Nood- en hulpdienst                       */
    #define hprio62hpd             184 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62hpd           185 /* Prioriteit inmelding fase 62 Nood- en hulpdienst                   */
    #define hpriouit62hpd          186 /* Prioriteit uitmelding 62 Nood- en hulpdienst                       */
    #define hprioin62hpdkar        187 /* Prioriteit inmelding fase 62 Nood- en hulpdienst                   */
    #define hpriouit62hpdkar       188 /* Prioriteit uitmelding 62 Nood- en hulpdienst                       */
    #define hprio67hpd             189 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67hpd           190 /* Prioriteit inmelding fase 67 Nood- en hulpdienst                   */
    #define hpriouit67hpd          191 /* Prioriteit uitmelding 67 Nood- en hulpdienst                       */
    #define hprioin67hpdkar        192 /* Prioriteit inmelding fase 67 Nood- en hulpdienst                   */
    #define hpriouit67hpdkar       193 /* Prioriteit uitmelding 67 Nood- en hulpdienst                       */
    #define hprio68hpd             194 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68hpd           195 /* Prioriteit inmelding fase 68 Nood- en hulpdienst                   */
    #define hpriouit68hpd          196 /* Prioriteit uitmelding 68 Nood- en hulpdienst                       */
    #define hprioin68hpdkar        197 /* Prioriteit inmelding fase 68 Nood- en hulpdienst                   */
    #define hpriouit68hpdkar       198 /* Prioriteit uitmelding 68 Nood- en hulpdienst                       */
    #define hhd02                  199 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                200 /* HD inmelding 02                                                    */
    #define hhduit02               201 /* HD uitmelding 02                                                   */
    #define hhdin02kar             202 /* HD inmelding 02                                                    */
    #define hhduit02kar            203 /* HD uitmelding 02                                                   */
    #define hhdin02opt             204 /* HD inmelding 02                                                    */
    #define hhduit02opt            205 /* HD uitmelding 02                                                   */
    #define hhd03                  206 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                207 /* HD inmelding 03                                                    */
    #define hhduit03               208 /* HD uitmelding 03                                                   */
    #define hhdin03kar             209 /* HD inmelding 03                                                    */
    #define hhduit03kar            210 /* HD uitmelding 03                                                   */
    #define hhd05                  211 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                212 /* HD inmelding 05                                                    */
    #define hhduit05               213 /* HD uitmelding 05                                                   */
    #define hhdin05kar             214 /* HD inmelding 05                                                    */
    #define hhduit05kar            215 /* HD uitmelding 05                                                   */
    #define hhdin05opt             216 /* HD inmelding 05                                                    */
    #define hhduit05opt            217 /* HD uitmelding 05                                                   */
    #define hhd08                  218 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                219 /* HD inmelding 08                                                    */
    #define hhduit08               220 /* HD uitmelding 08                                                   */
    #define hhdin08kar             221 /* HD inmelding 08                                                    */
    #define hhduit08kar            222 /* HD uitmelding 08                                                   */
    #define hhdin08opt             223 /* HD inmelding 08                                                    */
    #define hhduit08opt            224 /* HD uitmelding 08                                                   */
    #define hhd09                  225 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                226 /* HD inmelding 09                                                    */
    #define hhduit09               227 /* HD uitmelding 09                                                   */
    #define hhdin09kar             228 /* HD inmelding 09                                                    */
    #define hhduit09kar            229 /* HD uitmelding 09                                                   */
    #define hhd11                  230 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                231 /* HD inmelding 11                                                    */
    #define hhduit11               232 /* HD uitmelding 11                                                   */
    #define hhdin11kar             233 /* HD inmelding 11                                                    */
    #define hhduit11kar            234 /* HD uitmelding 11                                                   */
    #define hhdin11opt             235 /* HD inmelding 11                                                    */
    #define hhduit11opt            236 /* HD uitmelding 11                                                   */
    #define hhd61                  237 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                238 /* HD inmelding 61                                                    */
    #define hhduit61               239 /* HD uitmelding 61                                                   */
    #define hhdin61kar             240 /* HD inmelding 61                                                    */
    #define hhduit61kar            241 /* HD uitmelding 61                                                   */
    #define hhd62                  242 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                243 /* HD inmelding 62                                                    */
    #define hhduit62               244 /* HD uitmelding 62                                                   */
    #define hhdin62kar             245 /* HD inmelding 62                                                    */
    #define hhduit62kar            246 /* HD uitmelding 62                                                   */
    #define hhd67                  247 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                248 /* HD inmelding 67                                                    */
    #define hhduit67               249 /* HD uitmelding 67                                                   */
    #define hhdin67kar             250 /* HD inmelding 67                                                    */
    #define hhduit67kar            251 /* HD uitmelding 67                                                   */
    #define hhd68                  252 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                253 /* HD inmelding 68                                                    */
    #define hhduit68               254 /* HD uitmelding 68                                                   */
    #define hhdin68kar             255 /* HD inmelding 68                                                    */
    #define hhduit68kar            256 /* HD uitmelding 68                                                   */
    #define hpelinKOP02            257 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02        258 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit    259 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit    260 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1      261 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2      262 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01        263 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02        264 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03        265 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04        266 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05        267 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06        268 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07        269 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08        270 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09        271 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10        272 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11        273 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12        274 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13        275 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14        276 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15        277 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16        278 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01        279 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02        280 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03        281 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04        282 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05        283 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06        284 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07        285 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08        286 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09        287 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10        288 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11        289 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12        290 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13        291 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14        292 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15        293 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16        294 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke      295 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err      296 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0     297 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1     298 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2     299 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2        300 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                301 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02              302 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03              303 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05              304 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08              305 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11              306 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22              307 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28              308 /* Bijhouden primaire realisatie fase 28                              */
    #define hwtv21                 309 /* Onthouden aansturing wachttijdvoorspeller fase 21                  */
    #define hwtv22                 310 /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    #define hwtv24                 311 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hwtv26                 312 /* Onthouden aansturing wachttijdvoorspeller fase 26                  */
    #define hwtv28                 313 /* Onthouden aansturing wachttijdvoorspeller fase 28                  */
    #define hwtv81                 314 /* Onthouden aansturing wachttijdvoorspeller fase 81                  */
    #define hwtv82                 315 /* Onthouden aansturing wachttijdvoorspeller fase 82                  */
    #define hwtv84                 316 /* Onthouden aansturing wachttijdvoorspeller fase 84                  */
    #define hlos31                 317 /* Toestaan los realiseren fase 31 (naloop naar)                      */
    #define hlos32                 318 /* Toestaan los realiseren fase 32 (naloop naar)                      */
    #define hlos33                 319 /* Toestaan los realiseren fase 33 (naloop naar)                      */
    #define hlos34                 320 /* Toestaan los realiseren fase 34 (naloop naar)                      */
    #define HEMAX1                 321

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
    #define tprioin02hpdopti           269 /* Anti jutter tijd inmelden 02 Opticom                                                     */
    #define tprioin02hpdoptiopt02      270 /* Anti jutter tijd inmelden 02 Nood- en hulpdienst                                         */
    #define tbtovg02hpd                271 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02hpd                   272 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02hpd                   273 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02hpd                  274 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03hpd                275 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03hpd                   276 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03hpd                   277 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03hpd                  278 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin05hpdopti           279 /* Anti jutter tijd inmelden 05 Opticom                                                     */
    #define tprioin05hpdoptiopt05      280 /* Anti jutter tijd inmelden 05 Nood- en hulpdienst                                         */
    #define tbtovg05hpd                281 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05hpd                   282 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05hpd                   283 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05hpd                  284 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin08hpdopti           285 /* Anti jutter tijd inmelden 08 Opticom                                                     */
    #define tprioin08hpdoptiopt08      286 /* Anti jutter tijd inmelden 08 Nood- en hulpdienst                                         */
    #define tbtovg08hpd                287 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08hpd                   288 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08hpd                   289 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08hpd                  290 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09hpd                291 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09hpd                   292 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09hpd                   293 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09hpd                  294 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin11hpdopti           295 /* Anti jutter tijd inmelden 11 Opticom                                                     */
    #define tprioin11hpdoptiopt11      296 /* Anti jutter tijd inmelden 11 Nood- en hulpdienst                                         */
    #define tbtovg11hpd                297 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11hpd                   298 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11hpd                   299 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11hpd                  300 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg61hpd                301 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61hpd                   302 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61hpd                   303 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61hpd                  304 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62hpd                305 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62hpd                   306 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62hpd                   307 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62hpd                  308 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67hpd                309 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67hpd                   310 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67hpd                   311 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67hpd                  312 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tbtovg68hpd                313 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68hpd                   314 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68hpd                   315 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68hpd                  316 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    317 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    318 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 319 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 320 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                321 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define thdin02opt                 322 /* Anti jutter tijd inmelden HD 02 Opticom                                                  */
    #define tgbhd03                    323 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    324 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 325 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 326 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                327 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    328 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    329 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 330 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 331 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                332 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define thdin05opt                 333 /* Anti jutter tijd inmelden HD 05 Opticom                                                  */
    #define tgbhd08                    334 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    335 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 336 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 337 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                338 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define thdin08opt                 339 /* Anti jutter tijd inmelden HD 08 Opticom                                                  */
    #define tgbhd09                    340 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    341 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 342 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 343 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                344 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    345 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    346 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 347 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 348 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                349 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define thdin11opt                 350 /* Anti jutter tijd inmelden HD 11 Opticom                                                  */
    #define tgbhd61                    351 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    352 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 353 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 354 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                355 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    356 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    357 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 358 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 359 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                360 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    361 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    362 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 363 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 364 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                365 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    366 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    367 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 368 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 369 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                370 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tpelmeetKOP02              371 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          372 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                373 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             374 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           375 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 376 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  377 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 378 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            379 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            380 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   381 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   382 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   383 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   384 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   385 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   386 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    387 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    388 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    389 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    390 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   391 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   392 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   393 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   394 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   395 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   396 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    397 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    398 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    399 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    400 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    401 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    402 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    403 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tuitgestca02               404 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               405 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               406 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               407 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               408 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               409 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               410 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               411 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               412 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               413 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               414 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               415 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               416 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               417 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               418 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               419 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               420 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               421 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               422 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               423 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               424 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               425 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               426 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   427 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               428 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              429 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               430 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              431 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   432 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               433 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              434 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               435 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              436 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   437 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                438 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               439 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv21                     440 /* T.b.v. aansturing wachttijdvoorspeller fase 21                                           */
    #define twtv22                     441 /* T.b.v. aansturing wachttijdvoorspeller fase 22                                           */
    #define twtv24                     442 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define twtv26                     443 /* T.b.v. aansturing wachttijdvoorspeller fase 26                                           */
    #define twtv28                     444 /* T.b.v. aansturing wachttijdvoorspeller fase 28                                           */
    #define twtv81                     445 /* T.b.v. aansturing wachttijdvoorspeller fase 81                                           */
    #define twtv82                     446 /* T.b.v. aansturing wachttijdvoorspeller fase 82                                           */
    #define twtv84                     447 /* T.b.v. aansturing wachttijdvoorspeller fase 84                                           */
    #define tvs2205                    448 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tfo0522                    449 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 05                              */
    #define tvs2232                    450 /* Voorstarttijd fase 22 op fase 32                                                         */
    #define tfo3222                    451 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 32                              */
    #define tvs2434                    452 /* Voorstarttijd fase 24 op fase 34                                                         */
    #define tfo3424                    453 /* Fictieve ontruimingstijd/intergroentijd van 24 naar fase 34                              */
    #define tvs2838                    454 /* Voorstarttijd fase 28 op fase 38                                                         */
    #define tfo3828                    455 /* Fictieve ontruimingstijd/intergroentijd van 28 naar fase 38                              */
    #define tvs3205                    456 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tfo0532                    457 /* Fictieve ontruimingstijd/intergroentijd van 32 naar fase 05                              */
    #define tvs8433                    458 /* Voorstarttijd fase 84 op fase 33                                                         */
    #define tfo3384                    459 /* Fictieve ontruimingstijd/intergroentijd van 84 naar fase 33                              */
    #define tlr2611                    460 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tfo2611                    461 /* Fictieve ontruimingstijd/intergroentijd van 26 naar fase 11                              */
    #define txnl0262                   462 /* Tegenhouden fase 02 tbv naloop naar fase 62                                              */
    #define txnl0868                   463 /* Tegenhouden fase 08 tbv naloop naar fase 68                                              */
    #define txnl1168                   464 /* Tegenhouden fase 11 tbv naloop naar fase 68                                              */
    #define txnl2221                   465 /* Tegenhouden fase 22 tbv naloop naar fase 21                                              */
    #define txnl3132                   466 /* Tegenhouden fase 31 tbv naloop naar fase 32                                              */
    #define txnl3231                   467 /* Tegenhouden fase 32 tbv naloop naar fase 31                                              */
    #define txnl3334                   468 /* Tegenhouden fase 33 tbv naloop naar fase 34                                              */
    #define txnl3433                   469 /* Tegenhouden fase 34 tbv naloop naar fase 33                                              */
    #define txnl8281                   470 /* Tegenhouden fase 82 tbv naloop naar fase 81                                              */
    #define TMMAX1                     471

/* teller elementen */
/* ---------------- */
    #define cvchst02karbus       0 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus                 */
    #define cvchst03karbus       1 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus                 */
    #define cvchst05karbus       2 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus                 */
    #define cvchst08karbus       3 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus                 */
    #define cvchst09karbus       4 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus                 */
    #define cvchst11karbus       5 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus                 */
    #define cvchst22fiets        6 /* OV inmeldingen fase 22 tijdens halfstar regelen Fiets               */
    #define cvchst28fiets        7 /* OV inmeldingen fase 28 tijdens halfstar regelen Fiets               */
    #define cvchst61karbus       8 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus                 */
    #define cvchst62karbus       9 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus                 */
    #define cvchst67karbus      10 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus                 */
    #define cvchst68karbus      11 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus                 */
    #define cvchst02hpd         12 /* OV inmeldingen fase 02 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst03hpd         13 /* OV inmeldingen fase 03 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst05hpd         14 /* OV inmeldingen fase 05 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst08hpd         15 /* OV inmeldingen fase 08 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst09hpd         16 /* OV inmeldingen fase 09 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst11hpd         17 /* OV inmeldingen fase 11 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst61hpd         18 /* OV inmeldingen fase 61 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst62hpd         19 /* OV inmeldingen fase 62 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst67hpd         20 /* OV inmeldingen fase 67 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvchst68hpd         21 /* OV inmeldingen fase 68 tijdens halfstar regelen Nood- en hulpdienst */
    #define cvc02karbus         22 /* Bijhouden prio inmeldingen fase 02 type Bus                         */
    #define cvc03karbus         23 /* Bijhouden prio inmeldingen fase 03 type Bus                         */
    #define cvc05karbus         24 /* Bijhouden prio inmeldingen fase 05 type Bus                         */
    #define cvc08karbus         25 /* Bijhouden prio inmeldingen fase 08 type Bus                         */
    #define cvc09karbus         26 /* Bijhouden prio inmeldingen fase 09 type Bus                         */
    #define cvc11karbus         27 /* Bijhouden prio inmeldingen fase 11 type Bus                         */
    #define cftscyc22fietsfiets 28 /* Bijhouden realisaties tbv peloton prio voor fase 22                 */
    #define cvc22fiets          29 /* Bijhouden prio inmeldingen fase 22 type Fiets                       */
    #define cftscyc28fietsfiets 30 /* Bijhouden realisaties tbv peloton prio voor fase 28                 */
    #define cvc28fiets          31 /* Bijhouden prio inmeldingen fase 28 type Fiets                       */
    #define cvc61karbus         32 /* Bijhouden prio inmeldingen fase 61 type Bus                         */
    #define cvc62karbus         33 /* Bijhouden prio inmeldingen fase 62 type Bus                         */
    #define cvc67karbus         34 /* Bijhouden prio inmeldingen fase 67 type Bus                         */
    #define cvc68karbus         35 /* Bijhouden prio inmeldingen fase 68 type Bus                         */
    #define cvc02hpd            36 /* Bijhouden prio inmeldingen fase 02 type Nood- en hulpdienst         */
    #define cvc03hpd            37 /* Bijhouden prio inmeldingen fase 03 type Nood- en hulpdienst         */
    #define cvc05hpd            38 /* Bijhouden prio inmeldingen fase 05 type Nood- en hulpdienst         */
    #define cvc08hpd            39 /* Bijhouden prio inmeldingen fase 08 type Nood- en hulpdienst         */
    #define cvc09hpd            40 /* Bijhouden prio inmeldingen fase 09 type Nood- en hulpdienst         */
    #define cvc11hpd            41 /* Bijhouden prio inmeldingen fase 11 type Nood- en hulpdienst         */
    #define cvc61hpd            42 /* Bijhouden prio inmeldingen fase 61 type Nood- en hulpdienst         */
    #define cvc62hpd            43 /* Bijhouden prio inmeldingen fase 62 type Nood- en hulpdienst         */
    #define cvc67hpd            44 /* Bijhouden prio inmeldingen fase 67 type Nood- en hulpdienst         */
    #define cvc68hpd            45 /* Bijhouden prio inmeldingen fase 68 type Nood- en hulpdienst         */
    #define cvchd02             46 /* Bijhouden prio inmeldingen fase 02                                  */
    #define cvchd03             47 /* Bijhouden prio inmeldingen fase 03                                  */
    #define cvchd05             48 /* Bijhouden prio inmeldingen fase 05                                  */
    #define cvchd08             49 /* Bijhouden prio inmeldingen fase 08                                  */
    #define cvchd09             50 /* Bijhouden prio inmeldingen fase 09                                  */
    #define cvchd11             51 /* Bijhouden prio inmeldingen fase 11                                  */
    #define cvchd61             52 /* Bijhouden prio inmeldingen fase 61                                  */
    #define cvchd62             53 /* Bijhouden prio inmeldingen fase 62                                  */
    #define cvchd67             54 /* Bijhouden prio inmeldingen fase 67                                  */
    #define cvchd68             55 /* Bijhouden prio inmeldingen fase 68                                  */
    #define CTMAX1              56

/* schakelaars */
/* ----------- */
    #define schdynhiaat08                0 /* Toepassen dynamisch hiaat bij fase 08                                    */
    #define schopdrempelen08             1 /* Opdrempelen toepassen voor fase 08                                       */
    #define schedkop_08                  2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus           */
    #define schdynhiaat09                3 /* Toepassen dynamisch hiaat bij fase 09                                    */
    #define schopdrempelen09             4 /* Opdrempelen toepassen voor fase 09                                       */
    #define schedkop_09                  5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus           */
    #define schdynhiaat11                6 /* Toepassen dynamisch hiaat bij fase 11                                    */
    #define schopdrempelen11             7 /* Opdrempelen toepassen voor fase 11                                       */
    #define schedkop_11                  8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus           */
    #define schtypeuswt                  9 /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag        */
    #define schcycl                     10 /* Bijhouden actuele cyclustijd aan of uit                                  */
    #define schcycl_reset               11 /* Reset meting cyclustijd                                                  */
    #define schdvakd02_1a               12 /* Aanvraag fase 02 bij storing op detector 02_1a                           */
    #define schdvakd02_1b               13 /* Aanvraag fase 02 bij storing op detector 02_1b                           */
    #define schdvakd03_1                14 /* Aanvraag fase 03 bij storing op detector 03_1                            */
    #define schdvakdk31a                15 /* Aanvraag fase 31 bij storing op detector k31a                            */
    #define schdvakdk31b                16 /* Aanvraag fase 31 bij storing op detector k31b                            */
    #define schfileFile68af             17 /* File ingreep File68af toepassen                                          */
    #define schfiledoserenFile68af      18 /* Toepassen doseerpercentages voor fileingreep File68af                    */
    #define schfileFile68afparstrook    19 /* Parallele file meldingen per strook file ingreep File68af                */
    #define schbmfix                    20 /* Bijkomen tijdens fixatie mogelijk                                        */
    #define schaltghst02                21 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen         */
    #define schaltghst03                22 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen         */
    #define schaltghst05                23 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen         */
    #define schaltghst08                24 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen         */
    #define schaltghst09                25 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen         */
    #define schaltghst11                26 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen         */
    #define schaltghst21                27 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen         */
    #define schaltghst22                28 /* Alternatief realiseren fase 22 toestaan tijdens halfstar regelen         */
    #define schaltghst24                29 /* Alternatief realiseren fase 24 toestaan tijdens halfstar regelen         */
    #define schaltghst26                30 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen         */
    #define schaltghst28                31 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen         */
    #define schaltghst31                32 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen         */
    #define schaltghst32                33 /* Alternatief realiseren fase 32 toestaan tijdens halfstar regelen         */
    #define schaltghst88                34 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen         */
    #define schaltghst84                35 /* Alternatief realiseren fase 84 toestaan tijdens halfstar regelen         */
    #define schaltghst82                36 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen         */
    #define schaltghst81                37 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen         */
    #define schaltghst68                38 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen         */
    #define schaltghst67                39 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen         */
    #define schaltghst62                40 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen         */
    #define schaltghst61                41 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen         */
    #define schaltghst38                42 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen         */
    #define schaltghst34                43 /* Alternatief realiseren fase 34 toestaan tijdens halfstar regelen         */
    #define schaltghst33                44 /* Alternatief realiseren fase 33 toestaan tijdens halfstar regelen         */
    #define schtegenov02                45 /* Tegenhouden hoofdrichting 02 bij OV ingreep                              */
    #define schafkwgov02                46 /* Afkappen WG hoofdrichting 02 bij OV ingreep                              */
    #define schafkvgov02                47 /* Afkappen VG hoofdrichting 02 bij OV ingreep                              */
    #define schtegenov08                48 /* Tegenhouden hoofdrichting 08 bij OV ingreep                              */
    #define schafkwgov08                49 /* Afkappen WG hoofdrichting 08 bij OV ingreep                              */
    #define schafkvgov08                50 /* Afkappen VG hoofdrichting 08 bij OV ingreep                              */
    #define schinstprm                  51 /* Eenmalig kopieren signaalplan parameters naar signaalplannen             */
    #define schinst                     52 /* Eenmalig instellen signaalplannen na wijziging                           */
    #define schvaml                     53 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)             */
    #define schvar                      54 /* VA regelen aan of uit                                                    */
    #define scharh                      55 /* Toestaan alternatieven voor hoofdrichtingen                              */
    #define schvarstreng                56 /* VA regelen aan of uit voor gehele streng                                 */
    #define schpervardef                57 /* VA regelen periode default                                               */
    #define schpervar1                  58 /* VA regelen periode nacht                                                 */
    #define schpervar2                  59 /* VA regelen periode dag                                                   */
    #define schpervar3                  60 /* VA regelen periode ochtend                                               */
    #define schpervar4                  61 /* VA regelen periode avond                                                 */
    #define schpervar5                  62 /* VA regelen periode koopavond                                             */
    #define schpervar6                  63 /* VA regelen periode weekend                                               */
    #define schpervar7                  64 /* VA regelen periode reserve                                               */
    #define schperarhdef                65 /* Alternatieven voor hoofdrichtingen periode default                       */
    #define schperarh1                  66 /* Alternatieven voor hoofdrichtingen periode nacht                         */
    #define schperarh2                  67 /* Alternatieven voor hoofdrichtingen periode dag                           */
    #define schperarh3                  68 /* Alternatieven voor hoofdrichtingen periode ochtend                       */
    #define schperarh4                  69 /* Alternatieven voor hoofdrichtingen periode avond                         */
    #define schperarh5                  70 /* Alternatieven voor hoofdrichtingen periode koopavond                     */
    #define schperarh6                  71 /* Alternatieven voor hoofdrichtingen periode weekend                       */
    #define schperarh7                  72 /* Alternatieven voor hoofdrichtingen periode reserve                       */
    #define schovpriople                73 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                   */
    #define schma0261                   74 /* Meeaanvraag van 02 naar 61 actief                                        */
    #define schma0262                   75 /* Meeaanvraag van 02 naar 62 actief                                        */
    #define schma0521                   76 /* Meeaanvraag van 05 naar 21 actief                                        */
    #define schma0522                   77 /* Meeaanvraag van 05 naar 22 actief                                        */
    #define schma0532                   78 /* Meeaanvraag van 05 naar 32 actief                                        */
    #define schma0868                   79 /* Meeaanvraag van 08 naar 68 actief                                        */
    #define schma1126                   80 /* Meeaanvraag van 11 naar 26 actief                                        */
    #define schma1168                   81 /* Meeaanvraag van 11 naar 68 actief                                        */
    #define schma2221                   82 /* Meeaanvraag van 22 naar 21 actief                                        */
    #define schma2611                   83 /* Meeaanvraag van 26 naar 11 actief                                        */
    #define schma3122                   84 /* Meeaanvraag van 31 naar 22 actief                                        */
    #define schma3132                   85 /* Meeaanvraag van 31 naar 32 actief                                        */
    #define schma3222                   86 /* Meeaanvraag van 32 naar 22 actief                                        */
    #define schma3231                   87 /* Meeaanvraag van 32 naar 31 actief                                        */
    #define schma3324                   88 /* Meeaanvraag van 33 naar 24 actief                                        */
    #define schma3334                   89 /* Meeaanvraag van 33 naar 34 actief                                        */
    #define schma3384                   90 /* Meeaanvraag van 33 naar 84 actief                                        */
    #define schma3424                   91 /* Meeaanvraag van 34 naar 24 actief                                        */
    #define schma3433                   92 /* Meeaanvraag van 34 naar 33 actief                                        */
    #define schma3484                   93 /* Meeaanvraag van 34 naar 84 actief                                        */
    #define schma3828                   94 /* Meeaanvraag van 38 naar 28 actief                                        */
    #define schma8281                   95 /* Meeaanvraag van 82 naar 81 actief                                        */
    #define schmv02                     96 /* Meeverlengen fase 02                                                     */
    #define schmv03                     97 /* Meeverlengen fase 03                                                     */
    #define schmv05                     98 /* Meeverlengen fase 05                                                     */
    #define schmv08                     99 /* Meeverlengen fase 08                                                     */
    #define schmv09                    100 /* Meeverlengen fase 09                                                     */
    #define schmv11                    101 /* Meeverlengen fase 11                                                     */
    #define schmv21                    102 /* Meeverlengen fase 21                                                     */
    #define schmv22                    103 /* Meeverlengen fase 22                                                     */
    #define schhardmv2205              104 /* Hard meeverlengen fase 22 met fase 05                                    */
    #define schmv24                    105 /* Meeverlengen fase 24                                                     */
    #define schmv26                    106 /* Meeverlengen fase 26                                                     */
    #define schhardmv2611              107 /* Hard meeverlengen fase 26 met fase 11                                    */
    #define schmv28                    108 /* Meeverlengen fase 28                                                     */
    #define schmv31                    109 /* Meeverlengen fase 31                                                     */
    #define schmv32                    110 /* Meeverlengen fase 32                                                     */
    #define schhardmv3205              111 /* Hard meeverlengen fase 32 met fase 05                                    */
    #define schmv33                    112 /* Meeverlengen fase 33                                                     */
    #define schmv34                    113 /* Meeverlengen fase 34                                                     */
    #define schmv38                    114 /* Meeverlengen fase 38                                                     */
    #define schmv61                    115 /* Meeverlengen fase 61                                                     */
    #define schmv62                    116 /* Meeverlengen fase 62                                                     */
    #define schmv67                    117 /* Meeverlengen fase 67                                                     */
    #define schmv68                    118 /* Meeverlengen fase 68                                                     */
    #define schmv81                    119 /* Meeverlengen fase 81                                                     */
    #define schmv82                    120 /* Meeverlengen fase 82                                                     */
    #define schmv84                    121 /* Meeverlengen fase 84                                                     */
    #define schmlprm                   122 /* Toepassen parametriseerbare modulestructuur                              */
    #define schovstipt02karbus         123 /* Geconditioneerde prioteit voor OV bij 02 Bus                             */
    #define schovstipt03karbus         124 /* Geconditioneerde prioteit voor OV bij 03 Bus                             */
    #define schovstipt05karbus         125 /* Geconditioneerde prioteit voor OV bij 05 Bus                             */
    #define schovstipt08karbus         126 /* Geconditioneerde prioteit voor OV bij 08 Bus                             */
    #define schovstipt09karbus         127 /* Geconditioneerde prioteit voor OV bij 09 Bus                             */
    #define schovstipt11karbus         128 /* Geconditioneerde prioteit voor OV bij 11 Bus                             */
    #define schovstipt61karbus         129 /* Geconditioneerde prioteit voor OV bij 61 Bus                             */
    #define schovstipt62karbus         130 /* Geconditioneerde prioteit voor OV bij 62 Bus                             */
    #define schovstipt67karbus         131 /* Geconditioneerde prioteit voor OV bij 67 Bus                             */
    #define schovstipt68karbus         132 /* Geconditioneerde prioteit voor OV bij 68 Bus                             */
    #define schcovuber                 133 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                           */
    #define schcheckdstype             134 /* Check type DSI bericht bij VECOM                                         */
    #define schprioin02karbuskar       135 /* Inmelden 02 via Bus toestaan                                             */
    #define schpriouit02karbuskar      136 /* Uitmelden 02 via Bus toestaan                                            */
    #define schprioin03karbuskar       137 /* Inmelden 03 via Bus toestaan                                             */
    #define schpriouit03karbuskar      138 /* Uitmelden 03 via Bus toestaan                                            */
    #define schprioin05karbuskar       139 /* Inmelden 05 via Bus toestaan                                             */
    #define schpriouit05karbuskar      140 /* Uitmelden 05 via Bus toestaan                                            */
    #define schprioin08karbuskar       141 /* Inmelden 08 via Bus toestaan                                             */
    #define schpriouit08karbuskar      142 /* Uitmelden 08 via Bus toestaan                                            */
    #define schprioin09karbuskar       143 /* Inmelden 09 via Bus toestaan                                             */
    #define schpriouit09karbuskar      144 /* Uitmelden 09 via Bus toestaan                                            */
    #define schprioin11karbuskar       145 /* Inmelden 11 via Bus toestaan                                             */
    #define schpriouit11karbuskar      146 /* Uitmelden 11 via Bus toestaan                                            */
    #define schprioin22fietsfiets      147 /* Inmelden 22 via Fiets toestaan                                           */
    #define schpriouit22fietsfiets     148 /* Uitmelden 22 via Fiets toestaan                                          */
    #define schprioin28fietsfiets      149 /* Inmelden 28 via Fiets toestaan                                           */
    #define schpriouit28fietsfiets     150 /* Uitmelden 28 via Fiets toestaan                                          */
    #define schprioin61karbuskar       151 /* Inmelden 61 via Bus toestaan                                             */
    #define schpriouit61karbuskar      152 /* Uitmelden 61 via Bus toestaan                                            */
    #define schprioin62karbuskar       153 /* Inmelden 62 via Bus toestaan                                             */
    #define schpriouit62karbuskar      154 /* Uitmelden 62 via Bus toestaan                                            */
    #define schprioin67karbuskar       155 /* Inmelden 67 via Bus toestaan                                             */
    #define schpriouit67karbuskar      156 /* Uitmelden 67 via Bus toestaan                                            */
    #define schprioin68karbuskar       157 /* Inmelden 68 via Bus toestaan                                             */
    #define schpriouit68karbuskar      158 /* Uitmelden 68 via Bus toestaan                                            */
    #define schprioin02hpdkar          159 /* Inmelden 02 via Nood- en hulpdienst toestaan                             */
    #define schprioin02hpdopti         160 /* Inmelden 02 via Opticom toestaan                                         */
    #define schprioin02hpdoptiopt02SD  161 /* Inmelden 02 via Nood- en hulpdienst toestaan                             */
    #define schpriouit02hpdkar         162 /* Uitmelden 02 via Nood- en hulpdienst toestaan                            */
    #define schpriouit02hpdoptiopt02SD 163 /* Uitmelden 02 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene02hpd        164 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                   */
    #define schprioin03hpdkar          165 /* Inmelden 03 via Nood- en hulpdienst toestaan                             */
    #define schpriouit03hpdkar         166 /* Uitmelden 03 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene03hpd        167 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                   */
    #define schprioin05hpdkar          168 /* Inmelden 05 via Nood- en hulpdienst toestaan                             */
    #define schprioin05hpdopti         169 /* Inmelden 05 via Opticom toestaan                                         */
    #define schprioin05hpdoptiopt05SD  170 /* Inmelden 05 via Nood- en hulpdienst toestaan                             */
    #define schpriouit05hpdkar         171 /* Uitmelden 05 via Nood- en hulpdienst toestaan                            */
    #define schpriouit05hpdoptiopt05SD 172 /* Uitmelden 05 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene05hpd        173 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                   */
    #define schprioin08hpdkar          174 /* Inmelden 08 via Nood- en hulpdienst toestaan                             */
    #define schprioin08hpdopti         175 /* Inmelden 08 via Opticom toestaan                                         */
    #define schprioin08hpdoptiopt08SD  176 /* Inmelden 08 via Nood- en hulpdienst toestaan                             */
    #define schpriouit08hpdkar         177 /* Uitmelden 08 via Nood- en hulpdienst toestaan                            */
    #define schpriouit08hpdoptiopt08SD 178 /* Uitmelden 08 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene08hpd        179 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                   */
    #define schprioin09hpdkar          180 /* Inmelden 09 via Nood- en hulpdienst toestaan                             */
    #define schpriouit09hpdkar         181 /* Uitmelden 09 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene09hpd        182 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                   */
    #define schprioin11hpdkar          183 /* Inmelden 11 via Nood- en hulpdienst toestaan                             */
    #define schprioin11hpdopti         184 /* Inmelden 11 via Opticom toestaan                                         */
    #define schprioin11hpdoptiopt11SD  185 /* Inmelden 11 via Nood- en hulpdienst toestaan                             */
    #define schpriouit11hpdkar         186 /* Uitmelden 11 via Nood- en hulpdienst toestaan                            */
    #define schpriouit11hpdoptiopt11SD 187 /* Uitmelden 11 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene11hpd        188 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                   */
    #define schprioin61hpdkar          189 /* Inmelden 61 via Nood- en hulpdienst toestaan                             */
    #define schpriouit61hpdkar         190 /* Uitmelden 61 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene61hpd        191 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                   */
    #define schprioin62hpdkar          192 /* Inmelden 62 via Nood- en hulpdienst toestaan                             */
    #define schpriouit62hpdkar         193 /* Uitmelden 62 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene62hpd        194 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                   */
    #define schprioin67hpdkar          195 /* Inmelden 67 via Nood- en hulpdienst toestaan                             */
    #define schpriouit67hpdkar         196 /* Uitmelden 67 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene67hpd        197 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                   */
    #define schprioin68hpdkar          198 /* Inmelden 68 via Nood- en hulpdienst toestaan                             */
    #define schpriouit68hpdkar         199 /* Uitmelden 68 via Nood- en hulpdienst toestaan                            */
    #define schchecksirene68hpd        200 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                   */
    #define schhdin02kar               201 /* Inmelden 02 via KAR HD toestaan                                          */
    #define schhduit02kar              202 /* Uitmelden 02 via KAR HD toestaan                                         */
    #define schchecksirene02           203 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                   */
    #define schhdinuit02opt            204 /* In- en uitmelden 02 via Opticom HD toestaan                              */
    #define schhdin03kar               205 /* Inmelden 03 via KAR HD toestaan                                          */
    #define schhduit03kar              206 /* Uitmelden 03 via KAR HD toestaan                                         */
    #define schchecksirene03           207 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                   */
    #define schhdin05kar               208 /* Inmelden 05 via KAR HD toestaan                                          */
    #define schhduit05kar              209 /* Uitmelden 05 via KAR HD toestaan                                         */
    #define schchecksirene05           210 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                   */
    #define schhdinuit05opt            211 /* In- en uitmelden 05 via Opticom HD toestaan                              */
    #define schhdin08kar               212 /* Inmelden 08 via KAR HD toestaan                                          */
    #define schhduit08kar              213 /* Uitmelden 08 via KAR HD toestaan                                         */
    #define schchecksirene08           214 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                   */
    #define schhdinuit08opt            215 /* In- en uitmelden 08 via Opticom HD toestaan                              */
    #define schhdin09kar               216 /* Inmelden 09 via KAR HD toestaan                                          */
    #define schhduit09kar              217 /* Uitmelden 09 via KAR HD toestaan                                         */
    #define schchecksirene09           218 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                   */
    #define schhdin11kar               219 /* Inmelden 11 via KAR HD toestaan                                          */
    #define schhduit11kar              220 /* Uitmelden 11 via KAR HD toestaan                                         */
    #define schchecksirene11           221 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                   */
    #define schhdinuit11opt            222 /* In- en uitmelden 11 via Opticom HD toestaan                              */
    #define schhdin61kar               223 /* Inmelden 61 via KAR HD toestaan                                          */
    #define schhduit61kar              224 /* Uitmelden 61 via KAR HD toestaan                                         */
    #define schchecksirene61           225 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                   */
    #define schhdin62kar               226 /* Inmelden 62 via KAR HD toestaan                                          */
    #define schhduit62kar              227 /* Uitmelden 62 via KAR HD toestaan                                         */
    #define schchecksirene62           228 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                   */
    #define schhdin67kar               229 /* Inmelden 67 via KAR HD toestaan                                          */
    #define schhduit67kar              230 /* Uitmelden 67 via KAR HD toestaan                                         */
    #define schchecksirene67           231 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                   */
    #define schhdin68kar               232 /* Inmelden 68 via KAR HD toestaan                                          */
    #define schhduit68kar              233 /* Uitmelden 68 via KAR HD toestaan                                         */
    #define schchecksirene68           234 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                   */
    #define schpelrwKOP02              235 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02     */
    #define schpelmkKOP02              236 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02         */
    #define schpelaKOP02               237 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02              */
    #define schpkuKOP68_uit68          238 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit     */
    #define schrgadd24_3               239 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2               */
    #define schrgad24_3                240 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2            */
    #define schrgvd24_3                241 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2            */
    #define schrgv                     242 /* RoBuGrover aan of uit                                                    */
    #define schrgv_snel                243 /* RoBuGrover versneld ophogen of verlagen                                  */
    #define schca02                    244 /* Cyclische aanvraag fase 02                                               */
    #define schca03                    245 /* Cyclische aanvraag fase 03                                               */
    #define schca05                    246 /* Cyclische aanvraag fase 05                                               */
    #define schca08                    247 /* Cyclische aanvraag fase 08                                               */
    #define schca09                    248 /* Cyclische aanvraag fase 09                                               */
    #define schca11                    249 /* Cyclische aanvraag fase 11                                               */
    #define schca21                    250 /* Cyclische aanvraag fase 21                                               */
    #define schca22                    251 /* Cyclische aanvraag fase 22                                               */
    #define schca24                    252 /* Cyclische aanvraag fase 24                                               */
    #define schca26                    253 /* Cyclische aanvraag fase 26                                               */
    #define schca28                    254 /* Cyclische aanvraag fase 28                                               */
    #define schca31                    255 /* Cyclische aanvraag fase 31                                               */
    #define schca32                    256 /* Cyclische aanvraag fase 32                                               */
    #define schca33                    257 /* Cyclische aanvraag fase 33                                               */
    #define schca34                    258 /* Cyclische aanvraag fase 34                                               */
    #define schca38                    259 /* Cyclische aanvraag fase 38                                               */
    #define schca61                    260 /* Cyclische aanvraag fase 61                                               */
    #define schca62                    261 /* Cyclische aanvraag fase 62                                               */
    #define schca67                    262 /* Cyclische aanvraag fase 67                                               */
    #define schca68                    263 /* Cyclische aanvraag fase 68                                               */
    #define schca81                    264 /* Cyclische aanvraag fase 81                                               */
    #define schca82                    265 /* Cyclische aanvraag fase 82                                               */
    #define schca84                    266 /* Cyclische aanvraag fase 84                                               */
    #define schvg02_4a                 267 /* Veiligheidsgroen detector 02_4a fase 02                                  */
    #define schvg02_4b                 268 /* Veiligheidsgroen detector 02_4b fase 02                                  */
    #define schvg08_4a                 269 /* Veiligheidsgroen detector 08_4a fase 08                                  */
    #define schvg08_4b                 270 /* Veiligheidsgroen detector 08_4b fase 08                                  */
    #define schvg11_4                  271 /* Veiligheidsgroen detector 11_4 fase 11                                   */
    #define schaltg02                  272 /* Alternatieve realisatie toestaan fase 02                                 */
    #define schaltg03                  273 /* Alternatieve realisatie toestaan fase 03                                 */
    #define schaltg05                  274 /* Alternatieve realisatie toestaan fase 05                                 */
    #define schaltg08                  275 /* Alternatieve realisatie toestaan fase 08                                 */
    #define schaltg09                  276 /* Alternatieve realisatie toestaan fase 09                                 */
    #define schaltg11                  277 /* Alternatieve realisatie toestaan fase 11                                 */
    #define schaltg21                  278 /* Alternatieve realisatie toestaan fase 21                                 */
    #define schaltg22                  279 /* Alternatieve realisatie toestaan fase 22                                 */
    #define schaltg24                  280 /* Alternatieve realisatie toestaan fase 24                                 */
    #define schaltg26                  281 /* Alternatieve realisatie toestaan fase 26                                 */
    #define schaltg28                  282 /* Alternatieve realisatie toestaan fase 28                                 */
    #define schaltg31                  283 /* Alternatieve realisatie toestaan fase 31                                 */
    #define schaltg32                  284 /* Alternatieve realisatie toestaan fase 32                                 */
    #define schaltg33                  285 /* Alternatieve realisatie toestaan fase 33                                 */
    #define schaltg34                  286 /* Alternatieve realisatie toestaan fase 34                                 */
    #define schaltg38                  287 /* Alternatieve realisatie toestaan fase 38                                 */
    #define schaltg61                  288 /* Alternatieve realisatie toestaan fase 61                                 */
    #define schaltg62                  289 /* Alternatieve realisatie toestaan fase 62                                 */
    #define schaltg67                  290 /* Alternatieve realisatie toestaan fase 67                                 */
    #define schaltg68                  291 /* Alternatieve realisatie toestaan fase 68                                 */
    #define schaltg81                  292 /* Alternatieve realisatie toestaan fase 81                                 */
    #define schaltg82                  293 /* Alternatieve realisatie toestaan fase 82                                 */
    #define schaltg84                  294 /* Alternatieve realisatie toestaan fase 84                                 */
    #define schwg02                    295 /* Wachtstand groen fase 02                                                 */
    #define schwg03                    296 /* Wachtstand groen fase 03                                                 */
    #define schwg05                    297 /* Wachtstand groen fase 05                                                 */
    #define schwg08                    298 /* Wachtstand groen fase 08                                                 */
    #define schwg09                    299 /* Wachtstand groen fase 09                                                 */
    #define schwg11                    300 /* Wachtstand groen fase 11                                                 */
    #define schwg21                    301 /* Wachtstand groen fase 21                                                 */
    #define schwg22                    302 /* Wachtstand groen fase 22                                                 */
    #define schwg24                    303 /* Wachtstand groen fase 24                                                 */
    #define schwg26                    304 /* Wachtstand groen fase 26                                                 */
    #define schwg28                    305 /* Wachtstand groen fase 28                                                 */
    #define schwg31                    306 /* Wachtstand groen fase 31                                                 */
    #define schwg32                    307 /* Wachtstand groen fase 32                                                 */
    #define schwg33                    308 /* Wachtstand groen fase 33                                                 */
    #define schwg34                    309 /* Wachtstand groen fase 34                                                 */
    #define schwg38                    310 /* Wachtstand groen fase 38                                                 */
    #define schwg61                    311 /* Wachtstand groen fase 61                                                 */
    #define schwg62                    312 /* Wachtstand groen fase 62                                                 */
    #define schwg67                    313 /* Wachtstand groen fase 67                                                 */
    #define schwg68                    314 /* Wachtstand groen fase 68                                                 */
    #define schwg81                    315 /* Wachtstand groen fase 81                                                 */
    #define schwg82                    316 /* Wachtstand groen fase 82                                                 */
    #define schwg84                    317 /* Wachtstand groen fase 84                                                 */
    #define schwtv21                   318 /* Aansturing wachttijdvoorspeller fase 21 aan of uit                       */
    #define schwtv22                   319 /* Aansturing wachttijdvoorspeller fase 22 aan of uit                       */
    #define schwtv24                   320 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                       */
    #define schwtv26                   321 /* Aansturing wachttijdvoorspeller fase 26 aan of uit                       */
    #define schwtv28                   322 /* Aansturing wachttijdvoorspeller fase 28 aan of uit                       */
    #define schwtv81                   323 /* Aansturing wachttijdvoorspeller fase 81 aan of uit                       */
    #define schwtv82                   324 /* Aansturing wachttijdvoorspeller fase 82 aan of uit                       */
    #define schwtv84                   325 /* Aansturing wachttijdvoorspeller fase 84 aan of uit                       */
    #define schwtvbusbijhd             326 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                 */
    #define schstar                    327 /* Inschakelen star programma                                               */
    #define schisgdebug                328 /* Debug aan/uit voor ISG func (testomgeving)                               */
    #define schlos0262                 329 /* Wel/niet toestaan losse realisatie 02                                    */
    #define schgeennla0262             330 /* Toestaan realiseren fase 02 (naloop naar) mits geen aanvraag naloop      */
    #define schlos0868                 331 /* Wel/niet toestaan losse realisatie 08                                    */
    #define schgeennla0868             332 /* Toestaan realiseren fase 08 (naloop naar) mits geen aanvraag naloop      */
    #define schlos1168                 333 /* Wel/niet toestaan losse realisatie 11                                    */
    #define schgeennla1168             334 /* Toestaan realiseren fase 11 (naloop naar) mits geen aanvraag naloop      */
    #define schlos2221                 335 /* Wel/niet toestaan losse realisatie 22                                    */
    #define schgeennla2221             336 /* Toestaan realiseren fase 22 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3132        337 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3132                 338 /* Wel/niet toestaan losse realisatie 31                                    */
    #define schgeennla3132             339 /* Toestaan realiseren fase 31 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3231        340 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3231                 341 /* Wel/niet toestaan losse realisatie 32                                    */
    #define schgeennla3231             342 /* Toestaan realiseren fase 32 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3334        343 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3334                 344 /* Wel/niet toestaan losse realisatie 33                                    */
    #define schgeennla3334             345 /* Toestaan realiseren fase 33 (naloop naar) mits geen aanvraag naloop      */
    #define schgeenlokgroen3433        346 /* Tegenhouden lokgroen (tegenhouden naloop bij aanvraag voedende richting) */
    #define schlos3433                 347 /* Wel/niet toestaan losse realisatie 34                                    */
    #define schgeennla3433             348 /* Toestaan realiseren fase 34 (naloop naar) mits geen aanvraag naloop      */
    #define schlos8281                 349 /* Wel/niet toestaan losse realisatie 82                                    */
    #define schgeennla8281             350 /* Toestaan realiseren fase 82 (naloop naar) mits geen aanvraag naloop      */
    #define schsneld02_1a              351 /* Aanvraag snel voor detector 02_1a aan of uit                             */
    #define schsneld02_1b              352 /* Aanvraag snel voor detector 02_1b aan of uit                             */
    #define schsneld03_1               353 /* Aanvraag snel voor detector 03_1 aan of uit                              */
    #define schsneld05_1               354 /* Aanvraag snel voor detector 05_1 aan of uit                              */
    #define schsneld08_1a              355 /* Aanvraag snel voor detector 08_1a aan of uit                             */
    #define schsneld08_1b              356 /* Aanvraag snel voor detector 08_1b aan of uit                             */
    #define schsneld09_1               357 /* Aanvraag snel voor detector 09_1 aan of uit                              */
    #define schsneld11_1               358 /* Aanvraag snel voor detector 11_1 aan of uit                              */
    #define schsneld211                359 /* Aanvraag snel voor detector 211 aan of uit                               */
    #define schsneld22_1               360 /* Aanvraag snel voor detector 22_1 aan of uit                              */
    #define schsneld24_1               361 /* Aanvraag snel voor detector 24_1 aan of uit                              */
    #define schsneld261                362 /* Aanvraag snel voor detector 261 aan of uit                               */
    #define schsneld28_1               363 /* Aanvraag snel voor detector 28_1 aan of uit                              */
    #define schsneld61_1               364 /* Aanvraag snel voor detector 61_1 aan of uit                              */
    #define schsneld62_1a              365 /* Aanvraag snel voor detector 62_1a aan of uit                             */
    #define schsneld62_1b              366 /* Aanvraag snel voor detector 62_1b aan of uit                             */
    #define schsneld67_1               367 /* Aanvraag snel voor detector 67_1 aan of uit                              */
    #define schsneld68_1a              368 /* Aanvraag snel voor detector 68_1a aan of uit                             */
    #define schsneld68_1b              369 /* Aanvraag snel voor detector 68_1b aan of uit                             */
    #define schsneld81_1               370 /* Aanvraag snel voor detector 81_1 aan of uit                              */
    #define schsneld82_1               371 /* Aanvraag snel voor detector 82_1 aan of uit                              */
    #define schsneld84_1               372 /* Aanvraag snel voor detector 84_1 aan of uit                              */
    #define SCHMAX1                    373

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
    #define prmpriohst02hpd              231 /* Prioriteit fase 02 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst03hpd              232 /* Prioriteit fase 03 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst05hpd              233 /* Prioriteit fase 05 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst08hpd              234 /* Prioriteit fase 08 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst09hpd              235 /* Prioriteit fase 09 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst11hpd              236 /* Prioriteit fase 11 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst61hpd              237 /* Prioriteit fase 61 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst62hpd              238 /* Prioriteit fase 62 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst67hpd              239 /* Prioriteit fase 67 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmpriohst68hpd              240 /* Prioriteit fase 68 tijdens halfstar regelen Nood- en hulpdienst                                                                */
    #define prmnatxdhst02karbus          241 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03karbus          242 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05karbus          243 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08karbus          244 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09karbus          245 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11karbus          246 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           247 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           248 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61karbus          249 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62karbus          250 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67karbus          251 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68karbus          252 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst02hpd             253 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03hpd             254 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05hpd             255 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08hpd             256 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09hpd             257 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11hpd             258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst61hpd             259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62hpd             260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67hpd             261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68hpd             262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL1_02                263 /* Eerste realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB1PL1_02                264 /* Eerste realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC1PL1_02                265 /* Eerste realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD1PL1_02                266 /* Eerste realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE1PL1_02                267 /* Eerste realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA2PL1_02                268 /* Tweede realisatie PL1 fc02 A-moment                                                                                            */
    #define prmtxB2PL1_02                269 /* Tweede realisatie PL1 fc02 B-moment                                                                                            */
    #define prmtxC2PL1_02                270 /* Tweede realisatie PL1 fc02 C-moment                                                                                            */
    #define prmtxD2PL1_02                271 /* Tweede realisatie PL1 fc02 D-moment                                                                                            */
    #define prmtxE2PL1_02                272 /* Tweede realisatie PL1 fc02 E-moment                                                                                            */
    #define prmtxA1PL1_03                273 /* Eerste realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB1PL1_03                274 /* Eerste realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC1PL1_03                275 /* Eerste realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD1PL1_03                276 /* Eerste realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE1PL1_03                277 /* Eerste realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA2PL1_03                278 /* Tweede realisatie PL1 fc03 A-moment                                                                                            */
    #define prmtxB2PL1_03                279 /* Tweede realisatie PL1 fc03 B-moment                                                                                            */
    #define prmtxC2PL1_03                280 /* Tweede realisatie PL1 fc03 C-moment                                                                                            */
    #define prmtxD2PL1_03                281 /* Tweede realisatie PL1 fc03 D-moment                                                                                            */
    #define prmtxE2PL1_03                282 /* Tweede realisatie PL1 fc03 E-moment                                                                                            */
    #define prmtxA1PL1_05                283 /* Eerste realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB1PL1_05                284 /* Eerste realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC1PL1_05                285 /* Eerste realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD1PL1_05                286 /* Eerste realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE1PL1_05                287 /* Eerste realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA2PL1_05                288 /* Tweede realisatie PL1 fc05 A-moment                                                                                            */
    #define prmtxB2PL1_05                289 /* Tweede realisatie PL1 fc05 B-moment                                                                                            */
    #define prmtxC2PL1_05                290 /* Tweede realisatie PL1 fc05 C-moment                                                                                            */
    #define prmtxD2PL1_05                291 /* Tweede realisatie PL1 fc05 D-moment                                                                                            */
    #define prmtxE2PL1_05                292 /* Tweede realisatie PL1 fc05 E-moment                                                                                            */
    #define prmtxA1PL1_08                293 /* Eerste realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB1PL1_08                294 /* Eerste realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC1PL1_08                295 /* Eerste realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD1PL1_08                296 /* Eerste realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE1PL1_08                297 /* Eerste realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA2PL1_08                298 /* Tweede realisatie PL1 fc08 A-moment                                                                                            */
    #define prmtxB2PL1_08                299 /* Tweede realisatie PL1 fc08 B-moment                                                                                            */
    #define prmtxC2PL1_08                300 /* Tweede realisatie PL1 fc08 C-moment                                                                                            */
    #define prmtxD2PL1_08                301 /* Tweede realisatie PL1 fc08 D-moment                                                                                            */
    #define prmtxE2PL1_08                302 /* Tweede realisatie PL1 fc08 E-moment                                                                                            */
    #define prmtxA1PL1_09                303 /* Eerste realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB1PL1_09                304 /* Eerste realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC1PL1_09                305 /* Eerste realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD1PL1_09                306 /* Eerste realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE1PL1_09                307 /* Eerste realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA2PL1_09                308 /* Tweede realisatie PL1 fc09 A-moment                                                                                            */
    #define prmtxB2PL1_09                309 /* Tweede realisatie PL1 fc09 B-moment                                                                                            */
    #define prmtxC2PL1_09                310 /* Tweede realisatie PL1 fc09 C-moment                                                                                            */
    #define prmtxD2PL1_09                311 /* Tweede realisatie PL1 fc09 D-moment                                                                                            */
    #define prmtxE2PL1_09                312 /* Tweede realisatie PL1 fc09 E-moment                                                                                            */
    #define prmtxA1PL1_11                313 /* Eerste realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB1PL1_11                314 /* Eerste realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC1PL1_11                315 /* Eerste realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD1PL1_11                316 /* Eerste realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE1PL1_11                317 /* Eerste realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA2PL1_11                318 /* Tweede realisatie PL1 fc11 A-moment                                                                                            */
    #define prmtxB2PL1_11                319 /* Tweede realisatie PL1 fc11 B-moment                                                                                            */
    #define prmtxC2PL1_11                320 /* Tweede realisatie PL1 fc11 C-moment                                                                                            */
    #define prmtxD2PL1_11                321 /* Tweede realisatie PL1 fc11 D-moment                                                                                            */
    #define prmtxE2PL1_11                322 /* Tweede realisatie PL1 fc11 E-moment                                                                                            */
    #define prmtxA1PL1_21                323 /* Eerste realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB1PL1_21                324 /* Eerste realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC1PL1_21                325 /* Eerste realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD1PL1_21                326 /* Eerste realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE1PL1_21                327 /* Eerste realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA2PL1_21                328 /* Tweede realisatie PL1 fc21 A-moment                                                                                            */
    #define prmtxB2PL1_21                329 /* Tweede realisatie PL1 fc21 B-moment                                                                                            */
    #define prmtxC2PL1_21                330 /* Tweede realisatie PL1 fc21 C-moment                                                                                            */
    #define prmtxD2PL1_21                331 /* Tweede realisatie PL1 fc21 D-moment                                                                                            */
    #define prmtxE2PL1_21                332 /* Tweede realisatie PL1 fc21 E-moment                                                                                            */
    #define prmtxA1PL1_22                333 /* Eerste realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB1PL1_22                334 /* Eerste realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC1PL1_22                335 /* Eerste realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD1PL1_22                336 /* Eerste realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE1PL1_22                337 /* Eerste realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA2PL1_22                338 /* Tweede realisatie PL1 fc22 A-moment                                                                                            */
    #define prmtxB2PL1_22                339 /* Tweede realisatie PL1 fc22 B-moment                                                                                            */
    #define prmtxC2PL1_22                340 /* Tweede realisatie PL1 fc22 C-moment                                                                                            */
    #define prmtxD2PL1_22                341 /* Tweede realisatie PL1 fc22 D-moment                                                                                            */
    #define prmtxE2PL1_22                342 /* Tweede realisatie PL1 fc22 E-moment                                                                                            */
    #define prmtxA1PL1_24                343 /* Eerste realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB1PL1_24                344 /* Eerste realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC1PL1_24                345 /* Eerste realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD1PL1_24                346 /* Eerste realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE1PL1_24                347 /* Eerste realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA2PL1_24                348 /* Tweede realisatie PL1 fc24 A-moment                                                                                            */
    #define prmtxB2PL1_24                349 /* Tweede realisatie PL1 fc24 B-moment                                                                                            */
    #define prmtxC2PL1_24                350 /* Tweede realisatie PL1 fc24 C-moment                                                                                            */
    #define prmtxD2PL1_24                351 /* Tweede realisatie PL1 fc24 D-moment                                                                                            */
    #define prmtxE2PL1_24                352 /* Tweede realisatie PL1 fc24 E-moment                                                                                            */
    #define prmtxA1PL1_26                353 /* Eerste realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB1PL1_26                354 /* Eerste realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC1PL1_26                355 /* Eerste realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD1PL1_26                356 /* Eerste realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE1PL1_26                357 /* Eerste realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA2PL1_26                358 /* Tweede realisatie PL1 fc26 A-moment                                                                                            */
    #define prmtxB2PL1_26                359 /* Tweede realisatie PL1 fc26 B-moment                                                                                            */
    #define prmtxC2PL1_26                360 /* Tweede realisatie PL1 fc26 C-moment                                                                                            */
    #define prmtxD2PL1_26                361 /* Tweede realisatie PL1 fc26 D-moment                                                                                            */
    #define prmtxE2PL1_26                362 /* Tweede realisatie PL1 fc26 E-moment                                                                                            */
    #define prmtxA1PL1_28                363 /* Eerste realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB1PL1_28                364 /* Eerste realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC1PL1_28                365 /* Eerste realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD1PL1_28                366 /* Eerste realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE1PL1_28                367 /* Eerste realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA2PL1_28                368 /* Tweede realisatie PL1 fc28 A-moment                                                                                            */
    #define prmtxB2PL1_28                369 /* Tweede realisatie PL1 fc28 B-moment                                                                                            */
    #define prmtxC2PL1_28                370 /* Tweede realisatie PL1 fc28 C-moment                                                                                            */
    #define prmtxD2PL1_28                371 /* Tweede realisatie PL1 fc28 D-moment                                                                                            */
    #define prmtxE2PL1_28                372 /* Tweede realisatie PL1 fc28 E-moment                                                                                            */
    #define prmtxA1PL1_31                373 /* Eerste realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB1PL1_31                374 /* Eerste realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC1PL1_31                375 /* Eerste realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD1PL1_31                376 /* Eerste realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE1PL1_31                377 /* Eerste realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA2PL1_31                378 /* Tweede realisatie PL1 fc31 A-moment                                                                                            */
    #define prmtxB2PL1_31                379 /* Tweede realisatie PL1 fc31 B-moment                                                                                            */
    #define prmtxC2PL1_31                380 /* Tweede realisatie PL1 fc31 C-moment                                                                                            */
    #define prmtxD2PL1_31                381 /* Tweede realisatie PL1 fc31 D-moment                                                                                            */
    #define prmtxE2PL1_31                382 /* Tweede realisatie PL1 fc31 E-moment                                                                                            */
    #define prmtxA1PL1_32                383 /* Eerste realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB1PL1_32                384 /* Eerste realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC1PL1_32                385 /* Eerste realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD1PL1_32                386 /* Eerste realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE1PL1_32                387 /* Eerste realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA2PL1_32                388 /* Tweede realisatie PL1 fc32 A-moment                                                                                            */
    #define prmtxB2PL1_32                389 /* Tweede realisatie PL1 fc32 B-moment                                                                                            */
    #define prmtxC2PL1_32                390 /* Tweede realisatie PL1 fc32 C-moment                                                                                            */
    #define prmtxD2PL1_32                391 /* Tweede realisatie PL1 fc32 D-moment                                                                                            */
    #define prmtxE2PL1_32                392 /* Tweede realisatie PL1 fc32 E-moment                                                                                            */
    #define prmtxA1PL1_33                393 /* Eerste realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB1PL1_33                394 /* Eerste realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC1PL1_33                395 /* Eerste realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD1PL1_33                396 /* Eerste realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE1PL1_33                397 /* Eerste realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA2PL1_33                398 /* Tweede realisatie PL1 fc33 A-moment                                                                                            */
    #define prmtxB2PL1_33                399 /* Tweede realisatie PL1 fc33 B-moment                                                                                            */
    #define prmtxC2PL1_33                400 /* Tweede realisatie PL1 fc33 C-moment                                                                                            */
    #define prmtxD2PL1_33                401 /* Tweede realisatie PL1 fc33 D-moment                                                                                            */
    #define prmtxE2PL1_33                402 /* Tweede realisatie PL1 fc33 E-moment                                                                                            */
    #define prmtxA1PL1_34                403 /* Eerste realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB1PL1_34                404 /* Eerste realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC1PL1_34                405 /* Eerste realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD1PL1_34                406 /* Eerste realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE1PL1_34                407 /* Eerste realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA2PL1_34                408 /* Tweede realisatie PL1 fc34 A-moment                                                                                            */
    #define prmtxB2PL1_34                409 /* Tweede realisatie PL1 fc34 B-moment                                                                                            */
    #define prmtxC2PL1_34                410 /* Tweede realisatie PL1 fc34 C-moment                                                                                            */
    #define prmtxD2PL1_34                411 /* Tweede realisatie PL1 fc34 D-moment                                                                                            */
    #define prmtxE2PL1_34                412 /* Tweede realisatie PL1 fc34 E-moment                                                                                            */
    #define prmtxA1PL1_38                413 /* Eerste realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB1PL1_38                414 /* Eerste realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC1PL1_38                415 /* Eerste realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD1PL1_38                416 /* Eerste realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE1PL1_38                417 /* Eerste realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA2PL1_38                418 /* Tweede realisatie PL1 fc38 A-moment                                                                                            */
    #define prmtxB2PL1_38                419 /* Tweede realisatie PL1 fc38 B-moment                                                                                            */
    #define prmtxC2PL1_38                420 /* Tweede realisatie PL1 fc38 C-moment                                                                                            */
    #define prmtxD2PL1_38                421 /* Tweede realisatie PL1 fc38 D-moment                                                                                            */
    #define prmtxE2PL1_38                422 /* Tweede realisatie PL1 fc38 E-moment                                                                                            */
    #define prmtxA1PL1_61                423 /* Eerste realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB1PL1_61                424 /* Eerste realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC1PL1_61                425 /* Eerste realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD1PL1_61                426 /* Eerste realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE1PL1_61                427 /* Eerste realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA2PL1_61                428 /* Tweede realisatie PL1 fc61 A-moment                                                                                            */
    #define prmtxB2PL1_61                429 /* Tweede realisatie PL1 fc61 B-moment                                                                                            */
    #define prmtxC2PL1_61                430 /* Tweede realisatie PL1 fc61 C-moment                                                                                            */
    #define prmtxD2PL1_61                431 /* Tweede realisatie PL1 fc61 D-moment                                                                                            */
    #define prmtxE2PL1_61                432 /* Tweede realisatie PL1 fc61 E-moment                                                                                            */
    #define prmtxA1PL1_62                433 /* Eerste realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB1PL1_62                434 /* Eerste realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC1PL1_62                435 /* Eerste realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD1PL1_62                436 /* Eerste realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE1PL1_62                437 /* Eerste realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA2PL1_62                438 /* Tweede realisatie PL1 fc62 A-moment                                                                                            */
    #define prmtxB2PL1_62                439 /* Tweede realisatie PL1 fc62 B-moment                                                                                            */
    #define prmtxC2PL1_62                440 /* Tweede realisatie PL1 fc62 C-moment                                                                                            */
    #define prmtxD2PL1_62                441 /* Tweede realisatie PL1 fc62 D-moment                                                                                            */
    #define prmtxE2PL1_62                442 /* Tweede realisatie PL1 fc62 E-moment                                                                                            */
    #define prmtxA1PL1_67                443 /* Eerste realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB1PL1_67                444 /* Eerste realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC1PL1_67                445 /* Eerste realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD1PL1_67                446 /* Eerste realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE1PL1_67                447 /* Eerste realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA2PL1_67                448 /* Tweede realisatie PL1 fc67 A-moment                                                                                            */
    #define prmtxB2PL1_67                449 /* Tweede realisatie PL1 fc67 B-moment                                                                                            */
    #define prmtxC2PL1_67                450 /* Tweede realisatie PL1 fc67 C-moment                                                                                            */
    #define prmtxD2PL1_67                451 /* Tweede realisatie PL1 fc67 D-moment                                                                                            */
    #define prmtxE2PL1_67                452 /* Tweede realisatie PL1 fc67 E-moment                                                                                            */
    #define prmtxA1PL1_68                453 /* Eerste realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB1PL1_68                454 /* Eerste realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC1PL1_68                455 /* Eerste realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD1PL1_68                456 /* Eerste realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE1PL1_68                457 /* Eerste realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA2PL1_68                458 /* Tweede realisatie PL1 fc68 A-moment                                                                                            */
    #define prmtxB2PL1_68                459 /* Tweede realisatie PL1 fc68 B-moment                                                                                            */
    #define prmtxC2PL1_68                460 /* Tweede realisatie PL1 fc68 C-moment                                                                                            */
    #define prmtxD2PL1_68                461 /* Tweede realisatie PL1 fc68 D-moment                                                                                            */
    #define prmtxE2PL1_68                462 /* Tweede realisatie PL1 fc68 E-moment                                                                                            */
    #define prmtxA1PL1_81                463 /* Eerste realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB1PL1_81                464 /* Eerste realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC1PL1_81                465 /* Eerste realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD1PL1_81                466 /* Eerste realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE1PL1_81                467 /* Eerste realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA2PL1_81                468 /* Tweede realisatie PL1 fc81 A-moment                                                                                            */
    #define prmtxB2PL1_81                469 /* Tweede realisatie PL1 fc81 B-moment                                                                                            */
    #define prmtxC2PL1_81                470 /* Tweede realisatie PL1 fc81 C-moment                                                                                            */
    #define prmtxD2PL1_81                471 /* Tweede realisatie PL1 fc81 D-moment                                                                                            */
    #define prmtxE2PL1_81                472 /* Tweede realisatie PL1 fc81 E-moment                                                                                            */
    #define prmtxA1PL1_82                473 /* Eerste realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB1PL1_82                474 /* Eerste realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC1PL1_82                475 /* Eerste realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD1PL1_82                476 /* Eerste realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE1PL1_82                477 /* Eerste realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA2PL1_82                478 /* Tweede realisatie PL1 fc82 A-moment                                                                                            */
    #define prmtxB2PL1_82                479 /* Tweede realisatie PL1 fc82 B-moment                                                                                            */
    #define prmtxC2PL1_82                480 /* Tweede realisatie PL1 fc82 C-moment                                                                                            */
    #define prmtxD2PL1_82                481 /* Tweede realisatie PL1 fc82 D-moment                                                                                            */
    #define prmtxE2PL1_82                482 /* Tweede realisatie PL1 fc82 E-moment                                                                                            */
    #define prmtxA1PL1_84                483 /* Eerste realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB1PL1_84                484 /* Eerste realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC1PL1_84                485 /* Eerste realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD1PL1_84                486 /* Eerste realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE1PL1_84                487 /* Eerste realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA2PL1_84                488 /* Tweede realisatie PL1 fc84 A-moment                                                                                            */
    #define prmtxB2PL1_84                489 /* Tweede realisatie PL1 fc84 B-moment                                                                                            */
    #define prmtxC2PL1_84                490 /* Tweede realisatie PL1 fc84 C-moment                                                                                            */
    #define prmtxD2PL1_84                491 /* Tweede realisatie PL1 fc84 D-moment                                                                                            */
    #define prmtxE2PL1_84                492 /* Tweede realisatie PL1 fc84 E-moment                                                                                            */
    #define prmtxA1PL2_02                493 /* Eerste realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB1PL2_02                494 /* Eerste realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC1PL2_02                495 /* Eerste realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD1PL2_02                496 /* Eerste realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE1PL2_02                497 /* Eerste realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA2PL2_02                498 /* Tweede realisatie PL2 fc02 A-moment                                                                                            */
    #define prmtxB2PL2_02                499 /* Tweede realisatie PL2 fc02 B-moment                                                                                            */
    #define prmtxC2PL2_02                500 /* Tweede realisatie PL2 fc02 C-moment                                                                                            */
    #define prmtxD2PL2_02                501 /* Tweede realisatie PL2 fc02 D-moment                                                                                            */
    #define prmtxE2PL2_02                502 /* Tweede realisatie PL2 fc02 E-moment                                                                                            */
    #define prmtxA1PL2_03                503 /* Eerste realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB1PL2_03                504 /* Eerste realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC1PL2_03                505 /* Eerste realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD1PL2_03                506 /* Eerste realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE1PL2_03                507 /* Eerste realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA2PL2_03                508 /* Tweede realisatie PL2 fc03 A-moment                                                                                            */
    #define prmtxB2PL2_03                509 /* Tweede realisatie PL2 fc03 B-moment                                                                                            */
    #define prmtxC2PL2_03                510 /* Tweede realisatie PL2 fc03 C-moment                                                                                            */
    #define prmtxD2PL2_03                511 /* Tweede realisatie PL2 fc03 D-moment                                                                                            */
    #define prmtxE2PL2_03                512 /* Tweede realisatie PL2 fc03 E-moment                                                                                            */
    #define prmtxA1PL2_05                513 /* Eerste realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB1PL2_05                514 /* Eerste realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC1PL2_05                515 /* Eerste realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD1PL2_05                516 /* Eerste realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE1PL2_05                517 /* Eerste realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA2PL2_05                518 /* Tweede realisatie PL2 fc05 A-moment                                                                                            */
    #define prmtxB2PL2_05                519 /* Tweede realisatie PL2 fc05 B-moment                                                                                            */
    #define prmtxC2PL2_05                520 /* Tweede realisatie PL2 fc05 C-moment                                                                                            */
    #define prmtxD2PL2_05                521 /* Tweede realisatie PL2 fc05 D-moment                                                                                            */
    #define prmtxE2PL2_05                522 /* Tweede realisatie PL2 fc05 E-moment                                                                                            */
    #define prmtxA1PL2_08                523 /* Eerste realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB1PL2_08                524 /* Eerste realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC1PL2_08                525 /* Eerste realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD1PL2_08                526 /* Eerste realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE1PL2_08                527 /* Eerste realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA2PL2_08                528 /* Tweede realisatie PL2 fc08 A-moment                                                                                            */
    #define prmtxB2PL2_08                529 /* Tweede realisatie PL2 fc08 B-moment                                                                                            */
    #define prmtxC2PL2_08                530 /* Tweede realisatie PL2 fc08 C-moment                                                                                            */
    #define prmtxD2PL2_08                531 /* Tweede realisatie PL2 fc08 D-moment                                                                                            */
    #define prmtxE2PL2_08                532 /* Tweede realisatie PL2 fc08 E-moment                                                                                            */
    #define prmtxA1PL2_09                533 /* Eerste realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB1PL2_09                534 /* Eerste realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC1PL2_09                535 /* Eerste realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD1PL2_09                536 /* Eerste realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE1PL2_09                537 /* Eerste realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA2PL2_09                538 /* Tweede realisatie PL2 fc09 A-moment                                                                                            */
    #define prmtxB2PL2_09                539 /* Tweede realisatie PL2 fc09 B-moment                                                                                            */
    #define prmtxC2PL2_09                540 /* Tweede realisatie PL2 fc09 C-moment                                                                                            */
    #define prmtxD2PL2_09                541 /* Tweede realisatie PL2 fc09 D-moment                                                                                            */
    #define prmtxE2PL2_09                542 /* Tweede realisatie PL2 fc09 E-moment                                                                                            */
    #define prmtxA1PL2_11                543 /* Eerste realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB1PL2_11                544 /* Eerste realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC1PL2_11                545 /* Eerste realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD1PL2_11                546 /* Eerste realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE1PL2_11                547 /* Eerste realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA2PL2_11                548 /* Tweede realisatie PL2 fc11 A-moment                                                                                            */
    #define prmtxB2PL2_11                549 /* Tweede realisatie PL2 fc11 B-moment                                                                                            */
    #define prmtxC2PL2_11                550 /* Tweede realisatie PL2 fc11 C-moment                                                                                            */
    #define prmtxD2PL2_11                551 /* Tweede realisatie PL2 fc11 D-moment                                                                                            */
    #define prmtxE2PL2_11                552 /* Tweede realisatie PL2 fc11 E-moment                                                                                            */
    #define prmtxA1PL2_21                553 /* Eerste realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB1PL2_21                554 /* Eerste realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC1PL2_21                555 /* Eerste realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD1PL2_21                556 /* Eerste realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE1PL2_21                557 /* Eerste realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA2PL2_21                558 /* Tweede realisatie PL2 fc21 A-moment                                                                                            */
    #define prmtxB2PL2_21                559 /* Tweede realisatie PL2 fc21 B-moment                                                                                            */
    #define prmtxC2PL2_21                560 /* Tweede realisatie PL2 fc21 C-moment                                                                                            */
    #define prmtxD2PL2_21                561 /* Tweede realisatie PL2 fc21 D-moment                                                                                            */
    #define prmtxE2PL2_21                562 /* Tweede realisatie PL2 fc21 E-moment                                                                                            */
    #define prmtxA1PL2_22                563 /* Eerste realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB1PL2_22                564 /* Eerste realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC1PL2_22                565 /* Eerste realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD1PL2_22                566 /* Eerste realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE1PL2_22                567 /* Eerste realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA2PL2_22                568 /* Tweede realisatie PL2 fc22 A-moment                                                                                            */
    #define prmtxB2PL2_22                569 /* Tweede realisatie PL2 fc22 B-moment                                                                                            */
    #define prmtxC2PL2_22                570 /* Tweede realisatie PL2 fc22 C-moment                                                                                            */
    #define prmtxD2PL2_22                571 /* Tweede realisatie PL2 fc22 D-moment                                                                                            */
    #define prmtxE2PL2_22                572 /* Tweede realisatie PL2 fc22 E-moment                                                                                            */
    #define prmtxA1PL2_24                573 /* Eerste realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB1PL2_24                574 /* Eerste realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC1PL2_24                575 /* Eerste realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD1PL2_24                576 /* Eerste realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE1PL2_24                577 /* Eerste realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA2PL2_24                578 /* Tweede realisatie PL2 fc24 A-moment                                                                                            */
    #define prmtxB2PL2_24                579 /* Tweede realisatie PL2 fc24 B-moment                                                                                            */
    #define prmtxC2PL2_24                580 /* Tweede realisatie PL2 fc24 C-moment                                                                                            */
    #define prmtxD2PL2_24                581 /* Tweede realisatie PL2 fc24 D-moment                                                                                            */
    #define prmtxE2PL2_24                582 /* Tweede realisatie PL2 fc24 E-moment                                                                                            */
    #define prmtxA1PL2_26                583 /* Eerste realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB1PL2_26                584 /* Eerste realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC1PL2_26                585 /* Eerste realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD1PL2_26                586 /* Eerste realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE1PL2_26                587 /* Eerste realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA2PL2_26                588 /* Tweede realisatie PL2 fc26 A-moment                                                                                            */
    #define prmtxB2PL2_26                589 /* Tweede realisatie PL2 fc26 B-moment                                                                                            */
    #define prmtxC2PL2_26                590 /* Tweede realisatie PL2 fc26 C-moment                                                                                            */
    #define prmtxD2PL2_26                591 /* Tweede realisatie PL2 fc26 D-moment                                                                                            */
    #define prmtxE2PL2_26                592 /* Tweede realisatie PL2 fc26 E-moment                                                                                            */
    #define prmtxA1PL2_28                593 /* Eerste realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB1PL2_28                594 /* Eerste realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC1PL2_28                595 /* Eerste realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD1PL2_28                596 /* Eerste realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE1PL2_28                597 /* Eerste realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA2PL2_28                598 /* Tweede realisatie PL2 fc28 A-moment                                                                                            */
    #define prmtxB2PL2_28                599 /* Tweede realisatie PL2 fc28 B-moment                                                                                            */
    #define prmtxC2PL2_28                600 /* Tweede realisatie PL2 fc28 C-moment                                                                                            */
    #define prmtxD2PL2_28                601 /* Tweede realisatie PL2 fc28 D-moment                                                                                            */
    #define prmtxE2PL2_28                602 /* Tweede realisatie PL2 fc28 E-moment                                                                                            */
    #define prmtxA1PL2_31                603 /* Eerste realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB1PL2_31                604 /* Eerste realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC1PL2_31                605 /* Eerste realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD1PL2_31                606 /* Eerste realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE1PL2_31                607 /* Eerste realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA2PL2_31                608 /* Tweede realisatie PL2 fc31 A-moment                                                                                            */
    #define prmtxB2PL2_31                609 /* Tweede realisatie PL2 fc31 B-moment                                                                                            */
    #define prmtxC2PL2_31                610 /* Tweede realisatie PL2 fc31 C-moment                                                                                            */
    #define prmtxD2PL2_31                611 /* Tweede realisatie PL2 fc31 D-moment                                                                                            */
    #define prmtxE2PL2_31                612 /* Tweede realisatie PL2 fc31 E-moment                                                                                            */
    #define prmtxA1PL2_32                613 /* Eerste realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB1PL2_32                614 /* Eerste realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC1PL2_32                615 /* Eerste realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD1PL2_32                616 /* Eerste realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE1PL2_32                617 /* Eerste realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA2PL2_32                618 /* Tweede realisatie PL2 fc32 A-moment                                                                                            */
    #define prmtxB2PL2_32                619 /* Tweede realisatie PL2 fc32 B-moment                                                                                            */
    #define prmtxC2PL2_32                620 /* Tweede realisatie PL2 fc32 C-moment                                                                                            */
    #define prmtxD2PL2_32                621 /* Tweede realisatie PL2 fc32 D-moment                                                                                            */
    #define prmtxE2PL2_32                622 /* Tweede realisatie PL2 fc32 E-moment                                                                                            */
    #define prmtxA1PL2_33                623 /* Eerste realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB1PL2_33                624 /* Eerste realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC1PL2_33                625 /* Eerste realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD1PL2_33                626 /* Eerste realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE1PL2_33                627 /* Eerste realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA2PL2_33                628 /* Tweede realisatie PL2 fc33 A-moment                                                                                            */
    #define prmtxB2PL2_33                629 /* Tweede realisatie PL2 fc33 B-moment                                                                                            */
    #define prmtxC2PL2_33                630 /* Tweede realisatie PL2 fc33 C-moment                                                                                            */
    #define prmtxD2PL2_33                631 /* Tweede realisatie PL2 fc33 D-moment                                                                                            */
    #define prmtxE2PL2_33                632 /* Tweede realisatie PL2 fc33 E-moment                                                                                            */
    #define prmtxA1PL2_34                633 /* Eerste realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB1PL2_34                634 /* Eerste realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC1PL2_34                635 /* Eerste realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD1PL2_34                636 /* Eerste realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE1PL2_34                637 /* Eerste realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA2PL2_34                638 /* Tweede realisatie PL2 fc34 A-moment                                                                                            */
    #define prmtxB2PL2_34                639 /* Tweede realisatie PL2 fc34 B-moment                                                                                            */
    #define prmtxC2PL2_34                640 /* Tweede realisatie PL2 fc34 C-moment                                                                                            */
    #define prmtxD2PL2_34                641 /* Tweede realisatie PL2 fc34 D-moment                                                                                            */
    #define prmtxE2PL2_34                642 /* Tweede realisatie PL2 fc34 E-moment                                                                                            */
    #define prmtxA1PL2_38                643 /* Eerste realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB1PL2_38                644 /* Eerste realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC1PL2_38                645 /* Eerste realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD1PL2_38                646 /* Eerste realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE1PL2_38                647 /* Eerste realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA2PL2_38                648 /* Tweede realisatie PL2 fc38 A-moment                                                                                            */
    #define prmtxB2PL2_38                649 /* Tweede realisatie PL2 fc38 B-moment                                                                                            */
    #define prmtxC2PL2_38                650 /* Tweede realisatie PL2 fc38 C-moment                                                                                            */
    #define prmtxD2PL2_38                651 /* Tweede realisatie PL2 fc38 D-moment                                                                                            */
    #define prmtxE2PL2_38                652 /* Tweede realisatie PL2 fc38 E-moment                                                                                            */
    #define prmtxA1PL2_61                653 /* Eerste realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB1PL2_61                654 /* Eerste realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC1PL2_61                655 /* Eerste realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD1PL2_61                656 /* Eerste realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE1PL2_61                657 /* Eerste realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA2PL2_61                658 /* Tweede realisatie PL2 fc61 A-moment                                                                                            */
    #define prmtxB2PL2_61                659 /* Tweede realisatie PL2 fc61 B-moment                                                                                            */
    #define prmtxC2PL2_61                660 /* Tweede realisatie PL2 fc61 C-moment                                                                                            */
    #define prmtxD2PL2_61                661 /* Tweede realisatie PL2 fc61 D-moment                                                                                            */
    #define prmtxE2PL2_61                662 /* Tweede realisatie PL2 fc61 E-moment                                                                                            */
    #define prmtxA1PL2_62                663 /* Eerste realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB1PL2_62                664 /* Eerste realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC1PL2_62                665 /* Eerste realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD1PL2_62                666 /* Eerste realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE1PL2_62                667 /* Eerste realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA2PL2_62                668 /* Tweede realisatie PL2 fc62 A-moment                                                                                            */
    #define prmtxB2PL2_62                669 /* Tweede realisatie PL2 fc62 B-moment                                                                                            */
    #define prmtxC2PL2_62                670 /* Tweede realisatie PL2 fc62 C-moment                                                                                            */
    #define prmtxD2PL2_62                671 /* Tweede realisatie PL2 fc62 D-moment                                                                                            */
    #define prmtxE2PL2_62                672 /* Tweede realisatie PL2 fc62 E-moment                                                                                            */
    #define prmtxA1PL2_67                673 /* Eerste realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB1PL2_67                674 /* Eerste realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC1PL2_67                675 /* Eerste realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD1PL2_67                676 /* Eerste realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE1PL2_67                677 /* Eerste realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA2PL2_67                678 /* Tweede realisatie PL2 fc67 A-moment                                                                                            */
    #define prmtxB2PL2_67                679 /* Tweede realisatie PL2 fc67 B-moment                                                                                            */
    #define prmtxC2PL2_67                680 /* Tweede realisatie PL2 fc67 C-moment                                                                                            */
    #define prmtxD2PL2_67                681 /* Tweede realisatie PL2 fc67 D-moment                                                                                            */
    #define prmtxE2PL2_67                682 /* Tweede realisatie PL2 fc67 E-moment                                                                                            */
    #define prmtxA1PL2_68                683 /* Eerste realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB1PL2_68                684 /* Eerste realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC1PL2_68                685 /* Eerste realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD1PL2_68                686 /* Eerste realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE1PL2_68                687 /* Eerste realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA2PL2_68                688 /* Tweede realisatie PL2 fc68 A-moment                                                                                            */
    #define prmtxB2PL2_68                689 /* Tweede realisatie PL2 fc68 B-moment                                                                                            */
    #define prmtxC2PL2_68                690 /* Tweede realisatie PL2 fc68 C-moment                                                                                            */
    #define prmtxD2PL2_68                691 /* Tweede realisatie PL2 fc68 D-moment                                                                                            */
    #define prmtxE2PL2_68                692 /* Tweede realisatie PL2 fc68 E-moment                                                                                            */
    #define prmtxA1PL2_81                693 /* Eerste realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB1PL2_81                694 /* Eerste realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC1PL2_81                695 /* Eerste realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD1PL2_81                696 /* Eerste realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE1PL2_81                697 /* Eerste realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA2PL2_81                698 /* Tweede realisatie PL2 fc81 A-moment                                                                                            */
    #define prmtxB2PL2_81                699 /* Tweede realisatie PL2 fc81 B-moment                                                                                            */
    #define prmtxC2PL2_81                700 /* Tweede realisatie PL2 fc81 C-moment                                                                                            */
    #define prmtxD2PL2_81                701 /* Tweede realisatie PL2 fc81 D-moment                                                                                            */
    #define prmtxE2PL2_81                702 /* Tweede realisatie PL2 fc81 E-moment                                                                                            */
    #define prmtxA1PL2_82                703 /* Eerste realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB1PL2_82                704 /* Eerste realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC1PL2_82                705 /* Eerste realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD1PL2_82                706 /* Eerste realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE1PL2_82                707 /* Eerste realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA2PL2_82                708 /* Tweede realisatie PL2 fc82 A-moment                                                                                            */
    #define prmtxB2PL2_82                709 /* Tweede realisatie PL2 fc82 B-moment                                                                                            */
    #define prmtxC2PL2_82                710 /* Tweede realisatie PL2 fc82 C-moment                                                                                            */
    #define prmtxD2PL2_82                711 /* Tweede realisatie PL2 fc82 D-moment                                                                                            */
    #define prmtxE2PL2_82                712 /* Tweede realisatie PL2 fc82 E-moment                                                                                            */
    #define prmtxA1PL2_84                713 /* Eerste realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB1PL2_84                714 /* Eerste realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC1PL2_84                715 /* Eerste realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD1PL2_84                716 /* Eerste realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE1PL2_84                717 /* Eerste realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA2PL2_84                718 /* Tweede realisatie PL2 fc84 A-moment                                                                                            */
    #define prmtxB2PL2_84                719 /* Tweede realisatie PL2 fc84 B-moment                                                                                            */
    #define prmtxC2PL2_84                720 /* Tweede realisatie PL2 fc84 C-moment                                                                                            */
    #define prmtxD2PL2_84                721 /* Tweede realisatie PL2 fc84 D-moment                                                                                            */
    #define prmtxE2PL2_84                722 /* Tweede realisatie PL2 fc84 E-moment                                                                                            */
    #define prmtxA1PL3_02                723 /* Eerste realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB1PL3_02                724 /* Eerste realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC1PL3_02                725 /* Eerste realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD1PL3_02                726 /* Eerste realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE1PL3_02                727 /* Eerste realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA2PL3_02                728 /* Tweede realisatie PL3 fc02 A-moment                                                                                            */
    #define prmtxB2PL3_02                729 /* Tweede realisatie PL3 fc02 B-moment                                                                                            */
    #define prmtxC2PL3_02                730 /* Tweede realisatie PL3 fc02 C-moment                                                                                            */
    #define prmtxD2PL3_02                731 /* Tweede realisatie PL3 fc02 D-moment                                                                                            */
    #define prmtxE2PL3_02                732 /* Tweede realisatie PL3 fc02 E-moment                                                                                            */
    #define prmtxA1PL3_03                733 /* Eerste realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB1PL3_03                734 /* Eerste realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC1PL3_03                735 /* Eerste realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD1PL3_03                736 /* Eerste realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE1PL3_03                737 /* Eerste realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA2PL3_03                738 /* Tweede realisatie PL3 fc03 A-moment                                                                                            */
    #define prmtxB2PL3_03                739 /* Tweede realisatie PL3 fc03 B-moment                                                                                            */
    #define prmtxC2PL3_03                740 /* Tweede realisatie PL3 fc03 C-moment                                                                                            */
    #define prmtxD2PL3_03                741 /* Tweede realisatie PL3 fc03 D-moment                                                                                            */
    #define prmtxE2PL3_03                742 /* Tweede realisatie PL3 fc03 E-moment                                                                                            */
    #define prmtxA1PL3_05                743 /* Eerste realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB1PL3_05                744 /* Eerste realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC1PL3_05                745 /* Eerste realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD1PL3_05                746 /* Eerste realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE1PL3_05                747 /* Eerste realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA2PL3_05                748 /* Tweede realisatie PL3 fc05 A-moment                                                                                            */
    #define prmtxB2PL3_05                749 /* Tweede realisatie PL3 fc05 B-moment                                                                                            */
    #define prmtxC2PL3_05                750 /* Tweede realisatie PL3 fc05 C-moment                                                                                            */
    #define prmtxD2PL3_05                751 /* Tweede realisatie PL3 fc05 D-moment                                                                                            */
    #define prmtxE2PL3_05                752 /* Tweede realisatie PL3 fc05 E-moment                                                                                            */
    #define prmtxA1PL3_08                753 /* Eerste realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB1PL3_08                754 /* Eerste realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC1PL3_08                755 /* Eerste realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD1PL3_08                756 /* Eerste realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE1PL3_08                757 /* Eerste realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA2PL3_08                758 /* Tweede realisatie PL3 fc08 A-moment                                                                                            */
    #define prmtxB2PL3_08                759 /* Tweede realisatie PL3 fc08 B-moment                                                                                            */
    #define prmtxC2PL3_08                760 /* Tweede realisatie PL3 fc08 C-moment                                                                                            */
    #define prmtxD2PL3_08                761 /* Tweede realisatie PL3 fc08 D-moment                                                                                            */
    #define prmtxE2PL3_08                762 /* Tweede realisatie PL3 fc08 E-moment                                                                                            */
    #define prmtxA1PL3_09                763 /* Eerste realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB1PL3_09                764 /* Eerste realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC1PL3_09                765 /* Eerste realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD1PL3_09                766 /* Eerste realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE1PL3_09                767 /* Eerste realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA2PL3_09                768 /* Tweede realisatie PL3 fc09 A-moment                                                                                            */
    #define prmtxB2PL3_09                769 /* Tweede realisatie PL3 fc09 B-moment                                                                                            */
    #define prmtxC2PL3_09                770 /* Tweede realisatie PL3 fc09 C-moment                                                                                            */
    #define prmtxD2PL3_09                771 /* Tweede realisatie PL3 fc09 D-moment                                                                                            */
    #define prmtxE2PL3_09                772 /* Tweede realisatie PL3 fc09 E-moment                                                                                            */
    #define prmtxA1PL3_11                773 /* Eerste realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB1PL3_11                774 /* Eerste realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC1PL3_11                775 /* Eerste realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD1PL3_11                776 /* Eerste realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE1PL3_11                777 /* Eerste realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA2PL3_11                778 /* Tweede realisatie PL3 fc11 A-moment                                                                                            */
    #define prmtxB2PL3_11                779 /* Tweede realisatie PL3 fc11 B-moment                                                                                            */
    #define prmtxC2PL3_11                780 /* Tweede realisatie PL3 fc11 C-moment                                                                                            */
    #define prmtxD2PL3_11                781 /* Tweede realisatie PL3 fc11 D-moment                                                                                            */
    #define prmtxE2PL3_11                782 /* Tweede realisatie PL3 fc11 E-moment                                                                                            */
    #define prmtxA1PL3_21                783 /* Eerste realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB1PL3_21                784 /* Eerste realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC1PL3_21                785 /* Eerste realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD1PL3_21                786 /* Eerste realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE1PL3_21                787 /* Eerste realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA2PL3_21                788 /* Tweede realisatie PL3 fc21 A-moment                                                                                            */
    #define prmtxB2PL3_21                789 /* Tweede realisatie PL3 fc21 B-moment                                                                                            */
    #define prmtxC2PL3_21                790 /* Tweede realisatie PL3 fc21 C-moment                                                                                            */
    #define prmtxD2PL3_21                791 /* Tweede realisatie PL3 fc21 D-moment                                                                                            */
    #define prmtxE2PL3_21                792 /* Tweede realisatie PL3 fc21 E-moment                                                                                            */
    #define prmtxA1PL3_22                793 /* Eerste realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB1PL3_22                794 /* Eerste realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC1PL3_22                795 /* Eerste realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD1PL3_22                796 /* Eerste realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE1PL3_22                797 /* Eerste realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA2PL3_22                798 /* Tweede realisatie PL3 fc22 A-moment                                                                                            */
    #define prmtxB2PL3_22                799 /* Tweede realisatie PL3 fc22 B-moment                                                                                            */
    #define prmtxC2PL3_22                800 /* Tweede realisatie PL3 fc22 C-moment                                                                                            */
    #define prmtxD2PL3_22                801 /* Tweede realisatie PL3 fc22 D-moment                                                                                            */
    #define prmtxE2PL3_22                802 /* Tweede realisatie PL3 fc22 E-moment                                                                                            */
    #define prmtxA1PL3_24                803 /* Eerste realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB1PL3_24                804 /* Eerste realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC1PL3_24                805 /* Eerste realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD1PL3_24                806 /* Eerste realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE1PL3_24                807 /* Eerste realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA2PL3_24                808 /* Tweede realisatie PL3 fc24 A-moment                                                                                            */
    #define prmtxB2PL3_24                809 /* Tweede realisatie PL3 fc24 B-moment                                                                                            */
    #define prmtxC2PL3_24                810 /* Tweede realisatie PL3 fc24 C-moment                                                                                            */
    #define prmtxD2PL3_24                811 /* Tweede realisatie PL3 fc24 D-moment                                                                                            */
    #define prmtxE2PL3_24                812 /* Tweede realisatie PL3 fc24 E-moment                                                                                            */
    #define prmtxA1PL3_26                813 /* Eerste realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB1PL3_26                814 /* Eerste realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC1PL3_26                815 /* Eerste realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD1PL3_26                816 /* Eerste realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE1PL3_26                817 /* Eerste realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA2PL3_26                818 /* Tweede realisatie PL3 fc26 A-moment                                                                                            */
    #define prmtxB2PL3_26                819 /* Tweede realisatie PL3 fc26 B-moment                                                                                            */
    #define prmtxC2PL3_26                820 /* Tweede realisatie PL3 fc26 C-moment                                                                                            */
    #define prmtxD2PL3_26                821 /* Tweede realisatie PL3 fc26 D-moment                                                                                            */
    #define prmtxE2PL3_26                822 /* Tweede realisatie PL3 fc26 E-moment                                                                                            */
    #define prmtxA1PL3_28                823 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                824 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                825 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                826 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                827 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                828 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                829 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                830 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                831 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                832 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_31                833 /* Eerste realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB1PL3_31                834 /* Eerste realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC1PL3_31                835 /* Eerste realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD1PL3_31                836 /* Eerste realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE1PL3_31                837 /* Eerste realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA2PL3_31                838 /* Tweede realisatie PL3 fc31 A-moment                                                                                            */
    #define prmtxB2PL3_31                839 /* Tweede realisatie PL3 fc31 B-moment                                                                                            */
    #define prmtxC2PL3_31                840 /* Tweede realisatie PL3 fc31 C-moment                                                                                            */
    #define prmtxD2PL3_31                841 /* Tweede realisatie PL3 fc31 D-moment                                                                                            */
    #define prmtxE2PL3_31                842 /* Tweede realisatie PL3 fc31 E-moment                                                                                            */
    #define prmtxA1PL3_32                843 /* Eerste realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB1PL3_32                844 /* Eerste realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC1PL3_32                845 /* Eerste realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD1PL3_32                846 /* Eerste realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE1PL3_32                847 /* Eerste realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA2PL3_32                848 /* Tweede realisatie PL3 fc32 A-moment                                                                                            */
    #define prmtxB2PL3_32                849 /* Tweede realisatie PL3 fc32 B-moment                                                                                            */
    #define prmtxC2PL3_32                850 /* Tweede realisatie PL3 fc32 C-moment                                                                                            */
    #define prmtxD2PL3_32                851 /* Tweede realisatie PL3 fc32 D-moment                                                                                            */
    #define prmtxE2PL3_32                852 /* Tweede realisatie PL3 fc32 E-moment                                                                                            */
    #define prmtxA1PL3_33                853 /* Eerste realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB1PL3_33                854 /* Eerste realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC1PL3_33                855 /* Eerste realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD1PL3_33                856 /* Eerste realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE1PL3_33                857 /* Eerste realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA2PL3_33                858 /* Tweede realisatie PL3 fc33 A-moment                                                                                            */
    #define prmtxB2PL3_33                859 /* Tweede realisatie PL3 fc33 B-moment                                                                                            */
    #define prmtxC2PL3_33                860 /* Tweede realisatie PL3 fc33 C-moment                                                                                            */
    #define prmtxD2PL3_33                861 /* Tweede realisatie PL3 fc33 D-moment                                                                                            */
    #define prmtxE2PL3_33                862 /* Tweede realisatie PL3 fc33 E-moment                                                                                            */
    #define prmtxA1PL3_34                863 /* Eerste realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB1PL3_34                864 /* Eerste realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC1PL3_34                865 /* Eerste realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD1PL3_34                866 /* Eerste realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE1PL3_34                867 /* Eerste realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA2PL3_34                868 /* Tweede realisatie PL3 fc34 A-moment                                                                                            */
    #define prmtxB2PL3_34                869 /* Tweede realisatie PL3 fc34 B-moment                                                                                            */
    #define prmtxC2PL3_34                870 /* Tweede realisatie PL3 fc34 C-moment                                                                                            */
    #define prmtxD2PL3_34                871 /* Tweede realisatie PL3 fc34 D-moment                                                                                            */
    #define prmtxE2PL3_34                872 /* Tweede realisatie PL3 fc34 E-moment                                                                                            */
    #define prmtxA1PL3_38                873 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                874 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                875 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                876 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                877 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                878 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                879 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                880 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                881 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                882 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                883 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                884 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                885 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                886 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                887 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                888 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                889 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                890 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                891 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                892 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA1PL3_62                893 /* Eerste realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB1PL3_62                894 /* Eerste realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC1PL3_62                895 /* Eerste realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD1PL3_62                896 /* Eerste realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE1PL3_62                897 /* Eerste realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA2PL3_62                898 /* Tweede realisatie PL3 fc62 A-moment                                                                                            */
    #define prmtxB2PL3_62                899 /* Tweede realisatie PL3 fc62 B-moment                                                                                            */
    #define prmtxC2PL3_62                900 /* Tweede realisatie PL3 fc62 C-moment                                                                                            */
    #define prmtxD2PL3_62                901 /* Tweede realisatie PL3 fc62 D-moment                                                                                            */
    #define prmtxE2PL3_62                902 /* Tweede realisatie PL3 fc62 E-moment                                                                                            */
    #define prmtxA1PL3_67                903 /* Eerste realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB1PL3_67                904 /* Eerste realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC1PL3_67                905 /* Eerste realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD1PL3_67                906 /* Eerste realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE1PL3_67                907 /* Eerste realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA2PL3_67                908 /* Tweede realisatie PL3 fc67 A-moment                                                                                            */
    #define prmtxB2PL3_67                909 /* Tweede realisatie PL3 fc67 B-moment                                                                                            */
    #define prmtxC2PL3_67                910 /* Tweede realisatie PL3 fc67 C-moment                                                                                            */
    #define prmtxD2PL3_67                911 /* Tweede realisatie PL3 fc67 D-moment                                                                                            */
    #define prmtxE2PL3_67                912 /* Tweede realisatie PL3 fc67 E-moment                                                                                            */
    #define prmtxA1PL3_68                913 /* Eerste realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB1PL3_68                914 /* Eerste realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC1PL3_68                915 /* Eerste realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD1PL3_68                916 /* Eerste realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE1PL3_68                917 /* Eerste realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA2PL3_68                918 /* Tweede realisatie PL3 fc68 A-moment                                                                                            */
    #define prmtxB2PL3_68                919 /* Tweede realisatie PL3 fc68 B-moment                                                                                            */
    #define prmtxC2PL3_68                920 /* Tweede realisatie PL3 fc68 C-moment                                                                                            */
    #define prmtxD2PL3_68                921 /* Tweede realisatie PL3 fc68 D-moment                                                                                            */
    #define prmtxE2PL3_68                922 /* Tweede realisatie PL3 fc68 E-moment                                                                                            */
    #define prmtxA1PL3_81                923 /* Eerste realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB1PL3_81                924 /* Eerste realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC1PL3_81                925 /* Eerste realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD1PL3_81                926 /* Eerste realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE1PL3_81                927 /* Eerste realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA2PL3_81                928 /* Tweede realisatie PL3 fc81 A-moment                                                                                            */
    #define prmtxB2PL3_81                929 /* Tweede realisatie PL3 fc81 B-moment                                                                                            */
    #define prmtxC2PL3_81                930 /* Tweede realisatie PL3 fc81 C-moment                                                                                            */
    #define prmtxD2PL3_81                931 /* Tweede realisatie PL3 fc81 D-moment                                                                                            */
    #define prmtxE2PL3_81                932 /* Tweede realisatie PL3 fc81 E-moment                                                                                            */
    #define prmtxA1PL3_82                933 /* Eerste realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB1PL3_82                934 /* Eerste realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC1PL3_82                935 /* Eerste realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD1PL3_82                936 /* Eerste realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE1PL3_82                937 /* Eerste realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA2PL3_82                938 /* Tweede realisatie PL3 fc82 A-moment                                                                                            */
    #define prmtxB2PL3_82                939 /* Tweede realisatie PL3 fc82 B-moment                                                                                            */
    #define prmtxC2PL3_82                940 /* Tweede realisatie PL3 fc82 C-moment                                                                                            */
    #define prmtxD2PL3_82                941 /* Tweede realisatie PL3 fc82 D-moment                                                                                            */
    #define prmtxE2PL3_82                942 /* Tweede realisatie PL3 fc82 E-moment                                                                                            */
    #define prmtxA1PL3_84                943 /* Eerste realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB1PL3_84                944 /* Eerste realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC1PL3_84                945 /* Eerste realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD1PL3_84                946 /* Eerste realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE1PL3_84                947 /* Eerste realisatie PL3 fc84 E-moment                                                                                            */
    #define prmtxA2PL3_84                948 /* Tweede realisatie PL3 fc84 A-moment                                                                                            */
    #define prmtxB2PL3_84                949 /* Tweede realisatie PL3 fc84 B-moment                                                                                            */
    #define prmtxC2PL3_84                950 /* Tweede realisatie PL3 fc84 C-moment                                                                                            */
    #define prmtxD2PL3_84                951 /* Tweede realisatie PL3 fc84 D-moment                                                                                            */
    #define prmtxE2PL3_84                952 /* Tweede realisatie PL3 fc84 E-moment                                                                                            */
    #define prmrstotxa                   953 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmplxperdef                 954 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   955 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   956 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   957 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   958 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   959 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   960 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   961 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                962 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                963 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                964 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                965 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                966 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                967 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                968 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                969 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                970 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                971 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                972 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                973 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                974 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                975 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                976 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                977 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                978 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                979 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                980 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                981 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                982 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                983 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      984 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      985 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      986 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      987 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      988 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      989 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      990 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      991 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      992 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      993 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      994 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      995 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      996 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      997 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      998 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      999 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                     1000 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                     1001 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                     1002 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                     1003 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                     1004 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                     1005 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                     1006 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                   1007 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                   1008 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                   1009 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                   1010 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                   1011 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                   1012 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                   1013 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                   1014 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                   1015 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                   1016 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                   1017 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                   1018 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                   1019 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                   1020 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                   1021 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                   1022 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                   1023 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                   1024 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                   1025 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                   1026 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                   1027 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                   1028 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                   1029 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg         1030 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat          1031 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02karbus   1032 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02karbus    1033 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02karbus    1034 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03karbus   1035 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03karbus    1036 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03karbus    1037 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05karbus   1038 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05karbus    1039 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05karbus    1040 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08karbus   1041 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08karbus    1042 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08karbus    1043 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09karbus   1044 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09karbus    1045 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09karbus    1046 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11karbus   1047 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11karbus    1048 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11karbus    1049 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61karbus   1050 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61karbus    1051 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61karbus    1052 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62karbus   1053 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62karbus    1054 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62karbus    1055 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67karbus   1056 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67karbus    1057 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67karbus    1058 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68karbus   1059 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68karbus    1060 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68karbus    1061 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                     1062 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                   1063 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                   1064 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                   1065 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                   1066 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                   1067 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                  1068 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                 1069 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                  1070 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                   1071 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                   1072 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                   1073 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                  1074 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                 1075 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                  1076 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                   1077 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                   1078 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                   1079 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                  1080 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                 1081 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                  1082 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                   1083 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                   1084 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                   1085 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                  1086 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                 1087 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                  1088 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                   1089 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                   1090 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                   1091 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                  1092 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                 1093 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                  1094 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                   1095 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                   1096 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                   1097 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                  1098 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                 1099 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                  1100 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                   1101 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                   1102 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                   1103 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                  1104 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                 1105 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                  1106 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                   1107 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                   1108 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                   1109 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                  1110 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                 1111 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                  1112 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                   1113 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                   1114 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                   1115 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                  1116 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                 1117 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                  1118 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                   1119 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                   1120 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                   1121 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                  1122 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                 1123 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                  1124 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                   1125 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                   1126 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                   1127 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                  1128 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                 1129 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                  1130 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                   1131 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                   1132 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                   1133 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                   1134 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                   1135 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                   1136 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                   1137 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                   1138 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                   1139 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                   1140 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                   1141 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                   1142 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                   1143 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                  1144 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                 1145 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                  1146 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                   1147 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                   1148 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                   1149 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                  1150 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                 1151 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                  1152 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                   1153 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                   1154 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                   1155 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                  1156 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                 1157 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                  1158 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                   1159 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                   1160 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                   1161 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                  1162 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                 1163 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                  1164 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                   1165 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                   1166 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                   1167 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                  1168 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                 1169 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                  1170 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                   1171 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                   1172 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                   1173 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                  1174 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                 1175 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                  1176 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                   1177 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                   1178 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                   1179 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                  1180 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                 1181 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                  1182 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus              1183 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus             1184 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus              1185 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus              1186 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus          1187 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus           1188 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus             1189 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03karbus              1190 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03karbus             1191 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03karbus              1192 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03karbus              1193 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03karbus          1194 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03karbus           1195 /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    #define prmprio03karbus             1196 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05karbus              1197 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05karbus             1198 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05karbus              1199 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05karbus              1200 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05karbus          1201 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05karbus           1202 /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    #define prmprio05karbus             1203 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08karbus              1204 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08karbus             1205 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08karbus              1206 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08karbus              1207 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08karbus          1208 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08karbus           1209 /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    #define prmprio08karbus             1210 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09karbus              1211 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09karbus             1212 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09karbus              1213 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09karbus              1214 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09karbus          1215 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09karbus           1216 /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    #define prmprio09karbus             1217 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11karbus              1218 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11karbus             1219 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11karbus              1220 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11karbus              1221 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11karbus          1222 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11karbus           1223 /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    #define prmprio11karbus             1224 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmftsblok22fietsfiets      1225 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets 1226 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets     1227 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets               1228 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets              1229 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets               1230 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets               1231 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets           1232 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets              1233 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets      1234 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets 1235 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminwt28fietsfiets     1236 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets               1237 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets              1238 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets               1239 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets               1240 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets           1241 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets              1242 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto61karbus              1243 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61karbus             1244 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61karbus              1245 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61karbus              1246 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61karbus          1247 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61karbus           1248 /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    #define prmprio61karbus             1249 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62karbus              1250 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62karbus             1251 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62karbus              1252 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62karbus              1253 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62karbus          1254 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62karbus           1255 /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    #define prmprio62karbus             1256 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67karbus              1257 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67karbus             1258 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67karbus              1259 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67karbus              1260 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67karbus          1261 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67karbus           1262 /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    #define prmprio67karbus             1263 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68karbus              1264 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68karbus             1265 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68karbus              1266 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68karbus              1267 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68karbus          1268 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68karbus           1269 /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    #define prmprio68karbus             1270 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto02hpd                 1271 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02hpd                1272 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02hpd                 1273 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02hpd                 1274 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02hpd             1275 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02hpd              1276 /* Voertuigcategorie DSI voor prio ingreep 02hpd                                                                                  */
    #define prmprio02hpd                1277 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03hpd                 1278 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03hpd                1279 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03hpd                 1280 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03hpd                 1281 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03hpd             1282 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03hpd              1283 /* Voertuigcategorie DSI voor prio ingreep 03hpd                                                                                  */
    #define prmprio03hpd                1284 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05hpd                 1285 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05hpd                1286 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05hpd                 1287 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05hpd                 1288 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05hpd             1289 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05hpd              1290 /* Voertuigcategorie DSI voor prio ingreep 05hpd                                                                                  */
    #define prmprio05hpd                1291 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08hpd                 1292 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08hpd                1293 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08hpd                 1294 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08hpd                 1295 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08hpd             1296 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08hpd              1297 /* Voertuigcategorie DSI voor prio ingreep 08hpd                                                                                  */
    #define prmprio08hpd                1298 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09hpd                 1299 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09hpd                1300 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09hpd                 1301 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09hpd                 1302 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09hpd             1303 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09hpd              1304 /* Voertuigcategorie DSI voor prio ingreep 09hpd                                                                                  */
    #define prmprio09hpd                1305 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11hpd                 1306 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11hpd                1307 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11hpd                 1308 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11hpd                 1309 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11hpd             1310 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11hpd              1311 /* Voertuigcategorie DSI voor prio ingreep 11hpd                                                                                  */
    #define prmprio11hpd                1312 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto61hpd                 1313 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61hpd                1314 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61hpd                 1315 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61hpd                 1316 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61hpd             1317 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61hpd              1318 /* Voertuigcategorie DSI voor prio ingreep 61hpd                                                                                  */
    #define prmprio61hpd                1319 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62hpd                 1320 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62hpd                1321 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62hpd                 1322 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62hpd                 1323 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62hpd             1324 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62hpd              1325 /* Voertuigcategorie DSI voor prio ingreep 62hpd                                                                                  */
    #define prmprio62hpd                1326 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67hpd                 1327 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67hpd                1328 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67hpd                 1329 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67hpd                 1330 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67hpd             1331 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67hpd              1332 /* Voertuigcategorie DSI voor prio ingreep 67hpd                                                                                  */
    #define prmprio67hpd                1333 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68hpd                 1334 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68hpd                1335 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68hpd                 1336 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68hpd                 1337 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68hpd             1338 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68hpd              1339 /* Voertuigcategorie DSI voor prio ingreep 68hpd                                                                                  */
    #define prmprio68hpd                1340 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02                 1341 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1342 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1343 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1344 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02              1345 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmpriohd03                 1346 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1347 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1348 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1349 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03              1350 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmpriohd05                 1351 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1352 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1353 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1354 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              1355 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmpriohd08                 1356 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1357 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1358 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1359 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              1360 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmpriohd09                 1361 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1362 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1363 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1364 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              1365 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmpriohd11                 1366 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1367 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1368 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1369 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              1370 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmpriohd61                 1371 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1372 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1373 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1374 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              1375 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmpriohd62                 1376 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1377 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1378 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1379 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              1380 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmpriohd67                 1381 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1382 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1383 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1384 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              1385 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmpriohd68                 1386 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1387 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1388 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1389 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              1390 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmkarsg02                  1391 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1392 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1393 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1394 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1395 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1396 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1397 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1398 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1399 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1400 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1401 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1402 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1403 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1404 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1405 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1406 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1407 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1408 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1409 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1410 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1411 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1412 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1413 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1414 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1415 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1416 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1417 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1418 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1419 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1420 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1421 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1422 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1423 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1424 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1425 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1426 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1427 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1428 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1429 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1430 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1431 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1432 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1433 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1434 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1435 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1436 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1437 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1438 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmvg1_02                   1439 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1440 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1441 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1442 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1443 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1444 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1445 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1446 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1447 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1448 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1449 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1450 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1451 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1452 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1453 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1454 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1455 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1456 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1457 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1458 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1459 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1460 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1461 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1462 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1463 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1464 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1465 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1466 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1467 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1468 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1469 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1470 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1471 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1472 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1473 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1474 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1475 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1476 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1477 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1478 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1479 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1480 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1481 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1482 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1483 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1484 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1485 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1486 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1487 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1488 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1489 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1490 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1491 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1492 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1493 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1494 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1495 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1496 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1497 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1498 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1499 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1500 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1501 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1502 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1503 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1504 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1505 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1506 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1507 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1508 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1509 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1510 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1511 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1512 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1513 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1514 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1515 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1516 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1517 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1518 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1519 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1520 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1521 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1522 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1523 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1524 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1525 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1526 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1527 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1528 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1529 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1530 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1531 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1532 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1533 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1534 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1535 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1536 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1537 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1538 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1539 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1540 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1541 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1542 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1543 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1544 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1545 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1546 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1547 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1548 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1549 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1550 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1551 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1552 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1553 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1554 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1555 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1556 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1557 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1558 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1559 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1560 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1561 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1562 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1563 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1564 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1565 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1566 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1567 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1568 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1569 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1570 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1571 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1572 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1573 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1574 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1575 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1576 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1577 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1578 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1579 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1580 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1581 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1582 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1583 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1584 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1585 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1586 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1587 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1588 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1589 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1590 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1591 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1592 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1593 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1594 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1595 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1596 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1597 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1598 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1599 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1600 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1601 /* PTP error 2 ptp123456                                                                                                          */
    #define prmsrcptp123456             1602 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            1603 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           1604 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           1605 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           1606 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            1607 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmmkrgd24_3                1608 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1609 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1610 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1611 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1612 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1613 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1614 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1615 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1616 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1617 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1618 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1619 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1620 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1621 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1622 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1623 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1624 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1625 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1626 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1627 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1628 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1629 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvgvlog               1630 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1631 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1632 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1633 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1634 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1635 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1636 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1637 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1638 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1639 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1640 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1641 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1642 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1643 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1644 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1645 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1646 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1647 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1648 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1649 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1650 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1651 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1652 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1653 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1654 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1655 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1656 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1657 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1658 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1659 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1660 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1661 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1662 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1663 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1664 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1665 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1666 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1667 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1668 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1669 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp22                   1670 /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    #define prmaltg24                   1671 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp24                   1672 /* Minimale ruimte tbv alternatieve realisatie fase 24                                                                            */
    #define prmaltg26                   1673 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1674 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1675 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                   1676 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                   1677 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1678 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1679 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltp32                   1680 /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    #define prmaltg33                   1681 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp33                   1682 /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    #define prmaltg34                   1683 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp34                   1684 /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    #define prmaltg38                   1685 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                   1686 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                   1687 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1688 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1689 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1690 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1691 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1692 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1693 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1694 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1695 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1696 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1697 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1698 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1699 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp84                   1700 /* Minimale ruimte tbv alternatieve realisatie fase 84                                                                            */
    #define prmwg02                     1701 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                     1702 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                     1703 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                     1704 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                     1705 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                     1706 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                     1707 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                     1708 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                     1709 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                     1710 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                     1711 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                     1712 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                     1713 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                     1714 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                     1715 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                     1716 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                     1717 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                     1718 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                     1719 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                     1720 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                     1721 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                     1722 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                     1723 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                   1724 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              1725 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              1726 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmstarprogdef              1727 /* Default star programma                                                                                                         */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1728 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1729 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1730 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1731
#else
    #define PRMMAX1                     1728
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
    #define prioFC02hpd 12
    #define prioFC03hpd 13
    #define prioFC05hpd 14
    #define prioFC08hpd 15
    #define prioFC09hpd 16
    #define prioFC11hpd 17
    #define prioFC61hpd 18
    #define prioFC62hpd 19
    #define prioFC67hpd 20
    #define prioFC68hpd 21
    #define hdFC02 22
    #define hdFC03 23
    #define hdFC05 24
    #define hdFC08 25
    #define hdFC09 26
    #define hdFC11 27
    #define hdFC61 28
    #define hdFC62 29
    #define hdFC67 30
    #define hdFC68 31
    #define prioFCMAX 32

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

