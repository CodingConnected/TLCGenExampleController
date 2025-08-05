/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.0
    TLCGEN:   12.4.0.17
   CCOLGEN:   12.4.0.17
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
 *
 ************************************************************************************/

#define SYSTEM "123456"
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
    #define usovinm02risov       (FCMAX +  71) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risvrw      (FCMAX +  72) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risalg      (FCMAX +  73) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03karbus      (FCMAX +  74) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risov       (FCMAX +  75) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risvrw      (FCMAX +  76) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risalg      (FCMAX +  77) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05karbus      (FCMAX +  78) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risov       (FCMAX +  79) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risvrw      (FCMAX +  80) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risalg      (FCMAX +  81) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08karbus      (FCMAX +  82) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risov       (FCMAX +  83) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risvrw      (FCMAX +  84) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risalg      (FCMAX +  85) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09karbus      (FCMAX +  86) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risov       (FCMAX +  87) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risvrw      (FCMAX +  88) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risalg      (FCMAX +  89) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11karbus      (FCMAX +  90) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risov       (FCMAX +  91) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risvrw      (FCMAX +  92) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risalg      (FCMAX +  93) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11bus         (FCMAX +  94) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets       (FCMAX +  95) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets       (FCMAX +  96) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61karbus      (FCMAX +  97) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risov       (FCMAX +  98) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risvrw      (FCMAX +  99) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risalg      (FCMAX + 100) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62karbus      (FCMAX + 101) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risov       (FCMAX + 102) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risvrw      (FCMAX + 103) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risalg      (FCMAX + 104) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67karbus      (FCMAX + 105) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risov       (FCMAX + 106) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risvrw      (FCMAX + 107) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risalg      (FCMAX + 108) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68karbus      (FCMAX + 109) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risov       (FCMAX + 110) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risvrw      (FCMAX + 111) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risalg      (FCMAX + 112) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02            (FCMAX + 113) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03            (FCMAX + 114) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05            (FCMAX + 115) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08            (FCMAX + 116) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09            (FCMAX + 117) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11            (FCMAX + 118) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61            (FCMAX + 119) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62            (FCMAX + 120) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67            (FCMAX + 121) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68            (FCMAX + 122) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02         (FCMAX + 123) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1               (FCMAX + 124) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1     (FCMAX + 125) /* Periode actief                                                              */
    #define usperoFietsprio2     (FCMAX + 126) /* Periode actief                                                              */
    #define usperDaluren_werkdag (FCMAX + 127) /* Periode actief                                                              */
    #define usperDaluren_weekend (FCMAX + 128) /* Periode actief                                                              */
    #define usperOerdag_werkdag  (FCMAX + 129) /* Periode actief                                                              */
    #define usper2               (FCMAX + 130) /* Periode Dag periode actief                                                  */
    #define usper3               (FCMAX + 131) /* Periode Ochtendspits actief                                                 */
    #define usper4               (FCMAX + 132) /* Periode Avondspits actief                                                   */
    #define usper5               (FCMAX + 133) /* Periode Koopavond actief                                                    */
    #define usper6               (FCMAX + 134) /* Periode Weekend actief                                                      */
    #define usper7               (FCMAX + 135) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke   (FCMAX + 136) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err   (FCMAX + 137) /* Verklikken PTP error ptp123456                                              */
    #define usrgv                (FCMAX + 138) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv24              (FCMAX + 139) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtk21              (FCMAX + 140) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22              (FCMAX + 141) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24              (FCMAX + 142) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26              (FCMAX + 143) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28              (FCMAX + 144) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a             (FCMAX + 145) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b             (FCMAX + 146) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a             (FCMAX + 147) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b             (FCMAX + 148) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a             (FCMAX + 149) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b             (FCMAX + 150) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a             (FCMAX + 151) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b             (FCMAX + 152) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a             (FCMAX + 153) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b             (FCMAX + 154) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81              (FCMAX + 155) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82              (FCMAX + 156) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84              (FCMAX + 157) /* Aansturing waitsignaal detector k84                                         */
    #define usstarprogwissel     (FCMAX + 158) /* Verklikken actief zijn wisselen naar star programma                         */
    #define usstar01             (FCMAX + 159) /* Star programma star01 actief                                                */
    #define usstar02             (FCMAX + 160) /* Star programma star02 actief                                                */
    #define USMAX1               (FCMAX + 161)

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
    #define ddummykaruit11bus    90
    #define ddummykaruit61karbus 91
    #define ddummykaruit62karbus 92
    #define ddummykaruit67karbus 93
    #define ddummykaruit68karbus 94
    #define ddummyhdkarin02      95
    #define ddummyhdkaruit02     96
    #define ddummyhdkarin03      97
    #define ddummyhdkaruit03     98
    #define ddummyhdkarin05      99
    #define ddummyhdkaruit05     100
    #define ddummyhdkarin08      101
    #define ddummyhdkaruit08     102
    #define ddummyhdkarin09      103
    #define ddummyhdkaruit09     104
    #define ddummyhdkarin11      105
    #define ddummyhdkaruit11     106
    #define ddummyhdkarin61      107
    #define ddummyhdkaruit61     108
    #define ddummyhdkarin62      109
    #define ddummyhdkaruit62     110
    #define ddummyhdkarin67      111
    #define ddummyhdkaruit67     112
    #define ddummyhdkarin68      113
    #define ddummyhdkaruit68     114
    #define DPMAX1               115 /* aantal detectoren testomgeving */
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
    #define hxpl2232              43 /* Tegenhouden richtingen tbv gelijkstart 22 32                       */
    #define hxpl243484            44 /* Tegenhouden richtingen tbv gelijkstart 24 34 84                    */
    #define hxpl2838              45 /* Tegenhouden richtingen tbv gelijkstart 28 38                       */
    #define hxpl3384              46 /* Tegenhouden richtingen tbv gelijkstart 33 84                       */
    #define hxpl2434              47 /* Tegenhouden richtingen tbv gelijkstart 24 34                       */
    #define hxpl243384            48 /* Tegenhouden richtingen tbv gelijkstart 24 33 84                    */
    #define hnla02_1a             49 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b             50 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a             51 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b             52 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1              53 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1              54 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a              55 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a              56 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a              57 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a              58 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1              59 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02karbus          60 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03karbus          61 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05karbus          62 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08karbus          63 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09karbus          64 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11karbus          65 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61karbus          66 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62karbus          67 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67karbus          68 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68karbus          69 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02karbus         70 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02karbus       71 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbus      72 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02karbuskar    73 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02karbuskar   74 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov          75 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov        76 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov       77 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris     78 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris    79 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw         80 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw       81 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw      82 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris    83 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris   84 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio02risalg         85 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risalg       86 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risalg      87 /* Prioriteit uitmelding 02 NG                                        */
    #define hprioin02risalgris    88 /* Prioriteit inmelding fase 02 NG                                    */
    #define hpriouit02risalgris   89 /* Prioriteit uitmelding 02 NG                                        */
    #define hprio03karbus         90 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03karbus       91 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbus      92 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03karbuskar    93 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03karbuskar   94 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov          95 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov        96 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov       97 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris     98 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris    99 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw        100 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw      101 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw     102 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris   103 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris  104 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio03risalg        105 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risalg      106 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risalg     107 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risalgris   108 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risalgris  109 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05karbus        110 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05karbus      111 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbus     112 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05karbuskar   113 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05karbuskar  114 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov         115 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov       116 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov      117 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris    118 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris   119 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw        120 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw      121 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw     122 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris   123 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris  124 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio05risalg        125 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risalg      126 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risalg     127 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risalgris   128 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risalgris  129 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08karbus        130 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08karbus      131 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbus     132 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08karbuskar   133 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08karbuskar  134 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov         135 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov       136 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov      137 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris    138 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris   139 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw        140 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw      141 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw     142 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris   143 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris  144 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio08risalg        145 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risalg      146 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risalg     147 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risalgris   148 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risalgris  149 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09karbus        150 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09karbus      151 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbus     152 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09karbuskar   153 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09karbuskar  154 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov         155 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov       156 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov      157 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris    158 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris   159 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw        160 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw      161 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw     162 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris   163 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris  164 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio09risalg        165 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risalg      166 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risalg     167 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risalgris   168 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risalgris  169 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11karbus        170 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11karbus      171 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbus     172 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11karbuskar   173 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11karbuskar  174 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov         175 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov       176 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov      177 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris    178 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris   179 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw        180 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw      181 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw     182 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris   183 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris  184 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio11risalg        185 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risalg      186 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risalg     187 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risalgris   188 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risalgris  189 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11bus           190 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus         191 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus        192 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11busvecio    193 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar     194 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio22fiets         195 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets       196 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets      197 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets  198 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets 199 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets         200 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets       201 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets      202 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets  203 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets 204 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61karbus        205 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61karbus      206 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbus     207 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61karbuskar   208 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61karbuskar  209 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov         210 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov       211 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov      212 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris    213 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris   214 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw        215 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw      216 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw     217 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris   218 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris  219 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio61risalg        220 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risalg      221 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risalg     222 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risalgris   223 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risalgris  224 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio62karbus        225 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62karbus      226 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbus     227 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62karbuskar   228 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62karbuskar  229 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov         230 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov       231 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov      232 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris    233 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris   234 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw        235 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw      236 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw     237 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris   238 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris  239 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio62risalg        240 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risalg      241 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risalg     242 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risalgris   243 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risalgris  244 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio67karbus        245 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67karbus      246 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbus     247 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67karbuskar   248 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67karbuskar  249 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov         250 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov       251 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov      252 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris    253 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris   254 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw        255 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw      256 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw     257 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris   258 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris  259 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio67risalg        260 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risalg      261 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risalg     262 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risalgris   263 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risalgris  264 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio68karbus        265 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68karbus      266 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbus     267 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68karbuskar   268 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68karbuskar  269 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov         270 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov       271 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov      272 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris    273 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris   274 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw        275 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw      276 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw     277 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris   278 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris  279 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprio68risalg        280 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risalg      281 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risalg     282 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risalgris   283 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risalgris  284 /* Prioriteit uitmelding 68 Bus                                       */
    #define hhd02                285 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              286 /* HD inmelding 02                                                    */
    #define hhduit02             287 /* HD uitmelding 02                                                   */
    #define hhdin02kar           288 /* HD inmelding 02                                                    */
    #define hhduit02kar          289 /* HD uitmelding 02                                                   */
    #define hhdin02ris           290 /* HD inmelding 02                                                    */
    #define hhduit02ris          291 /* HD uitmelding 02                                                   */
    #define hhd03                292 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              293 /* HD inmelding 03                                                    */
    #define hhduit03             294 /* HD uitmelding 03                                                   */
    #define hhdin03kar           295 /* HD inmelding 03                                                    */
    #define hhduit03kar          296 /* HD uitmelding 03                                                   */
    #define hhdin03ris           297 /* HD inmelding 03                                                    */
    #define hhduit03ris          298 /* HD uitmelding 03                                                   */
    #define hhd05                299 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              300 /* HD inmelding 05                                                    */
    #define hhduit05             301 /* HD uitmelding 05                                                   */
    #define hhdin05kar           302 /* HD inmelding 05                                                    */
    #define hhduit05kar          303 /* HD uitmelding 05                                                   */
    #define hhdin05ris           304 /* HD inmelding 05                                                    */
    #define hhduit05ris          305 /* HD uitmelding 05                                                   */
    #define hhd08                306 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              307 /* HD inmelding 08                                                    */
    #define hhduit08             308 /* HD uitmelding 08                                                   */
    #define hhdin08kar           309 /* HD inmelding 08                                                    */
    #define hhduit08kar          310 /* HD uitmelding 08                                                   */
    #define hhdin08ris           311 /* HD inmelding 08                                                    */
    #define hhduit08ris          312 /* HD uitmelding 08                                                   */
    #define hhd09                313 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              314 /* HD inmelding 09                                                    */
    #define hhduit09             315 /* HD uitmelding 09                                                   */
    #define hhdin09kar           316 /* HD inmelding 09                                                    */
    #define hhduit09kar          317 /* HD uitmelding 09                                                   */
    #define hhdin09ris           318 /* HD inmelding 09                                                    */
    #define hhduit09ris          319 /* HD uitmelding 09                                                   */
    #define hhd11                320 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11              321 /* HD inmelding 11                                                    */
    #define hhduit11             322 /* HD uitmelding 11                                                   */
    #define hhdin11kar           323 /* HD inmelding 11                                                    */
    #define hhduit11kar          324 /* HD uitmelding 11                                                   */
    #define hhdin11ris           325 /* HD inmelding 11                                                    */
    #define hhduit11ris          326 /* HD uitmelding 11                                                   */
    #define hhd61                327 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61              328 /* HD inmelding 61                                                    */
    #define hhduit61             329 /* HD uitmelding 61                                                   */
    #define hhdin61kar           330 /* HD inmelding 61                                                    */
    #define hhduit61kar          331 /* HD uitmelding 61                                                   */
    #define hhdin61ris           332 /* HD inmelding 61                                                    */
    #define hhduit61ris          333 /* HD uitmelding 61                                                   */
    #define hhd62                334 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62              335 /* HD inmelding 62                                                    */
    #define hhduit62             336 /* HD uitmelding 62                                                   */
    #define hhdin62kar           337 /* HD inmelding 62                                                    */
    #define hhduit62kar          338 /* HD uitmelding 62                                                   */
    #define hhdin62ris           339 /* HD inmelding 62                                                    */
    #define hhduit62ris          340 /* HD uitmelding 62                                                   */
    #define hhd67                341 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67              342 /* HD inmelding 67                                                    */
    #define hhduit67             343 /* HD uitmelding 67                                                   */
    #define hhdin67kar           344 /* HD inmelding 67                                                    */
    #define hhduit67kar          345 /* HD uitmelding 67                                                   */
    #define hhdin67ris           346 /* HD inmelding 67                                                    */
    #define hhduit67ris          347 /* HD uitmelding 67                                                   */
    #define hhd68                348 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68              349 /* HD inmelding 68                                                    */
    #define hhduit68             350 /* HD uitmelding 68                                                   */
    #define hhdin68kar           351 /* HD inmelding 68                                                    */
    #define hhduit68kar          352 /* HD uitmelding 68                                                   */
    #define hhdin68ris           353 /* HD inmelding 68                                                    */
    #define hhduit68ris          354 /* HD uitmelding 68                                                   */
    #define hpelinKOP02          355 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02      356 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit  357 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit  358 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1    359 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2    360 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01      361 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02      362 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03      363 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04      364 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05      365 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06      366 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07      367 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08      368 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09      369 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10      370 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11      371 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12      372 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13      373 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14      374 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15      375 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16      376 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01      377 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02      378 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03      379 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04      380 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05      381 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06      382 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07      383 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08      384 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09      385 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10      386 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11      387 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12      388 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13      389 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14      390 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15      391 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16      392 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke    393 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err    394 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0   395 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1   396 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2   397 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2      398 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact              399 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02            400 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03            401 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05            402 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08            403 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11            404 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22            405 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28            406 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepdk31a  407 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31a */
    #define hschoolingreepdk31b  408 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31b */
    #define hschoolingreepdk32a  409 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32a */
    #define hschoolingreepdk32b  410 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32b */
    #define hschoolingreepdk33a  411 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b  412 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a  413 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b  414 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr31            415 /* Onthouden actief zijn senioreningreep bij fase 31                  */
    #define hsiexgr32            416 /* Onthouden actief zijn senioreningreep bij fase 32                  */
    #define hsiexgr33            417 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34            418 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262            419
    #define hnleg0868            420
    #define hnleg1168            421
    #define hnleg2221            422
    #define hnlsg3132            423
    #define hnlsg3231            424
    #define hnlsg3334            425
    #define hnlsg3433            426
    #define hnleg8281            427
    #define hwtv24               428 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hinl32               429 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32               430 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31               431 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31               432 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34               433 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34               434 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33               435 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33               436 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62               437 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68               438 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21               439 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81               440 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1               441

