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
    #define usovtevroeg02bus     (FCMAX +  37) /* Voorste OV voertuig bij 02 te vroeg Bus                                     */
    #define usovoptijd02bus      (FCMAX +  38) /* Voorste OV voertuig bij 02 op tijd Bus                                      */
    #define usovtelaat02bus      (FCMAX +  39) /* Voorste OV voertuig bij 02 te laat Bus                                      */
    #define usovtevroeg03bus     (FCMAX +  40) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03bus      (FCMAX +  41) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03bus      (FCMAX +  42) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05bus     (FCMAX +  43) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05bus      (FCMAX +  44) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05bus      (FCMAX +  45) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08bus     (FCMAX +  46) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08bus      (FCMAX +  47) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08bus      (FCMAX +  48) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09bus     (FCMAX +  49) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09bus      (FCMAX +  50) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09bus      (FCMAX +  51) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11bus     (FCMAX +  52) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11bus      (FCMAX +  53) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11bus      (FCMAX +  54) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61bus     (FCMAX +  55) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61bus      (FCMAX +  56) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61bus      (FCMAX +  57) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62bus     (FCMAX +  58) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62bus      (FCMAX +  59) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62bus      (FCMAX +  60) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67bus     (FCMAX +  61) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67bus      (FCMAX +  62) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67bus      (FCMAX +  63) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68bus     (FCMAX +  64) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68bus      (FCMAX +  65) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68bus      (FCMAX +  66) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt              (FCMAX +  67) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding         (FCMAX +  68) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog              (FCMAX +  69) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02bus         (FCMAX +  70) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risov       (FCMAX +  71) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risvrw      (FCMAX +  72) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03bus         (FCMAX +  73) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risov       (FCMAX +  74) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risvrw      (FCMAX +  75) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05bus         (FCMAX +  76) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risov       (FCMAX +  77) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risvrw      (FCMAX +  78) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08bus         (FCMAX +  79) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risov       (FCMAX +  80) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risvrw      (FCMAX +  81) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09bus         (FCMAX +  82) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risov       (FCMAX +  83) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risvrw      (FCMAX +  84) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11bus         (FCMAX +  85) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risov       (FCMAX +  86) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risvrw      (FCMAX +  87) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets       (FCMAX +  88) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets       (FCMAX +  89) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61bus         (FCMAX +  90) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risov       (FCMAX +  91) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risvrw      (FCMAX +  92) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62bus         (FCMAX +  93) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risov       (FCMAX +  94) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risvrw      (FCMAX +  95) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67bus         (FCMAX +  96) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risov       (FCMAX +  97) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risvrw      (FCMAX +  98) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68bus         (FCMAX +  99) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risov       (FCMAX + 100) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risvrw      (FCMAX + 101) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm84bus         (FCMAX + 102) /* Verklikken inmelding OV fase 84                                             */
    #define ushdinm02            (FCMAX + 103) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03            (FCMAX + 104) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05            (FCMAX + 105) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08            (FCMAX + 106) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09            (FCMAX + 107) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11            (FCMAX + 108) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61            (FCMAX + 109) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62            (FCMAX + 110) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67            (FCMAX + 111) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68            (FCMAX + 112) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02         (FCMAX + 113) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usper1               (FCMAX + 114) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1     (FCMAX + 115) /* Periode actief                                                              */
    #define usperoFietsprio2     (FCMAX + 116) /* Periode actief                                                              */
    #define usperDaluren_werkdag (FCMAX + 117) /* Periode actief                                                              */
    #define usperDaluren_weekend (FCMAX + 118) /* Periode actief                                                              */
    #define usperOerdag_werkdag  (FCMAX + 119) /* Periode actief                                                              */
    #define usper2               (FCMAX + 120) /* Periode Dag periode actief                                                  */
    #define usper3               (FCMAX + 121) /* Periode Ochtendspits actief                                                 */
    #define usper4               (FCMAX + 122) /* Periode Avondspits actief                                                   */
    #define usper5               (FCMAX + 123) /* Periode Koopavond actief                                                    */
    #define usper6               (FCMAX + 124) /* Periode Weekend actief                                                      */
    #define usper7               (FCMAX + 125) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke   (FCMAX + 126) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err   (FCMAX + 127) /* Verklikken PTP error ptp123456                                              */
    #define usrgv                (FCMAX + 128) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv24              (FCMAX + 129) /* Multivalente aansturing wachttijdvoorspeller fase 24                        */
    #define uswtk21              (FCMAX + 130) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22              (FCMAX + 131) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24              (FCMAX + 132) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26              (FCMAX + 133) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28              (FCMAX + 134) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a             (FCMAX + 135) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b             (FCMAX + 136) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a             (FCMAX + 137) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b             (FCMAX + 138) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a             (FCMAX + 139) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b             (FCMAX + 140) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a             (FCMAX + 141) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b             (FCMAX + 142) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a             (FCMAX + 143) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b             (FCMAX + 144) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81              (FCMAX + 145) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82              (FCMAX + 146) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84              (FCMAX + 147) /* Aansturing waitsignaal detector k84                                         */
    #define usstarprogwissel     (FCMAX + 148) /* Verklikken actief zijn wisselen naar star programma                         */
    #define usstar01             (FCMAX + 149) /* Star programma star01 actief                                                */
    #define usstar02             (FCMAX + 150) /* Star programma star02 actief                                                */
    #define USMAX1               (FCMAX + 151)

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
    #define ddummykarin03bus  74
    #define ddummykarin05bus  75
    #define ddummykarin08bus  76
    #define ddummykarin09bus  77
    #define ddummykarin11bus  78
    #define ddummykarin61bus  79
    #define ddummykarin62bus  80
    #define ddummykarin67bus  81
    #define ddummykarin68bus  82
    #define ddummykaruit03bus 83
    #define ddummykaruit05bus 84
    #define ddummykaruit08bus 85
    #define ddummykaruit09bus 86
    #define ddummykaruit11bus 87
    #define ddummykaruit61bus 88
    #define ddummykaruit62bus 89
    #define ddummykaruit67bus 90
    #define ddummykaruit68bus 91
    #define ddummyhdkarin02   92
    #define ddummyhdkaruit02  93
    #define ddummyhdkarin03   94
    #define ddummyhdkaruit03  95
    #define ddummyhdkarin05   96
    #define ddummyhdkaruit05  97
    #define ddummyhdkarin08   98
    #define ddummyhdkaruit08  99
    #define ddummyhdkarin09   100
    #define ddummyhdkaruit09  101
    #define ddummyhdkarin11   102
    #define ddummyhdkaruit11  103
    #define ddummyhdkarin61   104
    #define ddummyhdkaruit61  105
    #define ddummyhdkarin62   106
    #define ddummyhdkaruit62  107
    #define ddummyhdkarin67   108
    #define ddummyhdkaruit67  109
    #define ddummyhdkarin68   110
    #define ddummyhdkaruit68  111
    #define DPMAX1            112 /* aantal detectoren testomgeving */
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
    #define hfixatietegenh           34 /* Fixatie tegenhouden                                                */
    #define hplhd                    35 /* Bijhouden hulpdienstingreep tbv (tijdelijk) lokaal VA regelen      */
    #define hplact                   36 /* Halfstar actief                                                    */
    #define hkpact                   37 /* Koppeling tbv halfstar actief                                      */
    #define hmlact                   38 /* Module regelen actief                                              */
    #define hpervar                  39 /* Periode VA regelen                                                 */
    #define hperarh                  40 /* Alternatieven voor hoofdrichtingen periode                         */
    #define homschtegenh             41 /* Bijhouden of omschakelen is toegestaan                             */
    #define hleven                   42 /* Bijhouden actief zijn levensignaal                                 */
    #define hxpl2232                 43 /* Tegenhouden richtingen tbv gelijkstart 22 32                       */
    #define hxpl243484               44 /* Tegenhouden richtingen tbv gelijkstart 24 34 84                    */
    #define hxpl2838                 45 /* Tegenhouden richtingen tbv gelijkstart 28 38                       */
    #define hxpl3384                 46 /* Tegenhouden richtingen tbv gelijkstart 33 84                       */
    #define hxpl2434                 47 /* Tegenhouden richtingen tbv gelijkstart 24 34                       */
    #define hxpl243384               48 /* Tegenhouden richtingen tbv gelijkstart 24 33 84                    */
    #define hnla02_1a                49 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b                50 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a                51 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b                52 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1                 53 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1                 54 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlak31a                 55 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlak32a                 56 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlak33a                 57 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlak34a                 58 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1                 59 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus                60 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus                61 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus                62 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus                63 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus                64 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus                65 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus                66 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus                67 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus                68 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus                69 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hprio02bus               70 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus             71 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus            72 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar          73 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar         74 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risov             75 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risov           76 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risov          77 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02risovris        78 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02risovris       79 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio02risvrw            80 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02risvrw          81 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrw         82 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprioin02risvrwris       83 /* Prioriteit inmelding fase 02 Vrachtwagen                           */
    #define hpriouit02risvrwris      84 /* Prioriteit uitmelding 02 Vrachtwagen                               */
    #define hprio03bus               85 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus             86 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus            87 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar          88 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar         89 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risov             90 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risov           91 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risov          92 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03risovris        93 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03risovris       94 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio03risvrw            95 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03risvrw          96 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrw         97 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprioin03risvrwris       98 /* Prioriteit inmelding fase 03 Vrachtwagen                           */
    #define hpriouit03risvrwris      99 /* Prioriteit uitmelding 03 Vrachtwagen                               */
    #define hprio05bus              100 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus            101 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus           102 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar         103 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar        104 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risov            105 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risov          106 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risov         107 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05risovris       108 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05risovris      109 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio05risvrw           110 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05risvrw         111 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrw        112 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprioin05risvrwris      113 /* Prioriteit inmelding fase 05 Vrachtwagen                           */
    #define hpriouit05risvrwris     114 /* Prioriteit uitmelding 05 Vrachtwagen                               */
    #define hprio08bus              115 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus            116 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus           117 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar         118 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar        119 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risov            120 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risov          121 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risov         122 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08risovris       123 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08risovris      124 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio08risvrw           125 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08risvrw         126 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrw        127 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprioin08risvrwris      128 /* Prioriteit inmelding fase 08 Vrachtwagen                           */
    #define hpriouit08risvrwris     129 /* Prioriteit uitmelding 08 Vrachtwagen                               */
    #define hprio09bus              130 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus            131 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus           132 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar         133 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar        134 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risov            135 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risov          136 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risov         137 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09risovris       138 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09risovris      139 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio09risvrw           140 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09risvrw         141 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrw        142 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprioin09risvrwris      143 /* Prioriteit inmelding fase 09 Vrachtwagen                           */
    #define hpriouit09risvrwris     144 /* Prioriteit uitmelding 09 Vrachtwagen                               */
    #define hprio11bus              145 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus            146 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus           147 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar         148 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar        149 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risov            150 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risov          151 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risov         152 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11risovris       153 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11risovris      154 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio11risvrw           155 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11risvrw         156 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrw        157 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprioin11risvrwris      158 /* Prioriteit inmelding fase 11 Vrachtwagen                           */
    #define hpriouit11risvrwris     159 /* Prioriteit uitmelding 11 Vrachtwagen                               */
    #define hprio22fiets            160 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22fiets          161 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets         162 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fietsfiets22_1 163 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fietsfiets    164 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio28fiets            165 /* Bijhouden actief zijn prioriteit fase 28                           */
    #define hprioin28fiets          166 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fiets         167 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprioin28fietsfiets28_2 168 /* Prioriteit inmelding fase 28 Fiets                                 */
    #define hpriouit28fietsfiets    169 /* Prioriteit uitmelding 28 Fiets                                     */
    #define hprio61bus              170 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61bus            171 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61bus           172 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61buskar         173 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61buskar        174 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risov            175 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risov          176 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risov         177 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61risovris       178 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61risovris      179 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio61risvrw           180 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61risvrw         181 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrw        182 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprioin61risvrwris      183 /* Prioriteit inmelding fase 61 Vrachtwagen                           */
    #define hpriouit61risvrwris     184 /* Prioriteit uitmelding 61 Vrachtwagen                               */
    #define hprio62bus              185 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62bus            186 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62bus           187 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62buskar         188 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62buskar        189 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risov            190 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risov          191 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risov         192 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprioin62risovris       193 /* Prioriteit inmelding fase 62 Bus                                   */
    #define hpriouit62risovris      194 /* Prioriteit uitmelding 62 Bus                                       */
    #define hprio62risvrw           195 /* Bijhouden actief zijn prioriteit fase 62                           */
    #define hprioin62risvrw         196 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrw        197 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprioin62risvrwris      198 /* Prioriteit inmelding fase 62 Vrachtwagen                           */
    #define hpriouit62risvrwris     199 /* Prioriteit uitmelding 62 Vrachtwagen                               */
    #define hprio67bus              200 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67bus            201 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67bus           202 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67buskar         203 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67buskar        204 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risov            205 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risov          206 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risov         207 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprioin67risovris       208 /* Prioriteit inmelding fase 67 Bus                                   */
    #define hpriouit67risovris      209 /* Prioriteit uitmelding 67 Bus                                       */
    #define hprio67risvrw           210 /* Bijhouden actief zijn prioriteit fase 67                           */
    #define hprioin67risvrw         211 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrw        212 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprioin67risvrwris      213 /* Prioriteit inmelding fase 67 Vrachtwagen                           */
    #define hpriouit67risvrwris     214 /* Prioriteit uitmelding 67 Vrachtwagen                               */
    #define hprio68bus              215 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68bus            216 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68bus           217 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68buskar         218 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68buskar        219 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risov            220 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risov          221 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risov         222 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprioin68risovris       223 /* Prioriteit inmelding fase 68 Bus                                   */
    #define hpriouit68risovris      224 /* Prioriteit uitmelding 68 Bus                                       */
    #define hprio68risvrw           225 /* Bijhouden actief zijn prioriteit fase 68                           */
    #define hprioin68risvrw         226 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrw        227 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprioin68risvrwris      228 /* Prioriteit inmelding fase 68 Vrachtwagen                           */
    #define hpriouit68risvrwris     229 /* Prioriteit uitmelding 68 Vrachtwagen                               */
    #define hprio84bus              230 /* Bijhouden actief zijn prioriteit fase 84                           */
    #define hprioin84bus            231 /* Prioriteit inmelding fase 84 Bus                                   */
    #define hpriouit84bus           232 /* Prioriteit uitmelding 84 Bus                                       */
    #define hprioin84buskar         233 /* Prioriteit inmelding fase 84 Bus                                   */
    #define hpriouit84buskar        234 /* Prioriteit uitmelding 84 Bus                                       */
    #define hhd02                   235 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02                 236 /* HD inmelding 02                                                    */
    #define hhduit02                237 /* HD uitmelding 02                                                   */
    #define hhdin02kar              238 /* HD inmelding 02                                                    */
    #define hhduit02kar             239 /* HD uitmelding 02                                                   */
    #define hhdin02ris              240 /* HD inmelding 02                                                    */
    #define hhduit02ris             241 /* HD uitmelding 02                                                   */
    #define hhd03                   242 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03                 243 /* HD inmelding 03                                                    */
    #define hhduit03                244 /* HD uitmelding 03                                                   */
    #define hhdin03kar              245 /* HD inmelding 03                                                    */
    #define hhduit03kar             246 /* HD uitmelding 03                                                   */
    #define hhdin03ris              247 /* HD inmelding 03                                                    */
    #define hhduit03ris             248 /* HD uitmelding 03                                                   */
    #define hhd05                   249 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05                 250 /* HD inmelding 05                                                    */
    #define hhduit05                251 /* HD uitmelding 05                                                   */
    #define hhdin05kar              252 /* HD inmelding 05                                                    */
    #define hhduit05kar             253 /* HD uitmelding 05                                                   */
    #define hhdin05ris              254 /* HD inmelding 05                                                    */
    #define hhduit05ris             255 /* HD uitmelding 05                                                   */
    #define hhd08                   256 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08                 257 /* HD inmelding 08                                                    */
    #define hhduit08                258 /* HD uitmelding 08                                                   */
    #define hhdin08kar              259 /* HD inmelding 08                                                    */
    #define hhduit08kar             260 /* HD uitmelding 08                                                   */
    #define hhdin08ris              261 /* HD inmelding 08                                                    */
    #define hhduit08ris             262 /* HD uitmelding 08                                                   */
    #define hhd09                   263 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09                 264 /* HD inmelding 09                                                    */
    #define hhduit09                265 /* HD uitmelding 09                                                   */
    #define hhdin09kar              266 /* HD inmelding 09                                                    */
    #define hhduit09kar             267 /* HD uitmelding 09                                                   */
    #define hhdin09ris              268 /* HD inmelding 09                                                    */
    #define hhduit09ris             269 /* HD uitmelding 09                                                   */
    #define hhd11                   270 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11                 271 /* HD inmelding 11                                                    */
    #define hhduit11                272 /* HD uitmelding 11                                                   */
    #define hhdin11kar              273 /* HD inmelding 11                                                    */
    #define hhduit11kar             274 /* HD uitmelding 11                                                   */
    #define hhdin11ris              275 /* HD inmelding 11                                                    */
    #define hhduit11ris             276 /* HD uitmelding 11                                                   */
    #define hhd61                   277 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61                 278 /* HD inmelding 61                                                    */
    #define hhduit61                279 /* HD uitmelding 61                                                   */
    #define hhdin61kar              280 /* HD inmelding 61                                                    */
    #define hhduit61kar             281 /* HD uitmelding 61                                                   */
    #define hhdin61ris              282 /* HD inmelding 61                                                    */
    #define hhduit61ris             283 /* HD uitmelding 61                                                   */
    #define hhd62                   284 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62                 285 /* HD inmelding 62                                                    */
    #define hhduit62                286 /* HD uitmelding 62                                                   */
    #define hhdin62kar              287 /* HD inmelding 62                                                    */
    #define hhduit62kar             288 /* HD uitmelding 62                                                   */
    #define hhdin62ris              289 /* HD inmelding 62                                                    */
    #define hhduit62ris             290 /* HD uitmelding 62                                                   */
    #define hhd67                   291 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67                 292 /* HD inmelding 67                                                    */
    #define hhduit67                293 /* HD uitmelding 67                                                   */
    #define hhdin67kar              294 /* HD inmelding 67                                                    */
    #define hhduit67kar             295 /* HD uitmelding 67                                                   */
    #define hhdin67ris              296 /* HD inmelding 67                                                    */
    #define hhduit67ris             297 /* HD uitmelding 67                                                   */
    #define hhd68                   298 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68                 299 /* HD inmelding 68                                                    */
    #define hhduit68                300 /* HD uitmelding 68                                                   */
    #define hhdin68kar              301 /* HD inmelding 68                                                    */
    #define hhduit68kar             302 /* HD uitmelding 68                                                   */
    #define hhdin68ris              303 /* HD inmelding 68                                                    */
    #define hhduit68ris             304 /* HD uitmelding 68                                                   */
    #define hpelinKOP02             305 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02         306 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud68_1aKOP68_uit     307 /* Bijhouden uitgaande status 68_1a voor koppeling KOP68_uit          */
    #define hpkud68_1bKOP68_uit     308 /* Bijhouden uitgaande status 68_1b voor koppeling KOP68_uit          */
    #define hperiodFietsprio1       309 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2       310 /* Periode Fietsprio2 actief                                          */
    #define hptp123456iks01         311 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02         312 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03         313 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04         314 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05         315 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06         316 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07         317 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08         318 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09         319 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10         320 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11         321 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12         322 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13         323 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14         324 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15         325 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16         326 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01         327 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02         328 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03         329 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04         330 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05         331 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06         332 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07         333 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08         334 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09         335 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10         336 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11         337 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12         338 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13         339 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14         340 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15         341 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16         342 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke       343 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err       344 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0      345 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1      346 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2      347 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd24_3_d24_2         348 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact                 349 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02               350 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03               351 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05               352 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08               353 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11               354 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22               355 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28               356 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepdk31a     357 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31a */
    #define hschoolingreepdk31b     358 /* Onthouden actief zijn schoolingreep voor fase 31 via detector k31b */
    #define hschoolingreepdk32a     359 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32a */
    #define hschoolingreepdk32b     360 /* Onthouden actief zijn schoolingreep voor fase 32 via detector k32b */
    #define hschoolingreepdk33a     361 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33a */
    #define hschoolingreepdk33b     362 /* Onthouden actief zijn schoolingreep voor fase 33 via detector k33b */
    #define hschoolingreepdk34a     363 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34a */
    #define hschoolingreepdk34b     364 /* Onthouden actief zijn schoolingreep voor fase 34 via detector k34b */
    #define hsiexgr31               365 /* Onthouden actief zijn senioreningreep bij fase 31                  */
    #define hsiexgr32               366 /* Onthouden actief zijn senioreningreep bij fase 32                  */
    #define hsiexgr33               367 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34               368 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262               369
    #define hnleg0868               370
    #define hnleg1168               371
    #define hnleg2221               372
    #define hnlsg3132               373
    #define hnlsg3231               374
    #define hnlsg3334               375
    #define hnlsg3433               376
    #define hnleg8281               377
    #define hwtv24                  378 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hinl32                  379 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  380 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  381 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  382 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  383 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  384 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  385 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  386 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  387 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  388 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  389 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  390 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  391

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
    #define mmaster                 14 /* Halstar of VA bepaald door master                                       */
    #define mslave                  15 /* Halstar of VA bepaald door slave                                        */
    #define mleven654321            16 /* Bijhouden actief zijn levensignaal                                      */
    #define mstp02bus               17 /* Stiptheid voorste OV voertuig bij 02 Bus                                */
    #define mstp03bus               18 /* Stiptheid voorste OV voertuig bij 03 Bus                                */
    #define mstp05bus               19 /* Stiptheid voorste OV voertuig bij 05 Bus                                */
    #define mstp08bus               20 /* Stiptheid voorste OV voertuig bij 08 Bus                                */
    #define mstp09bus               21 /* Stiptheid voorste OV voertuig bij 09 Bus                                */
    #define mstp11bus               22 /* Stiptheid voorste OV voertuig bij 11 Bus                                */
    #define mstp61bus               23 /* Stiptheid voorste OV voertuig bij 61 Bus                                */
    #define mstp62bus               24 /* Stiptheid voorste OV voertuig bij 62 Bus                                */
    #define mstp67bus               25 /* Stiptheid voorste OV voertuig bij 67 Bus                                */
    #define mstp68bus               26 /* Stiptheid voorste OV voertuig bij 68 Bus                                */
    #define mftstelris22fietsfiets  27 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets                      */
    #define mftstelris28fietsfiets  28 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets                      */
    #define mpelvtgKOP02            29 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    #define mpelinKOP02             30 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    #define mperiodstar             31 /* Onthouden actieve periode star regelen                                  */
    #define mwtv24                  32 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24              */
    #define mwtvm24                 33 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24             */
    #define mstarprog               34 /* Onthouden actief star programma                                         */
    #define mstarprogwens           35 /* Onthouden gewenst star programma                                        */
    #define mstarprogwissel         36 /* Onthouden actief zijn wisselen naar star programma                      */
    #define mrealtijd02             37 /* Realisatie tijd fase 02                                                 */
    #define mrealtijd03             38 /* Realisatie tijd fase 03                                                 */
    #define mrealtijd05             39 /* Realisatie tijd fase 05                                                 */
    #define mrealtijd08             40 /* Realisatie tijd fase 08                                                 */
    #define mrealtijd09             41 /* Realisatie tijd fase 09                                                 */
    #define mrealtijd11             42 /* Realisatie tijd fase 11                                                 */
    #define mrealtijd21             43 /* Realisatie tijd fase 21                                                 */
    #define mrealtijd22             44 /* Realisatie tijd fase 22                                                 */
    #define mrealtijd24             45 /* Realisatie tijd fase 24                                                 */
    #define mrealtijd26             46 /* Realisatie tijd fase 26                                                 */
    #define mrealtijd28             47 /* Realisatie tijd fase 28                                                 */
    #define mrealtijd31             48 /* Realisatie tijd fase 31                                                 */
    #define mrealtijd32             49 /* Realisatie tijd fase 32                                                 */
    #define mrealtijd33             50 /* Realisatie tijd fase 33                                                 */
    #define mrealtijd34             51 /* Realisatie tijd fase 34                                                 */
    #define mrealtijd38             52 /* Realisatie tijd fase 38                                                 */
    #define mrealtijd61             53 /* Realisatie tijd fase 61                                                 */
    #define mrealtijd62             54 /* Realisatie tijd fase 62                                                 */
    #define mrealtijd67             55 /* Realisatie tijd fase 67                                                 */
    #define mrealtijd68             56 /* Realisatie tijd fase 68                                                 */
    #define mrealtijd81             57 /* Realisatie tijd fase 81                                                 */
    #define mrealtijd82             58 /* Realisatie tijd fase 82                                                 */
    #define mrealtijd84             59 /* Realisatie tijd fase 84                                                 */
    #define mrealtijdmin02          60 /* Realisatie minimum tijd fase 02                                         */
    #define mrealtijdmin03          61 /* Realisatie minimum tijd fase 03                                         */
    #define mrealtijdmin05          62 /* Realisatie minimum tijd fase 05                                         */
    #define mrealtijdmin08          63 /* Realisatie minimum tijd fase 08                                         */
    #define mrealtijdmin09          64 /* Realisatie minimum tijd fase 09                                         */
    #define mrealtijdmin11          65 /* Realisatie minimum tijd fase 11                                         */
    #define mrealtijdmin21          66 /* Realisatie minimum tijd fase 21                                         */
    #define mrealtijdmin22          67 /* Realisatie minimum tijd fase 22                                         */
    #define mrealtijdmin24          68 /* Realisatie minimum tijd fase 24                                         */
    #define mrealtijdmin26          69 /* Realisatie minimum tijd fase 26                                         */
    #define mrealtijdmin28          70 /* Realisatie minimum tijd fase 28                                         */
    #define mrealtijdmin31          71 /* Realisatie minimum tijd fase 31                                         */
    #define mrealtijdmin32          72 /* Realisatie minimum tijd fase 32                                         */
    #define mrealtijdmin33          73 /* Realisatie minimum tijd fase 33                                         */
    #define mrealtijdmin34          74 /* Realisatie minimum tijd fase 34                                         */
    #define mrealtijdmin38          75 /* Realisatie minimum tijd fase 38                                         */
    #define mrealtijdmin61          76 /* Realisatie minimum tijd fase 61                                         */
    #define mrealtijdmin62          77 /* Realisatie minimum tijd fase 62                                         */
    #define mrealtijdmin67          78 /* Realisatie minimum tijd fase 67                                         */
    #define mrealtijdmin68          79 /* Realisatie minimum tijd fase 68                                         */
    #define mrealtijdmin81          80 /* Realisatie minimum tijd fase 81                                         */
    #define mrealtijdmin82          81 /* Realisatie minimum tijd fase 82                                         */
    #define mrealtijdmin84          82 /* Realisatie minimum tijd fase 84                                         */
    #define mrealtijdmax02          83 /* Realisatie maximum tijd fase 02                                         */
    #define mrealtijdmax03          84 /* Realisatie maximum tijd fase 03                                         */
    #define mrealtijdmax05          85 /* Realisatie maximum tijd fase 05                                         */
    #define mrealtijdmax08          86 /* Realisatie maximum tijd fase 08                                         */
    #define mrealtijdmax09          87 /* Realisatie maximum tijd fase 09                                         */
    #define mrealtijdmax11          88 /* Realisatie maximum tijd fase 11                                         */
    #define mrealtijdmax21          89 /* Realisatie maximum tijd fase 21                                         */
    #define mrealtijdmax22          90 /* Realisatie maximum tijd fase 22                                         */
    #define mrealtijdmax24          91 /* Realisatie maximum tijd fase 24                                         */
    #define mrealtijdmax26          92 /* Realisatie maximum tijd fase 26                                         */
    #define mrealtijdmax28          93 /* Realisatie maximum tijd fase 28                                         */
    #define mrealtijdmax31          94 /* Realisatie maximum tijd fase 31                                         */
    #define mrealtijdmax32          95 /* Realisatie maximum tijd fase 32                                         */
    #define mrealtijdmax33          96 /* Realisatie maximum tijd fase 33                                         */
    #define mrealtijdmax34          97 /* Realisatie maximum tijd fase 34                                         */
    #define mrealtijdmax38          98 /* Realisatie maximum tijd fase 38                                         */
    #define mrealtijdmax61          99 /* Realisatie maximum tijd fase 61                                         */
    #define mrealtijdmax62         100 /* Realisatie maximum tijd fase 62                                         */
    #define mrealtijdmax67         101 /* Realisatie maximum tijd fase 67                                         */
    #define mrealtijdmax68         102 /* Realisatie maximum tijd fase 68                                         */
    #define mrealtijdmax81         103 /* Realisatie maximum tijd fase 81                                         */
    #define mrealtijdmax82         104 /* Realisatie maximum tijd fase 82                                         */
    #define mrealtijdmax84         105 /* Realisatie maximum tijd fase 84                                         */
    #define mar02                  106 /* Alternatieve ruimte fase 02                                             */
    #define mar03                  107 /* Alternatieve ruimte fase 03                                             */
    #define mar05                  108 /* Alternatieve ruimte fase 05                                             */
    #define mar08                  109 /* Alternatieve ruimte fase 08                                             */
    #define mar09                  110 /* Alternatieve ruimte fase 09                                             */
    #define mar11                  111 /* Alternatieve ruimte fase 11                                             */
    #define mar21                  112 /* Alternatieve ruimte fase 21                                             */
    #define mar22                  113 /* Alternatieve ruimte fase 22                                             */
    #define mar24                  114 /* Alternatieve ruimte fase 24                                             */
    #define mar26                  115 /* Alternatieve ruimte fase 26                                             */
    #define mar28                  116 /* Alternatieve ruimte fase 28                                             */
    #define mar31                  117 /* Alternatieve ruimte fase 31                                             */
    #define mar32                  118 /* Alternatieve ruimte fase 32                                             */
    #define mar33                  119 /* Alternatieve ruimte fase 33                                             */
    #define mar34                  120 /* Alternatieve ruimte fase 34                                             */
    #define mar38                  121 /* Alternatieve ruimte fase 38                                             */
    #define mar61                  122 /* Alternatieve ruimte fase 61                                             */
    #define mar62                  123 /* Alternatieve ruimte fase 62                                             */
    #define mar67                  124 /* Alternatieve ruimte fase 67                                             */
    #define mar68                  125 /* Alternatieve ruimte fase 68                                             */
    #define mar81                  126 /* Alternatieve ruimte fase 81                                             */
    #define mar82                  127 /* Alternatieve ruimte fase 82                                             */
    #define mar84                  128 /* Alternatieve ruimte fase 84                                             */
    #define mwijzpb                129 /* Wijziging aan PB doorgeven                                              */
    #define mfci                   130 /* Index fc met gewijzigde TVG_max[]                                       */
    #define MEMAX1                 131

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
    #define tprioin02bus               179 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02bus              180 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02bus                181 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02bus                   182 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02bus                   183 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02bus                  184 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risov             185 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            186 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              187 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 188 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 189 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                190 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrw            191 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           192 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             193 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                194 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                195 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               196 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                197 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   198 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   199 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  200 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          201 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            202 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              203 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 204 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 205 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                206 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         207 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           208 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             209 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                210 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                211 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               212 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                213 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   214 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   215 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  216 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          217 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            218 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              219 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 220 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 221 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                222 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         223 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           224 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             225 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                226 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                227 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               228 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                229 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   230 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   231 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  232 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          233 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            234 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              235 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 236 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 237 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                238 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         239 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           240 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             241 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                242 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                243 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               244 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                245 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   246 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   247 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  248 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          249 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            250 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              251 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 252 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 253 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                254 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         255 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           256 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             257 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                258 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                259 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               260 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                261 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   262 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   263 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  264 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          265 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            266 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              267 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 268 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 269 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                270 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         271 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           272 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             273 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                274 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                275 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               276 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            277 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              278 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 279 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 280 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                281 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tprioin28fietsfiets28_2    282 /* Anti jutter tijd inmelden 28 Fiets                                                       */
    #define tpriouit28fiets            283 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              284 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 285 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 286 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                287 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg61bus                288 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   289 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   290 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  291 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          292 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            293 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              294 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 295 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 296 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                297 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         298 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           299 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             300 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                301 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                302 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               303 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                304 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   305 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   306 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  307 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          308 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            309 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              310 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 311 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 312 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                313 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         314 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           315 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             316 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                317 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                318 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               319 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                320 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   321 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   322 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  323 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          324 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            325 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              326 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 327 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 328 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                329 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         330 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           331 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             332 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                333 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                334 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               335 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            336 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                337 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   338 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   339 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  340 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          341 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            342 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              343 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 344 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 345 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                346 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         347 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           348 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             349 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                350 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                351 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               352 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin84buskar            353 /* Anti jutter tijd inmelden 84 Bus                                                         */
    #define tpriouit84bus              354 /* Anti jutter tijd uitmelden 84                                                            */
    #define tbtovg84bus                355 /* Timer bezettijd prioriteit gehinderde rijtijd fase 84                                    */
    #define trt84bus                   356 /* Actuele rijtijd prio fase 84                                                             */
    #define tgb84bus                   357 /* Groenbewaking prioriteit fase 84                                                         */
    #define tblk84bus                  358 /* Blokkeertijd na prioriteitsingreep fase 84                                               */
    #define tgbhd02                    359 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    360 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 361 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 362 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                363 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    364 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    365 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 366 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 367 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                368 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    369 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    370 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 371 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 372 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                373 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    374 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    375 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 376 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 377 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                378 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    379 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    380 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 381 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 382 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                383 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    384 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    385 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 386 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 387 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                388 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    389 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    390 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 391 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 392 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                393 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    394 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    395 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 396 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 397 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                398 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    399 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    400 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 401 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 402 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                403 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    404 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    405 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 406 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 407 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                408 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                409
    #define tris02risvrw               410
    #define tris03risov                411
    #define tris03risvrw               412
    #define tris05risov                413
    #define tris05risvrw               414
    #define tris08risov                415
    #define tris08risvrw               416
    #define tris09risov                417
    #define tris09risvrw               418
    #define tris11risov                419
    #define tris11risvrw               420
    #define tris61risov                421
    #define tris61risvrw               422
    #define tris62risov                423
    #define tris62risvrw               424
    #define tris67risov                425
    #define tris67risvrw               426
    #define tris68risov                427
    #define tris68risvrw               428
    #define tpelmeetKOP02              429 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          430 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                431 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             432 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           433 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 434 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  435 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 436 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            437 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            438 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   439 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   440 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   441 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   442 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   443 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   444 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    445 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    446 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    447 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    448 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   449 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   450 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   451 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   452 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   453 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   454 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    455 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    456 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    457 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    458 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    459 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    460 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    461 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tschoolingreepmaxg31       462 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 31                        */
    #define tdbsidk31a                 463 /* Bezettijd detector k31a t.b.v. schoolingreep                                             */
    #define tdbsidk31b                 464 /* Bezettijd detector k31b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg32       465 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 32                        */
    #define tdbsidk32a                 466 /* Bezettijd detector k32a t.b.v. schoolingreep                                             */
    #define tdbsidk32b                 467 /* Bezettijd detector k32b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg33       468 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 469 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 470 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       471 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 472 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 473 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr31                  474 /* Meten duur extra groen bij senioreningreep op fase 31                                    */
    #define tdbsiexgrdk31a             475 /* Bezettijd detector k31a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk31b             476 /* Bezettijd detector k31b t.b.v. Senioreningreep                                           */
    #define tsiexgr32                  477 /* Meten duur extra groen bij senioreningreep op fase 32                                    */
    #define tdbsiexgrdk32a             478 /* Bezettijd detector k32a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk32b             479 /* Bezettijd detector k32b t.b.v. Senioreningreep                                           */
    #define tsiexgr33                  480 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             481 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             482 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  483 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             484 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             485 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   486 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             487 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             488 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             489 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               490 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               491 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               492 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               493 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               494 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               495 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               496 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               497 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               498 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               499 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               500 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               501 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               502 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               503 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               504 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               505 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               506 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               507 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               508 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               509 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               510 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               511 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               512 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   513 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               514 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              515 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               516 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              517 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   518 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               519 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              520 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               521 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              522 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   523 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                524 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               525 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv24                     526 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define tvs2205                    527 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    528 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    529 /* Late release tijd fase 26 na fase 11                                                     */
    #define tlr6202                    530 /* Late release tijd fase 62 na fase 02                                                     */
    #define tlr6808                    531 /* Late release tijd fase 68 na fase 08                                                     */
    #define tlr6811                    532 /* Late release tijd fase 68 na fase 11                                                     */
    #define tlr2122                    533 /* Late release tijd fase 21 na fase 22                                                     */
    #define tlr8182                    534 /* Late release tijd fase 81 na fase 82                                                     */
    #define til3231                    535 /* Inloop tijd fase 32 naar fase 31                                                         */
    #define til3132                    536 /* Inloop tijd fase 31 naar fase 32                                                         */
    #define til3433                    537 /* Inloop tijd fase 34 naar fase 33                                                         */
    #define til3334                    538 /* Inloop tijd fase 33 naar fase 34                                                         */
    #define tfo0522                    539 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    540 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    541 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
    #define TMMAX1                     542

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
    #define cvchst84bus         32 /* OV inmeldingen fase 84 tijdens halfstar regelen Bus         */
    #define cvc02bus            33 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risov          34 /* Bijhouden prio inmeldingen fase 02 type Bus                 */
    #define cvc02risvrw         35 /* Bijhouden prio inmeldingen fase 02 type Vrachtwagen         */
    #define cvc03bus            36 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risov          37 /* Bijhouden prio inmeldingen fase 03 type Bus                 */
    #define cvc03risvrw         38 /* Bijhouden prio inmeldingen fase 03 type Vrachtwagen         */
    #define cvc05bus            39 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risov          40 /* Bijhouden prio inmeldingen fase 05 type Bus                 */
    #define cvc05risvrw         41 /* Bijhouden prio inmeldingen fase 05 type Vrachtwagen         */
    #define cvc08bus            42 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risov          43 /* Bijhouden prio inmeldingen fase 08 type Bus                 */
    #define cvc08risvrw         44 /* Bijhouden prio inmeldingen fase 08 type Vrachtwagen         */
    #define cvc09bus            45 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risov          46 /* Bijhouden prio inmeldingen fase 09 type Bus                 */
    #define cvc09risvrw         47 /* Bijhouden prio inmeldingen fase 09 type Vrachtwagen         */
    #define cvc11bus            48 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risov          49 /* Bijhouden prio inmeldingen fase 11 type Bus                 */
    #define cvc11risvrw         50 /* Bijhouden prio inmeldingen fase 11 type Vrachtwagen         */
    #define cftscyc22fietsfiets 51 /* Bijhouden realisaties tbv peloton prio voor fase 22         */
    #define cftsvtg22fietsfiets 52 /* Bijhouden aantal fietsers tbv peloton prio voor fase 22     */
    #define cvc22fiets          53 /* Bijhouden prio inmeldingen fase 22 type Fiets               */
    #define cftscyc28fietsfiets 54 /* Bijhouden realisaties tbv peloton prio voor fase 28         */
    #define cftsvtg28fietsfiets 55 /* Bijhouden aantal fietsers tbv peloton prio voor fase 28     */
    #define cvc28fiets          56 /* Bijhouden prio inmeldingen fase 28 type Fiets               */
    #define cvc61bus            57 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risov          58 /* Bijhouden prio inmeldingen fase 61 type Bus                 */
    #define cvc61risvrw         59 /* Bijhouden prio inmeldingen fase 61 type Vrachtwagen         */
    #define cvc62bus            60 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risov          61 /* Bijhouden prio inmeldingen fase 62 type Bus                 */
    #define cvc62risvrw         62 /* Bijhouden prio inmeldingen fase 62 type Vrachtwagen         */
    #define cvc67bus            63 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risov          64 /* Bijhouden prio inmeldingen fase 67 type Bus                 */
    #define cvc67risvrw         65 /* Bijhouden prio inmeldingen fase 67 type Vrachtwagen         */
    #define cvc68bus            66 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risov          67 /* Bijhouden prio inmeldingen fase 68 type Bus                 */
    #define cvc68risvrw         68 /* Bijhouden prio inmeldingen fase 68 type Vrachtwagen         */
    #define cvc84bus            69 /* Bijhouden prio inmeldingen fase 84 type Bus                 */
    #define cvchd02             70 /* Bijhouden prio inmeldingen fase 02                          */
    #define cvchd03             71 /* Bijhouden prio inmeldingen fase 03                          */
    #define cvchd05             72 /* Bijhouden prio inmeldingen fase 05                          */
    #define cvchd08             73 /* Bijhouden prio inmeldingen fase 08                          */
    #define cvchd09             74 /* Bijhouden prio inmeldingen fase 09                          */
    #define cvchd11             75 /* Bijhouden prio inmeldingen fase 11                          */
    #define cvchd61             76 /* Bijhouden prio inmeldingen fase 61                          */
    #define cvchd62             77 /* Bijhouden prio inmeldingen fase 62                          */
    #define cvchd67             78 /* Bijhouden prio inmeldingen fase 67                          */
    #define cvchd68             79 /* Bijhouden prio inmeldingen fase 68                          */
    #define CTMAX1              80

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
    #define schtypeuswt                 9 /* Type aansturing waitsignalering 1 = drukknopgebruik, 2 = aanvraag         */
    #define schcycl                    10 /* Bijhouden actuele cyclustijd aan of uit                                   */
    #define schcycl_reset              11 /* Reset meting cyclustijd                                                   */
    #define schdvakd02_1a              12 /* Aanvraag fase 02 bij storing op detector 02_1a                            */
    #define schdvakd02_1b              13 /* Aanvraag fase 02 bij storing op detector 02_1b                            */
    #define schdvakd03_1               14 /* Aanvraag fase 03 bij storing op detector 03_1                             */
    #define schdvakdk31a               15 /* Aanvraag fase 31 bij storing op detector k31a                             */
    #define schdvakdk31b               16 /* Aanvraag fase 31 bij storing op detector k31b                             */
    #define schfileFile68af            17 /* File ingreep File68af toepassen                                           */
    #define schfiledoserenFile68af     18 /* Toepassen doseerpercentages voor fileingreep File68af                     */
    #define schfileFile68afparstrook   19 /* Parallele file meldingen per strook file ingreep File68af                 */
    #define schbmfix                   20 /* Bijkomen tijdens fixatie mogelijk                                         */
    #define schaltghst02               21 /* Alternatief realiseren fase 02 toestaan tijdens halfstar regelen          */
    #define schaltghst03               22 /* Alternatief realiseren fase 03 toestaan tijdens halfstar regelen          */
    #define schaltghst05               23 /* Alternatief realiseren fase 05 toestaan tijdens halfstar regelen          */
    #define schaltghst08               24 /* Alternatief realiseren fase 08 toestaan tijdens halfstar regelen          */
    #define schaltghst09               25 /* Alternatief realiseren fase 09 toestaan tijdens halfstar regelen          */
    #define schaltghst11               26 /* Alternatief realiseren fase 11 toestaan tijdens halfstar regelen          */
    #define schaltghst21               27 /* Alternatief realiseren fase 21 toestaan tijdens halfstar regelen          */
    #define schaltghst2232             28 /* Alternatief realiseren fasen 22, 32 toestaan tijdens halfstar regelen     */
    #define schaltghst243484           29 /* Alternatief realiseren fasen 24, 34, 84 toestaan tijdens halfstar regelen */
    #define schaltghst26               30 /* Alternatief realiseren fase 26 toestaan tijdens halfstar regelen          */
    #define schaltghst2838             31 /* Alternatief realiseren fasen 28, 38 toestaan tijdens halfstar regelen     */
    #define schaltghst31               32 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen          */
    #define schaltghst88               33 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen          */
    #define schaltghst243384           34 /* Alternatief realiseren fasen 24, 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst82               35 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen          */
    #define schaltghst81               36 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen          */
    #define schaltghst68               37 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen          */
    #define schaltghst67               38 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen          */
    #define schaltghst62               39 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen          */
    #define schaltghst61               40 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen          */
    #define schaltghst2434             41 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen     */
    #define schaltghst3384             42 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen     */
    #define schtegenov02               43 /* Tegenhouden hoofdrichting 02 bij OV ingreep                               */
    #define schafkwgov02               44 /* Afkappen WG hoofdrichting 02 bij OV ingreep                               */
    #define schafkvgov02               45 /* Afkappen VG hoofdrichting 02 bij OV ingreep                               */
    #define schtegenov08               46 /* Tegenhouden hoofdrichting 08 bij OV ingreep                               */
    #define schafkwgov08               47 /* Afkappen WG hoofdrichting 08 bij OV ingreep                               */
    #define schafkvgov08               48 /* Afkappen VG hoofdrichting 08 bij OV ingreep                               */
    #define schinst                    49 /* Eenmalig instellen signaalplannen na wijziging                            */
    #define schslavebep                50 /* Slave bepaald PL aansturing                                               */
    #define schvaml                    51 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)              */
    #define schvar                     52 /* VA regelen aan of uit                                                     */
    #define scharh                     53 /* Toestaan alternatieven voor hoofdrichtingen                               */
    #define schpervardef               54 /* VA regelen periode default                                                */
    #define schpervar1                 55 /* VA regelen periode nacht                                                  */
    #define schpervar2                 56 /* VA regelen periode dag                                                    */
    #define schpervar3                 57 /* VA regelen periode ochtend                                                */
    #define schpervar4                 58 /* VA regelen periode avond                                                  */
    #define schpervar5                 59 /* VA regelen periode koopavond                                              */
    #define schpervar6                 60 /* VA regelen periode weekend                                                */
    #define schpervar7                 61 /* VA regelen periode reserve                                                */
    #define schperarhdef               62 /* Alternatieven voor hoofdrichtingen periode default                        */
    #define schperarh1                 63 /* Alternatieven voor hoofdrichtingen periode nacht                          */
    #define schperarh2                 64 /* Alternatieven voor hoofdrichtingen periode dag                            */
    #define schperarh3                 65 /* Alternatieven voor hoofdrichtingen periode ochtend                        */
    #define schperarh4                 66 /* Alternatieven voor hoofdrichtingen periode avond                          */
    #define schperarh5                 67 /* Alternatieven voor hoofdrichtingen periode koopavond                      */
    #define schperarh6                 68 /* Alternatieven voor hoofdrichtingen periode weekend                        */
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
    #define schovstipt02bus           119 /* Geconditioneerde prioteit voor OV bij 02 Bus                              */
    #define schovstipt03bus           120 /* Geconditioneerde prioteit voor OV bij 03 Bus                              */
    #define schovstipt05bus           121 /* Geconditioneerde prioteit voor OV bij 05 Bus                              */
    #define schovstipt08bus           122 /* Geconditioneerde prioteit voor OV bij 08 Bus                              */
    #define schovstipt09bus           123 /* Geconditioneerde prioteit voor OV bij 09 Bus                              */
    #define schovstipt11bus           124 /* Geconditioneerde prioteit voor OV bij 11 Bus                              */
    #define schovstipt61bus           125 /* Geconditioneerde prioteit voor OV bij 61 Bus                              */
    #define schovstipt62bus           126 /* Geconditioneerde prioteit voor OV bij 62 Bus                              */
    #define schovstipt67bus           127 /* Geconditioneerde prioteit voor OV bij 67 Bus                              */
    #define schovstipt68bus           128 /* Geconditioneerde prioteit voor OV bij 68 Bus                              */
    #define schcovuber                129 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                            */
    #define schcheckdstype            130 /* Check type DSI bericht bij VECOM                                          */
    #define schprioin02buskar         131 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02buskar        132 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risovris       133 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02risovris      134 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risvrwris      135 /* Inmelden 02 via Vrachtwagen toestaan                                      */
    #define schpriouit02risvrwris     136 /* Uitmelden 02 via Vrachtwagen toestaan                                     */
    #define schprioin03buskar         137 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03buskar        138 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risovris       139 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03risovris      140 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risvrwris      141 /* Inmelden 03 via Vrachtwagen toestaan                                      */
    #define schpriouit03risvrwris     142 /* Uitmelden 03 via Vrachtwagen toestaan                                     */
    #define schprioin05buskar         143 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05buskar        144 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risovris       145 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05risovris      146 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risvrwris      147 /* Inmelden 05 via Vrachtwagen toestaan                                      */
    #define schpriouit05risvrwris     148 /* Uitmelden 05 via Vrachtwagen toestaan                                     */
    #define schprioin08buskar         149 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08buskar        150 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risovris       151 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08risovris      152 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risvrwris      153 /* Inmelden 08 via Vrachtwagen toestaan                                      */
    #define schpriouit08risvrwris     154 /* Uitmelden 08 via Vrachtwagen toestaan                                     */
    #define schprioin09buskar         155 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09buskar        156 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risovris       157 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09risovris      158 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risvrwris      159 /* Inmelden 09 via Vrachtwagen toestaan                                      */
    #define schpriouit09risvrwris     160 /* Uitmelden 09 via Vrachtwagen toestaan                                     */
    #define schprioin11buskar         161 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11buskar        162 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risovris       163 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11risovris      164 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risvrwris      165 /* Inmelden 11 via Vrachtwagen toestaan                                      */
    #define schpriouit11risvrwris     166 /* Uitmelden 11 via Vrachtwagen toestaan                                     */
    #define schprioin22fietsfiets22_1 167 /* Inmelden 22 via Fiets toestaan                                            */
    #define schpriouit22fietsfiets    168 /* Uitmelden 22 via Fiets toestaan                                           */
    #define schprioin28fietsfiets28_2 169 /* Inmelden 28 via Fiets toestaan                                            */
    #define schpriouit28fietsfiets    170 /* Uitmelden 28 via Fiets toestaan                                           */
    #define schprioin61buskar         171 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61buskar        172 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risovris       173 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61risovris      174 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risvrwris      175 /* Inmelden 61 via Vrachtwagen toestaan                                      */
    #define schpriouit61risvrwris     176 /* Uitmelden 61 via Vrachtwagen toestaan                                     */
    #define schprioin62buskar         177 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62buskar        178 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risovris       179 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62risovris      180 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risvrwris      181 /* Inmelden 62 via Vrachtwagen toestaan                                      */
    #define schpriouit62risvrwris     182 /* Uitmelden 62 via Vrachtwagen toestaan                                     */
    #define schprioin67buskar         183 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67buskar        184 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risovris       185 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67risovris      186 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risvrwris      187 /* Inmelden 67 via Vrachtwagen toestaan                                      */
    #define schpriouit67risvrwris     188 /* Uitmelden 67 via Vrachtwagen toestaan                                     */
    #define schprioin68buskar         189 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68buskar        190 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risovris       191 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68risovris      192 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risvrwris      193 /* Inmelden 68 via Vrachtwagen toestaan                                      */
    #define schpriouit68risvrwris     194 /* Uitmelden 68 via Vrachtwagen toestaan                                     */
    #define schprioin84buskar         195 /* Inmelden 84 via Bus toestaan                                              */
    #define schpriouit84buskar        196 /* Uitmelden 84 via Bus toestaan                                             */
    #define schhdin02kar              197 /* Inmelden 02 via KAR HD toestaan                                           */
    #define schhduit02kar             198 /* Uitmelden 02 via KAR HD toestaan                                          */
    #define schchecksirene02          199 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                    */
    #define schhdin02ris              200 /* Inmelden 02 via RIS HD toestaan                                           */
    #define schhduit02ris             201 /* Uitmelden 02 via RIS HD toestaan                                          */
    #define schhdin03kar              202 /* Inmelden 03 via KAR HD toestaan                                           */
    #define schhduit03kar             203 /* Uitmelden 03 via KAR HD toestaan                                          */
    #define schchecksirene03          204 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                    */
    #define schhdin03ris              205 /* Inmelden 03 via RIS HD toestaan                                           */
    #define schhduit03ris             206 /* Uitmelden 03 via RIS HD toestaan                                          */
    #define schhdin05kar              207 /* Inmelden 05 via KAR HD toestaan                                           */
    #define schhduit05kar             208 /* Uitmelden 05 via KAR HD toestaan                                          */
    #define schchecksirene05          209 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                    */
    #define schhdin05ris              210 /* Inmelden 05 via RIS HD toestaan                                           */
    #define schhduit05ris             211 /* Uitmelden 05 via RIS HD toestaan                                          */
    #define schhdin08kar              212 /* Inmelden 08 via KAR HD toestaan                                           */
    #define schhduit08kar             213 /* Uitmelden 08 via KAR HD toestaan                                          */
    #define schchecksirene08          214 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                    */
    #define schhdin08ris              215 /* Inmelden 08 via RIS HD toestaan                                           */
    #define schhduit08ris             216 /* Uitmelden 08 via RIS HD toestaan                                          */
    #define schhdin09kar              217 /* Inmelden 09 via KAR HD toestaan                                           */
    #define schhduit09kar             218 /* Uitmelden 09 via KAR HD toestaan                                          */
    #define schchecksirene09          219 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                    */
    #define schhdin09ris              220 /* Inmelden 09 via RIS HD toestaan                                           */
    #define schhduit09ris             221 /* Uitmelden 09 via RIS HD toestaan                                          */
    #define schhdin11kar              222 /* Inmelden 11 via KAR HD toestaan                                           */
    #define schhduit11kar             223 /* Uitmelden 11 via KAR HD toestaan                                          */
    #define schchecksirene11          224 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                    */
    #define schhdin11ris              225 /* Inmelden 11 via RIS HD toestaan                                           */
    #define schhduit11ris             226 /* Uitmelden 11 via RIS HD toestaan                                          */
    #define schhdin61kar              227 /* Inmelden 61 via KAR HD toestaan                                           */
    #define schhduit61kar             228 /* Uitmelden 61 via KAR HD toestaan                                          */
    #define schchecksirene61          229 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                    */
    #define schhdin61ris              230 /* Inmelden 61 via RIS HD toestaan                                           */
    #define schhduit61ris             231 /* Uitmelden 61 via RIS HD toestaan                                          */
    #define schhdin62kar              232 /* Inmelden 62 via KAR HD toestaan                                           */
    #define schhduit62kar             233 /* Uitmelden 62 via KAR HD toestaan                                          */
    #define schchecksirene62          234 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                    */
    #define schhdin62ris              235 /* Inmelden 62 via RIS HD toestaan                                           */
    #define schhduit62ris             236 /* Uitmelden 62 via RIS HD toestaan                                          */
    #define schhdin67kar              237 /* Inmelden 67 via KAR HD toestaan                                           */
    #define schhduit67kar             238 /* Uitmelden 67 via KAR HD toestaan                                          */
    #define schchecksirene67          239 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                    */
    #define schhdin67ris              240 /* Inmelden 67 via RIS HD toestaan                                           */
    #define schhduit67ris             241 /* Uitmelden 67 via RIS HD toestaan                                          */
    #define schhdin68kar              242 /* Inmelden 68 via KAR HD toestaan                                           */
    #define schhduit68kar             243 /* Uitmelden 68 via KAR HD toestaan                                          */
    #define schchecksirene68          244 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                    */
    #define schhdin68ris              245 /* Inmelden 68 via RIS HD toestaan                                           */
    #define schhduit68ris             246 /* Uitmelden 68 via RIS HD toestaan                                          */
    #define schpelrwKOP02             247 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02      */
    #define schpelmkKOP02             248 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02          */
    #define schpelaKOP02              249 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02               */
    #define schpkuKOP68_uit68         250 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit      */
    #define schrisgeencheckopsg       251 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen               */
    #define schrisaanvraag            252 /* Globaal in of uitschakelen aanvragen via RIS                              */
    #define schrisverlengen           253 /* Globaal in of uitschakelen verlengen via RIS                              */
    #define schrgadd24_3              254 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                */
    #define schrgad24_3               255 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgvd24_3               256 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgv                    257 /* RoBuGrover aan of uit                                                     */
    #define schrgv_snel               258 /* RoBuGrover versneld ophogen of verlagen                                   */
    #define schschoolingreep31        259 /* Schoolingreep aan of uit voor fase 31                                     */
    #define schschoolingreep32        260 /* Schoolingreep aan of uit voor fase 32                                     */
    #define schschoolingreep33        261 /* Schoolingreep aan of uit voor fase 33                                     */
    #define schschoolingreep34        262 /* Schoolingreep aan of uit voor fase 34                                     */
    #define schsi31                   263 /* Senioreningreep aan of uit voor fase 31                                   */
    #define schsi32                   264 /* Senioreningreep aan of uit voor fase 32                                   */
    #define schsi33                   265 /* Senioreningreep aan of uit voor fase 33                                   */
    #define schsi34                   266 /* Senioreningreep aan of uit voor fase 34                                   */
    #define schca02                   267 /* Cyclische aanvraag fase 02                                                */
    #define schca03                   268 /* Cyclische aanvraag fase 03                                                */
    #define schca05                   269 /* Cyclische aanvraag fase 05                                                */
    #define schca08                   270 /* Cyclische aanvraag fase 08                                                */
    #define schca09                   271 /* Cyclische aanvraag fase 09                                                */
    #define schca11                   272 /* Cyclische aanvraag fase 11                                                */
    #define schca21                   273 /* Cyclische aanvraag fase 21                                                */
    #define schca22                   274 /* Cyclische aanvraag fase 22                                                */
    #define schca24                   275 /* Cyclische aanvraag fase 24                                                */
    #define schca26                   276 /* Cyclische aanvraag fase 26                                                */
    #define schca28                   277 /* Cyclische aanvraag fase 28                                                */
    #define schca31                   278 /* Cyclische aanvraag fase 31                                                */
    #define schca32                   279 /* Cyclische aanvraag fase 32                                                */
    #define schca33                   280 /* Cyclische aanvraag fase 33                                                */
    #define schca34                   281 /* Cyclische aanvraag fase 34                                                */
    #define schca38                   282 /* Cyclische aanvraag fase 38                                                */
    #define schca61                   283 /* Cyclische aanvraag fase 61                                                */
    #define schca62                   284 /* Cyclische aanvraag fase 62                                                */
    #define schca67                   285 /* Cyclische aanvraag fase 67                                                */
    #define schca68                   286 /* Cyclische aanvraag fase 68                                                */
    #define schca81                   287 /* Cyclische aanvraag fase 81                                                */
    #define schca82                   288 /* Cyclische aanvraag fase 82                                                */
    #define schca84                   289 /* Cyclische aanvraag fase 84                                                */
    #define schvg02_4a                290 /* Veiligheidsgroen detector 02_4a fase 02                                   */
    #define schvg02_4b                291 /* Veiligheidsgroen detector 02_4b fase 02                                   */
    #define schvg08_4a                292 /* Veiligheidsgroen detector 08_4a fase 08                                   */
    #define schvg08_4b                293 /* Veiligheidsgroen detector 08_4b fase 08                                   */
    #define schvg11_4                 294 /* Veiligheidsgroen detector 11_4 fase 11                                    */
    #define schaltg02                 295 /* Alternatieve realisatie toestaan fase 02                                  */
    #define schaltg03                 296 /* Alternatieve realisatie toestaan fase 03                                  */
    #define schaltg05                 297 /* Alternatieve realisatie toestaan fase 05                                  */
    #define schaltg08                 298 /* Alternatieve realisatie toestaan fase 08                                  */
    #define schaltg09                 299 /* Alternatieve realisatie toestaan fase 09                                  */
    #define schaltg11                 300 /* Alternatieve realisatie toestaan fase 11                                  */
    #define schaltg21                 301 /* Alternatieve realisatie toestaan fase 21                                  */
    #define schaltg2232               302 /* Alternatieve realisatie toestaan fasen 22, 32                             */
    #define schaltg243484             303 /* Alternatieve realisatie toestaan fasen 24, 34, 84                         */
    #define schaltg26                 304 /* Alternatieve realisatie toestaan fase 26                                  */
    #define schaltg2838               305 /* Alternatieve realisatie toestaan fasen 28, 38                             */
    #define schaltg31                 306 /* Alternatieve realisatie toestaan fase 31                                  */
    #define schaltg3384               307 /* Alternatieve realisatie toestaan fasen 33, 84                             */
    #define schaltg2434               308 /* Alternatieve realisatie toestaan fasen 24, 34                             */
    #define schaltg61                 309 /* Alternatieve realisatie toestaan fase 61                                  */
    #define schaltg62                 310 /* Alternatieve realisatie toestaan fase 62                                  */
    #define schaltg67                 311 /* Alternatieve realisatie toestaan fase 67                                  */
    #define schaltg68                 312 /* Alternatieve realisatie toestaan fase 68                                  */
    #define schaltg81                 313 /* Alternatieve realisatie toestaan fase 81                                  */
    #define schaltg82                 314 /* Alternatieve realisatie toestaan fase 82                                  */
    #define schaltg243384             315 /* Alternatieve realisatie toestaan fasen 24, 33, 84                         */
    #define schwg02                   316 /* Wachtstand groen fase 02                                                  */
    #define schwg03                   317 /* Wachtstand groen fase 03                                                  */
    #define schwg05                   318 /* Wachtstand groen fase 05                                                  */
    #define schwg08                   319 /* Wachtstand groen fase 08                                                  */
    #define schwg09                   320 /* Wachtstand groen fase 09                                                  */
    #define schwg11                   321 /* Wachtstand groen fase 11                                                  */
    #define schwg21                   322 /* Wachtstand groen fase 21                                                  */
    #define schwg22                   323 /* Wachtstand groen fase 22                                                  */
    #define schwg24                   324 /* Wachtstand groen fase 24                                                  */
    #define schwg26                   325 /* Wachtstand groen fase 26                                                  */
    #define schwg28                   326 /* Wachtstand groen fase 28                                                  */
    #define schwg31                   327 /* Wachtstand groen fase 31                                                  */
    #define schwg32                   328 /* Wachtstand groen fase 32                                                  */
    #define schwg33                   329 /* Wachtstand groen fase 33                                                  */
    #define schwg34                   330 /* Wachtstand groen fase 34                                                  */
    #define schwg38                   331 /* Wachtstand groen fase 38                                                  */
    #define schwg61                   332 /* Wachtstand groen fase 61                                                  */
    #define schwg62                   333 /* Wachtstand groen fase 62                                                  */
    #define schwg67                   334 /* Wachtstand groen fase 67                                                  */
    #define schwg68                   335 /* Wachtstand groen fase 68                                                  */
    #define schwg81                   336 /* Wachtstand groen fase 81                                                  */
    #define schwg82                   337 /* Wachtstand groen fase 82                                                  */
    #define schwg84                   338 /* Wachtstand groen fase 84                                                  */
    #define schwtv24                  339 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                        */
    #define schwtvbusbijhd            340 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                  */
    #define schstar                   341 /* Inschakelen star programma                                                */
    #define schgs2232                 342 /* Schakelbare gelijkstart tussen fase 32 en 22                              */
    #define schgs2434                 343 /* Schakelbare gelijkstart tussen fase 34 en 24                              */
    #define schgs2484                 344 /* Schakelbare gelijkstart tussen fase 84 en 24                              */
    #define schgs3384                 345 /* Schakelbare gelijkstart tussen fase 84 en 33                              */
    #define schlos32_1                346 /* Toestaan los realiseren fase 32                                           */
    #define schlos32_2                347 /* Toestaan los realiseren fase 32                                           */
    #define schlos31_1                348 /* Toestaan los realiseren fase 31                                           */
    #define schlos31_2                349 /* Toestaan los realiseren fase 31                                           */
    #define schlos34_1                350 /* Toestaan los realiseren fase 34                                           */
    #define schlos34_2                351 /* Toestaan los realiseren fase 34                                           */
    #define schlos33_1                352 /* Toestaan los realiseren fase 33                                           */
    #define schlos33_2                353 /* Toestaan los realiseren fase 33                                           */
    #define schconfidence15fix        354
    #define schtxconfidence15ar       355
    #define schspatconfidence1        356
    #define schspatconfidence3        357
    #define schspatconfidence6        358
    #define schspatconfidence9        359
    #define schspatconfidence12       360
    #define schspatconfidence15       361
    #define schtimings02              362
    #define schtimings03              363
    #define schtimings05              364
    #define schtimings08              365
    #define schtimings09              366
    #define schtimings11              367
    #define schtimings21              368
    #define schtimings22              369
    #define schtimings24              370
    #define schtimings26              371
    #define schtimings28              372
    #define schtimings31              373
    #define schtimings32              374
    #define schtimings33              375
    #define schtimings34              376
    #define schtimings38              377
    #define schtimings61              378
    #define schtimings62              379
    #define schtimings67              380
    #define schtimings68              381
    #define schtimings81              382
    #define schtimings82              383
    #define schtimings84              384
    #define schsneld02_1a             385 /* Aanvraag snel voor detector 02_1a aan of uit                              */
    #define schsneld02_1b             386 /* Aanvraag snel voor detector 02_1b aan of uit                              */
    #define schsneld03_1              387 /* Aanvraag snel voor detector 03_1 aan of uit                               */
    #define schsneld05_1              388 /* Aanvraag snel voor detector 05_1 aan of uit                               */
    #define schsneld08_1a             389 /* Aanvraag snel voor detector 08_1a aan of uit                              */
    #define schsneld08_1b             390 /* Aanvraag snel voor detector 08_1b aan of uit                              */
    #define schsneld09_1              391 /* Aanvraag snel voor detector 09_1 aan of uit                               */
    #define schsneld11_1              392 /* Aanvraag snel voor detector 11_1 aan of uit                               */
    #define schsneld211               393 /* Aanvraag snel voor detector 211 aan of uit                                */
    #define schsneld22_1              394 /* Aanvraag snel voor detector 22_1 aan of uit                               */
    #define schsneld24_1              395 /* Aanvraag snel voor detector 24_1 aan of uit                               */
    #define schsneld261               396 /* Aanvraag snel voor detector 261 aan of uit                                */
    #define schsneld28_1              397 /* Aanvraag snel voor detector 28_1 aan of uit                               */
    #define schsneld61_1              398 /* Aanvraag snel voor detector 61_1 aan of uit                               */
    #define schsneld62_1a             399 /* Aanvraag snel voor detector 62_1a aan of uit                              */
    #define schsneld62_1b             400 /* Aanvraag snel voor detector 62_1b aan of uit                              */
    #define schsneld67_1              401 /* Aanvraag snel voor detector 67_1 aan of uit                               */
    #define schsneld68_1a             402 /* Aanvraag snel voor detector 68_1a aan of uit                              */
    #define schsneld68_1b             403 /* Aanvraag snel voor detector 68_1b aan of uit                              */
    #define schsneld81_1              404 /* Aanvraag snel voor detector 81_1 aan of uit                               */
    #define schsneld82_1              405 /* Aanvraag snel voor detector 82_1 aan of uit                               */
    #define schsneld84_1              406 /* Aanvraag snel voor detector 84_1 aan of uit                               */
    #define SCHMAX1                   407

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
    #define prmpriohst02bus              217 /* Prioriteit fase 02 tijdens halfstar regelen Bus                                                                                */
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
    #define prmpriohst84bus              249 /* Prioriteit fase 84 tijdens halfstar regelen Bus                                                                                */
    #define prmnatxdhst02bus             250 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risov           251 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst02risvrw          252 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 02                                                                */
    #define prmnatxdhst03bus             253 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risov           254 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst03risvrw          255 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 03                                                                */
    #define prmnatxdhst05bus             256 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risov           257 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst05risvrw          258 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 05                                                                */
    #define prmnatxdhst08bus             259 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risov           260 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst08risvrw          261 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 08                                                                */
    #define prmnatxdhst09bus             262 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risov           263 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst09risvrw          264 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 09                                                                */
    #define prmnatxdhst11bus             265 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risov           266 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst11risvrw          267 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 11                                                                */
    #define prmnatxdhst22fiets           268 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 22                                                                */
    #define prmnatxdhst28fiets           269 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 28                                                                */
    #define prmnatxdhst61bus             270 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risov           271 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst61risvrw          272 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 61                                                                */
    #define prmnatxdhst62bus             273 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risov           274 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst62risvrw          275 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 62                                                                */
    #define prmnatxdhst67bus             276 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risov           277 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst67risvrw          278 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 67                                                                */
    #define prmnatxdhst68bus             279 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risov           280 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst68risvrw          281 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 68                                                                */
    #define prmnatxdhst84bus             282 /* Maximale tijd na TXD tbv. verlengen voor OV ingreep bij fase 84                                                                */
    #define prmtxA1PL3_28                283 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                284 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                285 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                286 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                287 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                288 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                289 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                290 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                291 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                292 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_38                293 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                294 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                295 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                296 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                297 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                298 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                299 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                300 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                301 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                302 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                303 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                304 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                305 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                306 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                307 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                308 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                309 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                310 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                311 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                312 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmrstotxa                   313 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmvolgmasterpl              314 /* Per plan (bitwise) instellen wel of niet volgen master                                                                         */
    #define prmplxperdef                 315 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   316 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   317 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   318 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   319 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   320 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   321 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   322 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                323 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                324 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                325 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                326 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                327 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                328 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                329 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                330 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                331 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                332 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                333 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                334 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                335 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                336 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                337 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                338 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                339 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                340 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                341 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                342 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                343 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                344 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      345 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      346 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      347 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      348 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      349 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      350 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      351 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      352 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      353 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      354 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      355 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      356 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      357 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      358 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      359 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      360 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      361 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      362 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      363 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      364 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      365 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      366 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                      367 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    368 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    369 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    370 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    371 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    372 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    373 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    374 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    375 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    376 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    377 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    378 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    379 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    380 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    381 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    382 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    383 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    384 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    385 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    386 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    387 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    388 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    389 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    390 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg          391 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           392 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus       393 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus        394 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus        395 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus       396 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus        397 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus        398 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus       399 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus        400 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus        401 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus       402 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus        403 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus        404 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus       405 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus        406 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus        407 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus       408 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus        409 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus        410 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus       411 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus        412 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus        413 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus       414 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus        415 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus        416 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus       417 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus        418 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus        419 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus       420 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus        421 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus        422 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      423 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    424 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    425 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    426 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    427 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    428 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   429 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  430 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   431 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    432 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    433 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    434 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   435 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  436 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   437 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    438 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    439 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    440 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   441 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  442 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   443 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    444 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    445 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    446 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   447 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  448 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   449 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    450 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    451 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    452 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   453 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  454 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   455 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    456 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    457 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    458 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   459 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  460 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   461 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    462 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    463 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    464 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   465 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  466 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   467 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    468 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    469 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    470 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   471 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  472 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   473 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    474 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    475 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    476 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   477 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  478 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   479 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    480 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    481 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    482 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   483 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  484 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   485 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    486 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    487 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    488 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   489 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  490 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   491 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    492 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    493 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    494 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    495 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    496 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    497 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    498 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    499 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    500 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    501 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    502 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    503 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    504 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   505 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  506 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   507 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    508 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    509 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    510 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   511 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  512 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   513 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    514 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    515 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    516 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   517 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  518 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   519 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    520 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    521 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    522 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   523 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  524 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   525 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    526 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    527 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    528 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   529 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  530 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   531 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    532 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    533 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    534 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   535 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  536 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   537 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    538 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    539 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    540 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   541 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  542 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   543 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus                  544 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus                 545 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus                  546 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus                  547 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02bus              548 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02bus               549 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus                 550 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov                551 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov               552 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov                553 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov                554 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risov            555 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risov               556 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov           557
    #define prmrisend02risov             558
    #define prmriseta02risov             559
    #define prmrisrole02risov            560
    #define prmrissubrole02risov         561
    #define prmrisimportance02risov      562
    #define prmrisstationtype02risov     563
    #define prmrisgrenspriotype02risov   564 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risov      565
    #define prmrislaneid02risov_1        566
    #define prmrislaneid02risov_2        567
    #define prmrto02risvrw               568 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw              569 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw               570 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw               571 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risvrw           572 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risvrw              573 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw          574
    #define prmrisend02risvrw            575
    #define prmriseta02risvrw            576
    #define prmrisrole02risvrw           577
    #define prmrissubrole02risvrw        578
    #define prmrisimportance02risvrw     579
    #define prmrisstationtype02risvrw    580
    #define prmrisgrenspriotype02risvrw  581 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risvrw     582
    #define prmrislaneid02risvrw_1       583
    #define prmrislaneid02risvrw_2       584
    #define prmrto03bus                  585 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                 586 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                  587 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                  588 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03bus              589 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03bus               590 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                 591 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov                592 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov               593 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov                594 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov                595 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risov            596 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risov               597 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov           598
    #define prmrisend03risov             599
    #define prmriseta03risov             600
    #define prmrisrole03risov            601
    #define prmrissubrole03risov         602
    #define prmrisimportance03risov      603
    #define prmrisstationtype03risov     604
    #define prmrisgrenspriotype03risov   605 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risov      606
    #define prmrislaneid03risov_1        607
    #define prmrto03risvrw               608 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw              609 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw               610 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw               611 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risvrw           612 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risvrw              613 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw          614
    #define prmrisend03risvrw            615
    #define prmriseta03risvrw            616
    #define prmrisrole03risvrw           617
    #define prmrissubrole03risvrw        618
    #define prmrisimportance03risvrw     619
    #define prmrisstationtype03risvrw    620
    #define prmrisgrenspriotype03risvrw  621 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risvrw     622
    #define prmrislaneid03risvrw_1       623
    #define prmrto05bus                  624 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                 625 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                  626 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                  627 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05bus              628 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05bus               629 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                 630 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov                631 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov               632 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov                633 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov                634 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risov            635 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risov               636 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov           637
    #define prmrisend05risov             638
    #define prmriseta05risov             639
    #define prmrisrole05risov            640
    #define prmrissubrole05risov         641
    #define prmrisimportance05risov      642
    #define prmrisstationtype05risov     643
    #define prmrisgrenspriotype05risov   644 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risov      645
    #define prmrislaneid05risov_1        646
    #define prmrto05risvrw               647 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw              648 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw               649 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw               650 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risvrw           651 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risvrw              652 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw          653
    #define prmrisend05risvrw            654
    #define prmriseta05risvrw            655
    #define prmrisrole05risvrw           656
    #define prmrissubrole05risvrw        657
    #define prmrisimportance05risvrw     658
    #define prmrisstationtype05risvrw    659
    #define prmrisgrenspriotype05risvrw  660 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risvrw     661
    #define prmrislaneid05risvrw_1       662
    #define prmrto08bus                  663 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                 664 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                  665 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                  666 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08bus              667 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08bus               668 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                 669 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov                670 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov               671 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov                672 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov                673 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risov            674 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risov               675 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov           676
    #define prmrisend08risov             677
    #define prmriseta08risov             678
    #define prmrisrole08risov            679
    #define prmrissubrole08risov         680
    #define prmrisimportance08risov      681
    #define prmrisstationtype08risov     682
    #define prmrisgrenspriotype08risov   683 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risov      684
    #define prmrislaneid08risov_1        685
    #define prmrislaneid08risov_2        686
    #define prmrto08risvrw               687 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw              688 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw               689 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw               690 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risvrw           691 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risvrw              692 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw          693
    #define prmrisend08risvrw            694
    #define prmriseta08risvrw            695
    #define prmrisrole08risvrw           696
    #define prmrissubrole08risvrw        697
    #define prmrisimportance08risvrw     698
    #define prmrisstationtype08risvrw    699
    #define prmrisgrenspriotype08risvrw  700 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risvrw     701
    #define prmrislaneid08risvrw_1       702
    #define prmrislaneid08risvrw_2       703
    #define prmrto09bus                  704 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                 705 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                  706 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                  707 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09bus              708 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09bus               709 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                 710 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov                711 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov               712 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov                713 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov                714 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risov            715 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risov               716 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov           717
    #define prmrisend09risov             718
    #define prmriseta09risov             719
    #define prmrisrole09risov            720
    #define prmrissubrole09risov         721
    #define prmrisimportance09risov      722
    #define prmrisstationtype09risov     723
    #define prmrisgrenspriotype09risov   724 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risov      725
    #define prmrislaneid09risov_1        726
    #define prmrto09risvrw               727 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw              728 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw               729 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw               730 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risvrw           731 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risvrw              732 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw          733
    #define prmrisend09risvrw            734
    #define prmriseta09risvrw            735
    #define prmrisrole09risvrw           736
    #define prmrissubrole09risvrw        737
    #define prmrisimportance09risvrw     738
    #define prmrisstationtype09risvrw    739
    #define prmrisgrenspriotype09risvrw  740 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risvrw     741
    #define prmrislaneid09risvrw_1       742
    #define prmrto11bus                  743 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                 744 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                  745 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                  746 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11bus              747 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11bus               748 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                 749 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov                750 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov               751 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov                752 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov                753 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risov            754 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risov               755 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov           756
    #define prmrisend11risov             757
    #define prmriseta11risov             758
    #define prmrisrole11risov            759
    #define prmrissubrole11risov         760
    #define prmrisimportance11risov      761
    #define prmrisstationtype11risov     762
    #define prmrisgrenspriotype11risov   763 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risov      764
    #define prmrislaneid11risov_1        765
    #define prmrto11risvrw               766 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw              767 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw               768 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw               769 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risvrw           770 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risvrw              771 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw          772
    #define prmrisend11risvrw            773
    #define prmriseta11risvrw            774
    #define prmrisrole11risvrw           775
    #define prmrissubrole11risvrw        776
    #define prmrisimportance11risvrw     777
    #define prmrisstationtype11risvrw    778
    #define prmrisgrenspriotype11risvrw  779 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risvrw     780
    #define prmrislaneid11risvrw_1       781
    #define prmftsblok22fietsfiets       782 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  783 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets     784 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets      785 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets  786 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets                787 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               788 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                789 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                790 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets            791 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets               792 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets           793
    #define prmrisend22fiets             794
    #define prmrisrole22fiets            795
    #define prmrissubrole22fiets         796
    #define prmrisimportance22fiets      797
    #define prmrisstationtype22fiets     798
    #define prmrisgrenspriotype22fiets   799 /* Greenswaarde type prioriteit RIS voor fase 22                                                                                  */
    #define prmrisapproachid22fiets      800
    #define prmrislaneid22fiets_1        801
    #define prmrislaneid22fiets_2        802
    #define prmftsblok28fietsfiets       803 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  804 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets     805 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets      806 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets  807 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets                808 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               809 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                810 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                811 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets            812 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets               813 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets           814
    #define prmrisend28fiets             815
    #define prmrisrole28fiets            816
    #define prmrissubrole28fiets         817
    #define prmrisimportance28fiets      818
    #define prmrisstationtype28fiets     819
    #define prmrisgrenspriotype28fiets   820 /* Greenswaarde type prioriteit RIS voor fase 28                                                                                  */
    #define prmrisapproachid28fiets      821
    #define prmrislaneid28fiets_1        822
    #define prmrto61bus                  823 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                 824 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                  825 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                  826 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61bus              827 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61bus               828 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                 829 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov                830 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov               831 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov                832 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov                833 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risov            834 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risov               835 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov           836
    #define prmrisend61risov             837
    #define prmriseta61risov             838
    #define prmrisrole61risov            839
    #define prmrissubrole61risov         840
    #define prmrisimportance61risov      841
    #define prmrisstationtype61risov     842
    #define prmrisgrenspriotype61risov   843 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risov      844
    #define prmrislaneid61risov_1        845
    #define prmrto61risvrw               846 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw              847 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw               848 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw               849 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risvrw           850 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risvrw              851 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw          852
    #define prmrisend61risvrw            853
    #define prmriseta61risvrw            854
    #define prmrisrole61risvrw           855
    #define prmrissubrole61risvrw        856
    #define prmrisimportance61risvrw     857
    #define prmrisstationtype61risvrw    858
    #define prmrisgrenspriotype61risvrw  859 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risvrw     860
    #define prmrislaneid61risvrw_1       861
    #define prmrto62bus                  862 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                 863 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                  864 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                  865 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62bus              866 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62bus               867 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                 868 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov                869 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov               870 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov                871 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov                872 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risov            873 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risov               874 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov           875
    #define prmrisend62risov             876
    #define prmriseta62risov             877
    #define prmrisrole62risov            878
    #define prmrissubrole62risov         879
    #define prmrisimportance62risov      880
    #define prmrisstationtype62risov     881
    #define prmrisgrenspriotype62risov   882 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risov      883
    #define prmrislaneid62risov_1        884
    #define prmrislaneid62risov_2        885
    #define prmrto62risvrw               886 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw              887 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw               888 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw               889 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risvrw           890 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risvrw              891 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw          892
    #define prmrisend62risvrw            893
    #define prmriseta62risvrw            894
    #define prmrisrole62risvrw           895
    #define prmrissubrole62risvrw        896
    #define prmrisimportance62risvrw     897
    #define prmrisstationtype62risvrw    898
    #define prmrisgrenspriotype62risvrw  899 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risvrw     900
    #define prmrislaneid62risvrw_1       901
    #define prmrislaneid62risvrw_2       902
    #define prmrto67bus                  903 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                 904 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                  905 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                  906 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67bus              907 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67bus               908 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                 909 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov                910 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov               911 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov                912 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov                913 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risov            914 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risov               915 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov           916
    #define prmrisend67risov             917
    #define prmriseta67risov             918
    #define prmrisrole67risov            919
    #define prmrissubrole67risov         920
    #define prmrisimportance67risov      921
    #define prmrisstationtype67risov     922
    #define prmrisgrenspriotype67risov   923 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risov      924
    #define prmrislaneid67risov_1        925
    #define prmrto67risvrw               926 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw              927 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw               928 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw               929 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risvrw           930 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risvrw              931 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw          932
    #define prmrisend67risvrw            933
    #define prmriseta67risvrw            934
    #define prmrisrole67risvrw           935
    #define prmrissubrole67risvrw        936
    #define prmrisimportance67risvrw     937
    #define prmrisstationtype67risvrw    938
    #define prmrisgrenspriotype67risvrw  939 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risvrw     940
    #define prmrislaneid67risvrw_1       941
    #define prmrto68bus                  942 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                 943 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                  944 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                  945 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68bus              946 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68bus               947 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                 948 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov                949 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov               950 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov                951 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov                952 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risov            953 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risov               954 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov           955
    #define prmrisend68risov             956
    #define prmriseta68risov             957
    #define prmrisrole68risov            958
    #define prmrissubrole68risov         959
    #define prmrisimportance68risov      960
    #define prmrisstationtype68risov     961
    #define prmrisgrenspriotype68risov   962 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risov      963
    #define prmrislaneid68risov_1        964
    #define prmrislaneid68risov_2        965
    #define prmrto68risvrw               966 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw              967 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw               968 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw               969 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risvrw           970 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risvrw              971 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw          972
    #define prmrisend68risvrw            973
    #define prmriseta68risvrw            974
    #define prmrisrole68risvrw           975
    #define prmrissubrole68risvrw        976
    #define prmrisimportance68risvrw     977
    #define prmrisstationtype68risvrw    978
    #define prmrisgrenspriotype68risvrw  979 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risvrw     980
    #define prmrislaneid68risvrw_1       981
    #define prmrislaneid68risvrw_2       982
    #define prmrto84bus                  983 /* Ongehinderde rijtijd prioriteit fase 84                                                                                        */
    #define prmrtbg84bus                 984 /* Beperkt gehinderde rijtijd prioriteit fase 84                                                                                  */
    #define prmrtg84bus                  985 /* Gehinderde rijtijd prioriteit fase 84                                                                                          */
    #define prmomx84bus                  986 /* Ondermaximum OV fase 84                                                                                                        */
    #define prmupinagb84bus              987 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 84                                                                  */
    #define prmvtgcat84bus               988 /* Voertuigcategorie DSI voor prio ingreep 84bus                                                                                  */
    #define prmprio84bus                 989 /* Prioriteitsinstelling OV fase 84                                                                                               */
    #define prmpriohd02                  990 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                   991 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                  992 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                   993 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02               994 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmrisstart02hd              995
    #define prmrisend02hd                996
    #define prmriseta02hd                997
    #define prmrisrole02hd               998
    #define prmrissubrole02hd            999
    #define prmrisimportance02hd        1000
    #define prmrisstationtype02hd       1001
    #define prmrisgrenspriotype02hd     1002 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02hd        1003
    #define prmrislaneid02hd_1          1004
    #define prmrislaneid02hd_2          1005
    #define prmpriohd03                 1006 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                  1007 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                 1008 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                  1009 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03              1010 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmrisstart03hd             1011
    #define prmrisend03hd               1012
    #define prmriseta03hd               1013
    #define prmrisrole03hd              1014
    #define prmrissubrole03hd           1015
    #define prmrisimportance03hd        1016
    #define prmrisstationtype03hd       1017
    #define prmrisgrenspriotype03hd     1018 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03hd        1019
    #define prmrislaneid03hd_1          1020
    #define prmpriohd05                 1021 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1022 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1023 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1024 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              1025 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmrisstart05hd             1026
    #define prmrisend05hd               1027
    #define prmriseta05hd               1028
    #define prmrisrole05hd              1029
    #define prmrissubrole05hd           1030
    #define prmrisimportance05hd        1031
    #define prmrisstationtype05hd       1032
    #define prmrisgrenspriotype05hd     1033 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05hd        1034
    #define prmrislaneid05hd_1          1035
    #define prmpriohd08                 1036 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1037 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1038 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1039 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              1040 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmrisstart08hd             1041
    #define prmrisend08hd               1042
    #define prmriseta08hd               1043
    #define prmrisrole08hd              1044
    #define prmrissubrole08hd           1045
    #define prmrisimportance08hd        1046
    #define prmrisstationtype08hd       1047
    #define prmrisgrenspriotype08hd     1048 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08hd        1049
    #define prmrislaneid08hd_1          1050
    #define prmrislaneid08hd_2          1051
    #define prmpriohd09                 1052 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1053 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1054 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1055 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              1056 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmrisstart09hd             1057
    #define prmrisend09hd               1058
    #define prmriseta09hd               1059
    #define prmrisrole09hd              1060
    #define prmrissubrole09hd           1061
    #define prmrisimportance09hd        1062
    #define prmrisstationtype09hd       1063
    #define prmrisgrenspriotype09hd     1064 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09hd        1065
    #define prmrislaneid09hd_1          1066
    #define prmpriohd11                 1067 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1068 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1069 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1070 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              1071 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmrisstart11hd             1072
    #define prmrisend11hd               1073
    #define prmriseta11hd               1074
    #define prmrisrole11hd              1075
    #define prmrissubrole11hd           1076
    #define prmrisimportance11hd        1077
    #define prmrisstationtype11hd       1078
    #define prmrisgrenspriotype11hd     1079 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11hd        1080
    #define prmrislaneid11hd_1          1081
    #define prmpriohd61                 1082 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1083 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1084 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1085 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              1086 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmrisstart61hd             1087
    #define prmrisend61hd               1088
    #define prmriseta61hd               1089
    #define prmrisrole61hd              1090
    #define prmrissubrole61hd           1091
    #define prmrisimportance61hd        1092
    #define prmrisstationtype61hd       1093
    #define prmrisgrenspriotype61hd     1094 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61hd        1095
    #define prmrislaneid61hd_1          1096
    #define prmpriohd62                 1097 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1098 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1099 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1100 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              1101 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmrisstart62hd             1102
    #define prmrisend62hd               1103
    #define prmriseta62hd               1104
    #define prmrisrole62hd              1105
    #define prmrissubrole62hd           1106
    #define prmrisimportance62hd        1107
    #define prmrisstationtype62hd       1108
    #define prmrisgrenspriotype62hd     1109 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62hd        1110
    #define prmrislaneid62hd_1          1111
    #define prmrislaneid62hd_2          1112
    #define prmpriohd67                 1113 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1114 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1115 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1116 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              1117 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmrisstart67hd             1118
    #define prmrisend67hd               1119
    #define prmriseta67hd               1120
    #define prmrisrole67hd              1121
    #define prmrissubrole67hd           1122
    #define prmrisimportance67hd        1123
    #define prmrisstationtype67hd       1124
    #define prmrisgrenspriotype67hd     1125 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67hd        1126
    #define prmrislaneid67hd_1          1127
    #define prmpriohd68                 1128 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1129 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1130 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1131 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              1132 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmrisstart68hd             1133
    #define prmrisend68hd               1134
    #define prmriseta68hd               1135
    #define prmrisrole68hd              1136
    #define prmrissubrole68hd           1137
    #define prmrisimportance68hd        1138
    #define prmrisstationtype68hd       1139
    #define prmrisgrenspriotype68hd     1140 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68hd        1141
    #define prmrislaneid68hd_1          1142
    #define prmrislaneid68hd_2          1143
    #define prmkarsg02                  1144 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1145 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1146 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1147 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1148 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1149 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1150 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1151 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1152 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1153 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsg84                  1154 /* Signaalgroep nummer voor fase 84 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1155 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1156 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1157 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1158 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1159 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1160 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1161 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1162 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1163 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1164 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1165 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1166 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1167 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1168 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1169 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1170 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1171 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1172 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1173 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1174 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1175 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1176 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1177 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1178 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1179 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1180 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1181 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1182 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1183 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1184 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1185 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1186 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1187 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1188 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1189 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1190 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1191 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1192 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpDaluren_werkdag      1193 /* Start klokperiode Daluren_werkdag                                                                                              */
    #define prmetkpDaluren_werkdag      1194 /* Einde klokperiode Daluren_werkdag                                                                                              */
    #define prmdckpDaluren_werkdag      1195 /* Dagsoort klokperiode Daluren_werkdag                                                                                           */
    #define prmstkpDaluren_weekend      1196 /* Start klokperiode Daluren_weekend                                                                                              */
    #define prmetkpDaluren_weekend      1197 /* Einde klokperiode Daluren_weekend                                                                                              */
    #define prmdckpDaluren_weekend      1198 /* Dagsoort klokperiode Daluren_weekend                                                                                           */
    #define prmstkpOerdag_werkdag       1199 /* Start klokperiode Oerdag_werkdag                                                                                               */
    #define prmetkpOerdag_werkdag       1200 /* Einde klokperiode Oerdag_werkdag                                                                                               */
    #define prmdckpOerdag_werkdag       1201 /* Dagsoort klokperiode Oerdag_werkdag                                                                                            */
    #define prmvg1_02                   1202 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1203 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1204 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1205 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1206 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1207 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1208 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1209 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1210 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1211 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1212 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1213 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1214 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1215 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1216 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1217 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1218 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1219 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1220 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1221 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1222 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1223 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1224 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1225 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1226 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1227 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1228 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1229 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1230 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1231 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1232 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1233 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1234 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1235 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1236 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1237 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1238 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1239 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1240 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1241 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1242 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1243 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1244 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1245 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1246 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1247 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1248 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1249 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1250 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1251 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1252 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1253 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1254 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1255 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1256 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1257 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1258 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1259 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1260 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1261 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1262 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1263 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1264 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1265 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1266 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1267 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1268 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1269 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1270 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1271 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1272 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1273 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1274 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1275 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1276 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1277 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1278 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1279 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1280 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1281 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1282 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1283 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1284 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1285 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1286 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1287 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1288 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1289 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1290 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1291 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1292 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1293 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1294 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1295 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1296 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1297 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1298 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1299 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1300 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1301 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1302 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1303 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1304 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1305 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1306 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1307 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1308 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1309 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1310 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1311 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1312 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1313 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1314 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1315 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1316 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1317 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1318 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1319 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1320 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1321 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1322 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1323 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1324 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1325 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1326 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1327 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1328 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1329 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1330 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1331 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1332 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1333 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1334 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1335 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1336 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1337 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1338 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1339 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1340 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1341 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1342 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1343 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1344 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1345 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1346 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1347 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1348 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1349 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1350 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1351 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1352 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1353 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1354 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1355 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1356 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1357 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1358 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1359 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1360 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1361 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1362 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1363 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1364 /* PTP error 2 ptp123456                                                                                                          */
    #define prmportnrptp123456          1365 /* Poortnummer in het regeltoestel PTP ptp123456                                                                                  */
    #define prmsrcptp123456             1366 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            1367 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           1368 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           1369 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           1370 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            1371 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmrisapproachid02          1372 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1373 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1374 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1375 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1376 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1377 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1378 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1379 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1380 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1381 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1382 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1383 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1384 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1385 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1386 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1387 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1388 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1389 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1390 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1391 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1392 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1393 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1394 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1395 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1396 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1397 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1398 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1399 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1400 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1401 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1402 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1403 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1404 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1405 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1406 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1407 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1408 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1409 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1410 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1411 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1412 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1413 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1414 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1415 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1416 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1417 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1418 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1419 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1420 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1421 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1422 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1423 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1424 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1425 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1426 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1427 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1428 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1429 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1430 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1431 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1432 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1433 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1434 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1435 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1436 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1437 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1438 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1439 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1440 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh1     1441 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart02mveh2         1442 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh2     1443 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart03mveh1         1444 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1445 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1446 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1447 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1448 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1449 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1450 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1451 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1452 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1453 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1454 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1455 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1456 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1457 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart22fts1          1458 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts1      1459 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart22fts2          1460 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts2      1461 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart24fts1          1462 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1463 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1464 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1465 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1466 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1467 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1468 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1469 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1470 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1471 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1472 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1473 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1474 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1475 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1476 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1477 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1478 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1479 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1480 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1481 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1482 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1483 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1484 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1485 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1486 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1487 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1488 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1489 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1490 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1491 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1492 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1493 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1494 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1495 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1496 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1497 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart68mveh2         1498 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1499 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart81fts1          1500 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1501 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart82fts1          1502 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1503 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart84fts1          1504 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1505 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend02mveh1           1506 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh1       1507 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend02mveh2           1508 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh2       1509 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend03mveh1           1510 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1511 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1512 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1513 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1514 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1515 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           1516 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       1517 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           1518 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       1519 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           1520 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       1521 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            1522 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        1523 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend22fts1            1524 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts1        1525 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend22fts2            1526 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts2        1527 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend24fts1            1528 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        1529 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            1530 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        1531 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            1532 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        1533 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            1534 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        1535 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            1536 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        1537 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            1538 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        1539 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            1540 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        1541 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            1542 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        1543 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            1544 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        1545 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            1546 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        1547 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            1548 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        1549 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            1550 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        1551 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            1552 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        1553 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           1554 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       1555 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           1556 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       1557 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           1558 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       1559 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           1560 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       1561 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           1562 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       1563 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend68mveh2           1564 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       1565 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend81fts1            1566 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        1567 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend82fts1            1568 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        1569 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend84fts1            1570 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        1571 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisvstart02mveh1         1572 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh1     1573 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart02mveh2         1574 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh2     1575 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart03mveh1         1576 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     1577 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         1578 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     1579 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         1580 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     1581 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         1582 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     1583 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         1584 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     1585 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         1586 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     1587 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          1588 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      1589 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart22fts1          1590 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts1      1591 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart22fts2          1592 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts2      1593 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart24fts1          1594 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      1595 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          1596 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      1597 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          1598 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      1599 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          1600 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      1601 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          1602 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      1603 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          1604 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      1605 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          1606 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      1607 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          1608 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      1609 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          1610 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      1611 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          1612 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      1613 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          1614 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      1615 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          1616 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      1617 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          1618 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      1619 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         1620 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     1621 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         1622 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     1623 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         1624 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     1625 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         1626 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     1627 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         1628 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     1629 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart68mveh2         1630 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     1631 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart81fts1          1632 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      1633 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart82fts1          1634 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      1635 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart84fts1          1636 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      1637 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend02mveh1           1638 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh1       1639 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend02mveh2           1640 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh2       1641 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend03mveh1           1642 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       1643 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           1644 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       1645 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           1646 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       1647 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           1648 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       1649 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           1650 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       1651 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           1652 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       1653 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            1654 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        1655 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend22fts1            1656 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts1        1657 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend22fts2            1658 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts2        1659 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend24fts1            1660 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        1661 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            1662 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        1663 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            1664 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        1665 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            1666 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        1667 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            1668 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        1669 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            1670 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        1671 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            1672 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        1673 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            1674 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        1675 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            1676 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        1677 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            1678 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        1679 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            1680 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        1681 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            1682 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        1683 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            1684 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        1685 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           1686 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       1687 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           1688 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       1689 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           1690 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       1691 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           1692 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       1693 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           1694 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       1695 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend68mveh2           1696 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       1697 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend81fts1            1698 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        1699 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend82fts1            1700 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        1701 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend84fts1            1702 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        1703 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrispstart22fts1          1704 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          1705 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          1706 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            1707 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            1708 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            1709 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                1710 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1711 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1712 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1713 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1714 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1715 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1716 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1717 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1718 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1719 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1720 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1721 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1722 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1723 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1724 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1725 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1726 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1727 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1728 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1729 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1730 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1731 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc31             1732 /* Extra groen percentage tov. TFG voor senioreningreep op fase 31                                                                */
    #define prmsiexgrperc32             1733 /* Extra groen percentage tov. TFG voor senioreningreep op fase 32                                                                */
    #define prmsiexgrperc33             1734 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             1735 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               1736 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1737 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1738 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1739 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1740 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1741 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1742 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1743 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1744 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1745 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1746 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1747 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1748 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1749 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1750 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1751 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1752 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1753 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1754 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1755 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1756 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1757 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1758 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1759 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1760 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1761 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1762 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1763 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1764 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1765 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1766 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1767 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1768 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1769 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1770 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1771 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1772 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1773 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1774 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1775 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 1776 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   1777 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               1778 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   1779 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1780 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1781 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp2838                 1782 /* Minimale ruimte tbv alternatieve realisatie fasen 28, 38                                                                       */
    #define prmaltg31                   1783 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1784 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1785 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   1786 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 1787 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   1788 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 1789 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   1790 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltg61                   1791 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1792 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1793 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1794 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1795 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1796 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1797 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1798 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1799 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1800 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1801 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1802 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1803 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               1804 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmwg02                     1805 /* Type wachtstand groen fase 02 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg03                     1806 /* Type wachtstand groen fase 03 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg05                     1807 /* Type wachtstand groen fase 05 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg08                     1808 /* Type wachtstand groen fase 08 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg09                     1809 /* Type wachtstand groen fase 09 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg11                     1810 /* Type wachtstand groen fase 11 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg21                     1811 /* Type wachtstand groen fase 21 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg22                     1812 /* Type wachtstand groen fase 22 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg24                     1813 /* Type wachtstand groen fase 24 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg26                     1814 /* Type wachtstand groen fase 26 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg28                     1815 /* Type wachtstand groen fase 28 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg31                     1816 /* Type wachtstand groen fase 31 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg32                     1817 /* Type wachtstand groen fase 32 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg33                     1818 /* Type wachtstand groen fase 33 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg34                     1819 /* Type wachtstand groen fase 34 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg38                     1820 /* Type wachtstand groen fase 38 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg61                     1821 /* Type wachtstand groen fase 61 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg62                     1822 /* Type wachtstand groen fase 62 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg67                     1823 /* Type wachtstand groen fase 67 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg68                     1824 /* Type wachtstand groen fase 68 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg81                     1825 /* Type wachtstand groen fase 81 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg82                     1826 /* Type wachtstand groen fase 82 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmwg84                     1827 /* Type wachtstand groen fase 84 (1 = groen vasthouden, 2 = groen vasth. + aanvr)                                                 */
    #define prmminwtv                   1828 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              1829 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              1830 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmstarprogdef              1831 /* Default star programma                                                                                                         */
    #define prmstarprogDaluren_weekend  1832 /* Noodprogramma bij periode Daluren_weekend                                                                                      */
    #define prmstarprogDaluren_werkdag  1833 /* Noodprogramma bij periode Daluren_werkdag                                                                                      */
    #define prmstarprogOerdag_werkdag   1834 /* Noodprogramma bij periode Oerdag_werkdag                                                                                       */
    #define prmttxconfidence15          1835
    #define prmlatencyminendsg          1836
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1837 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1838 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1839 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1840
#else
    #define PRMMAX1                     1837
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
    #define prioFC84bus 32
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

