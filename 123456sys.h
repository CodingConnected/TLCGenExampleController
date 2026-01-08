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
    #define ussegm1              (FCMAX +   0) /* Aansturing segmenten display                                                */
    #define ussegm2              (FCMAX +   1) /* Aansturing segmenten display                                                */
    #define ussegm3              (FCMAX +   2) /* Aansturing segmenten display                                                */
    #define ussegm4              (FCMAX +   3) /* Aansturing segmenten display                                                */
    #define ussegm5              (FCMAX +   4) /* Aansturing segmenten display                                                */
    #define ussegm6              (FCMAX +   5) /* Aansturing segmenten display                                                */
    #define ussegm7              (FCMAX +   6) /* Aansturing segmenten display                                                */
    #define usML1                (FCMAX +   7) /* Verklikken actief zijn ML1                                                  */
    #define usML2                (FCMAX +   8) /* Verklikken actief zijn ML2                                                  */
    #define usML3                (FCMAX +   9) /* Verklikken actief zijn ML3                                                  */
    #define usML4                (FCMAX +  10) /* Verklikken actief zijn ML4                                                  */
    #define usML5                (FCMAX +  11) /* Verklikken actief zijn ML5                                                  */
    #define usincontrol          (FCMAX +  12) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt                     */
    #define usnocontrol          (FCMAX +  13) /* Verklikken of applicatie niet in staat is te regelen                        */
    #define usFile68af           (FCMAX +  14) /* File ingreep File68af actief                                                */
    #define usplact              (FCMAX +  15) /* Signaalplan regelen actief                                                  */
    #define uskpact              (FCMAX +  16) /* Koppeling signaalplan regelen actief                                        */
    #define usmlact              (FCMAX +  17) /* Module regelen actief                                                       */
    #define usmlpl               (FCMAX +  18) /* ML tijdens VA of PL tijdens halfstar bedrijf                                */
    #define ustxtimer            (FCMAX +  19) /* TX_timer tijdens halfstar bedrijf                                           */
    #define usklok               (FCMAX +  20) /* Programma door klok bepaald                                                 */
    #define ushand               (FCMAX +  21) /* Aansturing handmatig aangepast                                              */
    #define usPL1                (FCMAX +  22) /* Plan PL1 actief                                                             */
    #define usPL2                (FCMAX +  23) /* Plan PL2 actief                                                             */
    #define usPL3                (FCMAX +  24) /* Plan PL3 actief                                                             */
    #define usmaster             (FCMAX +  25) /* Master bepaalt aansturing                                                   */
    #define usslave              (FCMAX +  26) /* Slave bepaalt aansturing                                                    */
    #define usin654321leven      (FCMAX +  27) /* levenssignaal 654321 in                                                     */
    #define usin654321kpuls      (FCMAX +  28) /* koppelpuls 654321 in                                                        */
    #define usin654321pervar     (FCMAX +  29) /* Periode VA regelen 654321 in                                                */
    #define usin654321perarh     (FCMAX +  30) /* Periode alternatieven voor hoofdrichtingen 654321 in                        */
    #define usin654321PL1        (FCMAX +  31) /* Plan PL1 actief 654321 in                                                   */
    #define usin654321PL2        (FCMAX +  32) /* Plan PL2 actief 654321 in                                                   */
    #define usin654321PL3        (FCMAX +  33) /* Plan PL3 actief 654321 in                                                   */
    #define usuit654321leven     (FCMAX +  34) /* levenssignaal 654321 uit                                                    */
    #define usuit654321syncok    (FCMAX +  35) /* synchroon 654321 uit                                                        */
    #define usuit654321txsok     (FCMAX +  36) /* txs ok 654321 uit                                                           */
    #define usovtevroeg02karbus  (FCMAX +  37) /* Voorste OV voertuig bij 02 te vroeg Bus                                     */
    #define usovoptijd02karbus   (FCMAX +  38) /* Voorste OV voertuig bij 02 op tijd Bus                                      */
    #define usovtelaat02karbus   (FCMAX +  39) /* Voorste OV voertuig bij 02 te laat Bus                                      */
    #define usovtevroeg03karbus  (FCMAX +  40) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03karbus   (FCMAX +  41) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03karbus   (FCMAX +  42) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05karbus  (FCMAX +  43) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05karbus   (FCMAX +  44) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05karbus   (FCMAX +  45) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08karbus  (FCMAX +  46) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08karbus   (FCMAX +  47) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08karbus   (FCMAX +  48) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09karbus  (FCMAX +  49) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09karbus   (FCMAX +  50) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09karbus   (FCMAX +  51) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11karbus  (FCMAX +  52) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11karbus   (FCMAX +  53) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11karbus   (FCMAX +  54) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61karbus  (FCMAX +  55) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61karbus   (FCMAX +  56) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61karbus   (FCMAX +  57) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62karbus  (FCMAX +  58) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62karbus   (FCMAX +  59) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62karbus   (FCMAX +  60) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67karbus  (FCMAX +  61) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67karbus   (FCMAX +  62) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67karbus   (FCMAX +  63) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68karbus  (FCMAX +  64) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68karbus   (FCMAX +  65) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68karbus   (FCMAX +  66) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt              (FCMAX +  67) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding         (FCMAX +  68) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog              (FCMAX +  69) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02karbus      (FCMAX +  70) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03karbus      (FCMAX +  71) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05karbus      (FCMAX +  72) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08karbus      (FCMAX +  73) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09karbus      (FCMAX +  74) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11karbus      (FCMAX +  75) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets       (FCMAX +  76) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets       (FCMAX +  77) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61karbus      (FCMAX +  78) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62karbus      (FCMAX +  79) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67karbus      (FCMAX +  80) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68karbus      (FCMAX +  81) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02            (FCMAX +  82) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03            (FCMAX +  83) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05            (FCMAX +  84) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08            (FCMAX +  85) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09            (FCMAX +  86) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11            (FCMAX +  87) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61            (FCMAX +  88) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62            (FCMAX +  89) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67            (FCMAX +  90) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68            (FCMAX +  91) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02         (FCMAX +  92) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1               (FCMAX +  93) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1     (FCMAX +  94) /* Periode actief                                                              */
    #define usperoFietsprio2     (FCMAX +  95) /* Periode actief                                                              */
    #define usperDaluren_werkdag (FCMAX +  96) /* Periode actief                                                              */
    #define usperDaluren_weekend (FCMAX +  97) /* Periode actief                                                              */
    #define usperOerdag_werkdag  (FCMAX +  98) /* Periode actief                                                              */
    #define usper2               (FCMAX +  99) /* Periode Dag periode actief                                                  */
    #define usper3               (FCMAX + 100) /* Periode Ochtendspits actief                                                 */
    #define usper4               (FCMAX + 101) /* Periode Avondspits actief                                                   */
    #define usper5               (FCMAX + 102) /* Periode Koopavond actief                                                    */
    #define usper6               (FCMAX + 103) /* Periode Weekend actief                                                      */
    #define usper7               (FCMAX + 104) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke   (FCMAX + 105) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err   (FCMAX + 106) /* Verklikken PTP error ptp123456                                              */
    #define usrgv                (FCMAX + 107) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv24              (FCMAX + 108) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtk21              (FCMAX + 109) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22              (FCMAX + 110) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24              (FCMAX + 111) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26              (FCMAX + 112) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28              (FCMAX + 113) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a             (FCMAX + 114) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b             (FCMAX + 115) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a             (FCMAX + 116) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b             (FCMAX + 117) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a             (FCMAX + 118) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b             (FCMAX + 119) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a             (FCMAX + 120) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b             (FCMAX + 121) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a             (FCMAX + 122) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b             (FCMAX + 123) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81              (FCMAX + 124) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82              (FCMAX + 125) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84              (FCMAX + 126) /* Aansturing waitsignaal detector k84                                         */
    #define usstarprogwissel     (FCMAX + 127) /* Verklikken actief zijn wisselen naar star programma                         */
    #define usstar01             (FCMAX + 128) /* Star programma star01 actief                                                */
    #define usstar02             (FCMAX + 129) /* Star programma star02 actief                                                */
    #define usisgtijd02          (FCMAX + 130) /* Verklikken PRIO 02 tbv interfunc                                            */
    #define usisgtijd03          (FCMAX + 131) /* Verklikken PRIO 03 tbv interfunc                                            */
    #define usisgtijd05          (FCMAX + 132) /* Verklikken PRIO 05 tbv interfunc                                            */
    #define usisgtijd08          (FCMAX + 133) /* Verklikken PRIO 08 tbv interfunc                                            */
    #define usisgtijd09          (FCMAX + 134) /* Verklikken PRIO 09 tbv interfunc                                            */
    #define usisgtijd11          (FCMAX + 135) /* Verklikken PRIO 11 tbv interfunc                                            */
    #define usisgtijd21          (FCMAX + 136) /* Verklikken PRIO 21 tbv interfunc                                            */
    #define usisgtijd22          (FCMAX + 137) /* Verklikken PRIO 22 tbv interfunc                                            */
    #define usisgtijd24          (FCMAX + 138) /* Verklikken PRIO 24 tbv interfunc                                            */
    #define usisgtijd26          (FCMAX + 139) /* Verklikken PRIO 26 tbv interfunc                                            */
    #define usisgtijd28          (FCMAX + 140) /* Verklikken PRIO 28 tbv interfunc                                            */
    #define usisgtijd31          (FCMAX + 141) /* Verklikken PRIO 31 tbv interfunc                                            */
    #define usisgtijd32          (FCMAX + 142) /* Verklikken PRIO 32 tbv interfunc                                            */
    #define usisgtijd33          (FCMAX + 143) /* Verklikken PRIO 33 tbv interfunc                                            */
    #define usisgtijd34          (FCMAX + 144) /* Verklikken PRIO 34 tbv interfunc                                            */
    #define usisgtijd38          (FCMAX + 145) /* Verklikken PRIO 38 tbv interfunc                                            */
    #define usisgtijd61          (FCMAX + 146) /* Verklikken PRIO 61 tbv interfunc                                            */
    #define usisgtijd62          (FCMAX + 147) /* Verklikken PRIO 62 tbv interfunc                                            */
    #define usisgtijd67          (FCMAX + 148) /* Verklikken PRIO 67 tbv interfunc                                            */
    #define usisgtijd68          (FCMAX + 149) /* Verklikken PRIO 68 tbv interfunc                                            */
    #define usisgtijd81          (FCMAX + 150) /* Verklikken PRIO 81 tbv interfunc                                            */
    #define usisgtijd82          (FCMAX + 151) /* Verklikken PRIO 82 tbv interfunc                                            */
    #define usisgtijd84          (FCMAX + 152) /* Verklikken PRIO 84 tbv interfunc                                            */
    #define USMAX1               (FCMAX + 153)

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
    #define hhd03                138 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              139 /* HD inmelding 03                                                    */
    #define hhduit03             140 /* HD uitmelding 03                                                   */
    #define hhdin03kar           141 /* HD inmelding 03                                                    */
    #define hhduit03kar          142 /* HD uitmelding 03                                                   */
    #define hhd05                143 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              144 /* HD inmelding 05                                                    */
    #define hhduit05             145 /* HD uitmelding 05                                                   */
    #define hhdin05kar           146 /* HD inmelding 05                                                    */
    #define hhduit05kar          147 /* HD uitmelding 05                                                   */
    #define hhd08                148 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              149 /* HD inmelding 08                                                    */
    #define hhduit08             150 /* HD uitmelding 08                                                   */
    #define hhdin08kar           151 /* HD inmelding 08                                                    */
    #define hhduit08kar          152 /* HD uitmelding 08                                                   */
    #define hhd09                153 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              154 /* HD inmelding 09                                                    */
    #define hhduit09             155 /* HD uitmelding 09                                                   */
    #define hhdin09kar           156 /* HD inmelding 09                                                    */
    #define hhduit09kar          157 /* HD uitmelding 09                                                   */
    #define hhd11                158 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              159 /* HD inmelding 11                                                    */
    #define hhduit11             160 /* HD uitmelding 11                                                   */
    #define hhdin11kar           161 /* HD inmelding 11                                                    */
    #define hhduit11kar          162 /* HD uitmelding 11                                                   */
    #define hhd61                163 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              164 /* HD inmelding 61                                                    */
    #define hhduit61             165 /* HD uitmelding 61                                                   */
    #define hhdin61kar           166 /* HD inmelding 61                                                    */
    #define hhduit61kar          167 /* HD uitmelding 61                                                   */
    #define hhd62                168 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              169 /* HD inmelding 62                                                    */
    #define hhduit62             170 /* HD uitmelding 62                                                   */
    #define hhdin62kar           171 /* HD inmelding 62                                                    */
    #define hhduit62kar          172 /* HD uitmelding 62                                                   */
    #define hhd67                173 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              174 /* HD inmelding 67                                                    */
    #define hhduit67             175 /* HD uitmelding 67                                                   */
    #define hhdin67kar           176 /* HD inmelding 67                                                    */
    #define hhduit67kar          177 /* HD uitmelding 67                                                   */
    #define hhd68                178 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              179 /* HD inmelding 68                                                    */
    #define hhduit68             180 /* HD uitmelding 68                                                   */
    #define hhdin68kar           181 /* HD inmelding 68                                                    */
    #define hhduit68kar          182 /* HD uitmelding 68                                                   */
    #define hpelinKOP02          183 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02      184 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit  185 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit  186 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1    187 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2    188 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01      189 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02      190 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03      191 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04      192 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05      193 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06      194 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07      195 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08      196 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09      197 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10      198 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11      199 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12      200 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13      201 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14      202 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15      203 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16      204 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01      205 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02      206 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03      207 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04      208 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05      209 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06      210 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07      211 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08      212 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09      213 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10      214 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11      215 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12      216 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13      217 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14      218 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15      219 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16      220 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke    221 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err    222 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0   223 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1   224 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2   225 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2      226 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              227 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            228 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            229 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            230 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            231 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11            232 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            233 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            234 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepdk31a  235 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31a */
    #define hschoolingreepdk31b  236 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31b */
    #define hschoolingreepdk32a  237 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32a */
    #define hschoolingreepdk32b  238 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32b */
    #define hschoolingreepdk33a  239 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b  240 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a  241 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b  242 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr31            243 /* Onthouden actief zijn senioreningreep bij fase 31                  */
    #define hsiexgr32            244 /* Onthouden actief zijn senioreningreep bij fase 32                  */
    #define hsiexgr33            245 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34            246 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hwtv24               247 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hlos31               248 /* Toestaan los realiseren fase 31 (naloop naar)                      */
    #define hlos32               249 /* Toestaan los realiseren fase 32 (naloop naar)                      */
    #define hlos33               250 /* Toestaan los realiseren fase 33 (naloop naar)                      */
    #define hlos34               251 /* Toestaan los realiseren fase 34 (naloop naar)                      */
    #define HEMAX1               252

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
    #define mmaster         16 /* Halstar of VA bepaald door master                                           */
    #define mslave          17 /* Halstar of VA bepaald door slave                                            */
    #define mleven654321    18 /* Bijhouden actief zijn levensignaal                                          */
    #define mstp02karbus    19 /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    #define mstp03karbus    20 /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    #define mstp05karbus    21 /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    #define mstp08karbus    22 /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    #define mstp09karbus    23 /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    #define mstp11karbus    24 /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    #define mstp61karbus    25 /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    #define mstp62karbus    26 /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    #define mstp67karbus    27 /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    #define mstp68karbus    28 /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    #define mpelvtgKOP02    29 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02     */
    #define mpelinKOP02     30 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02       */
    #define mperiodstar     31 /* Onthouden actieve periode star regelen                                      */
    #define mwtv24          32 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    #define mwtvm24         33 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    #define mstarprog       34 /* Onthouden actief star programma                                             */
    #define mstarprogwens   35 /* Onthouden gewenst star programma                                            */
    #define mstarprogwissel 36 /* Onthouden actief zijn wisselen naar star programma                          */
    #define mwijzpb         37 /* Wijziging aan PB doorgeven                                                  */
    #define mfci            38 /* Index fc met gewijzigde TVG_max[]                                           */
    #define mar02           39 /* Alternatieve ruimte fase 02                                                 */
    #define mar03           40 /* Alternatieve ruimte fase 03                                                 */
    #define mar05           41 /* Alternatieve ruimte fase 05                                                 */
    #define mar08           42 /* Alternatieve ruimte fase 08                                                 */
    #define mar09           43 /* Alternatieve ruimte fase 09                                                 */
    #define mar11           44 /* Alternatieve ruimte fase 11                                                 */
    #define mar21           45 /* Alternatieve ruimte fase 21                                                 */
    #define mar22           46 /* Alternatieve ruimte fase 22                                                 */
    #define mar24           47 /* Alternatieve ruimte fase 24                                                 */
    #define mar26           48 /* Alternatieve ruimte fase 26                                                 */
    #define mar28           49 /* Alternatieve ruimte fase 28                                                 */
    #define mar31           50 /* Alternatieve ruimte fase 31                                                 */
    #define mar32           51 /* Alternatieve ruimte fase 32                                                 */
    #define mar33           52 /* Alternatieve ruimte fase 33                                                 */
    #define mar34           53 /* Alternatieve ruimte fase 34                                                 */
    #define mar38           54 /* Alternatieve ruimte fase 38                                                 */
    #define mar61           55 /* Alternatieve ruimte fase 61                                                 */
    #define mar62           56 /* Alternatieve ruimte fase 62                                                 */
    #define mar67           57 /* Alternatieve ruimte fase 67                                                 */
    #define mar68           58 /* Alternatieve ruimte fase 68                                                 */
    #define mar81           59 /* Alternatieve ruimte fase 81                                                 */
    #define mar82           60 /* Alternatieve ruimte fase 82                                                 */
    #define mar84           61 /* Alternatieve ruimte fase 84                                                 */
    #define MEMAX1          62

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
    #define toffset                    150 /* Offset in slave                                                                          */
    #define txmarge                    151 /* Toegestane marge by sync halfstar                                                        */
    #define tleven654321               152 /* Frequentie verstuurd levenssignaal                                                       */
    #define tnlfg0262                  153 /* Naloop tijdens vastgroen van 02 naar 62                                                  */
    #define tnlfgd0262                 154 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                             */
    #define tnleg0262                  155 /* Naloop op einde groen van 02 naar 62                                                     */
    #define tnlegd0262                 156 /* Detectieafhankelijke naloop op einde groen van 02 naar 62                                */
    #define tvgnaloop0262              157 /* Timer naloop EG van 02 naar 62                                                           */
    #define tnlfg0868                  158 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 159 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  160 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 161 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tvgnaloop0868              162 /* Timer naloop EG van 08 naar 68                                                           */
    #define tnlfg1168                  163 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 164 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  165 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 166 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tvgnaloop1168              167 /* Timer naloop EG van 11 naar 68                                                           */
    #define tnlfg2221                  168 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 169 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  170 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 171 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tvgnaloop2221              172 /* Timer naloop EG van 22 naar 21                                                           */
    #define tnlsgd3132                 173 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 174 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 175 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 176 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  177 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 178 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  179 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 180 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tvgnaloop8281              181 /* Timer naloop EG van 82 naar 81                                                           */
    #define tkarmelding                182 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     183 /* Ondergedrag KAR                                                                          */
    #define tprioin02karbuskar         184 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbuskar        185 /* Anti jutter tijd uitmelden 02                                                            */
    #define tprioin02karbus            186 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbus           187 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02karbus             188 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02karbus                189 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02karbus                190 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02karbus               191 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin03karbuskar         192 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbuskar        193 /* Anti jutter tijd uitmelden 03                                                            */
    #define tprioin03karbus            194 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbus           195 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03karbus             196 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03karbus                197 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03karbus                198 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03karbus               199 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin05karbuskar         200 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbuskar        201 /* Anti jutter tijd uitmelden 05                                                            */
    #define tprioin05karbus            202 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbus           203 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05karbus             204 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05karbus                205 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05karbus                206 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05karbus               207 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin08karbuskar         208 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbuskar        209 /* Anti jutter tijd uitmelden 08                                                            */
    #define tprioin08karbus            210 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbus           211 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08karbus             212 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08karbus                213 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08karbus                214 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08karbus               215 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin09karbuskar         216 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbuskar        217 /* Anti jutter tijd uitmelden 09                                                            */
    #define tprioin09karbus            218 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbus           219 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09karbus             220 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09karbus                221 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09karbus                222 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09karbus               223 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin11karbuskar         224 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbuskar        225 /* Anti jutter tijd uitmelden 11                                                            */
    #define tprioin11karbus            226 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbus           227 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11karbus             228 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11karbus                229 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11karbus                230 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11karbus               231 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg22fiets              232 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 233 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 234 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                235 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tbtovg28fiets              236 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 237 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 238 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                239 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tprioin61karbuskar         240 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbuskar        241 /* Anti jutter tijd uitmelden 61                                                            */
    #define tprioin61karbus            242 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbus           243 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61karbus             244 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61karbus                245 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61karbus                246 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61karbus               247 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin62karbuskar         248 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbuskar        249 /* Anti jutter tijd uitmelden 62                                                            */
    #define tprioin62karbus            250 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbus           251 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62karbus             252 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62karbus                253 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62karbus                254 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62karbus               255 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin67karbuskar         256 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbuskar        257 /* Anti jutter tijd uitmelden 67                                                            */
    #define tprioin67karbus            258 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbus           259 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67karbus             260 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67karbus                261 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67karbus                262 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67karbus               263 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68karbuskar         264 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbuskar        265 /* Anti jutter tijd uitmelden 68                                                            */
    #define tprioin68karbus            266 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbus           267 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68karbus             268 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68karbus                269 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68karbus                270 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68karbus               271 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    272 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    273 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 274 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 275 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                276 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    277 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    278 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 279 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 280 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                281 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    282 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    283 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 284 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 285 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                286 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    287 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    288 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 289 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 290 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                291 /* Anti jutter tijd uitmelden HD 08                                                         */
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
    #define tgbhd61                    302 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    303 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 304 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 305 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                306 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    307 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    308 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 309 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 310 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                311 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    312 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    313 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 314 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 315 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                316 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    317 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    318 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 319 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 320 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                321 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tpelmeetKOP02              322 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          323 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                324 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             325 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           326 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 327 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  328 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 329 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            330 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            331 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   332 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   333 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   334 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   335 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   336 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   337 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    338 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    339 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    340 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    341 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   342 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   343 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   344 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   345 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   346 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   347 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    348 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    349 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    350 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    351 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    352 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    353 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    354 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tschoolingreepmaxg31       355 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 31                        */
    #define tdbsidk31a                 356 /* Bezettijd detector k31a t.b.v. schoolingreep                                             */
    #define tdbsidk31b                 357 /* Bezettijd detector k31b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg32       358 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 32                        */
    #define tdbsidk32a                 359 /* Bezettijd detector k32a t.b.v. schoolingreep                                             */
    #define tdbsidk32b                 360 /* Bezettijd detector k32b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg33       361 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 362 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 363 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       364 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 365 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 366 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr31                  367 /* Meten duur extra groen bij senioreningreep op fase 31                                    */
    #define tdbsiexgrdk31a             368 /* Bezettijd detector k31a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk31b             369 /* Bezettijd detector k31b t.b.v. Senioreningreep                                           */
    #define tsiexgr32                  370 /* Meten duur extra groen bij senioreningreep op fase 32                                    */
    #define tdbsiexgrdk32a             371 /* Bezettijd detector k32a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk32b             372 /* Bezettijd detector k32b t.b.v. Senioreningreep                                           */
    #define tsiexgr33                  373 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             374 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             375 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  376 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             377 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             378 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   379 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             380 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             381 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             382 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               383 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               384 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               385 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               386 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               387 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               388 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               389 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               390 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               391 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               392 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               393 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               394 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               395 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               396 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               397 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               398 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               399 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               400 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               401 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               402 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               403 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               404 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               405 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   406 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               407 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              408 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               409 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              410 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   411 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               412 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              413 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               414 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              415 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   416 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                417 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               418 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv24                     419 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define tvs2205                    420 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tfo0522                    421 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 05                              */
    #define tvs2232                    422 /* Voorstarttijd fase 22 op fase 32                                                         */
    #define tfo3222                    423 /* Fictieve ontruimingstijd/intergroentijd van 22 naar fase 32                              */
    #define tvs2434                    424 /* Voorstarttijd fase 24 op fase 34                                                         */
    #define tfo3424                    425 /* Fictieve ontruimingstijd/intergroentijd van 24 naar fase 34                              */
    #define tvs2838                    426 /* Voorstarttijd fase 28 op fase 38                                                         */
    #define tfo3828                    427 /* Fictieve ontruimingstijd/intergroentijd van 28 naar fase 38                              */
    #define tvs3205                    428 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tfo0532                    429 /* Fictieve ontruimingstijd/intergroentijd van 32 naar fase 05                              */
    #define tvs8433                    430 /* Voorstarttijd fase 84 op fase 33                                                         */
    #define tfo3384                    431 /* Fictieve ontruimingstijd/intergroentijd van 84 naar fase 33                              */
    #define tlr2611                    432 /* Late release tijd fase 26 naar fase 11                                                   */
    #define tfo2611                    433 /* Fictieve ontruimingstijd/intergroentijd van 26 naar fase 11                              */
    #define txnl0262                   434 /* Tegenhouden fase 02 tbv naloop naar fase 62                                              */
    #define txnl0868                   435 /* Tegenhouden fase 08 tbv naloop naar fase 68                                              */
    #define txnl1168                   436 /* Tegenhouden fase 11 tbv naloop naar fase 68                                              */
    #define txnl2221                   437 /* Tegenhouden fase 22 tbv naloop naar fase 21                                              */
    #define txnl3132                   438 /* Tegenhouden fase 31 tbv naloop naar fase 32                                              */
    #define txnl3231                   439 /* Tegenhouden fase 32 tbv naloop naar fase 31                                              */
    #define txnl3334                   440 /* Tegenhouden fase 33 tbv naloop naar fase 34                                              */
    #define txnl3433                   441 /* Tegenhouden fase 34 tbv naloop naar fase 33                                              */
    #define txnl8281                   442 /* Tegenhouden fase 82 tbv naloop naar fase 81                                              */
    #define TMMAX1                     443

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
    #define schaltghst02              21 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen     */
    #define schaltghst03              22 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen     */
    #define schaltghst05              23 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen     */
    #define schaltghst08              24 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen     */
    #define schaltghst09              25 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen     */
    #define schaltghst11              26 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen     */
    #define schaltghst21              27 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen     */
    #define schaltghst22              28 /* Alternatief realiseren fase 22 toestaan tijdens halfstar regelen     */
    #define schaltghst24              29 /* Alternatief realiseren fase 24 toestaan tijdens halfstar regelen     */
    #define schaltghst26              30 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen     */
    #define schaltghst28              31 /* Alternatief realiseren fase 28 toestaan tijdens halfstar regelen     */
    #define schaltghst31              32 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen     */
    #define schaltghst32              33 /* Alternatief realiseren fase 32 toestaan tijdens halfstar regelen     */
    #define schaltghst88              34 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen     */
    #define schaltghst84              35 /* Alternatief realiseren fase 84 toestaan tijdens halfstar regelen     */
    #define schaltghst82              36 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen     */
    #define schaltghst81              37 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen     */
    #define schaltghst68              38 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen     */
    #define schaltghst67              39 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen     */
    #define schaltghst62              40 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen     */
    #define schaltghst61              41 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen     */
    #define schaltghst38              42 /* Alternatief realiseren fase 38 toestaan tijdens halfstar regelen     */
    #define schaltghst34              43 /* Alternatief realiseren fase 34 toestaan tijdens halfstar regelen     */
    #define schaltghst33              44 /* Alternatief realiseren fase 33 toestaan tijdens halfstar regelen     */
    #define schtegenov02              45 /* Tegenhouden hoofdrichting 02 bij OV ingreep                          */
    #define schafkwgov02              46 /* Afkappen WG hoofdrichting 02 bij OV ingreep                          */
    #define schafkvgov02              47 /* Afkappen VG hoofdrichting 02 bij OV ingreep                          */
    #define schtegenov08              48 /* Tegenhouden hoofdrichting 08 bij OV ingreep                          */
    #define schafkwgov08              49 /* Afkappen WG hoofdrichting 08 bij OV ingreep                          */
    #define schafkvgov08              50 /* Afkappen VG hoofdrichting 08 bij OV ingreep                          */
    #define schinst                   51 /* Eenmalig instellen signaalplannen na wijziging                       */
    #define schslavebep               52 /* Slave bepaald PL aansturing                                          */
    #define schvaml                   53 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)         */
    #define schvar                    54 /* VA regelen aan of uit                                                */
    #define scharh                    55 /* Toestaan alternatieven voor hoofdrichtingen                          */
    #define schpervardef              56 /* VA regelen periode default                                           */
    #define schpervar1                57 /* VA regelen periode nacht                                             */
    #define schpervar2                58 /* VA regelen periode dag                                               */
    #define schpervar3                59 /* VA regelen periode ochtend                                           */
    #define schpervar4                60 /* VA regelen periode avond                                             */
    #define schpervar5                61 /* VA regelen periode koopavond                                         */
    #define schpervar6                62 /* VA regelen periode weekend                                           */
    #define schpervar7                63 /* VA regelen periode reserve                                           */
    #define schperarhdef              64 /* Alternatieven voor hoofdrichtingen periode default                   */
    #define schperarh1                65 /* Alternatieven voor hoofdrichtingen periode nacht                     */
    #define schperarh2                66 /* Alternatieven voor hoofdrichtingen periode dag                       */
    #define schperarh3                67 /* Alternatieven voor hoofdrichtingen periode ochtend                   */
    #define schperarh4                68 /* Alternatieven voor hoofdrichtingen periode avond                     */
    #define schperarh5                69 /* Alternatieven voor hoofdrichtingen periode koopavond                 */
    #define schperarh6                70 /* Alternatieven voor hoofdrichtingen periode weekend                   */
    #define schperarh7                71 /* Alternatieven voor hoofdrichtingen periode reserve                   */
    #define schovpriople              72 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf               */
    #define schma0261                 73 /* Meeaanvraag van 02 naar 61 actief                                    */
    #define schma0262                 74 /* Meeaanvraag van 02 naar 62 actief                                    */
    #define schma0521                 75 /* Meeaanvraag van 05 naar 21 actief                                    */
    #define schma0522                 76 /* Meeaanvraag van 05 naar 22 actief                                    */
    #define schma0532                 77 /* Meeaanvraag van 05 naar 32 actief                                    */
    #define schma0868                 78 /* Meeaanvraag van 08 naar 68 actief                                    */
    #define schma1126                 79 /* Meeaanvraag van 11 naar 26 actief                                    */
    #define schma1168                 80 /* Meeaanvraag van 11 naar 68 actief                                    */
    #define schma2221                 81 /* Meeaanvraag van 22 naar 21 actief                                    */
    #define schma2611                 82 /* Meeaanvraag van 26 naar 11 actief                                    */
    #define schma3122                 83 /* Meeaanvraag van 31 naar 22 actief                                    */
    #define schma3132                 84 /* Meeaanvraag van 31 naar 32 actief                                    */
    #define schma3222                 85 /* Meeaanvraag van 32 naar 22 actief                                    */
    #define schma3231                 86 /* Meeaanvraag van 32 naar 31 actief                                    */
    #define schma3324                 87 /* Meeaanvraag van 33 naar 24 actief                                    */
    #define schma3334                 88 /* Meeaanvraag van 33 naar 34 actief                                    */
    #define schma3384                 89 /* Meeaanvraag van 33 naar 84 actief                                    */
    #define schma3424                 90 /* Meeaanvraag van 34 naar 24 actief                                    */
    #define schma3433                 91 /* Meeaanvraag van 34 naar 33 actief                                    */
    #define schma3484                 92 /* Meeaanvraag van 34 naar 84 actief                                    */
    #define schma3828                 93 /* Meeaanvraag van 38 naar 28 actief                                    */
    #define schma8281                 94 /* Meeaanvraag van 82 naar 81 actief                                    */
    #define schmv02                   95 /* Meeverlengen fase 02                                                 */
    #define schmv03                   96 /* Meeverlengen fase 03                                                 */
    #define schmv05                   97 /* Meeverlengen fase 05                                                 */
    #define schmv08                   98 /* Meeverlengen fase 08                                                 */
    #define schmv09                   99 /* Meeverlengen fase 09                                                 */
    #define schmv11                  100 /* Meeverlengen fase 11                                                 */
    #define schmv21                  101 /* Meeverlengen fase 21                                                 */
    #define schmv22                  102 /* Meeverlengen fase 22                                                 */
    #define schhardmv2205            103 /* Hard meeverlengen fase 22 met fase 05                                */
    #define schmv24                  104 /* Meeverlengen fase 24                                                 */
    #define schmv26                  105 /* Meeverlengen fase 26                                                 */
    #define schhardmv2611            106 /* Hard meeverlengen fase 26 met fase 11                                */
    #define schmv28                  107 /* Meeverlengen fase 28                                                 */
    #define schmv31                  108 /* Meeverlengen fase 31                                                 */
    #define schmv32                  109 /* Meeverlengen fase 32                                                 */
    #define schhardmv3205            110 /* Hard meeverlengen fase 32 met fase 05                                */
    #define schmv33                  111 /* Meeverlengen fase 33                                                 */
    #define schmv34                  112 /* Meeverlengen fase 34                                                 */
    #define schmv38                  113 /* Meeverlengen fase 38                                                 */
    #define schmv61                  114 /* Meeverlengen fase 61                                                 */
    #define schmv62                  115 /* Meeverlengen fase 62                                                 */
    #define schmv67                  116 /* Meeverlengen fase 67                                                 */
    #define schmv68                  117 /* Meeverlengen fase 68                                                 */
    #define schmv81                  118 /* Meeverlengen fase 81                                                 */
    #define schmv82                  119 /* Meeverlengen fase 82                                                 */
    #define schmv84                  120 /* Meeverlengen fase 84                                                 */
    #define schmlprm                 121 /* Toepassen parametriseerbare modulestructuur                          */
    #define schovstipt02karbus       122 /* Geconditioneerde prioteit voor OV bij 02 Bus                         */
    #define schovstipt03karbus       123 /* Geconditioneerde prioteit voor OV bij 03 Bus                         */
    #define schovstipt05karbus       124 /* Geconditioneerde prioteit voor OV bij 05 Bus                         */
    #define schovstipt08karbus       125 /* Geconditioneerde prioteit voor OV bij 08 Bus                         */
    #define schovstipt09karbus       126 /* Geconditioneerde prioteit voor OV bij 09 Bus                         */
    #define schovstipt11karbus       127 /* Geconditioneerde prioteit voor OV bij 11 Bus                         */
    #define schovstipt61karbus       128 /* Geconditioneerde prioteit voor OV bij 61 Bus                         */
    #define schovstipt62karbus       129 /* Geconditioneerde prioteit voor OV bij 62 Bus                         */
    #define schovstipt67karbus       130 /* Geconditioneerde prioteit voor OV bij 67 Bus                         */
    #define schovstipt68karbus       131 /* Geconditioneerde prioteit voor OV bij 68 Bus                         */
    #define schcovuber               132 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                       */
    #define schcheckdstype           133 /* Check type DSI bericht bij VECOM                                     */
    #define schprioin02karbuskar     134 /* Inmelden 02 via Bus toestaan                                         */
    #define schpriouit02karbuskar    135 /* Uitmelden 02 via Bus toestaan                                        */
    #define schprioin03karbuskar     136 /* Inmelden 03 via Bus toestaan                                         */
    #define schpriouit03karbuskar    137 /* Uitmelden 03 via Bus toestaan                                        */
    #define schprioin05karbuskar     138 /* Inmelden 05 via Bus toestaan                                         */
    #define schpriouit05karbuskar    139 /* Uitmelden 05 via Bus toestaan                                        */
    #define schprioin08karbuskar     140 /* Inmelden 08 via Bus toestaan                                         */
    #define schpriouit08karbuskar    141 /* Uitmelden 08 via Bus toestaan                                        */
    #define schprioin09karbuskar     142 /* Inmelden 09 via Bus toestaan                                         */
    #define schpriouit09karbuskar    143 /* Uitmelden 09 via Bus toestaan                                        */
    #define schprioin11karbuskar     144 /* Inmelden 11 via Bus toestaan                                         */
    #define schpriouit11karbuskar    145 /* Uitmelden 11 via Bus toestaan                                        */
    #define schprioin22fietsfiets    146 /* Inmelden 22 via Fiets toestaan                                       */
    #define schpriouit22fietsfiets   147 /* Uitmelden 22 via Fiets toestaan                                      */
    #define schprioin28fietsfiets    148 /* Inmelden 28 via Fiets toestaan                                       */
    #define schpriouit28fietsfiets   149 /* Uitmelden 28 via Fiets toestaan                                      */
    #define schprioin61karbuskar     150 /* Inmelden 61 via Bus toestaan                                         */
    #define schpriouit61karbuskar    151 /* Uitmelden 61 via Bus toestaan                                        */
    #define schprioin62karbuskar     152 /* Inmelden 62 via Bus toestaan                                         */
    #define schpriouit62karbuskar    153 /* Uitmelden 62 via Bus toestaan                                        */
    #define schprioin67karbuskar     154 /* Inmelden 67 via Bus toestaan                                         */
    #define schpriouit67karbuskar    155 /* Uitmelden 67 via Bus toestaan                                        */
    #define schprioin68karbuskar     156 /* Inmelden 68 via Bus toestaan                                         */
    #define schpriouit68karbuskar    157 /* Uitmelden 68 via Bus toestaan                                        */
    #define schhdin02kar             158 /* Inmelden 02 via KAR HD toestaan                                      */
    #define schhduit02kar            159 /* Uitmelden 02 via KAR HD toestaan                                     */
    #define schchecksirene02         160 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR               */
    #define schhdin03kar             161 /* Inmelden 03 via KAR HD toestaan                                      */
    #define schhduit03kar            162 /* Uitmelden 03 via KAR HD toestaan                                     */
    #define schchecksirene03         163 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR               */
    #define schhdin05kar             164 /* Inmelden 05 via KAR HD toestaan                                      */
    #define schhduit05kar            165 /* Uitmelden 05 via KAR HD toestaan                                     */
    #define schchecksirene05         166 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR               */
    #define schhdin08kar             167 /* Inmelden 08 via KAR HD toestaan                                      */
    #define schhduit08kar            168 /* Uitmelden 08 via KAR HD toestaan                                     */
    #define schchecksirene08         169 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR               */
    #define schhdin09kar             170 /* Inmelden 09 via KAR HD toestaan                                      */
    #define schhduit09kar            171 /* Uitmelden 09 via KAR HD toestaan                                     */
    #define schchecksirene09         172 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR               */
    #define schhdin11kar             173 /* Inmelden 11 via KAR HD toestaan                                      */
    #define schhduit11kar            174 /* Uitmelden 11 via KAR HD toestaan                                     */
    #define schchecksirene11         175 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR               */
    #define schhdin61kar             176 /* Inmelden 61 via KAR HD toestaan                                      */
    #define schhduit61kar            177 /* Uitmelden 61 via KAR HD toestaan                                     */
    #define schchecksirene61         178 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR               */
    #define schhdin62kar             179 /* Inmelden 62 via KAR HD toestaan                                      */
    #define schhduit62kar            180 /* Uitmelden 62 via KAR HD toestaan                                     */
    #define schchecksirene62         181 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR               */
    #define schhdin67kar             182 /* Inmelden 67 via KAR HD toestaan                                      */
    #define schhduit67kar            183 /* Uitmelden 67 via KAR HD toestaan                                     */
    #define schchecksirene67         184 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR               */
    #define schhdin68kar             185 /* Inmelden 68 via KAR HD toestaan                                      */
    #define schhduit68kar            186 /* Uitmelden 68 via KAR HD toestaan                                     */
    #define schchecksirene68         187 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR               */
    #define schpelrwKOP02            188 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02 */
    #define schpelmkKOP02            189 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02     */
    #define schpelaKOP02             190 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02          */
    #define schpkuKOP68_uit68        191 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit */
    #define schrgadd24_3             192 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2           */
    #define schrgad24_3              193 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2        */
    #define schrgvd24_3              194 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2        */
    #define schrgv                   195 /* RoBuGrover aan of uit                                                */
    #define schrgv_snel              196 /* RoBuGrover versneld ophogen of verlagen                              */
    #define schschoolingreep31       197 /* Schoolingreep aan of uit voor fase 31                                */
    #define schschoolingreep32       198 /* Schoolingreep aan of uit voor fase 32                                */
    #define schschoolingreep33       199 /* Schoolingreep aan of uit voor fase 33                                */
    #define schschoolingreep34       200 /* Schoolingreep aan of uit voor fase 34                                */
    #define schsi31                  201 /* Senioreningreep aan of uit voor fase 31                              */
    #define schsi32                  202 /* Senioreningreep aan of uit voor fase 32                              */
    #define schsi33                  203 /* Senioreningreep aan of uit voor fase 33                              */
    #define schsi34                  204 /* Senioreningreep aan of uit voor fase 34                              */
    #define schca02                  205 /* Cyclische aanvraag fase 02                                           */
    #define schca03                  206 /* Cyclische aanvraag fase 03                                           */
    #define schca05                  207 /* Cyclische aanvraag fase 05                                           */
    #define schca08                  208 /* Cyclische aanvraag fase 08                                           */
    #define schca09                  209 /* Cyclische aanvraag fase 09                                           */
    #define schca11                  210 /* Cyclische aanvraag fase 11                                           */
    #define schca21                  211 /* Cyclische aanvraag fase 21                                           */
    #define schca22                  212 /* Cyclische aanvraag fase 22                                           */
    #define schca24                  213 /* Cyclische aanvraag fase 24                                           */
    #define schca26                  214 /* Cyclische aanvraag fase 26                                           */
    #define schca28                  215 /* Cyclische aanvraag fase 28                                           */
    #define schca31                  216 /* Cyclische aanvraag fase 31                                           */
    #define schca32                  217 /* Cyclische aanvraag fase 32                                           */
    #define schca33                  218 /* Cyclische aanvraag fase 33                                           */
    #define schca34                  219 /* Cyclische aanvraag fase 34                                           */
    #define schca38                  220 /* Cyclische aanvraag fase 38                                           */
    #define schca61                  221 /* Cyclische aanvraag fase 61                                           */
    #define schca62                  222 /* Cyclische aanvraag fase 62                                           */
    #define schca67                  223 /* Cyclische aanvraag fase 67                                           */
    #define schca68                  224 /* Cyclische aanvraag fase 68                                           */
    #define schca81                  225 /* Cyclische aanvraag fase 81                                           */
    #define schca82                  226 /* Cyclische aanvraag fase 82                                           */
    #define schca84                  227 /* Cyclische aanvraag fase 84                                           */
    #define schvg02_4a               228 /* Veiligheidsgroen detector 02_4a fase 02                              */
    #define schvg02_4b               229 /* Veiligheidsgroen detector 02_4b fase 02                              */
    #define schvg08_4a               230 /* Veiligheidsgroen detector 08_4a fase 08                              */
    #define schvg08_4b               231 /* Veiligheidsgroen detector 08_4b fase 08                              */
    #define schvg11_4                232 /* Veiligheidsgroen detector 11_4 fase 11                               */
    #define schaltg02                233 /* Alternatieve realisatie toestaan fase 02                             */
    #define schaltg03                234 /* Alternatieve realisatie toestaan fase 03                             */
    #define schaltg05                235 /* Alternatieve realisatie toestaan fase 05                             */
    #define schaltg08                236 /* Alternatieve realisatie toestaan fase 08                             */
    #define schaltg09                237 /* Alternatieve realisatie toestaan fase 09                             */
    #define schaltg11                238 /* Alternatieve realisatie toestaan fase 11                             */
    #define schaltg21                239 /* Alternatieve realisatie toestaan fase 21                             */
    #define schaltg22                240 /* Alternatieve realisatie toestaan fase 22                             */
    #define schaltg24                241 /* Alternatieve realisatie toestaan fase 24                             */
    #define schaltg26                242 /* Alternatieve realisatie toestaan fase 26                             */
    #define schaltg28                243 /* Alternatieve realisatie toestaan fase 28                             */
    #define schaltg31                244 /* Alternatieve realisatie toestaan fase 31                             */
    #define schaltg32                245 /* Alternatieve realisatie toestaan fase 32                             */
    #define schaltg33                246 /* Alternatieve realisatie toestaan fase 33                             */
    #define schaltg34                247 /* Alternatieve realisatie toestaan fase 34                             */
    #define schaltg38                248 /* Alternatieve realisatie toestaan fase 38                             */
    #define schaltg61                249 /* Alternatieve realisatie toestaan fase 61                             */
    #define schaltg62                250 /* Alternatieve realisatie toestaan fase 62                             */
    #define schaltg67                251 /* Alternatieve realisatie toestaan fase 67                             */
    #define schaltg68                252 /* Alternatieve realisatie toestaan fase 68                             */
    #define schaltg81                253 /* Alternatieve realisatie toestaan fase 81                             */
    #define schaltg82                254 /* Alternatieve realisatie toestaan fase 82                             */
    #define schaltg84                255 /* Alternatieve realisatie toestaan fase 84                             */
    #define schwg02                  256 /* Wachtstand groen fase 02                                             */
    #define schwg03                  257 /* Wachtstand groen fase 03                                             */
    #define schwg05                  258 /* Wachtstand groen fase 05                                             */
    #define schwg08                  259 /* Wachtstand groen fase 08                                             */
    #define schwg09                  260 /* Wachtstand groen fase 09                                             */
    #define schwg11                  261 /* Wachtstand groen fase 11                                             */
    #define schwg21                  262 /* Wachtstand groen fase 21                                             */
    #define schwg22                  263 /* Wachtstand groen fase 22                                             */
    #define schwg24                  264 /* Wachtstand groen fase 24                                             */
    #define schwg26                  265 /* Wachtstand groen fase 26                                             */
    #define schwg28                  266 /* Wachtstand groen fase 28                                             */
    #define schwg31                  267 /* Wachtstand groen fase 31                                             */
    #define schwg32                  268 /* Wachtstand groen fase 32                                             */
    #define schwg33                  269 /* Wachtstand groen fase 33                                             */
    #define schwg34                  270 /* Wachtstand groen fase 34                                             */
    #define schwg38                  271 /* Wachtstand groen fase 38                                             */
    #define schwg61                  272 /* Wachtstand groen fase 61                                             */
    #define schwg62                  273 /* Wachtstand groen fase 62                                             */
    #define schwg67                  274 /* Wachtstand groen fase 67                                             */
    #define schwg68                  275 /* Wachtstand groen fase 68                                             */
    #define schwg81                  276 /* Wachtstand groen fase 81                                             */
    #define schwg82                  277 /* Wachtstand groen fase 82                                             */
    #define schwg84                  278 /* Wachtstand groen fase 84                                             */
    #define schwtv24                 279 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                   */
    #define schwtvbusbijhd           280 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep             */
    #define schstar                  281 /* Inschakelen star programma                                           */
    #define schisgdebug              282 /* Debug aan/uit voor ISG func (testomgeving)                           */
    #define schlos0262               283 /* Wel/niet toestaan losse realisatie 02                                */
    #define schlosgeennla0262_2      284 /* Wel/niet toestaan losse realisatie 02                                */
    #define schlos0868               285 /* Wel/niet toestaan losse realisatie 08                                */
    #define schlosgeennla0868_2      286 /* Wel/niet toestaan losse realisatie 08                                */
    #define schlos1168               287 /* Wel/niet toestaan losse realisatie 11                                */
    #define schlosgeennla1168_2      288 /* Wel/niet toestaan losse realisatie 11                                */
    #define schlos2221               289 /* Wel/niet toestaan losse realisatie 22                                */
    #define schlosgeennla2221_2      290 /* Wel/niet toestaan losse realisatie 22                                */
    #define schlos3132               291 /* Wel/niet toestaan losse realisatie 31                                */
    #define schlosgeennla3132_2      292 /* Wel/niet toestaan losse realisatie 31                                */
    #define schlos3231               293 /* Wel/niet toestaan losse realisatie 32                                */
    #define schlosgeennla3231_2      294 /* Wel/niet toestaan losse realisatie 32                                */
    #define schlos3334               295 /* Wel/niet toestaan losse realisatie 33                                */
    #define schlosgeennla3334_2      296 /* Wel/niet toestaan losse realisatie 33                                */
    #define schlos3433               297 /* Wel/niet toestaan losse realisatie 34                                */
    #define schlosgeennla3433_2      298 /* Wel/niet toestaan losse realisatie 34                                */
    #define schlos8281               299 /* Wel/niet toestaan losse realisatie 82                                */
    #define schlosgeennla8281_2      300 /* Wel/niet toestaan losse realisatie 82                                */
    #define schsneld02_1a            301 /* Aanvraag snel voor detector 02_1a aan of uit                         */
    #define schsneld02_1b            302 /* Aanvraag snel voor detector 02_1b aan of uit                         */
    #define schsneld03_1             303 /* Aanvraag snel voor detector 03_1 aan of uit                          */
    #define schsneld05_1             304 /* Aanvraag snel voor detector 05_1 aan of uit                          */
    #define schsneld08_1a            305 /* Aanvraag snel voor detector 08_1a aan of uit                         */
    #define schsneld08_1b            306 /* Aanvraag snel voor detector 08_1b aan of uit                         */
    #define schsneld09_1             307 /* Aanvraag snel voor detector 09_1 aan of uit                          */
    #define schsneld11_1             308 /* Aanvraag snel voor detector 11_1 aan of uit                          */
    #define schsneld211              309 /* Aanvraag snel voor detector 211 aan of uit                           */
    #define schsneld22_1             310 /* Aanvraag snel voor detector 22_1 aan of uit                          */
    #define schsneld24_1             311 /* Aanvraag snel voor detector 24_1 aan of uit                          */
    #define schsneld261              312 /* Aanvraag snel voor detector 261 aan of uit                           */
    #define schsneld28_1             313 /* Aanvraag snel voor detector 28_1 aan of uit                          */
    #define schsneld61_1             314 /* Aanvraag snel voor detector 61_1 aan of uit                          */
    #define schsneld62_1a            315 /* Aanvraag snel voor detector 62_1a aan of uit                         */
    #define schsneld62_1b            316 /* Aanvraag snel voor detector 62_1b aan of uit                         */
    #define schsneld67_1             317 /* Aanvraag snel voor detector 67_1 aan of uit                          */
    #define schsneld68_1a            318 /* Aanvraag snel voor detector 68_1a aan of uit                         */
    #define schsneld68_1b            319 /* Aanvraag snel voor detector 68_1b aan of uit                         */
    #define schsneld81_1             320 /* Aanvraag snel voor detector 81_1 aan of uit                          */
    #define schsneld82_1             321 /* Aanvraag snel voor detector 82_1 aan of uit                          */
    #define schsneld84_1             322 /* Aanvraag snel voor detector 84_1 aan of uit                          */
    #define SCHMAX1                  323

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
    #define prmtxA1PL3_28                243 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                244 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                245 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                246 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                247 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                248 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                249 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                250 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                251 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                252 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_38                253 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                254 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                255 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                256 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                257 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                258 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                259 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                260 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                261 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                262 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                263 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                264 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                265 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                266 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                267 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                268 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                269 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                270 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                271 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                272 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmrstotxa                   273 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmvolgmasterpl              274 /* Per plan (bitwise) instellen wel of niet volgen master                                                                         */
    #define prmplxperdef                 275 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   276 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   277 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   278 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   279 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   280 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   281 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   282 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                283 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                284 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                285 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                286 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                287 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                288 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                289 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                290 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                291 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                292 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                293 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                294 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                295 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                296 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                297 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                298 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                299 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                300 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                301 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                302 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                303 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                304 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      305 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      306 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      307 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      308 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      309 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      310 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      311 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      312 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil22              313 /* Tijd dat fase 22 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv24                      314 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      315 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      316 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      317 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      318 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      319 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      320 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      321 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      322 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      323 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      324 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      325 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      326 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      327 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmvverschil82              328 /* Tijd dat fase 82 niet meer mag meeverlengen ondanks ruimte in maximale groentijd van conflicten                                */
    #define prmmv84                      329 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    330 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    331 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    332 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    333 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    334 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    335 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    336 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    337 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    338 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    339 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    340 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    341 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    342 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    343 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    344 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    345 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    346 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    347 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    348 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    349 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    350 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    351 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    352 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg          353 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           354 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02karbus    355 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02karbus     356 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02karbus     357 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03karbus    358 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03karbus     359 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03karbus     360 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05karbus    361 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05karbus     362 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05karbus     363 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08karbus    364 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08karbus     365 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08karbus     366 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09karbus    367 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09karbus     368 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09karbus     369 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11karbus    370 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11karbus     371 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11karbus     372 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61karbus    373 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61karbus     374 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61karbus     375 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62karbus    376 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62karbus     377 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62karbus     378 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67karbus    379 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67karbus     380 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67karbus     381 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68karbus    382 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68karbus     383 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68karbus     384 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      385 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    386 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    387 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    388 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    389 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    390 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   391 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  392 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   393 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    394 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    395 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    396 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   397 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  398 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   399 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    400 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    401 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    402 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   403 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  404 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   405 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    406 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    407 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    408 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   409 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  410 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   411 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    412 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    413 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    414 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   415 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  416 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   417 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    418 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    419 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    420 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   421 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  422 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   423 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    424 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    425 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    426 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   427 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  428 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   429 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    430 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    431 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    432 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   433 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  434 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   435 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    436 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    437 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    438 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   439 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  440 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   441 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    442 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    443 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    444 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   445 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  446 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   447 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    448 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    449 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    450 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   451 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  452 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   453 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    454 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    455 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    456 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    457 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    458 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    459 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    460 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    461 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    462 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    463 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    464 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    465 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    466 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   467 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  468 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   469 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    470 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    471 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    472 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   473 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  474 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   475 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    476 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    477 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    478 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   479 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  480 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   481 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    482 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    483 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    484 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   485 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  486 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   487 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    488 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    489 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    490 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   491 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  492 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   493 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    494 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    495 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    496 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   497 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  498 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   499 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    500 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    501 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    502 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   503 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  504 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   505 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus               506 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus              507 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus               508 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus               509 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus           510 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus            511 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus              512 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03karbus               513 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03karbus              514 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03karbus               515 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03karbus               516 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03karbus           517 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03karbus            518 /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    #define prmprio03karbus              519 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05karbus               520 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05karbus              521 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05karbus               522 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05karbus               523 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05karbus           524 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05karbus            525 /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    #define prmprio05karbus              526 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08karbus               527 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08karbus              528 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08karbus               529 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08karbus               530 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08karbus           531 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08karbus            532 /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    #define prmprio08karbus              533 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09karbus               534 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09karbus              535 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09karbus               536 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09karbus               537 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09karbus           538 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09karbus            539 /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    #define prmprio09karbus              540 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11karbus               541 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11karbus              542 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11karbus               543 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11karbus               544 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11karbus           545 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11karbus            546 /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    #define prmprio11karbus              547 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmftsblok22fietsfiets       548 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  549 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets      550 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets                551 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               552 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                553 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                554 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets            555 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets               556 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets       557 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  558 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminwt28fietsfiets      559 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets                560 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               561 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                562 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                563 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets            564 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets               565 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto61karbus               566 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61karbus              567 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61karbus               568 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61karbus               569 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61karbus           570 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61karbus            571 /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    #define prmprio61karbus              572 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto62karbus               573 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62karbus              574 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62karbus               575 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62karbus               576 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62karbus           577 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62karbus            578 /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    #define prmprio62karbus              579 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto67karbus               580 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67karbus              581 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67karbus               582 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67karbus               583 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67karbus           584 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67karbus            585 /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    #define prmprio67karbus              586 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto68karbus               587 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68karbus              588 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68karbus               589 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68karbus               590 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68karbus           591 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68karbus            592 /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    #define prmprio68karbus              593 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmpriohd02                  594 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                   595 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                  596 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                   597 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02               598 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmpriohd03                  599 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                   600 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                  601 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                   602 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03               603 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmpriohd05                  604 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                   605 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                  606 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                   607 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05               608 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmpriohd08                  609 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                   610 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                  611 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                   612 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08               613 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmpriohd09                  614 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                   615 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                  616 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                   617 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09               618 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmpriohd11                  619 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                   620 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                  621 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                   622 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11               623 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmpriohd61                  624 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                   625 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                  626 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                   627 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61               628 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmpriohd62                  629 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                   630 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                  631 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                   632 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62               633 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmpriohd67                  634 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                   635 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                  636 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                   637 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67               638 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmpriohd68                  639 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                   640 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                  641 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                   642 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68               643 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmkarsg02                   644 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                   645 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                   646 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                   647 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                   648 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                   649 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                   650 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                   651 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                   652 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                   653 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                 654 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                 655 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                 656 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                 657 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                 658 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                 659 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                 660 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                 661 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                 662 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                 663 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02             664 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                     665 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                     666 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                     667 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                     668 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                     669 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                     670 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                     671 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                     672 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                     673 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                     674 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                     675 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                     676 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                     677 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                     678 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                     679 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                     680 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                     681 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                     682 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                     683 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                     684 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                     685 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1           686 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1           687 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1           688 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2           689 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2           690 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2           691 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpDaluren_werkdag       692 /* Start klokperiode Daluren_werkdag                                                                                              */
    #define prmetkpDaluren_werkdag       693 /* Einde klokperiode Daluren_werkdag                                                                                              */
    #define prmdckpDaluren_werkdag       694 /* Dagsoort klokperiode Daluren_werkdag                                                                                           */
    #define prmstkpDaluren_weekend       695 /* Start klokperiode Daluren_weekend                                                                                              */
    #define prmetkpDaluren_weekend       696 /* Einde klokperiode Daluren_weekend                                                                                              */
    #define prmdckpDaluren_weekend       697 /* Dagsoort klokperiode Daluren_weekend                                                                                           */
    #define prmstkpOerdag_werkdag        698 /* Start klokperiode Oerdag_werkdag                                                                                               */
    #define prmetkpOerdag_werkdag        699 /* Einde klokperiode Oerdag_werkdag                                                                                               */
    #define prmdckpOerdag_werkdag        700 /* Dagsoort klokperiode Oerdag_werkdag                                                                                            */
    #define prmvg1_02                    701 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                    702 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                    703 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                    704 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                    705 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                    706 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                    707 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                    708 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                    709 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                    710 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                    711 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                    712 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                    713 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                    714 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                    715 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                    716 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                    717 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                    718 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                    719 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                    720 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                    721 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                    722 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                    723 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                    724 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                    725 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                    726 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                    727 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                    728 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                    729 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                    730 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                    731 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                    732 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                    733 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                    734 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                    735 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                    736 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                    737 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                    738 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                    739 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                    740 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                    741 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                    742 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                    743 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                    744 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                    745 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                    746 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                    747 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                    748 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                    749 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                    750 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                    751 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                    752 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                    753 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                    754 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                    755 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                    756 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                    757 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                    758 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                    759 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                    760 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                    761 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                    762 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                    763 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                    764 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                    765 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                    766 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                    767 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                    768 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                    769 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                    770 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                    771 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                    772 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                    773 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                    774 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                    775 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                    776 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                    777 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                    778 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                    779 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                    780 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                    781 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                    782 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                    783 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                    784 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                    785 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                    786 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                    787 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                    788 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                    789 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                    790 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                    791 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                    792 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                    793 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                    794 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                    795 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                    796 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                    797 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                    798 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                    799 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                    800 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                    801 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                    802 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                    803 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                    804 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                    805 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                    806 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                    807 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                    808 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                    809 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                    810 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                    811 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                    812 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                    813 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                    814 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                    815 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                    816 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                    817 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                    818 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                    819 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                    820 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                    821 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                    822 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                    823 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                    824 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                    825 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                    826 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01            827 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02            828 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03            829 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04            830 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05            831 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06            832 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07            833 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08            834 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09            835 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10            836 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11            837 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12            838 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13            839 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14            840 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15            841 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16            842 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01            843 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02            844 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03            845 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04            846 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05            847 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06            848 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07            849 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08            850 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09            851 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10            852 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11            853 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12            854 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13            855 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14            856 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15            857 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16            858 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke          859 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err          860 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0         861 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1         862 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2         863 /* PTP error 2 ptp123456                                                                                                          */
    #define prmsrcptp123456              864 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456             865 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456            866 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456            867 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456            868 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456             869 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmmkrgd24_3                 870 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                       871 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus               872 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus               873 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog                874 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag                875 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil              876 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag            877 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                 878 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                 879 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                 880 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                 881 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                 882 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                 883 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                 884 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                 885 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                 886 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                 887 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                 888 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                 889 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                 890 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                 891 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc31              892 /* Extra groen percentage tov. TFG voor senioreningreep op fase 31                                                                */
    #define prmsiexgrperc32              893 /* Extra groen percentage tov. TFG voor senioreningreep op fase 32                                                                */
    #define prmsiexgrperc33              894 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34              895 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog                896 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog                897 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                   898 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                   899 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                   900 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                   901 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                   902 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                   903 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                   904 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                   905 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                   906 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                   907 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                   908 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                   909 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                   910 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                   911 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                   912 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                   913 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                   914 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                   915 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                   916 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                   917 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                   918 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                   919 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                   920 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                    921 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                    922 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                    923 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                    924 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                    925 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                    926 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                    927 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                    928 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                    929 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                    930 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                    931 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                    932 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                    933 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                    934 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                    935 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp22                    936 /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    #define prmaltg24                    937 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp24                    938 /* Minimale ruimte tbv alternatieve realisatie fase 24                                                                            */
    #define prmaltg26                    939 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                    940 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                    941 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28                    942 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31                    943 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                    944 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                    945 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltp32                    946 /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    #define prmaltg33                    947 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp33                    948 /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    #define prmaltg34                    949 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp34                    950 /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    #define prmaltg38                    951 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38                    952 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61                    953 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                    954 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                    955 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                    956 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                    957 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                    958 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                    959 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                    960 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                    961 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                    962 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                    963 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                    964 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                    965 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp84                    966 /* Minimale ruimte tbv alternatieve realisatie fase 84                                                                            */
    #define prmwg02                      967 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                      968 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                      969 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                      970 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                      971 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                      972 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                      973 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                      974 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                      975 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                      976 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                      977 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                      978 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                      979 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                      980 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                      981 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                      982 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                      983 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                      984 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                      985 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                      986 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                      987 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                      988 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                      989 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                    990 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax               991 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin               992 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmstarprogdef               993 /* Default star programma                                                                                                         */
    #define prmstarprogDaluren_weekend   994 /* Noodprogramma bij periode Daluren_weekend                                                                                      */
    #define prmstarprogDaluren_werkdag   995 /* Noodprogramma bij periode Daluren_werkdag                                                                                      */
    #define prmstarprogOerdag_werkdag    996 /* Noodprogramma bij periode Oerdag_werkdag                                                                                       */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert               997 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn                998 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat                999 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1000
#else
    #define PRMMAX1                      997
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