/* geheugen elementen */
/* ------------------ */
    #define mperiod           0 /* Onthouden actieve periode                                               */
    #define mlcycl            1 /* Onthouden laatste cyclustijd                                            */
    #define mmk03             2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03            */
    #define mmk05             3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05            */
    #define mmk08             4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08            */
    #define mmk09             5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09            */
    #define mmk11             6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11            */
    #define mmk61             7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61            */
    #define mmk62             8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62            */
    #define mmk67             9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67            */
    #define mmk68            10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68            */
    #define mleven           11 /* Bijhouden actief zijn levensignaal                                      */
    #define mklok            12 /* Halfstar of VA obv klokperioden                                         */
    #define mhand            13 /* Halstar of VA handmatig bepaald                                         */
    #define mmaster          14 /* Halstar of VA bepaald door master                                       */
    #define mslave           15 /* Halstar of VA bepaald door slave                                        */
    #define mleven654321     16 /* Bijhouden actief zijn levensignaal                                      */
    #define mstp02karbus     17 /* Stiptheid voorste OV voertuig bij 02 Bus                                */
    #define mstp03karbus     18 /* Stiptheid voorste OV voertuig bij 03 Bus                                */
    #define mstp05karbus     19 /* Stiptheid voorste OV voertuig bij 05 Bus                                */
    #define mstp08karbus     20 /* Stiptheid voorste OV voertuig bij 08 Bus                                */
    #define mstp09karbus     21 /* Stiptheid voorste OV voertuig bij 09 Bus                                */
    #define mstp11karbus     22 /* Stiptheid voorste OV voertuig bij 11 Bus                                */
    #define mstp61karbus     23 /* Stiptheid voorste OV voertuig bij 61 Bus                                */
    #define mstp62karbus     24 /* Stiptheid voorste OV voertuig bij 62 Bus                                */
    #define mstp67karbus     25 /* Stiptheid voorste OV voertuig bij 67 Bus                                */
    #define mstp68karbus     26 /* Stiptheid voorste OV voertuig bij 68 Bus                                */
    #define mpelvtgKOP02     27 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    #define mpelinKOP02      28 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    #define mperiodstar      29 /* Onthouden actieve periode star regelen                                  */
    #define mwtv24           30 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24              */
    #define mwtvm24          31 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24             */
    #define mstarprog        32 /* Onthouden actief star programma                                         */
    #define mstarprogwens    33 /* Onthouden gewenst star programma                                        */
    #define mstarprogwissel  34 /* Onthouden actief zijn wisselen naar star programma                      */
    #define mrealtijd02      35 /* Realisatie tijd fase 02                                                 */
    #define mrealtijd03      36 /* Realisatie tijd fase 03                                                 */
    #define mrealtijd05      37 /* Realisatie tijd fase 05                                                 */
    #define mrealtijd08      38 /* Realisatie tijd fase 08                                                 */
    #define mrealtijd09      39 /* Realisatie tijd fase 09                                                 */
    #define mrealtijd11      40 /* Realisatie tijd fase 11                                                 */
    #define mrealtijd21      41 /* Realisatie tijd fase 21                                                 */
    #define mrealtijd22      42 /* Realisatie tijd fase 22                                                 */
    #define mrealtijd24      43 /* Realisatie tijd fase 24                                                 */
    #define mrealtijd26      44 /* Realisatie tijd fase 26                                                 */
    #define mrealtijd28      45 /* Realisatie tijd fase 28                                                 */
    #define mrealtijd31      46 /* Realisatie tijd fase 31                                                 */
    #define mrealtijd32      47 /* Realisatie tijd fase 32                                                 */
    #define mrealtijd33      48 /* Realisatie tijd fase 33                                                 */
    #define mrealtijd34      49 /* Realisatie tijd fase 34                                                 */
    #define mrealtijd38      50 /* Realisatie tijd fase 38                                                 */
    #define mrealtijd61      51 /* Realisatie tijd fase 61                                                 */
    #define mrealtijd62      52 /* Realisatie tijd fase 62                                                 */
    #define mrealtijd67      53 /* Realisatie tijd fase 67                                                 */
    #define mrealtijd68      54 /* Realisatie tijd fase 68                                                 */
    #define mrealtijd81      55 /* Realisatie tijd fase 81                                                 */
    #define mrealtijd82      56 /* Realisatie tijd fase 82                                                 */
    #define mrealtijd84      57 /* Realisatie tijd fase 84                                                 */
    #define mrealtijdmin02   58 /* Realisatie minimum tijd fase 02                                         */
    #define mrealtijdmin03   59 /* Realisatie minimum tijd fase 03                                         */
    #define mrealtijdmin05   60 /* Realisatie minimum tijd fase 05                                         */
    #define mrealtijdmin08   61 /* Realisatie minimum tijd fase 08                                         */
    #define mrealtijdmin09   62 /* Realisatie minimum tijd fase 09                                         */
    #define mrealtijdmin11   63 /* Realisatie minimum tijd fase 11                                         */
    #define mrealtijdmin21   64 /* Realisatie minimum tijd fase 21                                         */
    #define mrealtijdmin22   65 /* Realisatie minimum tijd fase 22                                         */
    #define mrealtijdmin24   66 /* Realisatie minimum tijd fase 24                                         */
    #define mrealtijdmin26   67 /* Realisatie minimum tijd fase 26                                         */
    #define mrealtijdmin28   68 /* Realisatie minimum tijd fase 28                                         */
    #define mrealtijdmin31   69 /* Realisatie minimum tijd fase 31                                         */
    #define mrealtijdmin32   70 /* Realisatie minimum tijd fase 32                                         */
    #define mrealtijdmin33   71 /* Realisatie minimum tijd fase 33                                         */
    #define mrealtijdmin34   72 /* Realisatie minimum tijd fase 34                                         */
    #define mrealtijdmin38   73 /* Realisatie minimum tijd fase 38                                         */
    #define mrealtijdmin61   74 /* Realisatie minimum tijd fase 61                                         */
    #define mrealtijdmin62   75 /* Realisatie minimum tijd fase 62                                         */
    #define mrealtijdmin67   76 /* Realisatie minimum tijd fase 67                                         */
    #define mrealtijdmin68   77 /* Realisatie minimum tijd fase 68                                         */
    #define mrealtijdmin81   78 /* Realisatie minimum tijd fase 81                                         */
    #define mrealtijdmin82   79 /* Realisatie minimum tijd fase 82                                         */
    #define mrealtijdmin84   80 /* Realisatie minimum tijd fase 84                                         */
    #define mrealtijdmax02   81 /* Realisatie maximum tijd fase 02                                         */
    #define mrealtijdmax03   82 /* Realisatie maximum tijd fase 03                                         */
    #define mrealtijdmax05   83 /* Realisatie maximum tijd fase 05                                         */
    #define mrealtijdmax08   84 /* Realisatie maximum tijd fase 08                                         */
    #define mrealtijdmax09   85 /* Realisatie maximum tijd fase 09                                         */
    #define mrealtijdmax11   86 /* Realisatie maximum tijd fase 11                                         */
    #define mrealtijdmax21   87 /* Realisatie maximum tijd fase 21                                         */
    #define mrealtijdmax22   88 /* Realisatie maximum tijd fase 22                                         */
    #define mrealtijdmax24   89 /* Realisatie maximum tijd fase 24                                         */
    #define mrealtijdmax26   90 /* Realisatie maximum tijd fase 26                                         */
    #define mrealtijdmax28   91 /* Realisatie maximum tijd fase 28                                         */
    #define mrealtijdmax31   92 /* Realisatie maximum tijd fase 31                                         */
    #define mrealtijdmax32   93 /* Realisatie maximum tijd fase 32                                         */
    #define mrealtijdmax33   94 /* Realisatie maximum tijd fase 33                                         */
    #define mrealtijdmax34   95 /* Realisatie maximum tijd fase 34                                         */
    #define mrealtijdmax38   96 /* Realisatie maximum tijd fase 38                                         */
    #define mrealtijdmax61   97 /* Realisatie maximum tijd fase 61                                         */
    #define mrealtijdmax62   98 /* Realisatie maximum tijd fase 62                                         */
    #define mrealtijdmax67   99 /* Realisatie maximum tijd fase 67                                         */
    #define mrealtijdmax68  100 /* Realisatie maximum tijd fase 68                                         */
    #define mrealtijdmax81  101 /* Realisatie maximum tijd fase 81                                         */
    #define mrealtijdmax82  102 /* Realisatie maximum tijd fase 82                                         */
    #define mrealtijdmax84  103 /* Realisatie maximum tijd fase 84                                         */
    #define mar02           104 /* Alternatieve ruimte fase 02                                             */
    #define mar03           105 /* Alternatieve ruimte fase 03                                             */
    #define mar05           106 /* Alternatieve ruimte fase 05                                             */
    #define mar08           107 /* Alternatieve ruimte fase 08                                             */
    #define mar09           108 /* Alternatieve ruimte fase 09                                             */
    #define mar11           109 /* Alternatieve ruimte fase 11                                             */
    #define mar21           110 /* Alternatieve ruimte fase 21                                             */
    #define mar22           111 /* Alternatieve ruimte fase 22                                             */
    #define mar24           112 /* Alternatieve ruimte fase 24                                             */
    #define mar26           113 /* Alternatieve ruimte fase 26                                             */
    #define mar28           114 /* Alternatieve ruimte fase 28                                             */
    #define mar31           115 /* Alternatieve ruimte fase 31                                             */
    #define mar32           116 /* Alternatieve ruimte fase 32                                             */
    #define mar33           117 /* Alternatieve ruimte fase 33                                             */
    #define mar34           118 /* Alternatieve ruimte fase 34                                             */
    #define mar38           119 /* Alternatieve ruimte fase 38                                             */
    #define mar61           120 /* Alternatieve ruimte fase 61                                             */
    #define mar62           121 /* Alternatieve ruimte fase 62                                             */
    #define mar67           122 /* Alternatieve ruimte fase 67                                             */
    #define mar68           123 /* Alternatieve ruimte fase 68                                             */
    #define mar81           124 /* Alternatieve ruimte fase 81                                             */
    #define mar82           125 /* Alternatieve ruimte fase 82                                             */
    #define mar84           126 /* Alternatieve ruimte fase 84                                             */
    #define mwijzpb         127 /* Wijziging aan PB doorgeven                                              */
    #define mfci            128 /* Index fc met gewijzigde TVG_max[]                                       */
    #define MEMAX1          129

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
    #define tnlfg0868                  157 /* Naloop tijdens vastgroen van 08 naar 68                                                  */
    #define tnlfgd0868                 158 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                             */
    #define tnleg0868                  159 /* Naloop op einde groen van 08 naar 68                                                     */
    #define tnlegd0868                 160 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                                */
    #define tnlfg1168                  161 /* Naloop tijdens vastgroen van 11 naar 68                                                  */
    #define tnlfgd1168                 162 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                             */
    #define tnleg1168                  163 /* Naloop op einde groen van 11 naar 68                                                     */
    #define tnlegd1168                 164 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                                */
    #define tnlfg2221                  165 /* Naloop tijdens vastgroen van 22 naar 21                                                  */
    #define tnlfgd2221                 166 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                             */
    #define tnleg2221                  167 /* Naloop op einde groen van 22 naar 21                                                     */
    #define tnlegd2221                 168 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                                */
    #define tnlsgd3132                 169 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsgd3231                 170 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 171 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 172 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  173 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 174 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  175 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 176 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
    #define tkarmelding                177 /* Duur verklikking ontvangst melding KAR                                                   */
    #define tkarog                     178 /* Ondergedrag KAR                                                                          */
    #define tprioin02karbuskar         179 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbuskar        180 /* Anti jutter tijd uitmelden 02                                                            */
    #define tprioin02karbus            181 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02karbus           182 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02karbus             183 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02karbus                184 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02karbus                185 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02karbus               186 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risov             187 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            188 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              189 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 190 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 191 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                192 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrw            193 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           194 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             195 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                196 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                197 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               198 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risalg            199 /* Anti jutter tijd inmelden 02 NG                                                          */
    #define tpriouit02risalg           200 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risalg             201 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risalg                202 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risalg                203 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risalg               204 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin03karbuskar         205 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbuskar        206 /* Anti jutter tijd uitmelden 03                                                            */
    #define tprioin03karbus            207 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03karbus           208 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03karbus             209 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03karbus                210 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03karbus                211 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03karbus               212 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risov             213 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            214 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              215 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 216 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 217 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                218 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrw            219 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           220 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             221 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                222 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                223 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               224 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg03risalg             225 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risalg                226 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risalg                227 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risalg               228 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin05karbuskar         229 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbuskar        230 /* Anti jutter tijd uitmelden 05                                                            */
    #define tprioin05karbus            231 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05karbus           232 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05karbus             233 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05karbus                234 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05karbus                235 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05karbus               236 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risov             237 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            238 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              239 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 240 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 241 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                242 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrw            243 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           244 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             245 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                246 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                247 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               248 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg05risalg             249 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risalg                250 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risalg                251 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risalg               252 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin08karbuskar         253 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbuskar        254 /* Anti jutter tijd uitmelden 08                                                            */
    #define tprioin08karbus            255 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08karbus           256 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08karbus             257 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08karbus                258 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08karbus                259 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08karbus               260 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risov             261 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            262 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              263 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 264 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 265 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                266 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrw            267 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           268 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             269 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                270 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                271 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               272 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg08risalg             273 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risalg                274 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risalg                275 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risalg               276 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin09karbuskar         277 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbuskar        278 /* Anti jutter tijd uitmelden 09                                                            */
    #define tprioin09karbus            279 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09karbus           280 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09karbus             281 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09karbus                282 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09karbus                283 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09karbus               284 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risov             285 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            286 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              287 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 288 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 289 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                290 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrw            291 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           292 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             293 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                294 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                295 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               296 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg09risalg             297 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risalg                298 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risalg                299 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risalg               300 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin11karbuskar         301 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbuskar        302 /* Anti jutter tijd uitmelden 11                                                            */
    #define tprioin11karbus            303 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11karbus           304 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11karbus             305 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11karbus                306 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11karbus                307 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11karbus               308 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risov             309 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            310 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              311 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 312 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 313 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                314 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrw            315 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           316 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             317 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                318 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                319 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               320 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg11risalg             321 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risalg                322 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risalg                323 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risalg               324 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11busvecio          325 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11bus              326 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11bus                327 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   328 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   329 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  330 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tbtovg22fiets              331 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 332 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 333 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                334 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tbtovg28fiets              335 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 336 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 337 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                338 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tprioin61karbuskar         339 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbuskar        340 /* Anti jutter tijd uitmelden 61                                                            */
    #define tprioin61karbus            341 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61karbus           342 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61karbus             343 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61karbus                344 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61karbus                345 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61karbus               346 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risov             347 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            348 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              349 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 350 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 351 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                352 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrw            353 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           354 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             355 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                356 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                357 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               358 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg61risalg             359 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risalg                360 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risalg                361 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risalg               362 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin62karbuskar         363 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbuskar        364 /* Anti jutter tijd uitmelden 62                                                            */
    #define tprioin62karbus            365 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62karbus           366 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62karbus             367 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62karbus                368 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62karbus                369 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62karbus               370 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risov             371 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            372 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              373 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 374 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 375 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                376 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrw            377 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           378 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             379 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                380 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                381 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               382 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg62risalg             383 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risalg                384 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risalg                385 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risalg               386 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin67karbuskar         387 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbuskar        388 /* Anti jutter tijd uitmelden 67                                                            */
    #define tprioin67karbus            389 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67karbus           390 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67karbus             391 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67karbus                392 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67karbus                393 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67karbus               394 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risov             395 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            396 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              397 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 398 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 399 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                400 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrw            401 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           402 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             403 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                404 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                405 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               406 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tbtovg67risalg             407 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risalg                408 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risalg                409 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risalg               410 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68karbuskar         411 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbuskar        412 /* Anti jutter tijd uitmelden 68                                                            */
    #define tprioin68karbus            413 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68karbus           414 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68karbus             415 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68karbus                416 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68karbus                417 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68karbus               418 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risov             419 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            420 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              421 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 422 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 423 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                424 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrw            425 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           426 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             427 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                428 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                429 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               430 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tbtovg68risalg             431 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risalg                432 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risalg                433 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risalg               434 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    435 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    436 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 437 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 438 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                439 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    440 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    441 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 442 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 443 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                444 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    445 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    446 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 447 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 448 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                449 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    450 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    451 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 452 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 453 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                454 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    455 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    456 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 457 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 458 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                459 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    460 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    461 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 462 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 463 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                464 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    465 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    466 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 467 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 468 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                469 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    470 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    471 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 472 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 473 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                474 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    475 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    476 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 477 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 478 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                479 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    480 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    481 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 482 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 483 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                484 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                485
    #define tris02risvrw               486
    #define tris02risalg               487
    #define tris03risov                488
    #define tris03risvrw               489
    #define tris03risalg               490
    #define tris05risov                491
    #define tris05risvrw               492
    #define tris05risalg               493
    #define tris08risov                494
    #define tris08risvrw               495
    #define tris08risalg               496
    #define tris09risov                497
    #define tris09risvrw               498
    #define tris09risalg               499
    #define tris11risov                500
    #define tris11risvrw               501
    #define tris11risalg               502
    #define tris61risov                503
    #define tris61risvrw               504
    #define tris61risalg               505
    #define tris62risov                506
    #define tris62risvrw               507
    #define tris62risalg               508
    #define tris67risov                509
    #define tris67risvrw               510
    #define tris67risalg               511
    #define tris68risov                512
    #define tris68risvrw               513
    #define tris68risalg               514
    #define tpelmeetKOP02              515 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          516 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                517 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             518 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           519 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 520 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  521 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 522 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            523 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            524 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   525 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   526 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   527 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   528 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   529 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   530 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    531 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    532 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    533 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    534 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   535 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   536 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   537 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   538 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   539 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   540 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    541 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    542 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    543 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    544 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    545 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    546 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    547 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tschoolingreepmaxg31       548 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 31                        */
    #define tdbsidk31a                 549 /* Bezettijd detector k31a t.b.v. schoolingreep                                             */
    #define tdbsidk31b                 550 /* Bezettijd detector k31b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg32       551 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 32                        */
    #define tdbsidk32a                 552 /* Bezettijd detector k32a t.b.v. schoolingreep                                             */
    #define tdbsidk32b                 553 /* Bezettijd detector k32b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg33       554 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 555 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 556 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       557 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 558 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 559 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr31                  560 /* Meten duur extra groen bij senioreningreep op fase 31                                    */
    #define tdbsiexgrdk31a             561 /* Bezettijd detector k31a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk31b             562 /* Bezettijd detector k31b t.b.v. Senioreningreep                                           */
    #define tsiexgr32                  563 /* Meten duur extra groen bij senioreningreep op fase 32                                    */
    #define tdbsiexgrdk32a             564 /* Bezettijd detector k32a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk32b             565 /* Bezettijd detector k32b t.b.v. Senioreningreep                                           */
    #define tsiexgr33                  566 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             567 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             568 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  569 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             570 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             571 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   572 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             573 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             574 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             575 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               576 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               577 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               578 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               579 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               580 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               581 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               582 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               583 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               584 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               585 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               586 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               587 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               588 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               589 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               590 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               591 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               592 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               593 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               594 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               595 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               596 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               597 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               598 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   599 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               600 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              601 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               602 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              603 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   604 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               605 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              606 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               607 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              608 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   609 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                610 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               611 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv24                     612 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define tvs2205                    613 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    614 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    615 /* Late release tijd fase 26 na fase 11                                                     */
    #define tlr6202                    616 /* Late release tijd fase 62 na fase 02                                                     */
    #define tlr6808                    617 /* Late release tijd fase 68 na fase 08                                                     */
    #define tlr6811                    618 /* Late release tijd fase 68 na fase 11                                                     */
    #define tlr2122                    619 /* Late release tijd fase 21 na fase 22                                                     */
    #define tlr8182                    620 /* Late release tijd fase 81 na fase 82                                                     */
    #define til3231                    621 /* Inloop tijd fase 32 naar fase 31                                                         */
    #define til3132                    622 /* Inloop tijd fase 31 naar fase 32                                                         */
    #define til3433                    623 /* Inloop tijd fase 34 naar fase 33                                                         */
    #define til3334                    624 /* Inloop tijd fase 33 naar fase 34                                                         */
    #define tfo0522                    625 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    626 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    627 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     628

/* teller elementen */
/* ---------------- */
    #define cvchst02karbus       0 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus         */
    #define cvchst02risov        1 /* OV inmeldingen fase 02 tijdens halfstar regelen Bus         */
    #define cvchst02risvrw       2 /* OV inmeldingen fase 02 tijdens halfstar regelen Vrachtwagen */
    #define cvchst02risalg       3 /* OV inmeldingen fase 02 tijdens halfstar regelen NG          */
    #define cvchst03karbus       4 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus         */
    #define cvchst03risov        5 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus         */
    #define cvchst03risvrw       6 /* OV inmeldingen fase 03 tijdens halfstar regelen Vrachtwagen */
    #define cvchst03risalg       7 /* OV inmeldingen fase 03 tijdens halfstar regelen Bus         */
    #define cvchst05karbus       8 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus         */
    #define cvchst05risov        9 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus         */
    #define cvchst05risvrw      10 /* OV inmeldingen fase 05 tijdens halfstar regelen Vrachtwagen */
    #define cvchst05risalg      11 /* OV inmeldingen fase 05 tijdens halfstar regelen Bus         */
    #define cvchst08karbus      12 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus         */
    #define cvchst08risov       13 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus         */
    #define cvchst08risvrw      14 /* OV inmeldingen fase 08 tijdens halfstar regelen Vrachtwagen */
    #define cvchst08risalg      15 /* OV inmeldingen fase 08 tijdens halfstar regelen Bus         */
    #define cvchst09karbus      16 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus         */
    #define cvchst09risov       17 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus         */
    #define cvchst09risvrw      18 /* OV inmeldingen fase 09 tijdens halfstar regelen Vrachtwagen */
    #define cvchst09risalg      19 /* OV inmeldingen fase 09 tijdens halfstar regelen Bus         */
    #define cvchst11karbus      20 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst11risov       21 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst11risvrw      22 /* OV inmeldingen fase 11 tijdens halfstar regelen Vrachtwagen */
    #define cvchst11risalg      23 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst11bus         24 /* OV inmeldingen fase 11 tijdens halfstar regelen Bus         */
    #define cvchst22fiets       25 /* OV inmeldingen fase 22 tijdens halfstar regelen Fiets       */
    #define cvchst28fiets       26 /* OV inmeldingen fase 28 tijdens halfstar regelen Fiets       */
    #define cvchst61karbus      27 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risov       28 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst61risvrw      29 /* OV inmeldingen fase 61 tijdens halfstar regelen Vrachtwagen */
    #define cvchst61risalg      30 /* OV inmeldingen fase 61 tijdens halfstar regelen Bus         */
    #define cvchst62karbus      31 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risov       32 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst62risvrw      33 /* OV inmeldingen fase 62 tijdens halfstar regelen Vrachtwagen */
    #define cvchst62risalg      34 /* OV inmeldingen fase 62 tijdens halfstar regelen Bus         */
    #define cvchst67karbus      35 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risov       36 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst67risvrw      37 /* OV inmeldingen fase 67 tijdens halfstar regelen Vrachtwagen */
    #define cvchst67risalg      38 /* OV inmeldingen fase 67 tijdens halfstar regelen Bus         */
    #define cvchst68karbus      39 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risov       40 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvchst68risvrw      41 /* OV inmeldingen fase 68 tijdens halfstar regelen Vrachtwagen */
    #define cvchst68risalg      42 /* OV inmeldingen fase 68 tijdens halfstar regelen Bus         */
    #define cvc02karbus         43 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          44 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         45 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc02risalg         46 /* Bijhouden prio inmeldingen fase 02 type NG                  */
    #define cvc03karbus         47 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          48 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         49 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc03risalg         50 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc05karbus         51 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          52 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         53 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc05risalg         54 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc08karbus         55 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          56 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         57 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc08risalg         58 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc09karbus         59 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          60 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         61 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc09risalg         62 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc11karbus         63 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          64 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         65 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cvc11risalg         66 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11bus            67 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cftscyc22fietsfiets 68 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cvc22fiets          69 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cftscyc28fietsfiets 70 /* Bijhouden realisaties tbv peloton prio voor fase 28         */
    #define cvc28fiets          71 /* Bijhouden prio inmeldingen fase 28 type Fiets               */
    #define cvc61karbus         72 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          73 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         74 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc61risalg         75 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc62karbus         76 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          77 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         78 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc62risalg         79 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc67karbus         80 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          81 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         82 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc67risalg         83 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc68karbus         84 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          85 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         86 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvc68risalg         87 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvchd02             88 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             89 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             90 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             91 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             92 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             93 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             94 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             95 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             96 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             97 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              98

/* schakelaars */
/* ----------- */
    #define schdynhiaat08              0 /* Toepassen dynamisch hiaat bij fase 08                                     */
    #define schopdrempelen08           1 /* Opdrempelen toepassen voor fase 08                                        */
    #define schedkop_08                2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus            */
    #define schdynhiaat09              3 /* Toepassen dynamisch hiaat bij fase 09                                     */
    #define schopdrempelen09           4 /* Opdrempelen toepassen voor fase 09                                        */
    #define schedkop_09                5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus            */
    #define schdynhiaat11              6 /* Toepassen dynamisch hiaat bij fase 11                                     */
    #define schopdrempelen11           7 /* Opdrempelen toepassen voor fase 11                                        */
    #define schedkop_11                8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus            */
    #define schtypeuswt                9 /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag         */
    #define schcycl                   10 /* Bijhouden actuele cyclustijd aan of uit                                   */
    #define schcycl_reset             11 /* Reset meting cyclustijd                                                   */
    #define schdvakd02_1a             12 /* Aanvraag fase 02 bij storing op detector 02_1a                            */
    #define schdvakd02_1b             13 /* Aanvraag fase 02 bij storing op detector 02_1b                            */
    #define schdvakd03_1              14 /* Aanvraag fase 03 bij storing op detector 03_1                             */
    #define schdvakdk31a              15 /* Aanvraag fase 31 bij storing op detector k31a                             */
    #define schdvakdk31b              16 /* Aanvraag fase 31 bij storing op detector k31b                             */
    #define schfileFile68af           17 /* File ingreep File68af toepassen                                           */
    #define schfiledoserenFile68af    18 /* Toepassen doseerpercentages voor fileingreep File68af                     */
    #define schfileFile68afparstrook  19 /* Parallele file meldingen per strook file ingreep File68af                 */
    #define schbmfix                  20 /* Bijkomen tijdens fixatie mogelijk                                         */
    #define schaltghst02              21 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen          */
    #define schaltghst03              22 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen          */
    #define schaltghst05              23 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen          */
    #define schaltghst08              24 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen          */
    #define schaltghst09              25 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen          */
    #define schaltghst11              26 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen          */
    #define schaltghst21              27 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen          */
    #define schaltghst2232            28 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen     */
    #define schaltghst243484          29 /* Alternatief realiseren fasen 24, 34, 84 toestaan tijdens halfstar regelen */
    #define schaltghst26              30 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen          */
    #define schaltghst2838            31 /* Alternatief realiseren fasen 28, 38 toestaan tijdens halfstar regelen     */
    #define schaltghst31              32 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen          */
    #define schaltghst88              33 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen          */
    #define schaltghst243384          34 /* Alternatief realiseren fasen 24, 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst82              35 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen          */
    #define schaltghst81              36 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen          */
    #define schaltghst68              37 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen          */
    #define schaltghst67              38 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen          */
    #define schaltghst62              39 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen          */
    #define schaltghst61              40 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen          */
    #define schaltghst2434            41 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen     */
    #define schaltghst3384            42 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen     */
    #define schtegenov02              43 /* Tegenhouden hoofdrichting 02 bij OV ingreep                               */
    #define schafkwgov02              44 /* Afkappen WG hoofdrichting 02 bij OV ingreep                               */
    #define schafkvgov02              45 /* Afkappen VG hoofdrichting 02 bij OV ingreep                               */
    #define schtegenov08              46 /* Tegenhouden hoofdrichting 08 bij OV ingreep                               */
    #define schafkwgov08              47 /* Afkappen WG hoofdrichting 08 bij OV ingreep                               */
    #define schafkvgov08              48 /* Afkappen VG hoofdrichting 08 bij OV ingreep                               */
    #define schinst                   49 /* Eenmalig instellen signaalplannen na wijziging                            */
    #define schslavebep               50 /* Slave bepaald PL aansturing                                               */
    #define schvaml                   51 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)              */
    #define schvar                    52 /* VA regelen aan of uit                                                     */
    #define scharh                    53 /* Toestaan alternatieven voor hoofdrichtingen                               */
    #define schpervardef              54 /* VA regelen periode default                                                */
    #define schpervar1                55 /* VA regelen periode nacht                                                  */
    #define schpervar2                56 /* VA regelen periode dag                                                    */
    #define schpervar3                57 /* VA regelen periode ochtend                                                */
    #define schpervar4                58 /* VA regelen periode avond                                                  */
    #define schpervar5                59 /* VA regelen periode koopavond                                              */
    #define schpervar6                60 /* VA regelen periode weekend                                                */
    #define schpervar7                61 /* VA regelen periode reserve                                                */
    #define schperarhdef              62 /* Alternatieven voor hoofdrichtingen periode default                        */
    #define schperarh1                63 /* Alternatieven voor hoofdrichtingen periode nacht                          */
    #define schperarh2                64 /* Alternatieven voor hoofdrichtingen periode dag                            */
    #define schperarh3                65 /* Alternatieven voor hoofdrichtingen periode ochtend                        */
    #define schperarh4                66 /* Alternatieven voor hoofdrichtingen periode avond                          */
    #define schperarh5                67 /* Alternatieven voor hoofdrichtingen periode koopavond                      */
    #define schperarh6                68 /* Alternatieven voor hoofdrichtingen periode weekend                        */
    #define schperarh7                69 /* Alternatieven voor hoofdrichtingen periode reserve                        */
    #define schovpriople              70 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                    */
    #define schma0261                 71 /* Meeaanvraag van 02 naar 61 actief                                         */
    #define schma0262                 72 /* Meeaanvraag van 02 naar 62 actief                                         */
    #define schma0521                 73 /* Meeaanvraag van 05 naar 21 actief                                         */
    #define schma0522                 74 /* Meeaanvraag van 05 naar 22 actief                                         */
    #define schma0532                 75 /* Meeaanvraag van 05 naar 32 actief                                         */
    #define schma0868                 76 /* Meeaanvraag van 08 naar 68 actief                                         */
    #define schma1126                 77 /* Meeaanvraag van 11 naar 26 actief                                         */
    #define schma1168                 78 /* Meeaanvraag van 11 naar 68 actief                                         */
    #define schma2221                 79 /* Meeaanvraag van 22 naar 21 actief                                         */
    #define schma2611                 80 /* Meeaanvraag van 26 naar 11 actief                                         */
    #define schma3122                 81 /* Meeaanvraag van 31 naar 22 actief                                         */
    #define schma3132                 82 /* Meeaanvraag van 31 naar 32 actief                                         */
    #define schma3222                 83 /* Meeaanvraag van 32 naar 22 actief                                         */
    #define schma3231                 84 /* Meeaanvraag van 32 naar 31 actief                                         */
    #define schma3324                 85 /* Meeaanvraag van 33 naar 24 actief                                         */
    #define schma3334                 86 /* Meeaanvraag van 33 naar 34 actief                                         */
    #define schma3384                 87 /* Meeaanvraag van 33 naar 84 actief                                         */
    #define schma3424                 88 /* Meeaanvraag van 34 naar 24 actief                                         */
    #define schma3433                 89 /* Meeaanvraag van 34 naar 33 actief                                         */
    #define schma3484                 90 /* Meeaanvraag van 34 naar 84 actief                                         */
    #define schma8281                 91 /* Meeaanvraag van 82 naar 81 actief                                         */
    #define schmv02                   92 /* Meeverlengen fase 02                                                      */
    #define schmv03                   93 /* Meeverlengen fase 03                                                      */
    #define schmv05                   94 /* Meeverlengen fase 05                                                      */
    #define schmv08                   95 /* Meeverlengen fase 08                                                      */
    #define schmv09                   96 /* Meeverlengen fase 09                                                      */
    #define schmv11                   97 /* Meeverlengen fase 11                                                      */
    #define schmv21                   98 /* Meeverlengen fase 21                                                      */
    #define schmv22                   99 /* Meeverlengen fase 22                                                      */
    #define schhardmv2205            100 /* Hard meeverlengen fase 22 met fase 05                                     */
    #define schmv24                  101 /* Meeverlengen fase 24                                                      */
    #define schmv26                  102 /* Meeverlengen fase 26                                                      */
    #define schhardmv2611            103 /* Hard meeverlengen fase 26 met fase 11                                     */
    #define schmv28                  104 /* Meeverlengen fase 28                                                      */
    #define schmv31                  105 /* Meeverlengen fase 31                                                      */
    #define schmv32                  106 /* Meeverlengen fase 32                                                      */
    #define schhardmv3205            107 /* Hard meeverlengen fase 32 met fase 05                                     */
    #define schmv33                  108 /* Meeverlengen fase 33                                                      */
    #define schmv34                  109 /* Meeverlengen fase 34                                                      */
    #define schmv38                  110 /* Meeverlengen fase 38                                                      */
    #define schmv61                  111 /* Meeverlengen fase 61                                                      */
    #define schmv62                  112 /* Meeverlengen fase 62                                                      */
    #define schmv67                  113 /* Meeverlengen fase 67                                                      */
    #define schmv68                  114 /* Meeverlengen fase 68                                                      */
    #define schmv81                  115 /* Meeverlengen fase 81                                                      */
    #define schmv82                  116 /* Meeverlengen fase 82                                                      */
    #define schmv84                  117 /* Meeverlengen fase 84                                                      */
    #define schmlprm                 118 /* Toepassen parametriseerbare modulestructuur                               */
    #define schovstipt02karbus       119 /* Geconditioneerde prioteit voor OV bij 02 Bus                              */
    #define schovstipt03karbus       120 /* Geconditioneerde prioteit voor OV bij 03 Bus                              */
    #define schovstipt05karbus       121 /* Geconditioneerde prioteit voor OV bij 05 Bus                              */
    #define schovstipt08karbus       122 /* Geconditioneerde prioteit voor OV bij 08 Bus                              */
    #define schovstipt09karbus       123 /* Geconditioneerde prioteit voor OV bij 09 Bus                              */
    #define schovstipt11karbus       124 /* Geconditioneerde prioteit voor OV bij 11 Bus                              */
    #define schovstipt61karbus       125 /* Geconditioneerde prioteit voor OV bij 61 Bus                              */
    #define schovstipt62karbus       126 /* Geconditioneerde prioteit voor OV bij 62 Bus                              */
    #define schovstipt67karbus       127 /* Geconditioneerde prioteit voor OV bij 67 Bus                              */
    #define schovstipt68karbus       128 /* Geconditioneerde prioteit voor OV bij 68 Bus                              */
    #define schcovuber               129 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                            */
    #define schcheckdstype           130 /* Check type DSI bericht bij VECOM                                          */
    #define schprioin02karbuskar     131 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02karbuskar    132 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risovris      133 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02risovris     134 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risvrwris     135 /* Inmelden 02 via Vrachtwagen toestaan                                      */
    #define schpriouit02risvrwris    136 /* Uitmelden 02 via Vrachtwagen toestaan                                     */
    #define schprioin02risalgris     137 /* Inmelden 02 via NG toestaan                                               */
    #define schpriouit02risalgris    138 /* Uitmelden 02 via NG toestaan                                              */
    #define schprioin03karbuskar     139 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03karbuskar    140 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risovris      141 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03risovris     142 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risvrwris     143 /* Inmelden 03 via Vrachtwagen toestaan                                      */
    #define schpriouit03risvrwris    144 /* Uitmelden 03 via Vrachtwagen toestaan                                     */
    #define schprioin03risalgris     145 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03risalgris    146 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin05karbuskar     147 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05karbuskar    148 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risovris      149 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05risovris     150 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risvrwris     151 /* Inmelden 05 via Vrachtwagen toestaan                                      */
    #define schpriouit05risvrwris    152 /* Uitmelden 05 via Vrachtwagen toestaan                                     */
    #define schprioin05risalgris     153 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05risalgris    154 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin08karbuskar     155 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08karbuskar    156 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risovris      157 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08risovris     158 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risvrwris     159 /* Inmelden 08 via Vrachtwagen toestaan                                      */
    #define schpriouit08risvrwris    160 /* Uitmelden 08 via Vrachtwagen toestaan                                     */
    #define schprioin08risalgris     161 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08risalgris    162 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin09karbuskar     163 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09karbuskar    164 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risovris      165 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09risovris     166 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risvrwris     167 /* Inmelden 09 via Vrachtwagen toestaan                                      */
    #define schpriouit09risvrwris    168 /* Uitmelden 09 via Vrachtwagen toestaan                                     */
    #define schprioin09risalgris     169 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09risalgris    170 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin11karbuskar     171 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11karbuskar    172 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risovris      173 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11risovris     174 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risvrwris     175 /* Inmelden 11 via Vrachtwagen toestaan                                      */
    #define schpriouit11risvrwris    176 /* Uitmelden 11 via Vrachtwagen toestaan                                     */
    #define schprioin11risalgris     177 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11risalgris    178 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11busvecioSD    179 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11buskar       180 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin22fietsfiets    181 /* Inmelden 22 via Fiets toestaan                                            */
    #define schpriouit22fietsfiets   182 /* Uitmelden 22 via Fiets toestaan                                           */
    #define schprioin28fietsfiets    183 /* Inmelden 28 via Fiets toestaan                                            */
    #define schpriouit28fietsfiets   184 /* Uitmelden 28 via Fiets toestaan                                           */
    #define schprioin61karbuskar     185 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61karbuskar    186 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risovris      187 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61risovris     188 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risvrwris     189 /* Inmelden 61 via Vrachtwagen toestaan                                      */
    #define schpriouit61risvrwris    190 /* Uitmelden 61 via Vrachtwagen toestaan                                     */
    #define schprioin61risalgris     191 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61risalgris    192 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin62karbuskar     193 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62karbuskar    194 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risovris      195 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62risovris     196 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risvrwris     197 /* Inmelden 62 via Vrachtwagen toestaan                                      */
    #define schpriouit62risvrwris    198 /* Uitmelden 62 via Vrachtwagen toestaan                                     */
    #define schprioin62risalgris     199 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62risalgris    200 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin67karbuskar     201 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67karbuskar    202 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risovris      203 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67risovris     204 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risvrwris     205 /* Inmelden 67 via Vrachtwagen toestaan                                      */
    #define schpriouit67risvrwris    206 /* Uitmelden 67 via Vrachtwagen toestaan                                     */
    #define schprioin67risalgris     207 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67risalgris    208 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin68karbuskar     209 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68karbuskar    210 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risovris      211 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68risovris     212 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risvrwris     213 /* Inmelden 68 via Vrachtwagen toestaan                                      */
    #define schpriouit68risvrwris    214 /* Uitmelden 68 via Vrachtwagen toestaan                                     */
    #define schprioin68risalgris     215 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68risalgris    216 /* Uitmelden 68 via Bus toestaan                                             */
    #define schhdin02kar             217 /* Inmelden 02 via KAR HD toestaan                                           */
    #define schhduit02kar            218 /* Uitmelden 02 via KAR HD toestaan                                          */
    #define schchecksirene02         219 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                    */
    #define schhdin02ris             220 /* Inmelden 02 via RIS HD toestaan                                           */
    #define schhduit02ris            221 /* Uitmelden 02 via RIS HD toestaan                                          */
    #define schhdin03kar             222 /* Inmelden 03 via KAR HD toestaan                                           */
    #define schhduit03kar            223 /* Uitmelden 03 via KAR HD toestaan                                          */
    #define schchecksirene03         224 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                    */
    #define schhdin03ris             225 /* Inmelden 03 via RIS HD toestaan                                           */
    #define schhduit03ris            226 /* Uitmelden 03 via RIS HD toestaan                                          */
    #define schhdin05kar             227 /* Inmelden 05 via KAR HD toestaan                                           */
    #define schhduit05kar            228 /* Uitmelden 05 via KAR HD toestaan                                          */
    #define schchecksirene05         229 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                    */
    #define schhdin05ris             230 /* Inmelden 05 via RIS HD toestaan                                           */
    #define schhduit05ris            231 /* Uitmelden 05 via RIS HD toestaan                                          */
    #define schhdin08kar             232 /* Inmelden 08 via KAR HD toestaan                                           */
    #define schhduit08kar            233 /* Uitmelden 08 via KAR HD toestaan                                          */
    #define schchecksirene08         234 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                    */
    #define schhdin08ris             235 /* Inmelden 08 via RIS HD toestaan                                           */
    #define schhduit08ris            236 /* Uitmelden 08 via RIS HD toestaan                                          */
    #define schhdin09kar             237 /* Inmelden 09 via KAR HD toestaan                                           */
    #define schhduit09kar            238 /* Uitmelden 09 via KAR HD toestaan                                          */
    #define schchecksirene09         239 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                    */
    #define schhdin09ris             240 /* Inmelden 09 via RIS HD toestaan                                           */
    #define schhduit09ris            241 /* Uitmelden 09 via RIS HD toestaan                                          */
    #define schhdin11kar             242 /* Inmelden 11 via KAR HD toestaan                                           */
    #define schhduit11kar            243 /* Uitmelden 11 via KAR HD toestaan                                          */
    #define schchecksirene11         244 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                    */
    #define schhdin11ris             245 /* Inmelden 11 via RIS HD toestaan                                           */
    #define schhduit11ris            246 /* Uitmelden 11 via RIS HD toestaan                                          */
    #define schhdin61kar             247 /* Inmelden 61 via KAR HD toestaan                                           */
    #define schhduit61kar            248 /* Uitmelden 61 via KAR HD toestaan                                          */
    #define schchecksirene61         249 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                    */
    #define schhdin61ris             250 /* Inmelden 61 via RIS HD toestaan                                           */
    #define schhduit61ris            251 /* Uitmelden 61 via RIS HD toestaan                                          */
    #define schhdin62kar             252 /* Inmelden 62 via KAR HD toestaan                                           */
    #define schhduit62kar            253 /* Uitmelden 62 via KAR HD toestaan                                          */
    #define schchecksirene62         254 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                    */
    #define schhdin62ris             255 /* Inmelden 62 via RIS HD toestaan                                           */
    #define schhduit62ris            256 /* Uitmelden 62 via RIS HD toestaan                                          */
    #define schhdin67kar             257 /* Inmelden 67 via KAR HD toestaan                                           */
    #define schhduit67kar            258 /* Uitmelden 67 via KAR HD toestaan                                          */
    #define schchecksirene67         259 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                    */
    #define schhdin67ris             260 /* Inmelden 67 via RIS HD toestaan                                           */
    #define schhduit67ris            261 /* Uitmelden 67 via RIS HD toestaan                                          */
    #define schhdin68kar             262 /* Inmelden 68 via KAR HD toestaan                                           */
    #define schhduit68kar            263 /* Uitmelden 68 via KAR HD toestaan                                          */
    #define schchecksirene68         264 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                    */
    #define schhdin68ris             265 /* Inmelden 68 via RIS HD toestaan                                           */
    #define schhduit68ris            266 /* Uitmelden 68 via RIS HD toestaan                                          */
    #define schpelrwKOP02            267 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02      */
    #define schpelmkKOP02            268 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02          */
    #define schpelaKOP02             269 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02               */
    #define schpkuKOP68_uit68        270 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit      */
    #define schrisgeencheckopsg      271 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen               */
    #define schrisaanvraag           272 /* Globaal in of uitschakelen aanvragen via RIS                              */
    #define schrisverlengen          273 /* Globaal in of uitschakelen verlengen via RIS                              */
    #define schrgadd24_3             274 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                */
    #define schrgad24_3              275 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgvd24_3              276 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgv                   277 /* RoBuGrover aan of uit                                                     */
    #define schrgv_snel              278 /* RoBuGrover versneld ophogen of verlagen                                   */
    #define schschoolingreep31       279 /* Schoolingreep aan of uit voor fase 31                                     */
    #define schschoolingreep32       280 /* Schoolingreep aan of uit voor fase 32                                     */
    #define schschoolingreep33       281 /* Schoolingreep aan of uit voor fase 33                                     */
    #define schschoolingreep34       282 /* Schoolingreep aan of uit voor fase 34                                     */
    #define schsi31                  283 /* Senioreningreep aan of uit voor fase 31                                   */
    #define schsi32                  284 /* Senioreningreep aan of uit voor fase 32                                   */
    #define schsi33                  285 /* Senioreningreep aan of uit voor fase 33                                   */
    #define schsi34                  286 /* Senioreningreep aan of uit voor fase 34                                   */
    #define schca02                  287 /* Cyclische aanvraag fase 02                                                */
    #define schca03                  288 /* Cyclische aanvraag fase 03                                                */
    #define schca05                  289 /* Cyclische aanvraag fase 05                                                */
    #define schca08                  290 /* Cyclische aanvraag fase 08                                                */
    #define schca09                  291 /* Cyclische aanvraag fase 09                                                */
    #define schca11                  292 /* Cyclische aanvraag fase 11                                                */
    #define schca21                  293 /* Cyclische aanvraag fase 21                                                */
    #define schca22                  294 /* Cyclische aanvraag fase 22                                                */
    #define schca24                  295 /* Cyclische aanvraag fase 24                                                */
    #define schca26                  296 /* Cyclische aanvraag fase 26                                                */
    #define schca28                  297 /* Cyclische aanvraag fase 28                                                */
    #define schca31                  298 /* Cyclische aanvraag fase 31                                                */
    #define schca32                  299 /* Cyclische aanvraag fase 32                                                */
    #define schca33                  300 /* Cyclische aanvraag fase 33                                                */
    #define schca34                  301 /* Cyclische aanvraag fase 34                                                */
    #define schca38                  302 /* Cyclische aanvraag fase 38                                                */
    #define schca61                  303 /* Cyclische aanvraag fase 61                                                */
    #define schca62                  304 /* Cyclische aanvraag fase 62                                                */
    #define schca67                  305 /* Cyclische aanvraag fase 67                                                */
    #define schca68                  306 /* Cyclische aanvraag fase 68                                                */
    #define schca81                  307 /* Cyclische aanvraag fase 81                                                */
    #define schca82                  308 /* Cyclische aanvraag fase 82                                                */
    #define schca84                  309 /* Cyclische aanvraag fase 84                                                */
    #define schvg02_4a               310 /* Veiligheidsgroen detector 02_4a fase 02                                   */
    #define schvg02_4b               311 /* Veiligheidsgroen detector 02_4b fase 02                                   */
    #define schvg08_4a               312 /* Veiligheidsgroen detector 08_4a fase 08                                   */
    #define schvg08_4b               313 /* Veiligheidsgroen detector 08_4b fase 08                                   */
    #define schvg11_4                314 /* Veiligheidsgroen detector 11_4 fase 11                                    */
    #define schaltg02                315 /* Alternatieve realisatie toestaan fase 02                                  */
    #define schaltg03                316 /* Alternatieve realisatie toestaan fase 03                                  */
    #define schaltg05                317 /* Alternatieve realisatie toestaan fase 05                                  */
    #define schaltg08                318 /* Alternatieve realisatie toestaan fase 08                                  */
    #define schaltg09                319 /* Alternatieve realisatie toestaan fase 09                                  */
    #define schaltg11                320 /* Alternatieve realisatie toestaan fase 11                                  */
    #define schaltg21                321 /* Alternatieve realisatie toestaan fase 21                                  */
    #define schaltg2232              322 /* Alternatieve realisatie toestaan fasen 22, 32                             */
    #define schaltg243484            323 /* Alternatieve realisatie toestaan fasen 24, 34, 84                         */
    #define schaltg26                324 /* Alternatieve realisatie toestaan fase 26                                  */
    #define schaltg2838              325 /* Alternatieve realisatie toestaan fasen 28, 38                             */
    #define schaltg31                326 /* Alternatieve realisatie toestaan fase 31                                  */
    #define schaltg3384              327 /* Alternatieve realisatie toestaan fasen 33, 84                             */
    #define schaltg2434              328 /* Alternatieve realisatie toestaan fasen 24, 34                             */
    #define schaltg61                329 /* Alternatieve realisatie toestaan fase 61                                  */
    #define schaltg62                330 /* Alternatieve realisatie toestaan fase 62                                  */
    #define schaltg67                331 /* Alternatieve realisatie toestaan fase 67                                  */
    #define schaltg68                332 /* Alternatieve realisatie toestaan fase 68                                  */
    #define schaltg81                333 /* Alternatieve realisatie toestaan fase 81                                  */
    #define schaltg82                334 /* Alternatieve realisatie toestaan fase 82                                  */
    #define schaltg243384            335 /* Alternatieve realisatie toestaan fasen 24, 33, 84                         */
    #define schwg02                  336 /* Wachtstand groen fase 02                                                  */
    #define schwg03                  337 /* Wachtstand groen fase 03                                                  */
    #define schwg05                  338 /* Wachtstand groen fase 05                                                  */
    #define schwg08                  339 /* Wachtstand groen fase 08                                                  */
    #define schwg09                  340 /* Wachtstand groen fase 09                                                  */
    #define schwg11                  341 /* Wachtstand groen fase 11                                                  */
    #define schwg21                  342 /* Wachtstand groen fase 21                                                  */
    #define schwg22                  343 /* Wachtstand groen fase 22                                                  */
    #define schwg24                  344 /* Wachtstand groen fase 24                                                  */
    #define schwg26                  345 /* Wachtstand groen fase 26                                                  */
    #define schwg28                  346 /* Wachtstand groen fase 28                                                  */
    #define schwg31                  347 /* Wachtstand groen fase 31                                                  */
    #define schwg32                  348 /* Wachtstand groen fase 32                                                  */
    #define schwg33                  349 /* Wachtstand groen fase 33                                                  */
    #define schwg34                  350 /* Wachtstand groen fase 34                                                  */
    #define schwg38                  351 /* Wachtstand groen fase 38                                                  */
    #define schwg61                  352 /* Wachtstand groen fase 61                                                  */
    #define schwg62                  353 /* Wachtstand groen fase 62                                                  */
    #define schwg67                  354 /* Wachtstand groen fase 67                                                  */
    #define schwg68                  355 /* Wachtstand groen fase 68                                                  */
    #define schwg81                  356 /* Wachtstand groen fase 81                                                  */
    #define schwg82                  357 /* Wachtstand groen fase 82                                                  */
    #define schwg84                  358 /* Wachtstand groen fase 84                                                  */
    #define schwtv24                 359 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                        */
    #define schwtvbusbijhd           360 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                  */
    #define schstar                  361 /* Inschakelen star programma                                                */
    #define schgs2232                362 /* Schakelbare gelijkstart tussen fase 32 en 22                              */
    #define schgs2434                363 /* Schakelbare gelijkstart tussen fase 34 en 24                              */
    #define schgs2484                364 /* Schakelbare gelijkstart tussen fase 84 en 24                              */
    #define schgs3384                365 /* Schakelbare gelijkstart tussen fase 84 en 33                              */
    #define schlos32_1               366 /* Toestaan los realiseren fase 32                                           */
    #define schlos32_2               367 /* Toestaan los realiseren fase 32                                           */
    #define schlos31_1               368 /* Toestaan los realiseren fase 31                                           */
    #define schlos31_2               369 /* Toestaan los realiseren fase 31                                           */
    #define schlos34_1               370 /* Toestaan los realiseren fase 34                                           */
    #define schlos34_2               371 /* Toestaan los realiseren fase 34                                           */
    #define schlos33_1               372 /* Toestaan los realiseren fase 33                                           */
    #define schlos33_2               373 /* Toestaan los realiseren fase 33                                           */
    #define schconfidence15fix       374
    #define schtxconfidence15ar      375
    #define schspatconfidence1       376
    #define schspatconfidence3       377
    #define schspatconfidence6       378
    #define schspatconfidence9       379
    #define schspatconfidence12      380
    #define schspatconfidence15      381
    #define schtimings02             382
    #define schtimings03             383
    #define schtimings05             384
    #define schtimings08             385
    #define schtimings09             386
    #define schtimings11             387
    #define schtimings21             388
    #define schtimings22             389
    #define schtimings24             390
    #define schtimings26             391
    #define schtimings28             392
    #define schtimings31             393
    #define schtimings32             394
    #define schtimings33             395
    #define schtimings34             396
    #define schtimings38             397
    #define schtimings61             398
    #define schtimings62             399
    #define schtimings67             400
    #define schtimings68             401
    #define schtimings81             402
    #define schtimings82             403
    #define schtimings84             404
    #define schsneld02_1a            405 /* Aanvraag snel voor detector 02_1a aan of uit                              */
    #define schsneld02_1b            406 /* Aanvraag snel voor detector 02_1b aan of uit                              */
    #define schsneld03_1             407 /* Aanvraag snel voor detector 03_1 aan of uit                               */
    #define schsneld05_1             408 /* Aanvraag snel voor detector 05_1 aan of uit                               */
    #define schsneld08_1a            409 /* Aanvraag snel voor detector 08_1a aan of uit                              */
    #define schsneld08_1b            410 /* Aanvraag snel voor detector 08_1b aan of uit                              */
    #define schsneld09_1             411 /* Aanvraag snel voor detector 09_1 aan of uit                               */
    #define schsneld11_1             412 /* Aanvraag snel voor detector 11_1 aan of uit                               */
    #define schsneld211              413 /* Aanvraag snel voor detector 211 aan of uit                                */
    #define schsneld22_1             414 /* Aanvraag snel voor detector 22_1 aan of uit                               */
    #define schsneld24_1             415 /* Aanvraag snel voor detector 24_1 aan of uit                               */
    #define schsneld261              416 /* Aanvraag snel voor detector 261 aan of uit                                */
    #define schsneld28_1             417 /* Aanvraag snel voor detector 28_1 aan of uit                               */
    #define schsneld61_1             418 /* Aanvraag snel voor detector 61_1 aan of uit                               */
    #define schsneld62_1a            419 /* Aanvraag snel voor detector 62_1a aan of uit                              */
    #define schsneld62_1b            420 /* Aanvraag snel voor detector 62_1b aan of uit                              */
    #define schsneld67_1             421 /* Aanvraag snel voor detector 67_1 aan of uit                               */
    #define schsneld68_1a            422 /* Aanvraag snel voor detector 68_1a aan of uit                              */
    #define schsneld68_1b            423 /* Aanvraag snel voor detector 68_1b aan of uit                              */
    #define schsneld81_1             424 /* Aanvraag snel voor detector 81_1 aan of uit                               */
    #define schsneld82_1             425 /* Aanvraag snel voor detector 82_1 aan of uit                               */
    #define schsneld84_1             426 /* Aanvraag snel voor detector 84_1 aan of uit                               */
    #define SCHMAX1                  427

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
    #define prmaltphst2838               205 /* Alternatieve ruimte fasen 28, 38 tijdens halfstar regelen                                                                      */
    #define prmaltphst31                 206 /* Alternatieve ruimte fase 31 tijdens halfstar regelen                                                                           */
    #define prmaltphst88                 207 /* Alternatieve ruimte fase 88 tijdens halfstar regelen                                                                           */
    #define prmaltphst243384             208 /* Alternatieve ruimte fasen 24, 33, 84 tijdens halfstar regelen                                                                  */
    #define prmaltphst82                 209 /* Alternatieve ruimte fase 82 tijdens halfstar regelen                                                                           */
    #define prmaltphst81                 210 /* Alternatieve ruimte fase 81 tijdens halfstar regelen                                                                           */
    #define prmaltphst68                 211 /* Alternatieve ruimte fase 68 tijdens halfstar regelen                                                                           */
    #define prmaltphst67                 212 /* Alternatieve ruimte fase 67 tijdens halfstar regelen                                                                           */
    #define prmaltphst62                 213 /* Alternatieve ruimte fase 62 tijdens halfstar regelen                                                                           */
    #define prmaltphst61                 214 /* Alternatieve ruimte fase 61 tijdens halfstar regelen                                                                           */
    #define prmaltphst2434               215 /* Alternatieve ruimte fasen 24, 34 tijdens halfstar regelen                                                                      */
    #define prmaltphst3384               216 /* Alternatieve ruimte fasen 33, 84 tijdens halfstar regelen                                                                      */
    #define prmpriohst02karbus           217 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risov            218 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst02risvrw           219 /* Prioriteit fase 02 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst02risalg           220 /* Prioriteit fase 02 tijdens halfstar regelen NG                                                                                 */
    #define prmpriohst03karbus           221 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risov            222 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst03risvrw           223 /* Prioriteit fase 03 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst03risalg           224 /* Prioriteit fase 03 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05karbus           225 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risov            226 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst05risvrw           227 /* Prioriteit fase 05 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst05risalg           228 /* Prioriteit fase 05 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08karbus           229 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risov            230 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst08risvrw           231 /* Prioriteit fase 08 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst08risalg           232 /* Prioriteit fase 08 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09karbus           233 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risov            234 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst09risvrw           235 /* Prioriteit fase 09 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst09risalg           236 /* Prioriteit fase 09 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11karbus           237 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risov            238 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11risvrw           239 /* Prioriteit fase 11 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst11risalg           240 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst11bus              241 /* Prioriteit fase 11 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst22fiets            242 /* Prioriteit fase 22 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst28fiets            243 /* Prioriteit fase 28 tijdens halfstar regelen Fiets                                                                              */
    #define prmpriohst61karbus           244 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risov            245 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst61risvrw           246 /* Prioriteit fase 61 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst61risalg           247 /* Prioriteit fase 61 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62karbus           248 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risov            249 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst62risvrw           250 /* Prioriteit fase 62 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst62risalg           251 /* Prioriteit fase 62 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67karbus           252 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risov            253 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst67risvrw           254 /* Prioriteit fase 67 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst67risalg           255 /* Prioriteit fase 67 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68karbus           256 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risov            257 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmpriohst68risvrw           258 /* Prioriteit fase 68 tijdens halfstar regelen Vrachtwagen                                                                        */
    #define prmpriohst68risalg           259 /* Prioriteit fase 68 tijdens halfstar regelen Bus                                                                                */
    #define prmnatxdhst02karbus          260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risalg          263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03karbus          264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risalg          267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05karbus          268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risalg          271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08karbus          272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risalg          275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09karbus          276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risalg          279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11karbus          280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risalg          283 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11bus             284 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           285 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           286 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61karbus          287 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           288 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          289 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risalg          290 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62karbus          291 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           292 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          293 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risalg          294 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67karbus          295 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           296 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          297 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risalg          298 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68karbus          299 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           300 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          301 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risalg          302 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmtxA1PL3_28                303 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                304 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                305 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                306 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                307 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                308 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                309 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                310 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                311 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                312 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_38                313 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                314 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                315 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                316 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                317 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                318 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                319 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                320 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                321 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                322 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                323 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                324 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                325 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                326 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                327 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                328 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                329 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                330 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                331 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                332 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmrstotxa                   333 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmvolgmasterpl              334 /* Per plan (bitwise) instellen wel of niet volgen master                                                                         */
    #define prmplxperdef                 335 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   336 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   337 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   338 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   339 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   340 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   341 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   342 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                343 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                344 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                345 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                346 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                347 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                348 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                349 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                350 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                351 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                352 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                353 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                354 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                355 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                356 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                357 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                358 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                359 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                360 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                361 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                362 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                363 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                364 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      365 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      366 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      367 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      368 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      369 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      370 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      371 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      372 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      373 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      374 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      375 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      376 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      377 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      378 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      379 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      380 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      381 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      382 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      383 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      384 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      385 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      386 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                      387 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    388 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    389 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    390 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    391 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    392 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    393 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    394 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    395 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    396 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    397 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    398 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    399 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    400 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    401 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    402 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    403 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    404 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    405 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    406 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    407 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    408 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    409 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    410 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg          411 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           412 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02karbus    413 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02karbus     414 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02karbus     415 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03karbus    416 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03karbus     417 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03karbus     418 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05karbus    419 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05karbus     420 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05karbus     421 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08karbus    422 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08karbus     423 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08karbus     424 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09karbus    425 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09karbus     426 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09karbus     427 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11karbus    428 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11karbus     429 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11karbus     430 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61karbus    431 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61karbus     432 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61karbus     433 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62karbus    434 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62karbus     435 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62karbus     436 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67karbus    437 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67karbus     438 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67karbus     439 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68karbus    440 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68karbus     441 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68karbus     442 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      443 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    444 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    445 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    446 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    447 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    448 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   449 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  450 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   451 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    452 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    453 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    454 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   455 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  456 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   457 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    458 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    459 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    460 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   461 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  462 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   463 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    464 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    465 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    466 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   467 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  468 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   469 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    470 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    471 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    472 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   473 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  474 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   475 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    476 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    477 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    478 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   479 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  480 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   481 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    482 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    483 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    484 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   485 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  486 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   487 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    488 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    489 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    490 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   491 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  492 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   493 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    494 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    495 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    496 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   497 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  498 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   499 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    500 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    501 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    502 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   503 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  504 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   505 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    506 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    507 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    508 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   509 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  510 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   511 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    512 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    513 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    514 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    515 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    516 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    517 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    518 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    519 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    520 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    521 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    522 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    523 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    524 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   525 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  526 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   527 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    528 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    529 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    530 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   531 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  532 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   533 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    534 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    535 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    536 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   537 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  538 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   539 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    540 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    541 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    542 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   543 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  544 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   545 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    546 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    547 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    548 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   549 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  550 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   551 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    552 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    553 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    554 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   555 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  556 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   557 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    558 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    559 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    560 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   561 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  562 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   563 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus               564 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus              565 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus               566 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus               567 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus           568 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus            569 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus              570 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov                571 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov               572 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov                573 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov                574 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risov            575 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risov               576 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov           577
    #define prmrisend02risov             578
    #define prmriseta02risov             579
    #define prmrisrole02risov            580
    #define prmrissubrole02risov         581
    #define prmrisimportance02risov      582
    #define prmrisstationtype02risov     583
    #define prmrisgrenspriotype02risov   584 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risov      585
    #define prmrislaneid02risov_1        586
    #define prmrislaneid02risov_2        587
    #define prmrto02risvrw               588 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw              589 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw               590 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw               591 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risvrw           592 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risvrw              593 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw          594
    #define prmrisend02risvrw            595
    #define prmriseta02risvrw            596
    #define prmrisrole02risvrw           597
    #define prmrissubrole02risvrw        598
    #define prmrisimportance02risvrw     599
    #define prmrisstationtype02risvrw    600
    #define prmrisgrenspriotype02risvrw  601 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risvrw     602
    #define prmrislaneid02risvrw_1       603
    #define prmrislaneid02risvrw_2       604
    #define prmrto02risalg               605 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risalg              606 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risalg               607 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risalg               608 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risalg           609 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risalg              610 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risalg          611
    #define prmrisend02risalg            612
    #define prmriseta02risalg            613
    #define prmrisrole02risalg           614
    #define prmrissubrole02risalg        615
    #define prmrisimportance02risalg     616
    #define prmrisstationtype02risalg    617
    #define prmrisgrenspriotype02risalg  618 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risalg     619
    #define prmrislaneid02risalg_1       620
    #define prmrislaneid02risalg_2       621
    #define prmrto03karbus               622 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03karbus              623 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03karbus               624 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03karbus               625 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03karbus           626 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03karbus            627 /* Voertuigcategorie DSI voor prio ingreep 03karbus                                                                               */
    #define prmprio03karbus              628 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov                629 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov               630 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov                631 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov                632 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risov            633 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risov               634 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov           635
    #define prmrisend03risov             636
    #define prmriseta03risov             637
    #define prmrisrole03risov            638
    #define prmrissubrole03risov         639
    #define prmrisimportance03risov      640
    #define prmrisstationtype03risov     641
    #define prmrisgrenspriotype03risov   642 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risov      643
    #define prmrislaneid03risov_1        644
    #define prmrto03risvrw               645 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw              646 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw               647 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw               648 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risvrw           649 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risvrw              650 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw          651
    #define prmrisend03risvrw            652
    #define prmriseta03risvrw            653
    #define prmrisrole03risvrw           654
    #define prmrissubrole03risvrw        655
    #define prmrisimportance03risvrw     656
    #define prmrisstationtype03risvrw    657
    #define prmrisgrenspriotype03risvrw  658 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risvrw     659
    #define prmrislaneid03risvrw_1       660
    #define prmrto03risalg               661 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risalg              662 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risalg               663 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risalg               664 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risalg           665 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risalg              666 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risalg          667
    #define prmrisend03risalg            668
    #define prmriseta03risalg            669
    #define prmrisrole03risalg           670
    #define prmrissubrole03risalg        671
    #define prmrisimportance03risalg     672
    #define prmrisstationtype03risalg    673
    #define prmrisgrenspriotype03risalg  674 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risalg     675
    #define prmrislaneid03risalg_1       676
    #define prmrto05karbus               677 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05karbus              678 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05karbus               679 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05karbus               680 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05karbus           681 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05karbus            682 /* Voertuigcategorie DSI voor prio ingreep 05karbus                                                                               */
    #define prmprio05karbus              683 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov                684 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov               685 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov                686 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov                687 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risov            688 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risov               689 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov           690
    #define prmrisend05risov             691
    #define prmriseta05risov             692
    #define prmrisrole05risov            693
    #define prmrissubrole05risov         694
    #define prmrisimportance05risov      695
    #define prmrisstationtype05risov     696
    #define prmrisgrenspriotype05risov   697 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risov      698
    #define prmrislaneid05risov_1        699
    #define prmrto05risvrw               700 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw              701 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw               702 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw               703 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risvrw           704 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risvrw              705 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw          706
    #define prmrisend05risvrw            707
    #define prmriseta05risvrw            708
    #define prmrisrole05risvrw           709
    #define prmrissubrole05risvrw        710
    #define prmrisimportance05risvrw     711
    #define prmrisstationtype05risvrw    712
    #define prmrisgrenspriotype05risvrw  713 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risvrw     714
    #define prmrislaneid05risvrw_1       715
    #define prmrto05risalg               716 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risalg              717 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risalg               718 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risalg               719 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risalg           720 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risalg              721 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risalg          722
    #define prmrisend05risalg            723
    #define prmriseta05risalg            724
    #define prmrisrole05risalg           725
    #define prmrissubrole05risalg        726
    #define prmrisimportance05risalg     727
    #define prmrisstationtype05risalg    728
    #define prmrisgrenspriotype05risalg  729 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risalg     730
    #define prmrislaneid05risalg_1       731
    #define prmrto08karbus               732 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08karbus              733 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08karbus               734 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08karbus               735 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08karbus           736 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08karbus            737 /* Voertuigcategorie DSI voor prio ingreep 08karbus                                                                               */
    #define prmprio08karbus              738 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov                739 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov               740 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov                741 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov                742 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risov            743 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risov               744 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov           745
    #define prmrisend08risov             746
    #define prmriseta08risov             747
    #define prmrisrole08risov            748
    #define prmrissubrole08risov         749
    #define prmrisimportance08risov      750
    #define prmrisstationtype08risov     751
    #define prmrisgrenspriotype08risov   752 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risov      753
    #define prmrislaneid08risov_1        754
    #define prmrislaneid08risov_2        755
    #define prmrto08risvrw               756 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw              757 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw               758 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw               759 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risvrw           760 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risvrw              761 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw          762
    #define prmrisend08risvrw            763
    #define prmriseta08risvrw            764
    #define prmrisrole08risvrw           765
    #define prmrissubrole08risvrw        766
    #define prmrisimportance08risvrw     767
    #define prmrisstationtype08risvrw    768
    #define prmrisgrenspriotype08risvrw  769 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risvrw     770
    #define prmrislaneid08risvrw_1       771
    #define prmrislaneid08risvrw_2       772
    #define prmrto08risalg               773 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risalg              774 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risalg               775 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risalg               776 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risalg           777 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risalg              778 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risalg          779
    #define prmrisend08risalg            780
    #define prmriseta08risalg            781
    #define prmrisrole08risalg           782
    #define prmrissubrole08risalg        783
    #define prmrisimportance08risalg     784
    #define prmrisstationtype08risalg    785
    #define prmrisgrenspriotype08risalg  786 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risalg     787
    #define prmrislaneid08risalg_1       788
    #define prmrislaneid08risalg_2       789
    #define prmrto09karbus               790 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09karbus              791 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09karbus               792 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09karbus               793 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09karbus           794 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09karbus            795 /* Voertuigcategorie DSI voor prio ingreep 09karbus                                                                               */
    #define prmprio09karbus              796 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov                797 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov               798 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov                799 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov                800 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risov            801 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risov               802 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov           803
    #define prmrisend09risov             804
    #define prmriseta09risov             805
    #define prmrisrole09risov            806
    #define prmrissubrole09risov         807
    #define prmrisimportance09risov      808
    #define prmrisstationtype09risov     809
    #define prmrisgrenspriotype09risov   810 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risov      811
    #define prmrislaneid09risov_1        812
    #define prmrto09risvrw               813 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw              814 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw               815 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw               816 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risvrw           817 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risvrw              818 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw          819
    #define prmrisend09risvrw            820
    #define prmriseta09risvrw            821
    #define prmrisrole09risvrw           822
    #define prmrissubrole09risvrw        823
    #define prmrisimportance09risvrw     824
    #define prmrisstationtype09risvrw    825
    #define prmrisgrenspriotype09risvrw  826 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risvrw     827
    #define prmrislaneid09risvrw_1       828
    #define prmrto09risalg               829 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risalg              830 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risalg               831 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risalg               832 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risalg           833 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risalg              834 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risalg          835
    #define prmrisend09risalg            836
    #define prmriseta09risalg            837
    #define prmrisrole09risalg           838
    #define prmrissubrole09risalg        839
    #define prmrisimportance09risalg     840
    #define prmrisstationtype09risalg    841
    #define prmrisgrenspriotype09risalg  842 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risalg     843
    #define prmrislaneid09risalg_1       844
    #define prmrto11karbus               845 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11karbus              846 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11karbus               847 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11karbus               848 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11karbus           849 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11karbus            850 /* Voertuigcategorie DSI voor prio ingreep 11karbus                                                                               */
    #define prmprio11karbus              851 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov                852 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov               853 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov                854 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov                855 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risov            856 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risov               857 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov           858
    #define prmrisend11risov             859
    #define prmriseta11risov             860
    #define prmrisrole11risov            861
    #define prmrissubrole11risov         862
    #define prmrisimportance11risov      863
    #define prmrisstationtype11risov     864
    #define prmrisgrenspriotype11risov   865 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risov      866
    #define prmrislaneid11risov_1        867
    #define prmrto11risvrw               868 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw              869 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw               870 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw               871 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risvrw           872 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risvrw              873 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw          874
    #define prmrisend11risvrw            875
    #define prmriseta11risvrw            876
    #define prmrisrole11risvrw           877
    #define prmrissubrole11risvrw        878
    #define prmrisimportance11risvrw     879
    #define prmrisstationtype11risvrw    880
    #define prmrisgrenspriotype11risvrw  881 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risvrw     882
    #define prmrislaneid11risvrw_1       883
    #define prmrto11risalg               884 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risalg              885 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risalg               886 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risalg               887 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risalg           888 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risalg              889 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risalg          890
    #define prmrisend11risalg            891
    #define prmriseta11risalg            892
    #define prmrisrole11risalg           893
    #define prmrissubrole11risalg        894
    #define prmrisimportance11risalg     895
    #define prmrisstationtype11risalg    896
    #define prmrisgrenspriotype11risalg  897 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risalg     898
    #define prmrislaneid11risalg_1       899
    #define prmrto11bus                  900 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                 901 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                  902 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                  903 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11bus              904 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11bus               905 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                 906 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmallelijnen11bus           907 /* Prioriteit geven aan alle lijnen fase 11                                                                                       */
    #define prmlijn11bus_01              908 /* Lijnnummer 1 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_02              909 /* Lijnnummer 2 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_03              910 /* Lijnnummer 3 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_04              911 /* Lijnnummer 4 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_05              912 /* Lijnnummer 5 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_06              913 /* Lijnnummer 6 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_07              914 /* Lijnnummer 7 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_08              915 /* Lijnnummer 8 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_09              916 /* Lijnnummer 9 tbv prioriteit OV fase 11                                                                                         */
    #define prmlijn11bus_10              917 /* Lijnnummer 10 tbv prioriteit OV fase 11                                                                                        */
    #define prmritcat11bus_01            918 /* Ritcategorie bij lijnnummer 1 tbv prioriteit OV fase 1                                                                         */
    #define prmritcat11bus_02            919 /* Ritcategorie bij lijnnummer 2 tbv prioriteit OV fase 2                                                                         */
    #define prmritcat11bus_03            920 /* Ritcategorie bij lijnnummer 3 tbv prioriteit OV fase 3                                                                         */
    #define prmritcat11bus_04            921 /* Ritcategorie bij lijnnummer 4 tbv prioriteit OV fase 4                                                                         */
    #define prmritcat11bus_05            922 /* Ritcategorie bij lijnnummer 5 tbv prioriteit OV fase 5                                                                         */
    #define prmritcat11bus_06            923 /* Ritcategorie bij lijnnummer 6 tbv prioriteit OV fase 6                                                                         */
    #define prmritcat11bus_07            924 /* Ritcategorie bij lijnnummer 7 tbv prioriteit OV fase 7                                                                         */
    #define prmritcat11bus_08            925 /* Ritcategorie bij lijnnummer 8 tbv prioriteit OV fase 8                                                                         */
    #define prmritcat11bus_09            926 /* Ritcategorie bij lijnnummer 9 tbv prioriteit OV fase 9                                                                         */
    #define prmritcat11bus_10            927 /* Ritcategorie bij lijnnummer 10 tbv prioriteit OV fase 10                                                                       */
    #define prmftsblok22fietsfiets       928 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  929 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminwt22fietsfiets      930 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmrto22fiets                931 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               932 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                933 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                934 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets            935 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets               936 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmftsblok28fietsfiets       937 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  938 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminwt28fietsfiets      939 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmrto28fiets                940 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               941 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                942 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                943 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets            944 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets               945 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrto61karbus               946 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61karbus              947 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61karbus               948 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61karbus               949 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61karbus           950 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61karbus            951 /* Voertuigcategorie DSI voor prio ingreep 61karbus                                                                               */
    #define prmprio61karbus              952 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov                953 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov               954 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov                955 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov                956 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risov            957 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risov               958 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov           959
    #define prmrisend61risov             960
    #define prmriseta61risov             961
    #define prmrisrole61risov            962
    #define prmrissubrole61risov         963
    #define prmrisimportance61risov      964
    #define prmrisstationtype61risov     965
    #define prmrisgrenspriotype61risov   966 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risov      967
    #define prmrislaneid61risov_1        968
    #define prmrto61risvrw               969 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw              970 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw               971 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw               972 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risvrw           973 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risvrw              974 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw          975
    #define prmrisend61risvrw            976
    #define prmriseta61risvrw            977
    #define prmrisrole61risvrw           978
    #define prmrissubrole61risvrw        979
    #define prmrisimportance61risvrw     980
    #define prmrisstationtype61risvrw    981
    #define prmrisgrenspriotype61risvrw  982 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risvrw     983
    #define prmrislaneid61risvrw_1       984
    #define prmrto61risalg               985 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risalg              986 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risalg               987 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risalg               988 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risalg           989 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risalg              990 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risalg          991
    #define prmrisend61risalg            992
    #define prmriseta61risalg            993
    #define prmrisrole61risalg           994
    #define prmrissubrole61risalg        995
    #define prmrisimportance61risalg     996
    #define prmrisstationtype61risalg    997
    #define prmrisgrenspriotype61risalg  998 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risalg     999
    #define prmrislaneid61risalg_1      1000
    #define prmrto62karbus              1001 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62karbus             1002 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62karbus              1003 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62karbus              1004 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62karbus          1005 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62karbus           1006 /* Voertuigcategorie DSI voor prio ingreep 62karbus                                                                               */
    #define prmprio62karbus             1007 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov               1008 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov              1009 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov               1010 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov               1011 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risov           1012 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risov              1013 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov          1014
    #define prmrisend62risov            1015
    #define prmriseta62risov            1016
    #define prmrisrole62risov           1017
    #define prmrissubrole62risov        1018
    #define prmrisimportance62risov     1019
    #define prmrisstationtype62risov    1020
    #define prmrisgrenspriotype62risov  1021 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risov     1022
    #define prmrislaneid62risov_1       1023
    #define prmrislaneid62risov_2       1024
    #define prmrto62risvrw              1025 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw             1026 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw              1027 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw              1028 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risvrw          1029 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risvrw             1030 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw         1031
    #define prmrisend62risvrw           1032
    #define prmriseta62risvrw           1033
    #define prmrisrole62risvrw          1034
    #define prmrissubrole62risvrw       1035
    #define prmrisimportance62risvrw    1036
    #define prmrisstationtype62risvrw   1037
    #define prmrisgrenspriotype62risvrw 1038 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risvrw    1039
    #define prmrislaneid62risvrw_1      1040
    #define prmrislaneid62risvrw_2      1041
    #define prmrto62risalg              1042 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risalg             1043 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risalg              1044 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risalg              1045 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risalg          1046 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risalg             1047 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risalg         1048
    #define prmrisend62risalg           1049
    #define prmriseta62risalg           1050
    #define prmrisrole62risalg          1051
    #define prmrissubrole62risalg       1052
    #define prmrisimportance62risalg    1053
    #define prmrisstationtype62risalg   1054
    #define prmrisgrenspriotype62risalg 1055 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risalg    1056
    #define prmrislaneid62risalg_1      1057
    #define prmrislaneid62risalg_2      1058
    #define prmrto67karbus              1059 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67karbus             1060 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67karbus              1061 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67karbus              1062 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67karbus          1063 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67karbus           1064 /* Voertuigcategorie DSI voor prio ingreep 67karbus                                                                               */
    #define prmprio67karbus             1065 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov               1066 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov              1067 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov               1068 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov               1069 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risov           1070 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risov              1071 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov          1072
    #define prmrisend67risov            1073
    #define prmriseta67risov            1074
    #define prmrisrole67risov           1075
    #define prmrissubrole67risov        1076
    #define prmrisimportance67risov     1077
    #define prmrisstationtype67risov    1078
    #define prmrisgrenspriotype67risov  1079 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risov     1080
    #define prmrislaneid67risov_1       1081
    #define prmrto67risvrw              1082 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw             1083 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw              1084 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw              1085 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risvrw          1086 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risvrw             1087 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw         1088
    #define prmrisend67risvrw           1089
    #define prmriseta67risvrw           1090
    #define prmrisrole67risvrw          1091
    #define prmrissubrole67risvrw       1092
    #define prmrisimportance67risvrw    1093
    #define prmrisstationtype67risvrw   1094
    #define prmrisgrenspriotype67risvrw 1095 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risvrw    1096
    #define prmrislaneid67risvrw_1      1097
    #define prmrto67risalg              1098 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risalg             1099 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risalg              1100 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risalg              1101 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risalg          1102 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risalg             1103 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risalg         1104
    #define prmrisend67risalg           1105
    #define prmriseta67risalg           1106
    #define prmrisrole67risalg          1107
    #define prmrissubrole67risalg       1108
    #define prmrisimportance67risalg    1109
    #define prmrisstationtype67risalg   1110
    #define prmrisgrenspriotype67risalg 1111 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risalg    1112
    #define prmrislaneid67risalg_1      1113
    #define prmrto68karbus              1114 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68karbus             1115 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68karbus              1116 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68karbus              1117 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68karbus          1118 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68karbus           1119 /* Voertuigcategorie DSI voor prio ingreep 68karbus                                                                               */
    #define prmprio68karbus             1120 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov               1121 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov              1122 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov               1123 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov               1124 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risov           1125 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risov              1126 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov          1127
    #define prmrisend68risov            1128
    #define prmriseta68risov            1129
    #define prmrisrole68risov           1130
    #define prmrissubrole68risov        1131
    #define prmrisimportance68risov     1132
    #define prmrisstationtype68risov    1133
    #define prmrisgrenspriotype68risov  1134 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risov     1135
    #define prmrislaneid68risov_1       1136
    #define prmrislaneid68risov_2       1137
    #define prmrto68risvrw              1138 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw             1139 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw              1140 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw              1141 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risvrw          1142 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risvrw             1143 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw         1144
    #define prmrisend68risvrw           1145
    #define prmriseta68risvrw           1146
    #define prmrisrole68risvrw          1147
    #define prmrissubrole68risvrw       1148
    #define prmrisimportance68risvrw    1149
    #define prmrisstationtype68risvrw   1150
    #define prmrisgrenspriotype68risvrw 1151 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risvrw    1152
    #define prmrislaneid68risvrw_1      1153
    #define prmrislaneid68risvrw_2      1154
    #define prmrto68risalg              1155 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risalg             1156 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risalg              1157 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risalg              1158 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risalg          1159 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risalg             1160 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risalg         1161
    #define prmrisend68risalg           1162
    #define prmriseta68risalg           1163
    #define prmrisrole68risalg          1164
    #define prmrissubrole68risalg       1165
    #define prmrisimportance68risalg    1166
    #define prmrisstationtype68risalg   1167
    #define prmrisgrenspriotype68risalg 1168 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risalg    1169
    #define prmrislaneid68risalg_1      1170
    #define prmrislaneid68risalg_2      1171
    #define prmpriohd02                 1172 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                  1173 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                 1174 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                  1175 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02              1176 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmrisstart02hd             1177
    #define prmrisend02hd               1178
    #define prmriseta02hd               1179
    #define prmrisrole02hd              1180
    #define prmrissubrole02hd           1181
    #define prmrisimportance02hd        1182
    #define prmrisstationtype02hd       1183
    #define prmrisgrenspriotype02hd     1184 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02hd        1185
    #define prmrislaneid02hd_1          1186
    #define prmrislaneid02hd_2          1187
    #define prmpriohd03                 1188 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1189 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1190 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1191 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03              1192 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmrisstart03hd             1193
    #define prmrisend03hd               1194
    #define prmriseta03hd               1195
    #define prmrisrole03hd              1196
    #define prmrissubrole03hd           1197
    #define prmrisimportance03hd        1198
    #define prmrisstationtype03hd       1199
    #define prmrisgrenspriotype03hd     1200 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03hd        1201
    #define prmrislaneid03hd_1          1202
    #define prmpriohd05                 1203 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1204 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1205 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1206 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              1207 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmrisstart05hd             1208
    #define prmrisend05hd               1209
    #define prmriseta05hd               1210
    #define prmrisrole05hd              1211
    #define prmrissubrole05hd           1212
    #define prmrisimportance05hd        1213
    #define prmrisstationtype05hd       1214
    #define prmrisgrenspriotype05hd     1215 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05hd        1216
    #define prmrislaneid05hd_1          1217
    #define prmpriohd08                 1218 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1219 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1220 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1221 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              1222 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmrisstart08hd             1223
    #define prmrisend08hd               1224
    #define prmriseta08hd               1225
    #define prmrisrole08hd              1226
    #define prmrissubrole08hd           1227
    #define prmrisimportance08hd        1228
    #define prmrisstationtype08hd       1229
    #define prmrisgrenspriotype08hd     1230 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08hd        1231
    #define prmrislaneid08hd_1          1232
    #define prmrislaneid08hd_2          1233
    #define prmpriohd09                 1234 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1235 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1236 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1237 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              1238 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmrisstart09hd             1239
    #define prmrisend09hd               1240
    #define prmriseta09hd               1241
    #define prmrisrole09hd              1242
    #define prmrissubrole09hd           1243
    #define prmrisimportance09hd        1244
    #define prmrisstationtype09hd       1245
    #define prmrisgrenspriotype09hd     1246 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09hd        1247
    #define prmrislaneid09hd_1          1248
    #define prmpriohd11                 1249 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1250 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1251 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1252 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              1253 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmrisstart11hd             1254
    #define prmrisend11hd               1255
    #define prmriseta11hd               1256
    #define prmrisrole11hd              1257
    #define prmrissubrole11hd           1258
    #define prmrisimportance11hd        1259
    #define prmrisstationtype11hd       1260
    #define prmrisgrenspriotype11hd     1261 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11hd        1262
    #define prmrislaneid11hd_1          1263
    #define prmpriohd61                 1264 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1265 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1266 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1267 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              1268 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmrisstart61hd             1269
    #define prmrisend61hd               1270
    #define prmriseta61hd               1271
    #define prmrisrole61hd              1272
    #define prmrissubrole61hd           1273
    #define prmrisimportance61hd        1274
    #define prmrisstationtype61hd       1275
    #define prmrisgrenspriotype61hd     1276 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61hd        1277
    #define prmrislaneid61hd_1          1278
    #define prmpriohd62                 1279 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1280 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1281 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1282 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              1283 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmrisstart62hd             1284
    #define prmrisend62hd               1285
    #define prmriseta62hd               1286
    #define prmrisrole62hd              1287
    #define prmrissubrole62hd           1288
    #define prmrisimportance62hd        1289
    #define prmrisstationtype62hd       1290
    #define prmrisgrenspriotype62hd     1291 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62hd        1292
    #define prmrislaneid62hd_1          1293
    #define prmrislaneid62hd_2          1294
    #define prmpriohd67                 1295 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1296 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1297 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1298 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              1299 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmrisstart67hd             1300
    #define prmrisend67hd               1301
    #define prmriseta67hd               1302
    #define prmrisrole67hd              1303
    #define prmrissubrole67hd           1304
    #define prmrisimportance67hd        1305
    #define prmrisstationtype67hd       1306
    #define prmrisgrenspriotype67hd     1307 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67hd        1308
    #define prmrislaneid67hd_1          1309
    #define prmpriohd68                 1310 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1311 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1312 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1313 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              1314 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmrisstart68hd             1315
    #define prmrisend68hd               1316
    #define prmriseta68hd               1317
    #define prmrisrole68hd              1318
    #define prmrissubrole68hd           1319
    #define prmrisimportance68hd        1320
    #define prmrisstationtype68hd       1321
    #define prmrisgrenspriotype68hd     1322 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68hd        1323
    #define prmrislaneid68hd_1          1324
    #define prmrislaneid68hd_2          1325
    #define prmkarsg02                  1326 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1327 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1328 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1329 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1330 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1331 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1332 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1333 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1334 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1335 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1336 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1337 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1338 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1339 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1340 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1341 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1342 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1343 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1344 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1345 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1346 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1347 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1348 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1349 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1350 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1351 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1352 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1353 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1354 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1355 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1356 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1357 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1358 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1359 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1360 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1361 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1362 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1363 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1364 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1365 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1366 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1367 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1368 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1369 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1370 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1371 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1372 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1373 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpDaluren_werkdag      1374 /* Start klokperiode Daluren_werkdag                                                                                              */
    #define prmetkpDaluren_werkdag      1375 /* Einde klokperiode Daluren_werkdag                                                                                              */
    #define prmdckpDaluren_werkdag      1376 /* Dagsoort klokperiode Daluren_werkdag                                                                                           */
    #define prmstkpDaluren_weekend      1377 /* Start klokperiode Daluren_weekend                                                                                              */
    #define prmetkpDaluren_weekend      1378 /* Einde klokperiode Daluren_weekend                                                                                              */
    #define prmdckpDaluren_weekend      1379 /* Dagsoort klokperiode Daluren_weekend                                                                                           */
    #define prmstkpOerdag_werkdag       1380 /* Start klokperiode Oerdag_werkdag                                                                                               */
    #define prmetkpOerdag_werkdag       1381 /* Einde klokperiode Oerdag_werkdag                                                                                               */
    #define prmdckpOerdag_werkdag       1382 /* Dagsoort klokperiode Oerdag_werkdag                                                                                            */
    #define prmvg1_02                   1383 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1384 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1385 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1386 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1387 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1388 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1389 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1390 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1391 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1392 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1393 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1394 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1395 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1396 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1397 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1398 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1399 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1400 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1401 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1402 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1403 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1404 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1405 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1406 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1407 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1408 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1409 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1410 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1411 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1412 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1413 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1414 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1415 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1416 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1417 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1418 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1419 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1420 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1421 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1422 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1423 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1424 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1425 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1426 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1427 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1428 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1429 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1430 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1431 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1432 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1433 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1434 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1435 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1436 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1437 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1438 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1439 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1440 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1441 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1442 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1443 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1444 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1445 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1446 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1447 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1448 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1449 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1450 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1451 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1452 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1453 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1454 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1455 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1456 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1457 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1458 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1459 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1460 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1461 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1462 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1463 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1464 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1465 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1466 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1467 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1468 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1469 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1470 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1471 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1472 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1473 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1474 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1475 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1476 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1477 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1478 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1479 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1480 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1481 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1482 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1483 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1484 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1485 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1486 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1487 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1488 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1489 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1490 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1491 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1492 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1493 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1494 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1495 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1496 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1497 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1498 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1499 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1500 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1501 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1502 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1503 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1504 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1505 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1506 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1507 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1508 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1509 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1510 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1511 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1512 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1513 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1514 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1515 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1516 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1517 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1518 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1519 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1520 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1521 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1522 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1523 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1524 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1525 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1526 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1527 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1528 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1529 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1530 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1531 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1532 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1533 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1534 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1535 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1536 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1537 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1538 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1539 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1540 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1541 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1542 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1543 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1544 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1545 /* PTP error 2 ptp123456                                                                                                          */
    #define prmportnrptp123456          1546 /* Poortnummer in het regeltoestel PTP ptp123456                                                                                  */
    #define prmsrcptp123456             1547 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            1548 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           1549 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           1550 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           1551 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            1552 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmrisapproachid02          1553 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1554 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1555 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1556 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1557 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1558 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1559 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1560 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1561 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1562 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1563 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1564 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1565 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1566 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1567 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1568 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1569 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1570 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1571 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1572 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1573 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1574 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1575 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1576 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1577 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1578 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1579 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1580 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1581 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1582 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1583 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1584 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1585 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1586 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1587 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1588 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1589 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1590 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1591 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1592 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1593 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1594 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1595 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1596 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1597 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1598 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1599 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1600 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1601 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1602 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1603 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1604 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1605 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1606 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1607 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1608 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1609 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1610 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1611 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1612 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1613 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1614 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1615 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1616 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1617 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1618 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1619 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1620 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1621 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh1     1622 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart02mveh2         1623 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh2     1624 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart03mveh1         1625 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1626 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1627 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1628 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1629 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1630 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1631 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1632 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1633 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1634 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1635 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1636 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1637 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1638 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart22fts1          1639 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts1      1640 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart22fts2          1641 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts2      1642 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart24fts1          1643 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1644 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1645 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1646 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1647 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1648 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1649 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1650 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1651 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1652 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1653 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1654 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1655 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1656 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1657 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1658 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1659 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1660 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1661 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1662 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1663 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1664 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1665 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1666 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1667 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1668 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1669 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1670 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1671 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1672 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1673 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1674 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1675 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1676 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1677 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1678 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         1679 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1680 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          1681 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1682 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          1683 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1684 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          1685 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1686 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend02mveh1           1687 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh1       1688 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend02mveh2           1689 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh2       1690 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend03mveh1           1691 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1692 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1693 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1694 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1695 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1696 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           1697 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       1698 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           1699 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       1700 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           1701 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       1702 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            1703 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        1704 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend22fts1            1705 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts1        1706 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend22fts2            1707 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts2        1708 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend24fts1            1709 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        1710 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            1711 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        1712 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            1713 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        1714 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            1715 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        1716 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            1717 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        1718 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            1719 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        1720 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            1721 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        1722 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            1723 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        1724 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            1725 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        1726 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            1727 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        1728 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            1729 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        1730 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            1731 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        1732 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            1733 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        1734 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           1735 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       1736 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           1737 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       1738 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           1739 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       1740 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           1741 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       1742 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           1743 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       1744 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           1745 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       1746 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            1747 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        1748 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            1749 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        1750 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            1751 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        1752 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart02mveh1         1753 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh1     1754 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart02mveh2         1755 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh2     1756 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart03mveh1         1757 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     1758 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         1759 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     1760 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         1761 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     1762 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         1763 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     1764 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         1765 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     1766 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         1767 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     1768 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          1769 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      1770 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart22fts1          1771 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts1      1772 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart22fts2          1773 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts2      1774 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart24fts1          1775 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      1776 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          1777 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      1778 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          1779 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      1780 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          1781 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      1782 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          1783 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      1784 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          1785 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      1786 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          1787 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      1788 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          1789 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      1790 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          1791 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      1792 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          1793 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      1794 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          1795 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      1796 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          1797 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      1798 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          1799 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      1800 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         1801 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     1802 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         1803 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     1804 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         1805 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     1806 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         1807 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     1808 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         1809 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     1810 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         1811 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     1812 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          1813 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      1814 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          1815 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      1816 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          1817 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      1818 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend02mveh1           1819 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh1       1820 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend02mveh2           1821 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh2       1822 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend03mveh1           1823 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       1824 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           1825 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       1826 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           1827 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       1828 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           1829 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       1830 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           1831 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       1832 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           1833 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       1834 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            1835 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        1836 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend22fts1            1837 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts1        1838 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend22fts2            1839 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts2        1840 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend24fts1            1841 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        1842 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            1843 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        1844 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            1845 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        1846 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            1847 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        1848 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            1849 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        1850 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            1851 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        1852 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            1853 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        1854 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            1855 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        1856 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            1857 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        1858 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            1859 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        1860 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            1861 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        1862 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            1863 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        1864 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            1865 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        1866 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           1867 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       1868 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           1869 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       1870 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           1871 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       1872 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           1873 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       1874 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           1875 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       1876 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           1877 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       1878 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            1879 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        1880 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            1881 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        1882 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            1883 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        1884 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          1885 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          1886 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          1887 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            1888 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            1889 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            1890 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                1891 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1892 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1893 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1894 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1895 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1896 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1897 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1898 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1899 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1900 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1901 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1902 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1903 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1904 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1905 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1906 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1907 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1908 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1909 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1910 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1911 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1912 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc31             1913 /* Extra groen percentage tov. TFG voor senioreningreep op fase 31                                                                */
    #define prmsiexgrperc32             1914 /* Extra groen percentage tov. TFG voor senioreningreep op fase 32                                                                */
    #define prmsiexgrperc33             1915 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             1916 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               1917 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1918 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1919 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1920 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1921 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1922 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1923 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1924 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1925 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1926 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1927 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1928 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1929 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1930 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1931 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1932 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1933 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1934 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1935 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1936 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1937 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1938 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1939 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1940 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1941 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1942 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1943 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1944 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1945 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1946 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1947 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1948 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1949 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1950 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1951 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1952 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1953 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1954 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1955 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1956 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 1957 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   1958 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               1959 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   1960 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1961 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1962 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp2838                 1963 /* Minimale ruimte tbv alternatieve realisatie fasen 28, 38                                                                       */
    #define prmaltg31                   1964 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1965 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1966 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   1967 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 1968 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   1969 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 1970 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   1971 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltg61                   1972 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1973 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1974 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1975 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1976 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1977 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1978 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1979 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1980 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1981 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1982 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1983 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1984 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               1985 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmwg02                     1986 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                     1987 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                     1988 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                     1989 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                     1990 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                     1991 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                     1992 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                     1993 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                     1994 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                     1995 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                     1996 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                     1997 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                     1998 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                     1999 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                     2000 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                     2001 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                     2002 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                     2003 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                     2004 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                     2005 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                     2006 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                     2007 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                     2008 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                   2009 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              2010 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              2011 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmstarprogdef              2012 /* Default star programma                                                                                                         */
    #define prmstarprogDaluren_weekend  2013 /* Noodprogramma bij periode Daluren_weekend                                                                                      */
    #define prmstarprogDaluren_werkdag  2014 /* Noodprogramma bij periode Daluren_werkdag                                                                                      */
    #define prmstarprogOerdag_werkdag   2015 /* Noodprogramma bij periode Oerdag_werkdag                                                                                       */
    #define prmttxconfidence15          2016
    #define prmlatencyminendsg          2017
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              2018 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               2019 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               2020 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     2021
#else
    #define PRMMAX1                     2018
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02karbus 0
    #define prioFC02risov 1
    #define prioFC02risvrw 2
    #define prioFC02risalg 3
    #define prioFC03karbus 4
    #define prioFC03risov 5
    #define prioFC03risvrw 6
    #define prioFC03risalg 7
    #define prioFC05karbus 8
    #define prioFC05risov 9
    #define prioFC05risvrw 10
    #define prioFC05risalg 11
    #define prioFC08karbus 12
    #define prioFC08risov 13
    #define prioFC08risvrw 14
    #define prioFC08risalg 15
    #define prioFC09karbus 16
    #define prioFC09risov 17
    #define prioFC09risvrw 18
    #define prioFC09risalg 19
    #define prioFC11karbus 20
    #define prioFC11risov 21
    #define prioFC11risvrw 22
    #define prioFC11risalg 23
    #define prioFC11bus 24
    #define prioFC22fiets 25
    #define prioFC28fiets 26
    #define prioFC61karbus 27
    #define prioFC61risov 28
    #define prioFC61risvrw 29
    #define prioFC61risalg 30
    #define prioFC62karbus 31
    #define prioFC62risov 32
    #define prioFC62risvrw 33
    #define prioFC62risalg 34
    #define prioFC67karbus 35
    #define prioFC67risov 36
    #define prioFC67risvrw 37
    #define prioFC67risalg 38
    #define prioFC68karbus 39
    #define prioFC68risov 40
    #define prioFC68risvrw 41
    #define prioFC68risalg 42
    #define hdFC02 43
    #define hdFC03 44
    #define hdFC05 45
    #define hdFC08 46
    #define hdFC09 47
    #define hdFC11 48
    #define hdFC61 49
    #define hdFC62 50
    #define hdFC67 51
    #define hdFC68 52
    #define prioFCMAX 53

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

/* Systeem naam in het topologiebestand */
/* ------------------------------------ */
#define SYSTEM_ITF1 "123456"

/* Definitie lane id in het topologiebestand */
/* ----------------------------------------- */
#define ris_conflict_gebied    0 /* connection tussen alle ingress lanes en egress lanes */

/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

