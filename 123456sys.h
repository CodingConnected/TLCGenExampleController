/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   12.1
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.8   23-09-2024   TLCGen      Release versie TLCGen
 *
 ************************************************************************************/

/* Applicatie informatie (voor V-Log) */
/* ---------------------------------- */
#define VLOG_PRODNAME_CODE "TLCGen"
#define VLOG_PRODVERSION_MAJOR 12
#define VLOG_PRODVERSION_MINOR 4
#define VLOG_PRODVERSION_PATCH 0
#define VLOG_APPLVERSION_CODE "CCOL 12.1.0"
#define VLOG_APPLTYPE_CODE "Modulesturing"
#define SYSTEM "123456"
#define VERSION "12.4.0.8 20240923"
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
    #define usmaster           (FCMAX +  25) /* Master bepaalt aansturing                                                   */
    #define usslave            (FCMAX +  26) /* Slave bepaalt aansturing                                                    */
    #define usin654321leven    (FCMAX +  27) /* levenssignaal 654321 in                                                     */
    #define usin654321kpuls    (FCMAX +  28) /* koppelpuls 654321 in                                                        */
    #define usin654321pervar   (FCMAX +  29) /* Periode VA regelen 654321 in                                                */
    #define usin654321perarh   (FCMAX +  30) /* Periode alternatieven voor hoofdrichtingen 654321 in                        */
    #define usin654321PL1      (FCMAX +  31) /* Plan PL1 actief 654321 in                                                   */
    #define usin654321PL2      (FCMAX +  32) /* Plan PL2 actief 654321 in                                                   */
    #define usin654321PL3      (FCMAX +  33) /* Plan PL3 actief 654321 in                                                   */
    #define usuit654321leven   (FCMAX +  34) /* levenssignaal 654321 uit                                                    */
    #define usuit654321syncok  (FCMAX +  35) /* synchroon 654321 uit                                                        */
    #define usuit654321txsok   (FCMAX +  36) /* txs ok 654321 uit                                                           */
    #define usovtevroeg03bus   (FCMAX +  37) /* Voorste OV voertuig bij 03 te vroeg Bus                                     */
    #define usovoptijd03bus    (FCMAX +  38) /* Voorste OV voertuig bij 03 op tijd Bus                                      */
    #define usovtelaat03bus    (FCMAX +  39) /* Voorste OV voertuig bij 03 te laat Bus                                      */
    #define usovtevroeg05bus   (FCMAX +  40) /* Voorste OV voertuig bij 05 te vroeg Bus                                     */
    #define usovoptijd05bus    (FCMAX +  41) /* Voorste OV voertuig bij 05 op tijd Bus                                      */
    #define usovtelaat05bus    (FCMAX +  42) /* Voorste OV voertuig bij 05 te laat Bus                                      */
    #define usovtevroeg08bus   (FCMAX +  43) /* Voorste OV voertuig bij 08 te vroeg Bus                                     */
    #define usovoptijd08bus    (FCMAX +  44) /* Voorste OV voertuig bij 08 op tijd Bus                                      */
    #define usovtelaat08bus    (FCMAX +  45) /* Voorste OV voertuig bij 08 te laat Bus                                      */
    #define usovtevroeg09bus   (FCMAX +  46) /* Voorste OV voertuig bij 09 te vroeg Bus                                     */
    #define usovoptijd09bus    (FCMAX +  47) /* Voorste OV voertuig bij 09 op tijd Bus                                      */
    #define usovtelaat09bus    (FCMAX +  48) /* Voorste OV voertuig bij 09 te laat Bus                                      */
    #define usovtevroeg11bus   (FCMAX +  49) /* Voorste OV voertuig bij 11 te vroeg Bus                                     */
    #define usovoptijd11bus    (FCMAX +  50) /* Voorste OV voertuig bij 11 op tijd Bus                                      */
    #define usovtelaat11bus    (FCMAX +  51) /* Voorste OV voertuig bij 11 te laat Bus                                      */
    #define usovtevroeg61bus   (FCMAX +  52) /* Voorste OV voertuig bij 61 te vroeg Bus                                     */
    #define usovoptijd61bus    (FCMAX +  53) /* Voorste OV voertuig bij 61 op tijd Bus                                      */
    #define usovtelaat61bus    (FCMAX +  54) /* Voorste OV voertuig bij 61 te laat Bus                                      */
    #define usovtevroeg62bus   (FCMAX +  55) /* Voorste OV voertuig bij 62 te vroeg Bus                                     */
    #define usovoptijd62bus    (FCMAX +  56) /* Voorste OV voertuig bij 62 op tijd Bus                                      */
    #define usovtelaat62bus    (FCMAX +  57) /* Voorste OV voertuig bij 62 te laat Bus                                      */
    #define usovtevroeg67bus   (FCMAX +  58) /* Voorste OV voertuig bij 67 te vroeg Bus                                     */
    #define usovoptijd67bus    (FCMAX +  59) /* Voorste OV voertuig bij 67 op tijd Bus                                      */
    #define usovtelaat67bus    (FCMAX +  60) /* Voorste OV voertuig bij 67 te laat Bus                                      */
    #define usovtevroeg68bus   (FCMAX +  61) /* Voorste OV voertuig bij 68 te vroeg Bus                                     */
    #define usovoptijd68bus    (FCMAX +  62) /* Voorste OV voertuig bij 68 op tijd Bus                                      */
    #define usovtelaat68bus    (FCMAX +  63) /* Voorste OV voertuig bij 68 te laat Bus                                      */
    #define usmaxwt            (FCMAX +  64) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding       (FCMAX +  65) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog            (FCMAX +  66) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02karbus    (FCMAX +  67) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risov     (FCMAX +  68) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm02risvrw    (FCMAX +  69) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm03bus       (FCMAX +  70) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risov     (FCMAX +  71) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm03risvrw    (FCMAX +  72) /* Verklikken inmelding OV fase 03                                             */
    #define usovinm05bus       (FCMAX +  73) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risov     (FCMAX +  74) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm05risvrw    (FCMAX +  75) /* Verklikken inmelding OV fase 05                                             */
    #define usovinm08bus       (FCMAX +  76) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risov     (FCMAX +  77) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm08risvrw    (FCMAX +  78) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm09bus       (FCMAX +  79) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risov     (FCMAX +  80) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm09risvrw    (FCMAX +  81) /* Verklikken inmelding OV fase 09                                             */
    #define usovinm11bus       (FCMAX +  82) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risov     (FCMAX +  83) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm11risvrw    (FCMAX +  84) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22fiets     (FCMAX +  85) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm28fiets     (FCMAX +  86) /* Verklikken inmelding OV fase 28                                             */
    #define usovinm61bus       (FCMAX +  87) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risov     (FCMAX +  88) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm61risvrw    (FCMAX +  89) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm62bus       (FCMAX +  90) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risov     (FCMAX +  91) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm62risvrw    (FCMAX +  92) /* Verklikken inmelding OV fase 62                                             */
    #define usovinm67bus       (FCMAX +  93) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risov     (FCMAX +  94) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm67risvrw    (FCMAX +  95) /* Verklikken inmelding OV fase 67                                             */
    #define usovinm68bus       (FCMAX +  96) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risov     (FCMAX +  97) /* Verklikken inmelding OV fase 68                                             */
    #define usovinm68risvrw    (FCMAX +  98) /* Verklikken inmelding OV fase 68                                             */
    #define ushdinm02          (FCMAX +  99) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03          (FCMAX + 100) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05          (FCMAX + 101) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08          (FCMAX + 102) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09          (FCMAX + 103) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11          (FCMAX + 104) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61          (FCMAX + 105) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62          (FCMAX + 106) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67          (FCMAX + 107) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68          (FCMAX + 108) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02       (FCMAX + 109) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usperdef           (FCMAX + 110) /* Default periode actief                                                      */
    #define usper1             (FCMAX + 111) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1   (FCMAX + 112) /* Periode actief                                                              */
    #define usperoFietsprio2   (FCMAX + 113) /* Periode actief                                                              */
    #define usperoFietsprio3   (FCMAX + 114) /* Periode actief                                                              */
    #define usper2             (FCMAX + 115) /* Periode Dag periode actief                                                  */
    #define usper3             (FCMAX + 116) /* Periode Ochtendspits actief                                                 */
    #define usper4             (FCMAX + 117) /* Periode Avondspits actief                                                   */
    #define usper5             (FCMAX + 118) /* Periode Koopavond actief                                                    */
    #define usper6             (FCMAX + 119) /* Periode Weekend actief                                                      */
    #define usper7             (FCMAX + 120) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke (FCMAX + 121) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err (FCMAX + 122) /* Verklikken PTP error ptp123456                                              */
    #define usrgv              (FCMAX + 123) /* Verklikken actief zijn RoBuGrover                                           */
    #define uswtv24            (FCMAX + 124) /* Verklikken aansturing wachttijdvoorspeller fase 24                          */
    #define uswtk21            (FCMAX + 125) /* Aansturing waitsignaal detector k21                                         */
    #define uswtk22            (FCMAX + 126) /* Aansturing waitsignaal detector k22                                         */
    #define uswtk24            (FCMAX + 127) /* Aansturing waitsignaal detector k24                                         */
    #define uswtk26            (FCMAX + 128) /* Aansturing waitsignaal detector k26                                         */
    #define uswtk28            (FCMAX + 129) /* Aansturing waitsignaal detector k28                                         */
    #define uswtk31a           (FCMAX + 130) /* Aansturing waitsignaal detector k31a                                        */
    #define uswtk31b           (FCMAX + 131) /* Aansturing waitsignaal detector k31b                                        */
    #define uswtk32a           (FCMAX + 132) /* Aansturing waitsignaal detector k32a                                        */
    #define uswtk32b           (FCMAX + 133) /* Aansturing waitsignaal detector k32b                                        */
    #define uswtk33a           (FCMAX + 134) /* Aansturing waitsignaal detector k33a                                        */
    #define uswtk33b           (FCMAX + 135) /* Aansturing waitsignaal detector k33b                                        */
    #define uswtk34a           (FCMAX + 136) /* Aansturing waitsignaal detector k34a                                        */
    #define uswtk34b           (FCMAX + 137) /* Aansturing waitsignaal detector k34b                                        */
    #define uswtk38a           (FCMAX + 138) /* Aansturing waitsignaal detector k38a                                        */
    #define uswtk38b           (FCMAX + 139) /* Aansturing waitsignaal detector k38b                                        */
    #define uswtk81            (FCMAX + 140) /* Aansturing waitsignaal detector k81                                         */
    #define uswtk82            (FCMAX + 141) /* Aansturing waitsignaal detector k82                                         */
    #define uswtk84            (FCMAX + 142) /* Aansturing waitsignaal detector k84                                         */
    #define USMAX1             (FCMAX + 143)

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
    #define hwtv24                  366 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hinl32                  367 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32                  368 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31                  369 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31                  370 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34                  371 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34                  372 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33                  373 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33                  374 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62                  375 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68                  376 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21                  377 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81                  378 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1                  379

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
    #define mstp03bus               17 /* Stiptheid voorste OV voertuig bij 03 Bus                                */
    #define mstp05bus               18 /* Stiptheid voorste OV voertuig bij 05 Bus                                */
    #define mstp08bus               19 /* Stiptheid voorste OV voertuig bij 08 Bus                                */
    #define mstp09bus               20 /* Stiptheid voorste OV voertuig bij 09 Bus                                */
    #define mstp11bus               21 /* Stiptheid voorste OV voertuig bij 11 Bus                                */
    #define mstp61bus               22 /* Stiptheid voorste OV voertuig bij 61 Bus                                */
    #define mstp62bus               23 /* Stiptheid voorste OV voertuig bij 62 Bus                                */
    #define mstp67bus               24 /* Stiptheid voorste OV voertuig bij 67 Bus                                */
    #define mstp68bus               25 /* Stiptheid voorste OV voertuig bij 68 Bus                                */
    #define mftstelris22fietsfiets  26 /* Tellen fietsers obv. RIS voor prio ingreep 22fiets                      */
    #define mftstelris28fietsfiets  27 /* Tellen fietsers obv. RIS voor prio ingreep 28fiets                      */
    #define mpelvtgKOP02            28 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    #define mpelinKOP02             29 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    #define mwtv24                  30 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24              */
    #define mwtvm24                 31 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24             */
    #define mrealtijd02             32 /* Realisatie tijd fase 02                                                 */
    #define mrealtijd03             33 /* Realisatie tijd fase 03                                                 */
    #define mrealtijd05             34 /* Realisatie tijd fase 05                                                 */
    #define mrealtijd08             35 /* Realisatie tijd fase 08                                                 */
    #define mrealtijd09             36 /* Realisatie tijd fase 09                                                 */
    #define mrealtijd11             37 /* Realisatie tijd fase 11                                                 */
    #define mrealtijd21             38 /* Realisatie tijd fase 21                                                 */
    #define mrealtijd22             39 /* Realisatie tijd fase 22                                                 */
    #define mrealtijd24             40 /* Realisatie tijd fase 24                                                 */
    #define mrealtijd26             41 /* Realisatie tijd fase 26                                                 */
    #define mrealtijd28             42 /* Realisatie tijd fase 28                                                 */
    #define mrealtijd31             43 /* Realisatie tijd fase 31                                                 */
    #define mrealtijd32             44 /* Realisatie tijd fase 32                                                 */
    #define mrealtijd33             45 /* Realisatie tijd fase 33                                                 */
    #define mrealtijd34             46 /* Realisatie tijd fase 34                                                 */
    #define mrealtijd38             47 /* Realisatie tijd fase 38                                                 */
    #define mrealtijd61             48 /* Realisatie tijd fase 61                                                 */
    #define mrealtijd62             49 /* Realisatie tijd fase 62                                                 */
    #define mrealtijd67             50 /* Realisatie tijd fase 67                                                 */
    #define mrealtijd68             51 /* Realisatie tijd fase 68                                                 */
    #define mrealtijd81             52 /* Realisatie tijd fase 81                                                 */
    #define mrealtijd82             53 /* Realisatie tijd fase 82                                                 */
    #define mrealtijd84             54 /* Realisatie tijd fase 84                                                 */
    #define mrealtijdmin02          55 /* Realisatie minimum tijd fase 02                                         */
    #define mrealtijdmin03          56 /* Realisatie minimum tijd fase 03                                         */
    #define mrealtijdmin05          57 /* Realisatie minimum tijd fase 05                                         */
    #define mrealtijdmin08          58 /* Realisatie minimum tijd fase 08                                         */
    #define mrealtijdmin09          59 /* Realisatie minimum tijd fase 09                                         */
    #define mrealtijdmin11          60 /* Realisatie minimum tijd fase 11                                         */
    #define mrealtijdmin21          61 /* Realisatie minimum tijd fase 21                                         */
    #define mrealtijdmin22          62 /* Realisatie minimum tijd fase 22                                         */
    #define mrealtijdmin24          63 /* Realisatie minimum tijd fase 24                                         */
    #define mrealtijdmin26          64 /* Realisatie minimum tijd fase 26                                         */
    #define mrealtijdmin28          65 /* Realisatie minimum tijd fase 28                                         */
    #define mrealtijdmin31          66 /* Realisatie minimum tijd fase 31                                         */
    #define mrealtijdmin32          67 /* Realisatie minimum tijd fase 32                                         */
    #define mrealtijdmin33          68 /* Realisatie minimum tijd fase 33                                         */
    #define mrealtijdmin34          69 /* Realisatie minimum tijd fase 34                                         */
    #define mrealtijdmin38          70 /* Realisatie minimum tijd fase 38                                         */
    #define mrealtijdmin61          71 /* Realisatie minimum tijd fase 61                                         */
    #define mrealtijdmin62          72 /* Realisatie minimum tijd fase 62                                         */
    #define mrealtijdmin67          73 /* Realisatie minimum tijd fase 67                                         */
    #define mrealtijdmin68          74 /* Realisatie minimum tijd fase 68                                         */
    #define mrealtijdmin81          75 /* Realisatie minimum tijd fase 81                                         */
    #define mrealtijdmin82          76 /* Realisatie minimum tijd fase 82                                         */
    #define mrealtijdmin84          77 /* Realisatie minimum tijd fase 84                                         */
    #define mrealtijdmax02          78 /* Realisatie maximum tijd fase 02                                         */
    #define mrealtijdmax03          79 /* Realisatie maximum tijd fase 03                                         */
    #define mrealtijdmax05          80 /* Realisatie maximum tijd fase 05                                         */
    #define mrealtijdmax08          81 /* Realisatie maximum tijd fase 08                                         */
    #define mrealtijdmax09          82 /* Realisatie maximum tijd fase 09                                         */
    #define mrealtijdmax11          83 /* Realisatie maximum tijd fase 11                                         */
    #define mrealtijdmax21          84 /* Realisatie maximum tijd fase 21                                         */
    #define mrealtijdmax22          85 /* Realisatie maximum tijd fase 22                                         */
    #define mrealtijdmax24          86 /* Realisatie maximum tijd fase 24                                         */
    #define mrealtijdmax26          87 /* Realisatie maximum tijd fase 26                                         */
    #define mrealtijdmax28          88 /* Realisatie maximum tijd fase 28                                         */
    #define mrealtijdmax31          89 /* Realisatie maximum tijd fase 31                                         */
    #define mrealtijdmax32          90 /* Realisatie maximum tijd fase 32                                         */
    #define mrealtijdmax33          91 /* Realisatie maximum tijd fase 33                                         */
    #define mrealtijdmax34          92 /* Realisatie maximum tijd fase 34                                         */
    #define mrealtijdmax38          93 /* Realisatie maximum tijd fase 38                                         */
    #define mrealtijdmax61          94 /* Realisatie maximum tijd fase 61                                         */
    #define mrealtijdmax62          95 /* Realisatie maximum tijd fase 62                                         */
    #define mrealtijdmax67          96 /* Realisatie maximum tijd fase 67                                         */
    #define mrealtijdmax68          97 /* Realisatie maximum tijd fase 68                                         */
    #define mrealtijdmax81          98 /* Realisatie maximum tijd fase 81                                         */
    #define mrealtijdmax82          99 /* Realisatie maximum tijd fase 82                                         */
    #define mrealtijdmax84         100 /* Realisatie maximum tijd fase 84                                         */
    #define mar02                  101 /* Alternatieve ruimte fase 02                                             */
    #define mar03                  102 /* Alternatieve ruimte fase 03                                             */
    #define mar05                  103 /* Alternatieve ruimte fase 05                                             */
    #define mar08                  104 /* Alternatieve ruimte fase 08                                             */
    #define mar09                  105 /* Alternatieve ruimte fase 09                                             */
    #define mar11                  106 /* Alternatieve ruimte fase 11                                             */
    #define mar21                  107 /* Alternatieve ruimte fase 21                                             */
    #define mar22                  108 /* Alternatieve ruimte fase 22                                             */
    #define mar24                  109 /* Alternatieve ruimte fase 24                                             */
    #define mar26                  110 /* Alternatieve ruimte fase 26                                             */
    #define mar28                  111 /* Alternatieve ruimte fase 28                                             */
    #define mar31                  112 /* Alternatieve ruimte fase 31                                             */
    #define mar32                  113 /* Alternatieve ruimte fase 32                                             */
    #define mar33                  114 /* Alternatieve ruimte fase 33                                             */
    #define mar34                  115 /* Alternatieve ruimte fase 34                                             */
    #define mar38                  116 /* Alternatieve ruimte fase 38                                             */
    #define mar61                  117 /* Alternatieve ruimte fase 61                                             */
    #define mar62                  118 /* Alternatieve ruimte fase 62                                             */
    #define mar67                  119 /* Alternatieve ruimte fase 67                                             */
    #define mar68                  120 /* Alternatieve ruimte fase 68                                             */
    #define mar81                  121 /* Alternatieve ruimte fase 81                                             */
    #define mar82                  122 /* Alternatieve ruimte fase 82                                             */
    #define mar84                  123 /* Alternatieve ruimte fase 84                                             */
    #define mwijzpb                124 /* Wijziging aan PB doorgeven                                              */
    #define mfci                   125 /* Index fc met gewijzigde TVG_max[]                                       */
    #define MEMAX1                 126

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
    #define tnlsg3132                  169 /* Naloop op start groen van 31 naar 32                                                     */
    #define tnlsgd3132                 170 /* Detectieafhankelijke naloop op start groen van 31 naar 32                                */
    #define tnlsg3231                  171 /* Naloop op start groen van 32 naar 31                                                     */
    #define tnlsgd3231                 172 /* Detectieafhankelijke naloop op start groen van 32 naar 31                                */
    #define tnlsgd3334                 173 /* Detectieafhankelijke naloop op start groen van 33 naar 34                                */
    #define tnlsgd3433                 174 /* Detectieafhankelijke naloop op start groen van 34 naar 33                                */
    #define tnlfg8281                  175 /* Naloop tijdens vastgroen van 82 naar 81                                                  */
    #define tnlfgd8281                 176 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                             */
    #define tnleg8281                  177 /* Naloop op einde groen van 82 naar 81                                                     */
    #define tnlegd8281                 178 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                                */
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
    #define tprioin02risov             189 /* Anti jutter tijd inmelden 02 Bus                                                         */
    #define tpriouit02risov            190 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risov              191 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risov                 192 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risov                 193 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risov                194 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tprioin02risvrw            195 /* Anti jutter tijd inmelden 02 Vrachtwagen                                                 */
    #define tpriouit02risvrw           196 /* Anti jutter tijd uitmelden 02                                                            */
    #define tbtovg02risvrw             197 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define trt02risvrw                198 /* Actuele rijtijd prio fase 02                                                             */
    #define tgb02risvrw                199 /* Groenbewaking prioriteit fase 02                                                         */
    #define tblk02risvrw               200 /* Blokkeertijd na prioriteitsingreep fase 02                                               */
    #define tbtovg03bus                201 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03bus                   202 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03bus                   203 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03bus                  204 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risovris          205 /* Anti jutter tijd inmelden 03 Bus                                                         */
    #define tpriouit03risov            206 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risov              207 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risov                 208 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risov                 209 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risov                210 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tprioin03risvrwris         211 /* Anti jutter tijd inmelden 03 Vrachtwagen                                                 */
    #define tpriouit03risvrw           212 /* Anti jutter tijd uitmelden 03                                                            */
    #define tbtovg03risvrw             213 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define trt03risvrw                214 /* Actuele rijtijd prio fase 03                                                             */
    #define tgb03risvrw                215 /* Groenbewaking prioriteit fase 03                                                         */
    #define tblk03risvrw               216 /* Blokkeertijd na prioriteitsingreep fase 03                                               */
    #define tbtovg05bus                217 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05bus                   218 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05bus                   219 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05bus                  220 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risovris          221 /* Anti jutter tijd inmelden 05 Bus                                                         */
    #define tpriouit05risov            222 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risov              223 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risov                 224 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risov                 225 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risov                226 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tprioin05risvrwris         227 /* Anti jutter tijd inmelden 05 Vrachtwagen                                                 */
    #define tpriouit05risvrw           228 /* Anti jutter tijd uitmelden 05                                                            */
    #define tbtovg05risvrw             229 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define trt05risvrw                230 /* Actuele rijtijd prio fase 05                                                             */
    #define tgb05risvrw                231 /* Groenbewaking prioriteit fase 05                                                         */
    #define tblk05risvrw               232 /* Blokkeertijd na prioriteitsingreep fase 05                                               */
    #define tbtovg08bus                233 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08bus                   234 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08bus                   235 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08bus                  236 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risovris          237 /* Anti jutter tijd inmelden 08 Bus                                                         */
    #define tpriouit08risov            238 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risov              239 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risov                 240 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risov                 241 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risov                242 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tprioin08risvrwris         243 /* Anti jutter tijd inmelden 08 Vrachtwagen                                                 */
    #define tpriouit08risvrw           244 /* Anti jutter tijd uitmelden 08                                                            */
    #define tbtovg08risvrw             245 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define trt08risvrw                246 /* Actuele rijtijd prio fase 08                                                             */
    #define tgb08risvrw                247 /* Groenbewaking prioriteit fase 08                                                         */
    #define tblk08risvrw               248 /* Blokkeertijd na prioriteitsingreep fase 08                                               */
    #define tbtovg09bus                249 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09bus                   250 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09bus                   251 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09bus                  252 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risovris          253 /* Anti jutter tijd inmelden 09 Bus                                                         */
    #define tpriouit09risov            254 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risov              255 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risov                 256 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risov                 257 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risov                258 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tprioin09risvrwris         259 /* Anti jutter tijd inmelden 09 Vrachtwagen                                                 */
    #define tpriouit09risvrw           260 /* Anti jutter tijd uitmelden 09                                                            */
    #define tbtovg09risvrw             261 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define trt09risvrw                262 /* Actuele rijtijd prio fase 09                                                             */
    #define tgb09risvrw                263 /* Groenbewaking prioriteit fase 09                                                         */
    #define tblk09risvrw               264 /* Blokkeertijd na prioriteitsingreep fase 09                                               */
    #define tbtovg11bus                265 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11bus                   266 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11bus                   267 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11bus                  268 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risovris          269 /* Anti jutter tijd inmelden 11 Bus                                                         */
    #define tpriouit11risov            270 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risov              271 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risov                 272 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risov                 273 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risov                274 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tprioin11risvrwris         275 /* Anti jutter tijd inmelden 11 Vrachtwagen                                                 */
    #define tpriouit11risvrw           276 /* Anti jutter tijd uitmelden 11                                                            */
    #define tbtovg11risvrw             277 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define trt11risvrw                278 /* Actuele rijtijd prio fase 11                                                             */
    #define tgb11risvrw                279 /* Groenbewaking prioriteit fase 11                                                         */
    #define tblk11risvrw               280 /* Blokkeertijd na prioriteitsingreep fase 11                                               */
    #define tpriouit22fiets            281 /* Anti jutter tijd uitmelden 22                                                            */
    #define tbtovg22fiets              282 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                    */
    #define trt22fiets                 283 /* Actuele rijtijd prio fase 22                                                             */
    #define tgb22fiets                 284 /* Groenbewaking prioriteit fase 22                                                         */
    #define tblk22fiets                285 /* Blokkeertijd na prioriteitsingreep fase 22                                               */
    #define tprioin28fietsfiets28_2    286 /* Anti jutter tijd inmelden 28 Fiets                                                       */
    #define tpriouit28fiets            287 /* Anti jutter tijd uitmelden 28                                                            */
    #define tbtovg28fiets              288 /* Timer bezettijd prioriteit gehinderde rijtijd fase 28                                    */
    #define trt28fiets                 289 /* Actuele rijtijd prio fase 28                                                             */
    #define tgb28fiets                 290 /* Groenbewaking prioriteit fase 28                                                         */
    #define tblk28fiets                291 /* Blokkeertijd na prioriteitsingreep fase 28                                               */
    #define tbtovg61bus                292 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61bus                   293 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61bus                   294 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61bus                  295 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risovris          296 /* Anti jutter tijd inmelden 61 Bus                                                         */
    #define tpriouit61risov            297 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risov              298 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risov                 299 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risov                 300 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risov                301 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tprioin61risvrwris         302 /* Anti jutter tijd inmelden 61 Vrachtwagen                                                 */
    #define tpriouit61risvrw           303 /* Anti jutter tijd uitmelden 61                                                            */
    #define tbtovg61risvrw             304 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define trt61risvrw                305 /* Actuele rijtijd prio fase 61                                                             */
    #define tgb61risvrw                306 /* Groenbewaking prioriteit fase 61                                                         */
    #define tblk61risvrw               307 /* Blokkeertijd na prioriteitsingreep fase 61                                               */
    #define tbtovg62bus                308 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62bus                   309 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62bus                   310 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62bus                  311 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risovris          312 /* Anti jutter tijd inmelden 62 Bus                                                         */
    #define tpriouit62risov            313 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risov              314 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risov                 315 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risov                 316 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risov                317 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tprioin62risvrwris         318 /* Anti jutter tijd inmelden 62 Vrachtwagen                                                 */
    #define tpriouit62risvrw           319 /* Anti jutter tijd uitmelden 62                                                            */
    #define tbtovg62risvrw             320 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define trt62risvrw                321 /* Actuele rijtijd prio fase 62                                                             */
    #define tgb62risvrw                322 /* Groenbewaking prioriteit fase 62                                                         */
    #define tblk62risvrw               323 /* Blokkeertijd na prioriteitsingreep fase 62                                               */
    #define tbtovg67bus                324 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67bus                   325 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67bus                   326 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67bus                  327 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risovris          328 /* Anti jutter tijd inmelden 67 Bus                                                         */
    #define tpriouit67risov            329 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risov              330 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risov                 331 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risov                 332 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risov                333 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin67risvrwris         334 /* Anti jutter tijd inmelden 67 Vrachtwagen                                                 */
    #define tpriouit67risvrw           335 /* Anti jutter tijd uitmelden 67                                                            */
    #define tbtovg67risvrw             336 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define trt67risvrw                337 /* Actuele rijtijd prio fase 67                                                             */
    #define tgb67risvrw                338 /* Groenbewaking prioriteit fase 67                                                         */
    #define tblk67risvrw               339 /* Blokkeertijd na prioriteitsingreep fase 67                                               */
    #define tprioin68buskar            340 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tbtovg68bus                341 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68bus                   342 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68bus                   343 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68bus                  344 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risovris          345 /* Anti jutter tijd inmelden 68 Bus                                                         */
    #define tpriouit68risov            346 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risov              347 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risov                 348 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risov                 349 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risov                350 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tprioin68risvrwris         351 /* Anti jutter tijd inmelden 68 Vrachtwagen                                                 */
    #define tpriouit68risvrw           352 /* Anti jutter tijd uitmelden 68                                                            */
    #define tbtovg68risvrw             353 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define trt68risvrw                354 /* Actuele rijtijd prio fase 68                                                             */
    #define tgb68risvrw                355 /* Groenbewaking prioriteit fase 68                                                         */
    #define tblk68risvrw               356 /* Blokkeertijd na prioriteitsingreep fase 68                                               */
    #define tgbhd02                    357 /* Groenbewaking HD fase 02                                                                 */
    #define trthd02                    358 /* Actuele rijtijd HD fase 02                                                               */
    #define tbtovg02hd                 359 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                    */
    #define thdin02kar                 360 /* Anti jutter tijd inmelden HD 02 KAR                                                      */
    #define thduit02kar                361 /* Anti jutter tijd uitmelden HD 02                                                         */
    #define tgbhd03                    362 /* Groenbewaking HD fase 03                                                                 */
    #define trthd03                    363 /* Actuele rijtijd HD fase 03                                                               */
    #define tbtovg03hd                 364 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                    */
    #define thdin03kar                 365 /* Anti jutter tijd inmelden HD 03 KAR                                                      */
    #define thduit03kar                366 /* Anti jutter tijd uitmelden HD 03                                                         */
    #define tgbhd05                    367 /* Groenbewaking HD fase 05                                                                 */
    #define trthd05                    368 /* Actuele rijtijd HD fase 05                                                               */
    #define tbtovg05hd                 369 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                    */
    #define thdin05kar                 370 /* Anti jutter tijd inmelden HD 05 KAR                                                      */
    #define thduit05kar                371 /* Anti jutter tijd uitmelden HD 05                                                         */
    #define tgbhd08                    372 /* Groenbewaking HD fase 08                                                                 */
    #define trthd08                    373 /* Actuele rijtijd HD fase 08                                                               */
    #define tbtovg08hd                 374 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                    */
    #define thdin08kar                 375 /* Anti jutter tijd inmelden HD 08 KAR                                                      */
    #define thduit08kar                376 /* Anti jutter tijd uitmelden HD 08                                                         */
    #define tgbhd09                    377 /* Groenbewaking HD fase 09                                                                 */
    #define trthd09                    378 /* Actuele rijtijd HD fase 09                                                               */
    #define tbtovg09hd                 379 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                    */
    #define thdin09kar                 380 /* Anti jutter tijd inmelden HD 09 KAR                                                      */
    #define thduit09kar                381 /* Anti jutter tijd uitmelden HD 09                                                         */
    #define tgbhd11                    382 /* Groenbewaking HD fase 11                                                                 */
    #define trthd11                    383 /* Actuele rijtijd HD fase 11                                                               */
    #define tbtovg11hd                 384 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                    */
    #define thdin11kar                 385 /* Anti jutter tijd inmelden HD 11 KAR                                                      */
    #define thduit11kar                386 /* Anti jutter tijd uitmelden HD 11                                                         */
    #define tgbhd61                    387 /* Groenbewaking HD fase 61                                                                 */
    #define trthd61                    388 /* Actuele rijtijd HD fase 61                                                               */
    #define tbtovg61hd                 389 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                    */
    #define thdin61kar                 390 /* Anti jutter tijd inmelden HD 61 KAR                                                      */
    #define thduit61kar                391 /* Anti jutter tijd uitmelden HD 61                                                         */
    #define tgbhd62                    392 /* Groenbewaking HD fase 62                                                                 */
    #define trthd62                    393 /* Actuele rijtijd HD fase 62                                                               */
    #define tbtovg62hd                 394 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                    */
    #define thdin62kar                 395 /* Anti jutter tijd inmelden HD 62 KAR                                                      */
    #define thduit62kar                396 /* Anti jutter tijd uitmelden HD 62                                                         */
    #define tgbhd67                    397 /* Groenbewaking HD fase 67                                                                 */
    #define trthd67                    398 /* Actuele rijtijd HD fase 67                                                               */
    #define tbtovg67hd                 399 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                    */
    #define thdin67kar                 400 /* Anti jutter tijd inmelden HD 67 KAR                                                      */
    #define thduit67kar                401 /* Anti jutter tijd uitmelden HD 67                                                         */
    #define tgbhd68                    402 /* Groenbewaking HD fase 68                                                                 */
    #define trthd68                    403 /* Actuele rijtijd HD fase 68                                                               */
    #define tbtovg68hd                 404 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                    */
    #define thdin68kar                 405 /* Anti jutter tijd inmelden HD 68 KAR                                                      */
    #define thduit68kar                406 /* Anti jutter tijd uitmelden HD 68                                                         */
    #define tris02risov                407
    #define tris02risvrw               408
    #define tris03risov                409
    #define tris03risvrw               410
    #define tris05risov                411
    #define tris05risvrw               412
    #define tris08risov                413
    #define tris08risvrw               414
    #define tris09risov                415
    #define tris09risvrw               416
    #define tris11risov                417
    #define tris11risvrw               418
    #define tris61risov                419
    #define tris61risvrw               420
    #define tris62risov                421
    #define tris62risvrw               422
    #define tris67risov                423
    #define tris67risvrw               424
    #define tris68risov                425
    #define tris68risvrw               426
    #define tpelmeetKOP02              427 /* Meetperiode peloton koppeling KOP02 fase KOP02                                           */
    #define tpelmaxhiaatKOP02          428 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                                */
    #define tpelrwKOP02                429 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                          */
    #define tpelrwmaxKOP02             430 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02   */
    #define tpelstartrwKOP02           431 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                   */
    #define tpelaKOP02                 432 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                          */
    #define trgad24_3                  433 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgavd24_3                 434 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                        */
    #define trgrd24_3_d24_2            435 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2                            */
    #define trgvd24_3_d24_2            436 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2                          */
    #define tfd02_1a                   437 /* File meting RoBuGrover fase 02 detector 02_1a                                            */
    #define tfd02_1b                   438 /* File meting RoBuGrover fase 02 detector 02_1b                                            */
    #define thd02_2a                   439 /* RoBuGrover hiaat meting fase 02 detector 02_2a                                           */
    #define thd02_2b                   440 /* RoBuGrover hiaat meting fase 02 detector 02_2b                                           */
    #define thd02_3a                   441 /* RoBuGrover hiaat meting fase 02 detector 02_3a                                           */
    #define thd02_3b                   442 /* RoBuGrover hiaat meting fase 02 detector 02_3b                                           */
    #define tfd03_1                    443 /* File meting RoBuGrover fase 03 detector 03_1                                             */
    #define thd03_2                    444 /* RoBuGrover hiaat meting fase 03 detector 03_2                                            */
    #define tfd05_1                    445 /* File meting RoBuGrover fase 05 detector 05_1                                             */
    #define thd05_2                    446 /* RoBuGrover hiaat meting fase 05 detector 05_2                                            */
    #define tfd08_1a                   447 /* File meting RoBuGrover fase 08 detector 08_1a                                            */
    #define tfd08_1b                   448 /* File meting RoBuGrover fase 08 detector 08_1b                                            */
    #define thd08_2a                   449 /* RoBuGrover hiaat meting fase 08 detector 08_2a                                           */
    #define thd08_2b                   450 /* RoBuGrover hiaat meting fase 08 detector 08_2b                                           */
    #define thd08_3a                   451 /* RoBuGrover hiaat meting fase 08 detector 08_3a                                           */
    #define thd08_3b                   452 /* RoBuGrover hiaat meting fase 08 detector 08_3b                                           */
    #define tfd11_1                    453 /* File meting RoBuGrover fase 11 detector 11_1                                             */
    #define thd11_2                    454 /* RoBuGrover hiaat meting fase 11 detector 11_2                                            */
    #define thd11_3                    455 /* RoBuGrover hiaat meting fase 11 detector 11_3                                            */
    #define tfd22_1                    456 /* File meting RoBuGrover fase 22 detector 22_1                                             */
    #define thd22_1                    457 /* RoBuGrover hiaat meting fase 22 detector 22_1                                            */
    #define tfd28_1                    458 /* File meting RoBuGrover fase 28 detector 28_1                                             */
    #define thd28_1                    459 /* RoBuGrover hiaat meting fase 28 detector 28_1                                            */
    #define tschoolingreepmaxg33       460 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                        */
    #define tdbsidk33a                 461 /* Bezettijd detector k33a t.b.v. schoolingreep                                             */
    #define tdbsidk33b                 462 /* Bezettijd detector k33b t.b.v. schoolingreep                                             */
    #define tschoolingreepmaxg34       463 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                        */
    #define tdbsidk34a                 464 /* Bezettijd detector k34a t.b.v. schoolingreep                                             */
    #define tdbsidk34b                 465 /* Bezettijd detector k34b t.b.v. schoolingreep                                             */
    #define tsiexgr33                  466 /* Meten duur extra groen bij senioreningreep op fase 33                                    */
    #define tdbsiexgrdk33a             467 /* Bezettijd detector k33a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk33b             468 /* Bezettijd detector k33b t.b.v. Senioreningreep                                           */
    #define tsiexgr34                  469 /* Meten duur extra groen bij senioreningreep op fase 34                                    */
    #define tdbsiexgrdk34a             470 /* Bezettijd detector k34a t.b.v. Senioreningreep                                           */
    #define tdbsiexgrdk34b             471 /* Bezettijd detector k34b t.b.v. Senioreningreep                                           */
    #define tvamax62                   472 /* Maximale tijd VA ontruimen na einde geel fase 62                                         */
    #define tva6209_d62_1a             473 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6211_d62_1a             474 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tva6226_d62_1a             475 /* Tijdsduur VA ontruimen van 62 naar                                                       */
    #define tuitgestca02               476 /* Uitgestelde cyclische aanvraag fase 02                                                   */
    #define tuitgestca03               477 /* Uitgestelde cyclische aanvraag fase 03                                                   */
    #define tuitgestca05               478 /* Uitgestelde cyclische aanvraag fase 05                                                   */
    #define tuitgestca08               479 /* Uitgestelde cyclische aanvraag fase 08                                                   */
    #define tuitgestca09               480 /* Uitgestelde cyclische aanvraag fase 09                                                   */
    #define tuitgestca11               481 /* Uitgestelde cyclische aanvraag fase 11                                                   */
    #define tuitgestca21               482 /* Uitgestelde cyclische aanvraag fase 21                                                   */
    #define tuitgestca22               483 /* Uitgestelde cyclische aanvraag fase 22                                                   */
    #define tuitgestca24               484 /* Uitgestelde cyclische aanvraag fase 24                                                   */
    #define tuitgestca26               485 /* Uitgestelde cyclische aanvraag fase 26                                                   */
    #define tuitgestca28               486 /* Uitgestelde cyclische aanvraag fase 28                                                   */
    #define tuitgestca31               487 /* Uitgestelde cyclische aanvraag fase 31                                                   */
    #define tuitgestca32               488 /* Uitgestelde cyclische aanvraag fase 32                                                   */
    #define tuitgestca33               489 /* Uitgestelde cyclische aanvraag fase 33                                                   */
    #define tuitgestca34               490 /* Uitgestelde cyclische aanvraag fase 34                                                   */
    #define tuitgestca38               491 /* Uitgestelde cyclische aanvraag fase 38                                                   */
    #define tuitgestca61               492 /* Uitgestelde cyclische aanvraag fase 61                                                   */
    #define tuitgestca62               493 /* Uitgestelde cyclische aanvraag fase 62                                                   */
    #define tuitgestca67               494 /* Uitgestelde cyclische aanvraag fase 67                                                   */
    #define tuitgestca68               495 /* Uitgestelde cyclische aanvraag fase 68                                                   */
    #define tuitgestca81               496 /* Uitgestelde cyclische aanvraag fase 81                                                   */
    #define tuitgestca82               497 /* Uitgestelde cyclische aanvraag fase 82                                                   */
    #define tuitgestca84               498 /* Uitgestelde cyclische aanvraag fase 84                                                   */
    #define tvgmax02                   499 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg02_4a               500 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4a van fase 02 */
    #define tvghiaat02_4a              501 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4a van fase 02                    */
    #define tvgvolg02_4b               502 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 02_4b van fase 02 */
    #define tvghiaat02_4b              503 /* Hiaattijd bij actief zijn veiligheidsgroen detector 02_4b van fase 02                    */
    #define tvgmax08                   504 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg08_4a               505 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4a van fase 08 */
    #define tvghiaat08_4a              506 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4a van fase 08                    */
    #define tvgvolg08_4b               507 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 08_4b van fase 08 */
    #define tvghiaat08_4b              508 /* Hiaattijd bij actief zijn veiligheidsgroen detector 08_4b van fase 08                    */
    #define tvgmax11                   509 /* Maximale tijdsduur veiligheidsgroen voor fase                                            */
    #define tvgvolg11_4                510 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 11_4 van fase 11  */
    #define tvghiaat11_4               511 /* Hiaattijd bij actief zijn veiligheidsgroen detector 11_4 van fase 11                     */
    #define twtv24                     512 /* T.b.v. aansturing wachttijdvoorspeller fase 24                                           */
    #define tvs2205                    513 /* Voorstarttijd fase 22 op fase 05                                                         */
    #define tvs3205                    514 /* Voorstarttijd fase 32 op fase 05                                                         */
    #define tlr2611                    515 /* Late release tijd fase 26 na fase 11                                                     */
    #define tlr6202                    516 /* Late release tijd fase 62 na fase 02                                                     */
    #define tlr6808                    517 /* Late release tijd fase 68 na fase 08                                                     */
    #define tlr6811                    518 /* Late release tijd fase 68 na fase 11                                                     */
    #define tlr2122                    519 /* Late release tijd fase 21 na fase 22                                                     */
    #define tlr8182                    520 /* Late release tijd fase 81 na fase 82                                                     */
    #define til3231                    521 /* Inloop tijd fase 32 naar fase 31                                                         */
    #define til3132                    522 /* Inloop tijd fase 31 naar fase 32                                                         */
    #define til3433                    523 /* Inloop tijd fase 34 naar fase 33                                                         */
    #define til3334                    524 /* Inloop tijd fase 33 naar fase 34                                                         */
    #define tfo0522                    525 /* Fictieve ontruimingstijd van 05 naar fase 22                                             */
    #define tfo0532                    526 /* Fictieve ontruimingstijd van 05 naar fase 32                                             */
    #define tfo1126                    527 /* Fictieve ontruimingstijd van 11 naar fase 26                                             */
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
    #define schaltghst2838             30 /* Alternatief realiseren fasen 28, 38 toestaan tijdens halfstar regelen     */
    #define schaltghst31               31 /* Alternatief realiseren fase 31 toestaan tijdens halfstar regelen          */
    #define schaltghst88               32 /* Alternatief realiseren fase 88 toestaan tijdens halfstar regelen          */
    #define schaltghst243384           33 /* Alternatief realiseren fasen 24, 33, 84 toestaan tijdens halfstar regelen */
    #define schaltghst82               34 /* Alternatief realiseren fase 82 toestaan tijdens halfstar regelen          */
    #define schaltghst81               35 /* Alternatief realiseren fase 81 toestaan tijdens halfstar regelen          */
    #define schaltghst68               36 /* Alternatief realiseren fase 68 toestaan tijdens halfstar regelen          */
    #define schaltghst67               37 /* Alternatief realiseren fase 67 toestaan tijdens halfstar regelen          */
    #define schaltghst62               38 /* Alternatief realiseren fase 62 toestaan tijdens halfstar regelen          */
    #define schaltghst61               39 /* Alternatief realiseren fase 61 toestaan tijdens halfstar regelen          */
    #define schaltghst2434             40 /* Alternatief realiseren fasen 24, 34 toestaan tijdens halfstar regelen     */
    #define schaltghst3384             41 /* Alternatief realiseren fasen 33, 84 toestaan tijdens halfstar regelen     */
    #define schtegenov02               42 /* Tegenhouden hoofdrichting 02 bij OV ingreep                               */
    #define schafkwgov02               43 /* Afkappen WG hoofdrichting 02 bij OV ingreep                               */
    #define schafkvgov02               44 /* Afkappen VG hoofdrichting 02 bij OV ingreep                               */
    #define schtegenov08               45 /* Tegenhouden hoofdrichting 08 bij OV ingreep                               */
    #define schafkwgov08               46 /* Afkappen WG hoofdrichting 08 bij OV ingreep                               */
    #define schafkvgov08               47 /* Afkappen VG hoofdrichting 08 bij OV ingreep                               */
    #define schinst                    48 /* Eenmalig instellen signaalplannen na wijziging                            */
    #define schslavebep                49 /* Slave bepaald PL aansturing                                               */
    #define schvaml                    50 /* Indien VA regelen, ML-bedrijf (1) of versneld PL-bedrijf (0)              */
    #define schvar                     51 /* VA regelen aan of uit                                                     */
    #define scharh                     52 /* Toestaan alternatieven voor hoofdrichtingen                               */
    #define schpervardef               53 /* VA regelen periode default                                                */
    #define schpervar1                 54 /* VA regelen periode nacht                                                  */
    #define schpervar2                 55 /* VA regelen periode dag                                                    */
    #define schpervar3                 56 /* VA regelen periode ochtend                                                */
    #define schpervar4                 57 /* VA regelen periode avond                                                  */
    #define schpervar5                 58 /* VA regelen periode koopavond                                              */
    #define schpervar6                 59 /* VA regelen periode weekend                                                */
    #define schpervar7                 60 /* VA regelen periode reserve                                                */
    #define schperarhdef               61 /* Alternatieven voor hoofdrichtingen periode default                        */
    #define schperarh1                 62 /* Alternatieven voor hoofdrichtingen periode nacht                          */
    #define schperarh2                 63 /* Alternatieven voor hoofdrichtingen periode dag                            */
    #define schperarh3                 64 /* Alternatieven voor hoofdrichtingen periode ochtend                        */
    #define schperarh4                 65 /* Alternatieven voor hoofdrichtingen periode avond                          */
    #define schperarh5                 66 /* Alternatieven voor hoofdrichtingen periode koopavond                      */
    #define schperarh6                 67 /* Alternatieven voor hoofdrichtingen periode weekend                        */
    #define schperarh7                 68 /* Alternatieven voor hoofdrichtingen periode reserve                        */
    #define schovpriople               69 /* Wel of niet toepassen prioriteit OV tijdens PL-bedrijf                    */
    #define schma0261                  70 /* Meeaanvraag van 02 naar 61 actief                                         */
    #define schma0262                  71 /* Meeaanvraag van 02 naar 62 actief                                         */
    #define schma0521                  72 /* Meeaanvraag van 05 naar 21 actief                                         */
    #define schma0522                  73 /* Meeaanvraag van 05 naar 22 actief                                         */
    #define schma0532                  74 /* Meeaanvraag van 05 naar 32 actief                                         */
    #define schma0868                  75 /* Meeaanvraag van 08 naar 68 actief                                         */
    #define schma1126                  76 /* Meeaanvraag van 11 naar 26 actief                                         */
    #define schma1168                  77 /* Meeaanvraag van 11 naar 68 actief                                         */
    #define schma2221                  78 /* Meeaanvraag van 22 naar 21 actief                                         */
    #define schma2611                  79 /* Meeaanvraag van 26 naar 11 actief                                         */
    #define schma3122                  80 /* Meeaanvraag van 31 naar 22 actief                                         */
    #define schma3132                  81 /* Meeaanvraag van 31 naar 32 actief                                         */
    #define schma3222                  82 /* Meeaanvraag van 32 naar 22 actief                                         */
    #define schma3231                  83 /* Meeaanvraag van 32 naar 31 actief                                         */
    #define schma3324                  84 /* Meeaanvraag van 33 naar 24 actief                                         */
    #define schma3334                  85 /* Meeaanvraag van 33 naar 34 actief                                         */
    #define schma3384                  86 /* Meeaanvraag van 33 naar 84 actief                                         */
    #define schma3424                  87 /* Meeaanvraag van 34 naar 24 actief                                         */
    #define schma3433                  88 /* Meeaanvraag van 34 naar 33 actief                                         */
    #define schma3484                  89 /* Meeaanvraag van 34 naar 84 actief                                         */
    #define schma8281                  90 /* Meeaanvraag van 82 naar 81 actief                                         */
    #define schmv02                    91 /* Meeverlengen fase 02                                                      */
    #define schmv03                    92 /* Meeverlengen fase 03                                                      */
    #define schmv05                    93 /* Meeverlengen fase 05                                                      */
    #define schmv08                    94 /* Meeverlengen fase 08                                                      */
    #define schmv09                    95 /* Meeverlengen fase 09                                                      */
    #define schmv11                    96 /* Meeverlengen fase 11                                                      */
    #define schmv21                    97 /* Meeverlengen fase 21                                                      */
    #define schmv22                    98 /* Meeverlengen fase 22                                                      */
    #define schhardmv2205              99 /* Hard meeverlengen fase 22 met fase 05                                     */
    #define schmv24                   100 /* Meeverlengen fase 24                                                      */
    #define schmv26                   101 /* Meeverlengen fase 26                                                      */
    #define schhardmv2611             102 /* Hard meeverlengen fase 26 met fase 11                                     */
    #define schmv28                   103 /* Meeverlengen fase 28                                                      */
    #define schmv31                   104 /* Meeverlengen fase 31                                                      */
    #define schmv32                   105 /* Meeverlengen fase 32                                                      */
    #define schhardmv3205             106 /* Hard meeverlengen fase 32 met fase 05                                     */
    #define schmv33                   107 /* Meeverlengen fase 33                                                      */
    #define schmv34                   108 /* Meeverlengen fase 34                                                      */
    #define schmv38                   109 /* Meeverlengen fase 38                                                      */
    #define schmv61                   110 /* Meeverlengen fase 61                                                      */
    #define schmv62                   111 /* Meeverlengen fase 62                                                      */
    #define schmv67                   112 /* Meeverlengen fase 67                                                      */
    #define schmv68                   113 /* Meeverlengen fase 68                                                      */
    #define schmv81                   114 /* Meeverlengen fase 81                                                      */
    #define schmv82                   115 /* Meeverlengen fase 82                                                      */
    #define schmv84                   116 /* Meeverlengen fase 84                                                      */
    #define schmlprm                  117 /* Toepassen parametriseerbare modulestructuur                               */
    #define schovstipt03bus           118 /* Geconditioneerde prioteit voor OV bij 03 Bus                              */
    #define schovstipt05bus           119 /* Geconditioneerde prioteit voor OV bij 05 Bus                              */
    #define schovstipt08bus           120 /* Geconditioneerde prioteit voor OV bij 08 Bus                              */
    #define schovstipt09bus           121 /* Geconditioneerde prioteit voor OV bij 09 Bus                              */
    #define schovstipt11bus           122 /* Geconditioneerde prioteit voor OV bij 11 Bus                              */
    #define schovstipt61bus           123 /* Geconditioneerde prioteit voor OV bij 61 Bus                              */
    #define schovstipt62bus           124 /* Geconditioneerde prioteit voor OV bij 62 Bus                              */
    #define schovstipt67bus           125 /* Geconditioneerde prioteit voor OV bij 67 Bus                              */
    #define schovstipt68bus           126 /* Geconditioneerde prioteit voor OV bij 68 Bus                              */
    #define schcovuber                127 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                            */
    #define schcheckdstype            128 /* Check type DSI bericht bij VECOM                                          */
    #define schprioin02karbuskar      129 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02karbuskar     130 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risovris       131 /* Inmelden 02 via Bus toestaan                                              */
    #define schpriouit02risovris      132 /* Uitmelden 02 via Bus toestaan                                             */
    #define schprioin02risvrwris      133 /* Inmelden 02 via Vrachtwagen toestaan                                      */
    #define schpriouit02risvrwris     134 /* Uitmelden 02 via Vrachtwagen toestaan                                     */
    #define schprioin03buskar         135 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03buskar        136 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risovris       137 /* Inmelden 03 via Bus toestaan                                              */
    #define schpriouit03risovris      138 /* Uitmelden 03 via Bus toestaan                                             */
    #define schprioin03risvrwris      139 /* Inmelden 03 via Vrachtwagen toestaan                                      */
    #define schpriouit03risvrwris     140 /* Uitmelden 03 via Vrachtwagen toestaan                                     */
    #define schprioin05buskar         141 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05buskar        142 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risovris       143 /* Inmelden 05 via Bus toestaan                                              */
    #define schpriouit05risovris      144 /* Uitmelden 05 via Bus toestaan                                             */
    #define schprioin05risvrwris      145 /* Inmelden 05 via Vrachtwagen toestaan                                      */
    #define schpriouit05risvrwris     146 /* Uitmelden 05 via Vrachtwagen toestaan                                     */
    #define schprioin08buskar         147 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08buskar        148 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risovris       149 /* Inmelden 08 via Bus toestaan                                              */
    #define schpriouit08risovris      150 /* Uitmelden 08 via Bus toestaan                                             */
    #define schprioin08risvrwris      151 /* Inmelden 08 via Vrachtwagen toestaan                                      */
    #define schpriouit08risvrwris     152 /* Uitmelden 08 via Vrachtwagen toestaan                                     */
    #define schprioin09buskar         153 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09buskar        154 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risovris       155 /* Inmelden 09 via Bus toestaan                                              */
    #define schpriouit09risovris      156 /* Uitmelden 09 via Bus toestaan                                             */
    #define schprioin09risvrwris      157 /* Inmelden 09 via Vrachtwagen toestaan                                      */
    #define schpriouit09risvrwris     158 /* Uitmelden 09 via Vrachtwagen toestaan                                     */
    #define schprioin11buskar         159 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11buskar        160 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risovris       161 /* Inmelden 11 via Bus toestaan                                              */
    #define schpriouit11risovris      162 /* Uitmelden 11 via Bus toestaan                                             */
    #define schprioin11risvrwris      163 /* Inmelden 11 via Vrachtwagen toestaan                                      */
    #define schpriouit11risvrwris     164 /* Uitmelden 11 via Vrachtwagen toestaan                                     */
    #define schprioin22fietsfiets22_1 165 /* Inmelden 22 via Fiets toestaan                                            */
    #define schpriouit22fietsfiets    166 /* Uitmelden 22 via Fiets toestaan                                           */
    #define schprioin28fietsfiets28_2 167 /* Inmelden 28 via Fiets toestaan                                            */
    #define schpriouit28fietsfiets    168 /* Uitmelden 28 via Fiets toestaan                                           */
    #define schprioin61buskar         169 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61buskar        170 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risovris       171 /* Inmelden 61 via Bus toestaan                                              */
    #define schpriouit61risovris      172 /* Uitmelden 61 via Bus toestaan                                             */
    #define schprioin61risvrwris      173 /* Inmelden 61 via Vrachtwagen toestaan                                      */
    #define schpriouit61risvrwris     174 /* Uitmelden 61 via Vrachtwagen toestaan                                     */
    #define schprioin62buskar         175 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62buskar        176 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risovris       177 /* Inmelden 62 via Bus toestaan                                              */
    #define schpriouit62risovris      178 /* Uitmelden 62 via Bus toestaan                                             */
    #define schprioin62risvrwris      179 /* Inmelden 62 via Vrachtwagen toestaan                                      */
    #define schpriouit62risvrwris     180 /* Uitmelden 62 via Vrachtwagen toestaan                                     */
    #define schprioin67buskar         181 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67buskar        182 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risovris       183 /* Inmelden 67 via Bus toestaan                                              */
    #define schpriouit67risovris      184 /* Uitmelden 67 via Bus toestaan                                             */
    #define schprioin67risvrwris      185 /* Inmelden 67 via Vrachtwagen toestaan                                      */
    #define schpriouit67risvrwris     186 /* Uitmelden 67 via Vrachtwagen toestaan                                     */
    #define schprioin68buskar         187 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68buskar        188 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risovris       189 /* Inmelden 68 via Bus toestaan                                              */
    #define schpriouit68risovris      190 /* Uitmelden 68 via Bus toestaan                                             */
    #define schprioin68risvrwris      191 /* Inmelden 68 via Vrachtwagen toestaan                                      */
    #define schpriouit68risvrwris     192 /* Uitmelden 68 via Vrachtwagen toestaan                                     */
    #define schhdin02kar              193 /* Inmelden 02 via KAR HD toestaan                                           */
    #define schhduit02kar             194 /* Uitmelden 02 via KAR HD toestaan                                          */
    #define schchecksirene02          195 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR                    */
    #define schhdin02ris              196 /* Inmelden 02 via RIS HD toestaan                                           */
    #define schhduit02ris             197 /* Uitmelden 02 via RIS HD toestaan                                          */
    #define schhdin03kar              198 /* Inmelden 03 via KAR HD toestaan                                           */
    #define schhduit03kar             199 /* Uitmelden 03 via KAR HD toestaan                                          */
    #define schchecksirene03          200 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR                    */
    #define schhdin03ris              201 /* Inmelden 03 via RIS HD toestaan                                           */
    #define schhduit03ris             202 /* Uitmelden 03 via RIS HD toestaan                                          */
    #define schhdin05kar              203 /* Inmelden 05 via KAR HD toestaan                                           */
    #define schhduit05kar             204 /* Uitmelden 05 via KAR HD toestaan                                          */
    #define schchecksirene05          205 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR                    */
    #define schhdin05ris              206 /* Inmelden 05 via RIS HD toestaan                                           */
    #define schhduit05ris             207 /* Uitmelden 05 via RIS HD toestaan                                          */
    #define schhdin08kar              208 /* Inmelden 08 via KAR HD toestaan                                           */
    #define schhduit08kar             209 /* Uitmelden 08 via KAR HD toestaan                                          */
    #define schchecksirene08          210 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR                    */
    #define schhdin08ris              211 /* Inmelden 08 via RIS HD toestaan                                           */
    #define schhduit08ris             212 /* Uitmelden 08 via RIS HD toestaan                                          */
    #define schhdin09kar              213 /* Inmelden 09 via KAR HD toestaan                                           */
    #define schhduit09kar             214 /* Uitmelden 09 via KAR HD toestaan                                          */
    #define schchecksirene09          215 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR                    */
    #define schhdin09ris              216 /* Inmelden 09 via RIS HD toestaan                                           */
    #define schhduit09ris             217 /* Uitmelden 09 via RIS HD toestaan                                          */
    #define schhdin11kar              218 /* Inmelden 11 via KAR HD toestaan                                           */
    #define schhduit11kar             219 /* Uitmelden 11 via KAR HD toestaan                                          */
    #define schchecksirene11          220 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR                    */
    #define schhdin11ris              221 /* Inmelden 11 via RIS HD toestaan                                           */
    #define schhduit11ris             222 /* Uitmelden 11 via RIS HD toestaan                                          */
    #define schhdin61kar              223 /* Inmelden 61 via KAR HD toestaan                                           */
    #define schhduit61kar             224 /* Uitmelden 61 via KAR HD toestaan                                          */
    #define schchecksirene61          225 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR                    */
    #define schhdin61ris              226 /* Inmelden 61 via RIS HD toestaan                                           */
    #define schhduit61ris             227 /* Uitmelden 61 via RIS HD toestaan                                          */
    #define schhdin62kar              228 /* Inmelden 62 via KAR HD toestaan                                           */
    #define schhduit62kar             229 /* Uitmelden 62 via KAR HD toestaan                                          */
    #define schchecksirene62          230 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR                    */
    #define schhdin62ris              231 /* Inmelden 62 via RIS HD toestaan                                           */
    #define schhduit62ris             232 /* Uitmelden 62 via RIS HD toestaan                                          */
    #define schhdin67kar              233 /* Inmelden 67 via KAR HD toestaan                                           */
    #define schhduit67kar             234 /* Uitmelden 67 via KAR HD toestaan                                          */
    #define schchecksirene67          235 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR                    */
    #define schhdin67ris              236 /* Inmelden 67 via RIS HD toestaan                                           */
    #define schhduit67ris             237 /* Uitmelden 67 via RIS HD toestaan                                          */
    #define schhdin68kar              238 /* Inmelden 68 via KAR HD toestaan                                           */
    #define schhduit68kar             239 /* Uitmelden 68 via KAR HD toestaan                                          */
    #define schchecksirene68          240 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR                    */
    #define schhdin68ris              241 /* Inmelden 68 via RIS HD toestaan                                           */
    #define schhduit68ris             242 /* Uitmelden 68 via RIS HD toestaan                                          */
    #define schpelrwKOP02             243 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02      */
    #define schpelmkKOP02             244 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02          */
    #define schpelaKOP02              245 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02               */
    #define schpkuKOP68_uit68         246 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit      */
    #define schrisgeencheckopsg       247 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen               */
    #define schrisaanvraag            248 /* Globaal in of uitschakelen aanvragen via RIS                              */
    #define schrisverlengen           249 /* Globaal in of uitschakelen verlengen via RIS                              */
    #define schrgadd24_3              250 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2                */
    #define schrgad24_3               251 /* Richtinggevoelig aanvragen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgvd24_3               252 /* Richtinggevoelig verlengen fase 24 aan/uit van 24_3 naar 24_2             */
    #define schrgv                    253 /* RoBuGrover aan of uit                                                     */
    #define schrgv_snel               254 /* RoBuGrover versneld ophogen of verlagen                                   */
    #define schschoolingreep33        255 /* Schoolingreep aan of uit voor fase 33                                     */
    #define schschoolingreep34        256 /* Schoolingreep aan of uit voor fase 34                                     */
    #define schsi33                   257 /* Senioreningreep aan of uit voor fase 33                                   */
    #define schsi34                   258 /* Senioreningreep aan of uit voor fase 34                                   */
    #define schca02                   259 /* Cyclische aanvraag fase 02                                                */
    #define schca03                   260 /* Cyclische aanvraag fase 03                                                */
    #define schca05                   261 /* Cyclische aanvraag fase 05                                                */
    #define schca08                   262 /* Cyclische aanvraag fase 08                                                */
    #define schca09                   263 /* Cyclische aanvraag fase 09                                                */
    #define schca11                   264 /* Cyclische aanvraag fase 11                                                */
    #define schca21                   265 /* Cyclische aanvraag fase 21                                                */
    #define schca22                   266 /* Cyclische aanvraag fase 22                                                */
    #define schca24                   267 /* Cyclische aanvraag fase 24                                                */
    #define schca26                   268 /* Cyclische aanvraag fase 26                                                */
    #define schca28                   269 /* Cyclische aanvraag fase 28                                                */
    #define schca31                   270 /* Cyclische aanvraag fase 31                                                */
    #define schca32                   271 /* Cyclische aanvraag fase 32                                                */
    #define schca33                   272 /* Cyclische aanvraag fase 33                                                */
    #define schca34                   273 /* Cyclische aanvraag fase 34                                                */
    #define schca38                   274 /* Cyclische aanvraag fase 38                                                */
    #define schca61                   275 /* Cyclische aanvraag fase 61                                                */
    #define schca62                   276 /* Cyclische aanvraag fase 62                                                */
    #define schca67                   277 /* Cyclische aanvraag fase 67                                                */
    #define schca68                   278 /* Cyclische aanvraag fase 68                                                */
    #define schca81                   279 /* Cyclische aanvraag fase 81                                                */
    #define schca82                   280 /* Cyclische aanvraag fase 82                                                */
    #define schca84                   281 /* Cyclische aanvraag fase 84                                                */
    #define schvg02_4a                282 /* Veiligheidsgroen detector 02_4a fase 02                                   */
    #define schvg02_4b                283 /* Veiligheidsgroen detector 02_4b fase 02                                   */
    #define schvg08_4a                284 /* Veiligheidsgroen detector 08_4a fase 08                                   */
    #define schvg08_4b                285 /* Veiligheidsgroen detector 08_4b fase 08                                   */
    #define schvg11_4                 286 /* Veiligheidsgroen detector 11_4 fase 11                                    */
    #define schaltg02                 287 /* Alternatieve realisatie toestaan fase 02                                  */
    #define schaltg03                 288 /* Alternatieve realisatie toestaan fase 03                                  */
    #define schaltg05                 289 /* Alternatieve realisatie toestaan fase 05                                  */
    #define schaltg08                 290 /* Alternatieve realisatie toestaan fase 08                                  */
    #define schaltg09                 291 /* Alternatieve realisatie toestaan fase 09                                  */
    #define schaltg11                 292 /* Alternatieve realisatie toestaan fase 11                                  */
    #define schaltg21                 293 /* Alternatieve realisatie toestaan fase 21                                  */
    #define schaltg2232               294 /* Alternatieve realisatie toestaan fasen 22, 32                             */
    #define schaltg243484             295 /* Alternatieve realisatie toestaan fasen 24, 34, 84                         */
    #define schaltg26                 296 /* Alternatieve realisatie toestaan fase 26                                  */
    #define schaltg2838               297 /* Alternatieve realisatie toestaan fasen 28, 38                             */
    #define schaltg31                 298 /* Alternatieve realisatie toestaan fase 31                                  */
    #define schaltg3384               299 /* Alternatieve realisatie toestaan fasen 33, 84                             */
    #define schaltg2434               300 /* Alternatieve realisatie toestaan fasen 24, 34                             */
    #define schaltg61                 301 /* Alternatieve realisatie toestaan fase 61                                  */
    #define schaltg62                 302 /* Alternatieve realisatie toestaan fase 62                                  */
    #define schaltg67                 303 /* Alternatieve realisatie toestaan fase 67                                  */
    #define schaltg68                 304 /* Alternatieve realisatie toestaan fase 68                                  */
    #define schaltg81                 305 /* Alternatieve realisatie toestaan fase 81                                  */
    #define schaltg82                 306 /* Alternatieve realisatie toestaan fase 82                                  */
    #define schaltg243384             307 /* Alternatieve realisatie toestaan fasen 24, 33, 84                         */
    #define schwg02                   308 /* Wachtstand groen fase 02                                                  */
    #define schwg03                   309 /* Wachtstand groen fase 03                                                  */
    #define schwg05                   310 /* Wachtstand groen fase 05                                                  */
    #define schwg08                   311 /* Wachtstand groen fase 08                                                  */
    #define schwg09                   312 /* Wachtstand groen fase 09                                                  */
    #define schwg11                   313 /* Wachtstand groen fase 11                                                  */
    #define schwg21                   314 /* Wachtstand groen fase 21                                                  */
    #define schwg22                   315 /* Wachtstand groen fase 22                                                  */
    #define schwg24                   316 /* Wachtstand groen fase 24                                                  */
    #define schwg26                   317 /* Wachtstand groen fase 26                                                  */
    #define schwg28                   318 /* Wachtstand groen fase 28                                                  */
    #define schwg31                   319 /* Wachtstand groen fase 31                                                  */
    #define schwg32                   320 /* Wachtstand groen fase 32                                                  */
    #define schwg33                   321 /* Wachtstand groen fase 33                                                  */
    #define schwg34                   322 /* Wachtstand groen fase 34                                                  */
    #define schwg38                   323 /* Wachtstand groen fase 38                                                  */
    #define schwg61                   324 /* Wachtstand groen fase 61                                                  */
    #define schwg62                   325 /* Wachtstand groen fase 62                                                  */
    #define schwg67                   326 /* Wachtstand groen fase 67                                                  */
    #define schwg68                   327 /* Wachtstand groen fase 68                                                  */
    #define schwg81                   328 /* Wachtstand groen fase 81                                                  */
    #define schwg82                   329 /* Wachtstand groen fase 82                                                  */
    #define schwg84                   330 /* Wachtstand groen fase 84                                                  */
    #define schwtv24                  331 /* Aansturing wachttijdvoorspeller fase 24 aan of uit                        */
    #define schwtvbusbijhd            332 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep                  */
    #define schgs2232                 333 /* Schakelbare gelijkstart tussen fase 32 en 22                              */
    #define schgs2434                 334 /* Schakelbare gelijkstart tussen fase 34 en 24                              */
    #define schgs2484                 335 /* Schakelbare gelijkstart tussen fase 84 en 24                              */
    #define schgs3384                 336 /* Schakelbare gelijkstart tussen fase 84 en 33                              */
    #define schlos32_1                337 /* Toestaan los realiseren fase 32                                           */
    #define schlos32_2                338 /* Toestaan los realiseren fase 32                                           */
    #define schlos31_1                339 /* Toestaan los realiseren fase 31                                           */
    #define schlos31_2                340 /* Toestaan los realiseren fase 31                                           */
    #define schlos34_1                341 /* Toestaan los realiseren fase 34                                           */
    #define schlos34_2                342 /* Toestaan los realiseren fase 34                                           */
    #define schlos33_1                343 /* Toestaan los realiseren fase 33                                           */
    #define schlos33_2                344 /* Toestaan los realiseren fase 33                                           */
    #define schconfidence15fix        345
    #define schtxconfidence15ar       346
    #define schspatconfidence1        347
    #define schspatconfidence3        348
    #define schspatconfidence6        349
    #define schspatconfidence9        350
    #define schspatconfidence12       351
    #define schspatconfidence15       352
    #define schtimings02              353
    #define schtimings03              354
    #define schtimings05              355
    #define schtimings08              356
    #define schtimings09              357
    #define schtimings11              358
    #define schtimings21              359
    #define schtimings22              360
    #define schtimings24              361
    #define schtimings26              362
    #define schtimings28              363
    #define schtimings31              364
    #define schtimings32              365
    #define schtimings33              366
    #define schtimings34              367
    #define schtimings38              368
    #define schtimings61              369
    #define schtimings62              370
    #define schtimings67              371
    #define schtimings68              372
    #define schtimings81              373
    #define schtimings82              374
    #define schtimings84              375
    #define schsneld02_1a             376 /* Aanvraag snel voor detector 02_1a aan of uit                              */
    #define schsneld02_1b             377 /* Aanvraag snel voor detector 02_1b aan of uit                              */
    #define schsneld03_1              378 /* Aanvraag snel voor detector 03_1 aan of uit                               */
    #define schsneld05_1              379 /* Aanvraag snel voor detector 05_1 aan of uit                               */
    #define schsneld08_1a             380 /* Aanvraag snel voor detector 08_1a aan of uit                              */
    #define schsneld08_1b             381 /* Aanvraag snel voor detector 08_1b aan of uit                              */
    #define schsneld09_1              382 /* Aanvraag snel voor detector 09_1 aan of uit                               */
    #define schsneld11_1              383 /* Aanvraag snel voor detector 11_1 aan of uit                               */
    #define schsneld211               384 /* Aanvraag snel voor detector 211 aan of uit                                */
    #define schsneld22_1              385 /* Aanvraag snel voor detector 22_1 aan of uit                               */
    #define schsneld24_1              386 /* Aanvraag snel voor detector 24_1 aan of uit                               */
    #define schsneld261               387 /* Aanvraag snel voor detector 261 aan of uit                                */
    #define schsneld28_1              388 /* Aanvraag snel voor detector 28_1 aan of uit                               */
    #define schsneld61_1              389 /* Aanvraag snel voor detector 61_1 aan of uit                               */
    #define schsneld62_1a             390 /* Aanvraag snel voor detector 62_1a aan of uit                              */
    #define schsneld62_1b             391 /* Aanvraag snel voor detector 62_1b aan of uit                              */
    #define schsneld67_1              392 /* Aanvraag snel voor detector 67_1 aan of uit                               */
    #define schsneld68_1a             393 /* Aanvraag snel voor detector 68_1a aan of uit                              */
    #define schsneld68_1b             394 /* Aanvraag snel voor detector 68_1b aan of uit                              */
    #define schsneld81_1              395 /* Aanvraag snel voor detector 81_1 aan of uit                               */
    #define schsneld82_1              396 /* Aanvraag snel voor detector 82_1 aan of uit                               */
    #define schsneld84_1              397 /* Aanvraag snel voor detector 84_1 aan of uit                               */
    #define SCHMAX1                   398

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
    #define prmtxA1PL3_28                281 /* Eerste realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB1PL3_28                282 /* Eerste realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC1PL3_28                283 /* Eerste realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD1PL3_28                284 /* Eerste realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE1PL3_28                285 /* Eerste realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA2PL3_28                286 /* Tweede realisatie PL3 fc28 A-moment                                                                                            */
    #define prmtxB2PL3_28                287 /* Tweede realisatie PL3 fc28 B-moment                                                                                            */
    #define prmtxC2PL3_28                288 /* Tweede realisatie PL3 fc28 C-moment                                                                                            */
    #define prmtxD2PL3_28                289 /* Tweede realisatie PL3 fc28 D-moment                                                                                            */
    #define prmtxE2PL3_28                290 /* Tweede realisatie PL3 fc28 E-moment                                                                                            */
    #define prmtxA1PL3_38                291 /* Eerste realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB1PL3_38                292 /* Eerste realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC1PL3_38                293 /* Eerste realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD1PL3_38                294 /* Eerste realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE1PL3_38                295 /* Eerste realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA2PL3_38                296 /* Tweede realisatie PL3 fc38 A-moment                                                                                            */
    #define prmtxB2PL3_38                297 /* Tweede realisatie PL3 fc38 B-moment                                                                                            */
    #define prmtxC2PL3_38                298 /* Tweede realisatie PL3 fc38 C-moment                                                                                            */
    #define prmtxD2PL3_38                299 /* Tweede realisatie PL3 fc38 D-moment                                                                                            */
    #define prmtxE2PL3_38                300 /* Tweede realisatie PL3 fc38 E-moment                                                                                            */
    #define prmtxA1PL3_61                301 /* Eerste realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB1PL3_61                302 /* Eerste realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC1PL3_61                303 /* Eerste realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD1PL3_61                304 /* Eerste realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE1PL3_61                305 /* Eerste realisatie PL3 fc61 E-moment                                                                                            */
    #define prmtxA2PL3_61                306 /* Tweede realisatie PL3 fc61 A-moment                                                                                            */
    #define prmtxB2PL3_61                307 /* Tweede realisatie PL3 fc61 B-moment                                                                                            */
    #define prmtxC2PL3_61                308 /* Tweede realisatie PL3 fc61 C-moment                                                                                            */
    #define prmtxD2PL3_61                309 /* Tweede realisatie PL3 fc61 D-moment                                                                                            */
    #define prmtxE2PL3_61                310 /* Tweede realisatie PL3 fc61 E-moment                                                                                            */
    #define prmrstotxa                   311 /* Tijd tot xa dat RS opgezet wordt (anti-flitsgroen)                                                                             */
    #define prmvolgmasterpl              312 /* Per plan (bitwise) instellen wel of niet volgen master                                                                         */
    #define prmplxperdef                 313 /* Plan voor periode default                                                                                                      */
    #define prmplxper1                   314 /* Plan voor periode nacht                                                                                                        */
    #define prmplxper2                   315 /* Plan voor periode dag                                                                                                          */
    #define prmplxper3                   316 /* Plan voor periode ochtend                                                                                                      */
    #define prmplxper4                   317 /* Plan voor periode avond                                                                                                        */
    #define prmplxper5                   318 /* Plan voor periode koopavond                                                                                                    */
    #define prmplxper6                   319 /* Plan voor periode weekend                                                                                                      */
    #define prmplxper7                   320 /* Plan voor periode reserve                                                                                                      */
    #define prmtypema0261                321 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262                322 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521                323 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522                324 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532                325 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868                326 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126                327 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168                328 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221                329 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611                330 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122                331 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132                332 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222                333 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231                334 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324                335 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334                336 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384                337 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424                338 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433                339 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484                340 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828                341 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281                342 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                      343 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                      344 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                      345 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                      346 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                      347 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                      348 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                      349 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                      350 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                      351 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                      352 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                      353 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                      354 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                      355 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                      356 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                      357 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                      358 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                      359 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                      360 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                      361 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                      362 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                      363 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                      364 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                      365 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02                    366 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03                    367 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05                    368 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08                    369 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09                    370 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11                    371 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21                    372 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22                    373 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24                    374 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26                    375 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28                    376 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31                    377 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32                    378 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33                    379 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34                    380 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38                    381 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61                    382 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62                    383 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67                    384 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68                    385 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81                    386 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82                    387 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84                    388 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmOVtstpgrensvroeg          389 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat           390 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg03bus       391 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus        392 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus        393 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus       394 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus        395 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus        396 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus       397 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus        398 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus        399 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus       400 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus        401 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus        402 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus       403 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus        404 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus        405 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus       406 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus        407 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus        408 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus       409 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus        410 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus        411 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus       412 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus        413 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus        414 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus       415 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus        416 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus        417 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmmwta                      418 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts                    419 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg                    420 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02                    421 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02                    422 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02                    423 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02                   424 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02                  425 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02                   426 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03                    427 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03                    428 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03                    429 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03                   430 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03                  431 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03                   432 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05                    433 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05                    434 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05                    435 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05                   436 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05                  437 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05                   438 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08                    439 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08                    440 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08                    441 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08                   442 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08                  443 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08                   444 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09                    445 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09                    446 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09                    447 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09                   448 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09                  449 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09                   450 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11                    451 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11                    452 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11                    453 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11                   454 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11                  455 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11                   456 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21                    457 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21                    458 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21                    459 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21                   460 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21                  461 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21                   462 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt22                    463 /* Minimaal percentage groentijd primair tbv. terugkomen fase 22                                                                  */
    #define prmognt22                    464 /* Minimale groentijd bij terugkomen fase 22                                                                                      */
    #define prmnofm22                    465 /* Aantal malen niet afkappen na OV ingreep fase 22                                                                               */
    #define prmmgcov22                   466 /* Minimum groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov22                  467 /* Minimum percentage groentijd waarna fase 22 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg22                   468 /* Percentage ophogen groentijd na afkappen fase 22                                                                               */
    #define prmpmgt24                    469 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24                    470 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24                    471 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24                   472 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24                  473 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24                   474 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26                    475 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26                    476 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26                    477 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26                   478 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26                  479 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26                   480 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28                    481 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28                    482 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28                    483 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28                   484 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28                  485 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28                   486 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31                    487 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31                    488 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt32                    489 /* Minimaal percentage groentijd primair tbv. terugkomen fase 32                                                                  */
    #define prmognt32                    490 /* Minimale groentijd bij terugkomen fase 32                                                                                      */
    #define prmpmgt33                    491 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33                    492 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34                    493 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34                    494 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38                    495 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38                    496 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61                    497 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61                    498 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61                    499 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61                   500 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61                  501 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61                   502 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62                    503 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62                    504 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62                    505 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62                   506 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62                  507 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62                   508 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67                    509 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67                    510 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67                    511 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67                   512 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67                  513 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67                   514 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68                    515 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68                    516 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68                    517 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68                   518 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68                  519 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68                   520 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt81                    521 /* Minimaal percentage groentijd primair tbv. terugkomen fase 81                                                                  */
    #define prmognt81                    522 /* Minimale groentijd bij terugkomen fase 81                                                                                      */
    #define prmnofm81                    523 /* Aantal malen niet afkappen na OV ingreep fase 81                                                                               */
    #define prmmgcov81                   524 /* Minimum groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov81                  525 /* Minimum percentage groentijd waarna fase 81 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg81                   526 /* Percentage ophogen groentijd na afkappen fase 81                                                                               */
    #define prmpmgt82                    527 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82                    528 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82                    529 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82                   530 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82                  531 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82                   532 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84                    533 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84                    534 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84                    535 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84                   536 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84                  537 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84                   538 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02karbus               539 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02karbus              540 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02karbus               541 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02karbus               542 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02karbus           543 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmvtgcat02karbus            544 /* Voertuigcategorie DSI voor prio ingreep 02karbus                                                                               */
    #define prmprio02karbus              545 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto02risov                546 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risov               547 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risov                548 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risov                549 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risov            550 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risov               551 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risov           552
    #define prmrisend02risov             553
    #define prmriseta02risov             554
    #define prmrisrole02risov            555
    #define prmrissubrole02risov         556
    #define prmrisimportance02risov      557
    #define prmrisstationtype02risov     558
    #define prmrisgrenspriotype02risov   559 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risov      560
    #define prmrislaneid02risov_1        561
    #define prmrislaneid02risov_2        562
    #define prmrto02risvrw               563 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02risvrw              564 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02risvrw               565 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02risvrw               566 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmupinagb02risvrw           567 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02                                                                  */
    #define prmprio02risvrw              568 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrisstart02risvrw          569
    #define prmrisend02risvrw            570
    #define prmriseta02risvrw            571
    #define prmrisrole02risvrw           572
    #define prmrissubrole02risvrw        573
    #define prmrisimportance02risvrw     574
    #define prmrisstationtype02risvrw    575
    #define prmrisgrenspriotype02risvrw  576 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02risvrw     577
    #define prmrislaneid02risvrw_1       578
    #define prmrislaneid02risvrw_2       579
    #define prmrto03bus                  580 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus                 581 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus                  582 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus                  583 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03bus              584 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmvtgcat03bus               585 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus                 586 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto03risov                587 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risov               588 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risov                589 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risov                590 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risov            591 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risov               592 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risov           593
    #define prmrisend03risov             594
    #define prmriseta03risov             595
    #define prmrisrole03risov            596
    #define prmrissubrole03risov         597
    #define prmrisimportance03risov      598
    #define prmrisstationtype03risov     599
    #define prmrisgrenspriotype03risov   600 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risov      601
    #define prmrislaneid03risov_1        602
    #define prmrto03risvrw               603 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03risvrw              604 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03risvrw               605 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03risvrw               606 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmupinagb03risvrw           607 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03                                                                  */
    #define prmprio03risvrw              608 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrisstart03risvrw          609
    #define prmrisend03risvrw            610
    #define prmriseta03risvrw            611
    #define prmrisrole03risvrw           612
    #define prmrissubrole03risvrw        613
    #define prmrisimportance03risvrw     614
    #define prmrisstationtype03risvrw    615
    #define prmrisgrenspriotype03risvrw  616 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03risvrw     617
    #define prmrislaneid03risvrw_1       618
    #define prmrto05bus                  619 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus                 620 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus                  621 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus                  622 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05bus              623 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmvtgcat05bus               624 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus                 625 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto05risov                626 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risov               627 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risov                628 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risov                629 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risov            630 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risov               631 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risov           632
    #define prmrisend05risov             633
    #define prmriseta05risov             634
    #define prmrisrole05risov            635
    #define prmrissubrole05risov         636
    #define prmrisimportance05risov      637
    #define prmrisstationtype05risov     638
    #define prmrisgrenspriotype05risov   639 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risov      640
    #define prmrislaneid05risov_1        641
    #define prmrto05risvrw               642 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05risvrw              643 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05risvrw               644 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05risvrw               645 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmupinagb05risvrw           646 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05                                                                  */
    #define prmprio05risvrw              647 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrisstart05risvrw          648
    #define prmrisend05risvrw            649
    #define prmriseta05risvrw            650
    #define prmrisrole05risvrw           651
    #define prmrissubrole05risvrw        652
    #define prmrisimportance05risvrw     653
    #define prmrisstationtype05risvrw    654
    #define prmrisgrenspriotype05risvrw  655 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05risvrw     656
    #define prmrislaneid05risvrw_1       657
    #define prmrto08bus                  658 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus                 659 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus                  660 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus                  661 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08bus              662 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmvtgcat08bus               663 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus                 664 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto08risov                665 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risov               666 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risov                667 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risov                668 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risov            669 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risov               670 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risov           671
    #define prmrisend08risov             672
    #define prmriseta08risov             673
    #define prmrisrole08risov            674
    #define prmrissubrole08risov         675
    #define prmrisimportance08risov      676
    #define prmrisstationtype08risov     677
    #define prmrisgrenspriotype08risov   678 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risov      679
    #define prmrislaneid08risov_1        680
    #define prmrislaneid08risov_2        681
    #define prmrto08risvrw               682 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08risvrw              683 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08risvrw               684 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08risvrw               685 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmupinagb08risvrw           686 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08                                                                  */
    #define prmprio08risvrw              687 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrisstart08risvrw          688
    #define prmrisend08risvrw            689
    #define prmriseta08risvrw            690
    #define prmrisrole08risvrw           691
    #define prmrissubrole08risvrw        692
    #define prmrisimportance08risvrw     693
    #define prmrisstationtype08risvrw    694
    #define prmrisgrenspriotype08risvrw  695 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08risvrw     696
    #define prmrislaneid08risvrw_1       697
    #define prmrislaneid08risvrw_2       698
    #define prmrto09bus                  699 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus                 700 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus                  701 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus                  702 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09bus              703 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmvtgcat09bus               704 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus                 705 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto09risov                706 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risov               707 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risov                708 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risov                709 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risov            710 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risov               711 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risov           712
    #define prmrisend09risov             713
    #define prmriseta09risov             714
    #define prmrisrole09risov            715
    #define prmrissubrole09risov         716
    #define prmrisimportance09risov      717
    #define prmrisstationtype09risov     718
    #define prmrisgrenspriotype09risov   719 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risov      720
    #define prmrislaneid09risov_1        721
    #define prmrto09risvrw               722 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09risvrw              723 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09risvrw               724 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09risvrw               725 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmupinagb09risvrw           726 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09                                                                  */
    #define prmprio09risvrw              727 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrisstart09risvrw          728
    #define prmrisend09risvrw            729
    #define prmriseta09risvrw            730
    #define prmrisrole09risvrw           731
    #define prmrissubrole09risvrw        732
    #define prmrisimportance09risvrw     733
    #define prmrisstationtype09risvrw    734
    #define prmrisgrenspriotype09risvrw  735 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09risvrw     736
    #define prmrislaneid09risvrw_1       737
    #define prmrto11bus                  738 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus                 739 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus                  740 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus                  741 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11bus              742 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmvtgcat11bus               743 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus                 744 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrto11risov                745 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risov               746 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risov                747 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risov                748 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risov            749 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risov               750 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risov           751
    #define prmrisend11risov             752
    #define prmriseta11risov             753
    #define prmrisrole11risov            754
    #define prmrissubrole11risov         755
    #define prmrisimportance11risov      756
    #define prmrisstationtype11risov     757
    #define prmrisgrenspriotype11risov   758 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risov      759
    #define prmrislaneid11risov_1        760
    #define prmrto11risvrw               761 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11risvrw              762 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11risvrw               763 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11risvrw               764 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmupinagb11risvrw           765 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11                                                                  */
    #define prmprio11risvrw              766 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmrisstart11risvrw          767
    #define prmrisend11risvrw            768
    #define prmriseta11risvrw            769
    #define prmrisrole11risvrw           770
    #define prmrissubrole11risvrw        771
    #define prmrisimportance11risvrw     772
    #define prmrisstationtype11risvrw    773
    #define prmrisgrenspriotype11risvrw  774 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11risvrw     775
    #define prmrislaneid11risvrw_1       776
    #define prmftsblok22fietsfiets       777 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                                                 */
    #define prmftsmaxpercyc22fietsfiets  778 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                                                */
    #define prmftsminvtg22fietsfiets     779 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 22                                                                 */
    #define prmftsminwt22fietsfiets      780 /* Minimale wachttijd tbv peloton prio voor fase 22                                                                               */
    #define prmftsminvtgris22fietsfiets  781 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 22                                                         */
    #define prmrto22fiets                782 /* Ongehinderde rijtijd prioriteit fase 22                                                                                        */
    #define prmrtbg22fiets               783 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                                                  */
    #define prmrtg22fiets                784 /* Gehinderde rijtijd prioriteit fase 22                                                                                          */
    #define prmomx22fiets                785 /* Ondermaximum OV fase 22                                                                                                        */
    #define prmupinagb22fiets            786 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22                                                                  */
    #define prmprio22fiets               787 /* Prioriteitsinstelling OV fase 22                                                                                               */
    #define prmrisstart22fiets           788
    #define prmrisend22fiets             789
    #define prmrisrole22fiets            790
    #define prmrissubrole22fiets         791
    #define prmrisimportance22fiets      792
    #define prmrisstationtype22fiets     793
    #define prmrisgrenspriotype22fiets   794 /* Greenswaarde type prioriteit RIS voor fase 22                                                                                  */
    #define prmrisapproachid22fiets      795
    #define prmrislaneid22fiets_1        796
    #define prmrislaneid22fiets_2        797
    #define prmftsblok28fietsfiets       798 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 28                                                                 */
    #define prmftsmaxpercyc28fietsfiets  799 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 28                                                                */
    #define prmftsminvtg28fietsfiets     800 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 28                                                                 */
    #define prmftsminwt28fietsfiets      801 /* Minimale wachttijd tbv peloton prio voor fase 28                                                                               */
    #define prmftsminvtgris28fietsfiets  802 /* Minimaal aantal gemeten fietsers via RIS tbv peloton prio voor fase 28                                                         */
    #define prmrto28fiets                803 /* Ongehinderde rijtijd prioriteit fase 28                                                                                        */
    #define prmrtbg28fiets               804 /* Beperkt gehinderde rijtijd prioriteit fase 28                                                                                  */
    #define prmrtg28fiets                805 /* Gehinderde rijtijd prioriteit fase 28                                                                                          */
    #define prmomx28fiets                806 /* Ondermaximum OV fase 28                                                                                                        */
    #define prmupinagb28fiets            807 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 28                                                                  */
    #define prmprio28fiets               808 /* Prioriteitsinstelling OV fase 28                                                                                               */
    #define prmrisstart28fiets           809
    #define prmrisend28fiets             810
    #define prmrisrole28fiets            811
    #define prmrissubrole28fiets         812
    #define prmrisimportance28fiets      813
    #define prmrisstationtype28fiets     814
    #define prmrisgrenspriotype28fiets   815 /* Greenswaarde type prioriteit RIS voor fase 28                                                                                  */
    #define prmrisapproachid28fiets      816
    #define prmrislaneid28fiets_1        817
    #define prmrto61bus                  818 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61bus                 819 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61bus                  820 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61bus                  821 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61bus              822 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmvtgcat61bus               823 /* Voertuigcategorie DSI voor prio ingreep 61bus                                                                                  */
    #define prmprio61bus                 824 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrto61risov                825 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risov               826 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risov                827 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risov                828 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risov            829 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risov               830 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risov           831
    #define prmrisend61risov             832
    #define prmriseta61risov             833
    #define prmrisrole61risov            834
    #define prmrissubrole61risov         835
    #define prmrisimportance61risov      836
    #define prmrisstationtype61risov     837
    #define prmrisgrenspriotype61risov   838 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risov      839
    #define prmrislaneid61risov_1        840
    #define prmrto61risvrw               841 /* Ongehinderde rijtijd prioriteit fase 61                                                                                        */
    #define prmrtbg61risvrw              842 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                                                  */
    #define prmrtg61risvrw               843 /* Gehinderde rijtijd prioriteit fase 61                                                                                          */
    #define prmomx61risvrw               844 /* Ondermaximum OV fase 61                                                                                                        */
    #define prmupinagb61risvrw           845 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61                                                                  */
    #define prmprio61risvrw              846 /* Prioriteitsinstelling OV fase 61                                                                                               */
    #define prmrisstart61risvrw          847
    #define prmrisend61risvrw            848
    #define prmriseta61risvrw            849
    #define prmrisrole61risvrw           850
    #define prmrissubrole61risvrw        851
    #define prmrisimportance61risvrw     852
    #define prmrisstationtype61risvrw    853
    #define prmrisgrenspriotype61risvrw  854 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61risvrw     855
    #define prmrislaneid61risvrw_1       856
    #define prmrto62bus                  857 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62bus                 858 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62bus                  859 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62bus                  860 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62bus              861 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmvtgcat62bus               862 /* Voertuigcategorie DSI voor prio ingreep 62bus                                                                                  */
    #define prmprio62bus                 863 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrto62risov                864 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risov               865 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risov                866 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risov                867 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risov            868 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risov               869 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risov           870
    #define prmrisend62risov             871
    #define prmriseta62risov             872
    #define prmrisrole62risov            873
    #define prmrissubrole62risov         874
    #define prmrisimportance62risov      875
    #define prmrisstationtype62risov     876
    #define prmrisgrenspriotype62risov   877 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risov      878
    #define prmrislaneid62risov_1        879
    #define prmrislaneid62risov_2        880
    #define prmrto62risvrw               881 /* Ongehinderde rijtijd prioriteit fase 62                                                                                        */
    #define prmrtbg62risvrw              882 /* Beperkt gehinderde rijtijd prioriteit fase 62                                                                                  */
    #define prmrtg62risvrw               883 /* Gehinderde rijtijd prioriteit fase 62                                                                                          */
    #define prmomx62risvrw               884 /* Ondermaximum OV fase 62                                                                                                        */
    #define prmupinagb62risvrw           885 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 62                                                                  */
    #define prmprio62risvrw              886 /* Prioriteitsinstelling OV fase 62                                                                                               */
    #define prmrisstart62risvrw          887
    #define prmrisend62risvrw            888
    #define prmriseta62risvrw            889
    #define prmrisrole62risvrw           890
    #define prmrissubrole62risvrw        891
    #define prmrisimportance62risvrw     892
    #define prmrisstationtype62risvrw    893
    #define prmrisgrenspriotype62risvrw  894 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62risvrw     895
    #define prmrislaneid62risvrw_1       896
    #define prmrislaneid62risvrw_2       897
    #define prmrto67bus                  898 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67bus                 899 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67bus                  900 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67bus                  901 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67bus              902 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmvtgcat67bus               903 /* Voertuigcategorie DSI voor prio ingreep 67bus                                                                                  */
    #define prmprio67bus                 904 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrto67risov                905 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risov               906 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risov                907 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risov                908 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risov            909 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risov               910 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risov           911
    #define prmrisend67risov             912
    #define prmriseta67risov             913
    #define prmrisrole67risov            914
    #define prmrissubrole67risov         915
    #define prmrisimportance67risov      916
    #define prmrisstationtype67risov     917
    #define prmrisgrenspriotype67risov   918 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risov      919
    #define prmrislaneid67risov_1        920
    #define prmrto67risvrw               921 /* Ongehinderde rijtijd prioriteit fase 67                                                                                        */
    #define prmrtbg67risvrw              922 /* Beperkt gehinderde rijtijd prioriteit fase 67                                                                                  */
    #define prmrtg67risvrw               923 /* Gehinderde rijtijd prioriteit fase 67                                                                                          */
    #define prmomx67risvrw               924 /* Ondermaximum OV fase 67                                                                                                        */
    #define prmupinagb67risvrw           925 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 67                                                                  */
    #define prmprio67risvrw              926 /* Prioriteitsinstelling OV fase 67                                                                                               */
    #define prmrisstart67risvrw          927
    #define prmrisend67risvrw            928
    #define prmriseta67risvrw            929
    #define prmrisrole67risvrw           930
    #define prmrissubrole67risvrw        931
    #define prmrisimportance67risvrw     932
    #define prmrisstationtype67risvrw    933
    #define prmrisgrenspriotype67risvrw  934 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67risvrw     935
    #define prmrislaneid67risvrw_1       936
    #define prmrto68bus                  937 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68bus                 938 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68bus                  939 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68bus                  940 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68bus              941 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmvtgcat68bus               942 /* Voertuigcategorie DSI voor prio ingreep 68bus                                                                                  */
    #define prmprio68bus                 943 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrto68risov                944 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risov               945 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risov                946 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risov                947 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risov            948 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risov               949 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risov           950
    #define prmrisend68risov             951
    #define prmriseta68risov             952
    #define prmrisrole68risov            953
    #define prmrissubrole68risov         954
    #define prmrisimportance68risov      955
    #define prmrisstationtype68risov     956
    #define prmrisgrenspriotype68risov   957 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risov      958
    #define prmrislaneid68risov_1        959
    #define prmrislaneid68risov_2        960
    #define prmrto68risvrw               961 /* Ongehinderde rijtijd prioriteit fase 68                                                                                        */
    #define prmrtbg68risvrw              962 /* Beperkt gehinderde rijtijd prioriteit fase 68                                                                                  */
    #define prmrtg68risvrw               963 /* Gehinderde rijtijd prioriteit fase 68                                                                                          */
    #define prmomx68risvrw               964 /* Ondermaximum OV fase 68                                                                                                        */
    #define prmupinagb68risvrw           965 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 68                                                                  */
    #define prmprio68risvrw              966 /* Prioriteitsinstelling OV fase 68                                                                                               */
    #define prmrisstart68risvrw          967
    #define prmrisend68risvrw            968
    #define prmriseta68risvrw            969
    #define prmrisrole68risvrw           970
    #define prmrissubrole68risvrw        971
    #define prmrisimportance68risvrw     972
    #define prmrisstationtype68risvrw    973
    #define prmrisgrenspriotype68risvrw  974 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68risvrw     975
    #define prmrislaneid68risvrw_1       976
    #define prmrislaneid68risvrw_2       977
    #define prmpriohd02                  978 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02                   979 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02                  980 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02                   981 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmupinagbhd02               982 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02                                                                  */
    #define prmrisstart02hd              983
    #define prmrisend02hd                984
    #define prmriseta02hd                985
    #define prmrisrole02hd               986
    #define prmrissubrole02hd            987
    #define prmrisimportance02hd         988
    #define prmrisstationtype02hd        989
    #define prmrisgrenspriotype02hd      990 /* Greenswaarde type prioriteit RIS voor fase 02                                                                                  */
    #define prmrisapproachid02hd         991
    #define prmrislaneid02hd_1           992
    #define prmrislaneid02hd_2           993
    #define prmpriohd03                  994 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03                   995 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03                  996 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03                   997 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmupinagbhd03               998 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03                                                                  */
    #define prmrisstart03hd              999
    #define prmrisend03hd               1000
    #define prmriseta03hd               1001
    #define prmrisrole03hd              1002
    #define prmrissubrole03hd           1003
    #define prmrisimportance03hd        1004
    #define prmrisstationtype03hd       1005
    #define prmrisgrenspriotype03hd     1006 /* Greenswaarde type prioriteit RIS voor fase 03                                                                                  */
    #define prmrisapproachid03hd        1007
    #define prmrislaneid03hd_1          1008
    #define prmpriohd05                 1009 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05                  1010 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05                 1011 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05                  1012 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmupinagbhd05              1013 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05                                                                  */
    #define prmrisstart05hd             1014
    #define prmrisend05hd               1015
    #define prmriseta05hd               1016
    #define prmrisrole05hd              1017
    #define prmrissubrole05hd           1018
    #define prmrisimportance05hd        1019
    #define prmrisstationtype05hd       1020
    #define prmrisgrenspriotype05hd     1021 /* Greenswaarde type prioriteit RIS voor fase 05                                                                                  */
    #define prmrisapproachid05hd        1022
    #define prmrislaneid05hd_1          1023
    #define prmpriohd08                 1024 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08                  1025 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08                 1026 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08                  1027 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmupinagbhd08              1028 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08                                                                  */
    #define prmrisstart08hd             1029
    #define prmrisend08hd               1030
    #define prmriseta08hd               1031
    #define prmrisrole08hd              1032
    #define prmrissubrole08hd           1033
    #define prmrisimportance08hd        1034
    #define prmrisstationtype08hd       1035
    #define prmrisgrenspriotype08hd     1036 /* Greenswaarde type prioriteit RIS voor fase 08                                                                                  */
    #define prmrisapproachid08hd        1037
    #define prmrislaneid08hd_1          1038
    #define prmrislaneid08hd_2          1039
    #define prmpriohd09                 1040 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09                  1041 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09                 1042 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09                  1043 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmupinagbhd09              1044 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09                                                                  */
    #define prmrisstart09hd             1045
    #define prmrisend09hd               1046
    #define prmriseta09hd               1047
    #define prmrisrole09hd              1048
    #define prmrissubrole09hd           1049
    #define prmrisimportance09hd        1050
    #define prmrisstationtype09hd       1051
    #define prmrisgrenspriotype09hd     1052 /* Greenswaarde type prioriteit RIS voor fase 09                                                                                  */
    #define prmrisapproachid09hd        1053
    #define prmrislaneid09hd_1          1054
    #define prmpriohd11                 1055 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11                  1056 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11                 1057 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11                  1058 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmupinagbhd11              1059 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11                                                                  */
    #define prmrisstart11hd             1060
    #define prmrisend11hd               1061
    #define prmriseta11hd               1062
    #define prmrisrole11hd              1063
    #define prmrissubrole11hd           1064
    #define prmrisimportance11hd        1065
    #define prmrisstationtype11hd       1066
    #define prmrisgrenspriotype11hd     1067 /* Greenswaarde type prioriteit RIS voor fase 11                                                                                  */
    #define prmrisapproachid11hd        1068
    #define prmrislaneid11hd_1          1069
    #define prmpriohd61                 1070 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61                  1071 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61                 1072 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61                  1073 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmupinagbhd61              1074 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61                                                                  */
    #define prmrisstart61hd             1075
    #define prmrisend61hd               1076
    #define prmriseta61hd               1077
    #define prmrisrole61hd              1078
    #define prmrissubrole61hd           1079
    #define prmrisimportance61hd        1080
    #define prmrisstationtype61hd       1081
    #define prmrisgrenspriotype61hd     1082 /* Greenswaarde type prioriteit RIS voor fase 61                                                                                  */
    #define prmrisapproachid61hd        1083
    #define prmrislaneid61hd_1          1084
    #define prmpriohd62                 1085 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62                  1086 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62                 1087 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62                  1088 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmupinagbhd62              1089 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62                                                                  */
    #define prmrisstart62hd             1090
    #define prmrisend62hd               1091
    #define prmriseta62hd               1092
    #define prmrisrole62hd              1093
    #define prmrissubrole62hd           1094
    #define prmrisimportance62hd        1095
    #define prmrisstationtype62hd       1096
    #define prmrisgrenspriotype62hd     1097 /* Greenswaarde type prioriteit RIS voor fase 62                                                                                  */
    #define prmrisapproachid62hd        1098
    #define prmrislaneid62hd_1          1099
    #define prmrislaneid62hd_2          1100
    #define prmpriohd67                 1101 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67                  1102 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67                 1103 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67                  1104 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmupinagbhd67              1105 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67                                                                  */
    #define prmrisstart67hd             1106
    #define prmrisend67hd               1107
    #define prmriseta67hd               1108
    #define prmrisrole67hd              1109
    #define prmrissubrole67hd           1110
    #define prmrisimportance67hd        1111
    #define prmrisstationtype67hd       1112
    #define prmrisgrenspriotype67hd     1113 /* Greenswaarde type prioriteit RIS voor fase 67                                                                                  */
    #define prmrisapproachid67hd        1114
    #define prmrislaneid67hd_1          1115
    #define prmpriohd68                 1116 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68                  1117 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68                 1118 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68                  1119 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmupinagbhd68              1120 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68                                                                  */
    #define prmrisstart68hd             1121
    #define prmrisend68hd               1122
    #define prmriseta68hd               1123
    #define prmrisrole68hd              1124
    #define prmrissubrole68hd           1125
    #define prmrisimportance68hd        1126
    #define prmrisstationtype68hd       1127
    #define prmrisgrenspriotype68hd     1128 /* Greenswaarde type prioriteit RIS voor fase 68                                                                                  */
    #define prmrisapproachid68hd        1129
    #define prmrislaneid68hd_1          1130
    #define prmrislaneid68hd_2          1131
    #define prmkarsg02                  1132 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                                                         */
    #define prmkarsg03                  1133 /* Signaalgroep nummer voor fase 03 bij inmelding via DSI                                                                         */
    #define prmkarsg05                  1134 /* Signaalgroep nummer voor fase 05 bij inmelding via DSI                                                                         */
    #define prmkarsg08                  1135 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                                                         */
    #define prmkarsg09                  1136 /* Signaalgroep nummer voor fase 09 bij inmelding via DSI                                                                         */
    #define prmkarsg11                  1137 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                                                         */
    #define prmkarsg61                  1138 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                                                         */
    #define prmkarsg62                  1139 /* Signaalgroep nummer voor fase 62 bij inmelding via DSI                                                                         */
    #define prmkarsg67                  1140 /* Signaalgroep nummer voor fase 67 bij inmelding via DSI                                                                         */
    #define prmkarsg68                  1141 /* Signaalgroep nummer voor fase 68 bij inmelding via DSI                                                                         */
    #define prmkarsghd02                1142 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd03                1143 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd05                1144 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd08                1145 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd09                1146 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd11                1147 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd61                1148 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd62                1149 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd67                1150 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                                                      */
    #define prmkarsghd68                1151 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                                                      */
    #define prmpelgrensKOP02            1152 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                                                 */
    #define prmstkp1                    1153 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1                    1154 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1                    1155 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2                    1156 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2                    1157 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2                    1158 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3                    1159 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3                    1160 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3                    1161 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4                    1162 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4                    1163 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4                    1164 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5                    1165 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5                    1166 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5                    1167 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6                    1168 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6                    1169 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6                    1170 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7                    1171 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7                    1172 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7                    1173 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1          1174 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1          1175 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1          1176 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2          1177 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2          1178 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2          1179 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3          1180 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3          1181 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3          1182 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02                   1183 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03                   1184 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05                   1185 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08                   1186 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09                   1187 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11                   1188 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21                   1189 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22                   1190 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24                   1191 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26                   1192 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28                   1193 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61                   1194 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62                   1195 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67                   1196 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68                   1197 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81                   1198 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82                   1199 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84                   1200 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02                   1201 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03                   1202 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05                   1203 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08                   1204 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09                   1205 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11                   1206 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21                   1207 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22                   1208 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24                   1209 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26                   1210 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28                   1211 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61                   1212 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62                   1213 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67                   1214 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68                   1215 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81                   1216 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82                   1217 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84                   1218 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02                   1219 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03                   1220 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05                   1221 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08                   1222 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09                   1223 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11                   1224 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21                   1225 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22                   1226 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24                   1227 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26                   1228 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28                   1229 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61                   1230 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62                   1231 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67                   1232 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68                   1233 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81                   1234 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82                   1235 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84                   1236 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02                   1237 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03                   1238 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05                   1239 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08                   1240 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09                   1241 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11                   1242 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21                   1243 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22                   1244 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24                   1245 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26                   1246 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28                   1247 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61                   1248 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62                   1249 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67                   1250 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68                   1251 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81                   1252 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82                   1253 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84                   1254 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02                   1255 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03                   1256 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05                   1257 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08                   1258 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09                   1259 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11                   1260 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21                   1261 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22                   1262 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24                   1263 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26                   1264 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28                   1265 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61                   1266 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62                   1267 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67                   1268 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68                   1269 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81                   1270 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82                   1271 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84                   1272 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02                   1273 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03                   1274 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05                   1275 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08                   1276 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09                   1277 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11                   1278 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21                   1279 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22                   1280 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24                   1281 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26                   1282 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28                   1283 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61                   1284 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62                   1285 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67                   1286 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68                   1287 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81                   1288 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82                   1289 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84                   1290 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02                   1291 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03                   1292 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05                   1293 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08                   1294 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09                   1295 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11                   1296 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21                   1297 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22                   1298 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24                   1299 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26                   1300 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28                   1301 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61                   1302 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62                   1303 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67                   1304 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68                   1305 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81                   1306 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82                   1307 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84                   1308 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmptp123456iks01           1309 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks02           1310 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks03           1311 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks04           1312 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks05           1313 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks06           1314 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks07           1315 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks08           1316 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks09           1317 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks10           1318 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks11           1319 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks12           1320 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks13           1321 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks14           1322 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks15           1323 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456iks16           1324 /* Instelling inkomende signalen van ptp123456                                                                                    */
    #define prmptp123456uks01           1325 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks02           1326 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks03           1327 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks04           1328 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks05           1329 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks06           1330 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks07           1331 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks08           1332 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks09           1333 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks10           1334 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks11           1335 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks12           1336 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks13           1337 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks14           1338 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks15           1339 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp123456uks16           1340 /* Instelling uitgaande signalen naar ptp123456                                                                                   */
    #define prmptp_ptp123456oke         1341 /* PTP oke ptp123456                                                                                                              */
    #define prmptp_ptp123456err         1342 /* PTP error ptp123456                                                                                                            */
    #define prmptp_ptp123456err0        1343 /* PTP error 0 ptp123456                                                                                                          */
    #define prmptp_ptp123456err1        1344 /* PTP error 1 ptp123456                                                                                                          */
    #define prmptp_ptp123456err2        1345 /* PTP error 2 ptp123456                                                                                                          */
    #define prmportnrptp123456          1346 /* Poortnummer in het regeltoestel PTP ptp123456                                                                                  */
    #define prmsrcptp123456             1347 /* Nummer van source PTP ptp123456                                                                                                */
    #define prmdestptp123456            1348 /* Nummer van destination PTP ptp123456                                                                                           */
    #define prmtmsgwptp123456           1349 /* Wait timeout PTP ptp123456                                                                                                     */
    #define prmtmsgsptp123456           1350 /* Send timeout PTP ptp123456                                                                                                     */
    #define prmtmsgaptp123456           1351 /* Alive timeout PTP ptp123456                                                                                                    */
    #define prmcmsgptp123456            1352 /* Max. berichtenteller tbv. herhaling PTP ptp123456                                                                              */
    #define prmrisapproachid02          1353 /* Approach id voor fase 02                                                                                                       */
    #define prmrisapproachid03          1354 /* Approach id voor fase 03                                                                                                       */
    #define prmrisapproachid05          1355 /* Approach id voor fase 05                                                                                                       */
    #define prmrisapproachid08          1356 /* Approach id voor fase 08                                                                                                       */
    #define prmrisapproachid09          1357 /* Approach id voor fase 09                                                                                                       */
    #define prmrisapproachid11          1358 /* Approach id voor fase 11                                                                                                       */
    #define prmrisapproachid21          1359 /* Approach id voor fase 21                                                                                                       */
    #define prmrisapproachid22          1360 /* Approach id voor fase 22                                                                                                       */
    #define prmrisapproachid24          1361 /* Approach id voor fase 24                                                                                                       */
    #define prmrisapproachid26          1362 /* Approach id voor fase 26                                                                                                       */
    #define prmrisapproachid28          1363 /* Approach id voor fase 28                                                                                                       */
    #define prmrisapproachid31          1364 /* Approach id voor fase 31                                                                                                       */
    #define prmrisapproachid32          1365 /* Approach id voor fase 32                                                                                                       */
    #define prmrisapproachid33          1366 /* Approach id voor fase 33                                                                                                       */
    #define prmrisapproachid34          1367 /* Approach id voor fase 34                                                                                                       */
    #define prmrisapproachid38          1368 /* Approach id voor fase 38                                                                                                       */
    #define prmrisapproachid61          1369 /* Approach id voor fase 61                                                                                                       */
    #define prmrisapproachid62          1370 /* Approach id voor fase 62                                                                                                       */
    #define prmrisapproachid67          1371 /* Approach id voor fase 67                                                                                                       */
    #define prmrisapproachid68          1372 /* Approach id voor fase 68                                                                                                       */
    #define prmrisapproachid81          1373 /* Approach id voor fase 81                                                                                                       */
    #define prmrisapproachid82          1374 /* Approach id voor fase 82                                                                                                       */
    #define prmrisapproachid84          1375 /* Approach id voor fase 84                                                                                                       */
    #define prmrislaneid02_1            1376 /* Lane id voor lane met index 1 bij fase 02                                                                                      */
    #define prmrislaneid02_2            1377 /* Lane id voor lane met index 2 bij fase 02                                                                                      */
    #define prmrislaneid03_1            1378 /* Lane id voor lane met index 1 bij fase 03                                                                                      */
    #define prmrislaneid05_1            1379 /* Lane id voor lane met index 1 bij fase 05                                                                                      */
    #define prmrislaneid08_1            1380 /* Lane id voor lane met index 1 bij fase 08                                                                                      */
    #define prmrislaneid08_2            1381 /* Lane id voor lane met index 2 bij fase 08                                                                                      */
    #define prmrislaneid09_1            1382 /* Lane id voor lane met index 1 bij fase 09                                                                                      */
    #define prmrislaneid11_1            1383 /* Lane id voor lane met index 1 bij fase 11                                                                                      */
    #define prmrislaneid21_1            1384 /* Lane id voor lane met index 1 bij fase 21                                                                                      */
    #define prmrislaneheading21_1       1385 /* Lane heading voor lane met index 1 bij fase 21                                                                                 */
    #define prmrislaneheadingmarge21_1  1386 /* Lane heading marge voor lane met index 1 bij fase 21                                                                           */
    #define prmrislaneid22_1            1387 /* Lane id voor lane met index 1 bij fase 22                                                                                      */
    #define prmrislaneheading22_1       1388 /* Lane heading voor lane met index 1 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_1  1389 /* Lane heading marge voor lane met index 1 bij fase 22                                                                           */
    #define prmrislaneid22_2            1390 /* Lane id voor lane met index 2 bij fase 22                                                                                      */
    #define prmrislaneheading22_2       1391 /* Lane heading voor lane met index 2 bij fase 22                                                                                 */
    #define prmrislaneheadingmarge22_2  1392 /* Lane heading marge voor lane met index 2 bij fase 22                                                                           */
    #define prmrislaneid24_1            1393 /* Lane id voor lane met index 1 bij fase 24                                                                                      */
    #define prmrislaneheading24_1       1394 /* Lane heading voor lane met index 1 bij fase 24                                                                                 */
    #define prmrislaneheadingmarge24_1  1395 /* Lane heading marge voor lane met index 1 bij fase 24                                                                           */
    #define prmrislaneid26_1            1396 /* Lane id voor lane met index 1 bij fase 26                                                                                      */
    #define prmrislaneheading26_1       1397 /* Lane heading voor lane met index 1 bij fase 26                                                                                 */
    #define prmrislaneheadingmarge26_1  1398 /* Lane heading marge voor lane met index 1 bij fase 26                                                                           */
    #define prmrislaneid28_1            1399 /* Lane id voor lane met index 1 bij fase 28                                                                                      */
    #define prmrislaneheading28_1       1400 /* Lane heading voor lane met index 1 bij fase 28                                                                                 */
    #define prmrislaneheadingmarge28_1  1401 /* Lane heading marge voor lane met index 1 bij fase 28                                                                           */
    #define prmrislaneid31_1            1402 /* Lane id voor lane met index 1 bij fase 31                                                                                      */
    #define prmrislaneid31_2            1403 /* Lane id voor lane met index 2 bij fase 31                                                                                      */
    #define prmrislaneid32_1            1404 /* Lane id voor lane met index 1 bij fase 32                                                                                      */
    #define prmrislaneid32_2            1405 /* Lane id voor lane met index 2 bij fase 32                                                                                      */
    #define prmrislaneid33_1            1406 /* Lane id voor lane met index 1 bij fase 33                                                                                      */
    #define prmrislaneid33_2            1407 /* Lane id voor lane met index 2 bij fase 33                                                                                      */
    #define prmrislaneid34_1            1408 /* Lane id voor lane met index 1 bij fase 34                                                                                      */
    #define prmrislaneid34_2            1409 /* Lane id voor lane met index 2 bij fase 34                                                                                      */
    #define prmrislaneid38_1            1410 /* Lane id voor lane met index 1 bij fase 38                                                                                      */
    #define prmrislaneid38_2            1411 /* Lane id voor lane met index 2 bij fase 38                                                                                      */
    #define prmrislaneid61_1            1412 /* Lane id voor lane met index 1 bij fase 61                                                                                      */
    #define prmrislaneid62_1            1413 /* Lane id voor lane met index 1 bij fase 62                                                                                      */
    #define prmrislaneid62_2            1414 /* Lane id voor lane met index 2 bij fase 62                                                                                      */
    #define prmrislaneid67_1            1415 /* Lane id voor lane met index 1 bij fase 67                                                                                      */
    #define prmrislaneid68_1            1416 /* Lane id voor lane met index 1 bij fase 68                                                                                      */
    #define prmrislaneid68_2            1417 /* Lane id voor lane met index 2 bij fase 68                                                                                      */
    #define prmrislaneid81_1            1418 /* Lane id voor lane met index 1 bij fase 81                                                                                      */
    #define prmrislaneid82_1            1419 /* Lane id voor lane met index 1 bij fase 82                                                                                      */
    #define prmrislaneid84_1            1420 /* Lane id voor lane met index 1 bij fase 84                                                                                      */
    #define prmrisastart02mveh1         1421 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh1     1422 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart02mveh2         1423 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisastartsrm002mveh2     1424 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisastart03mveh1         1425 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisastartsrm003mveh1     1426 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisastart05mveh1         1427 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisastartsrm005mveh1     1428 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisastart08mveh1         1429 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh1     1430 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart08mveh2         1431 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisastartsrm008mveh2     1432 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisastart09mveh1         1433 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisastartsrm009mveh1     1434 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisastart11mveh1         1435 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisastartsrm011mveh1     1436 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisastart21fts1          1437 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisastartsrm021fts1      1438 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisastart22fts1          1439 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts1      1440 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart22fts2          1441 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisastartsrm022fts2      1442 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisastart24fts1          1443 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisastartsrm024fts1      1444 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisastart26fts1          1445 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisastartsrm026fts1      1446 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisastart28fts1          1447 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisastartsrm028fts1      1448 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisastart31vtg1          1449 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg1      1450 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart31vtg2          1451 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisastartsrm031vtg2      1452 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisastart32vtg1          1453 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg1      1454 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart32vtg2          1455 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisastartsrm032vtg2      1456 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisastart33vtg1          1457 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg1      1458 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart33vtg2          1459 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisastartsrm033vtg2      1460 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisastart34vtg1          1461 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg1      1462 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart34vtg2          1463 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisastartsrm034vtg2      1464 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisastart38vtg1          1465 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg1      1466 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart38vtg2          1467 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisastartsrm038vtg2      1468 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisastart61mveh1         1469 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisastartsrm061mveh1     1470 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisastart62mveh1         1471 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh1     1472 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart62mveh2         1473 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisastartsrm062mveh2     1474 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisastart67mveh1         1475 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisastartsrm067mveh1     1476 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisastart68mveh1         1477 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh1     1478 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisastart84fts1          1479 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisastartsrm084fts1      1480 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisastart82fts1          1481 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisastartsrm082fts1      1482 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisastart81fts1          1483 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisastartsrm081fts1      1484 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisastart68mveh2         1485 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisastartsrm068mveh2     1486 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend02mveh1           1487 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh1       1488 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend02mveh2           1489 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                                               */
    #define prmrisaendsrm002mveh2       1490 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                                              */
    #define prmrisaend03mveh1           1491 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                                               */
    #define prmrisaendsrm003mveh1       1492 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                                              */
    #define prmrisaend05mveh1           1493 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                                               */
    #define prmrisaendsrm005mveh1       1494 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                                              */
    #define prmrisaend08mveh1           1495 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh1       1496 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend08mveh2           1497 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                                               */
    #define prmrisaendsrm008mveh2       1498 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                                              */
    #define prmrisaend09mveh1           1499 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                                               */
    #define prmrisaendsrm009mveh1       1500 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                                              */
    #define prmrisaend11mveh1           1501 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                                               */
    #define prmrisaendsrm011mveh1       1502 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                                              */
    #define prmrisaend21fts1            1503 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                                               */
    #define prmrisaendsrm021fts1        1504 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                                              */
    #define prmrisaend22fts1            1505 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts1        1506 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend22fts2            1507 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                                               */
    #define prmrisaendsrm022fts2        1508 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                                              */
    #define prmrisaend24fts1            1509 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                                               */
    #define prmrisaendsrm024fts1        1510 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                                              */
    #define prmrisaend26fts1            1511 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                                               */
    #define prmrisaendsrm026fts1        1512 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                                              */
    #define prmrisaend28fts1            1513 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                                               */
    #define prmrisaendsrm028fts1        1514 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                                              */
    #define prmrisaend31vtg1            1515 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg1        1516 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend31vtg2            1517 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                                               */
    #define prmrisaendsrm031vtg2        1518 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                                              */
    #define prmrisaend32vtg1            1519 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg1        1520 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend32vtg2            1521 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                                               */
    #define prmrisaendsrm032vtg2        1522 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                                              */
    #define prmrisaend33vtg1            1523 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg1        1524 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend33vtg2            1525 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                                               */
    #define prmrisaendsrm033vtg2        1526 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                                              */
    #define prmrisaend34vtg1            1527 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg1        1528 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend34vtg2            1529 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                                               */
    #define prmrisaendsrm034vtg2        1530 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                                              */
    #define prmrisaend38vtg1            1531 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg1        1532 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend38vtg2            1533 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                                               */
    #define prmrisaendsrm038vtg2        1534 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                                              */
    #define prmrisaend61mveh1           1535 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                                               */
    #define prmrisaendsrm061mveh1       1536 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                                              */
    #define prmrisaend62mveh1           1537 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh1       1538 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend62mveh2           1539 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                                               */
    #define prmrisaendsrm062mveh2       1540 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                                              */
    #define prmrisaend67mveh1           1541 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                                               */
    #define prmrisaendsrm067mveh1       1542 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                                              */
    #define prmrisaend68mveh1           1543 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh1       1544 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisaend84fts1            1545 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                                               */
    #define prmrisaendsrm084fts1        1546 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                                              */
    #define prmrisaend82fts1            1547 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                                               */
    #define prmrisaendsrm082fts1        1548 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                                              */
    #define prmrisaend81fts1            1549 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                                               */
    #define prmrisaendsrm081fts1        1550 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                                              */
    #define prmrisaend68mveh2           1551 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                                               */
    #define prmrisaendsrm068mveh2       1552 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                                              */
    #define prmrisvstart02mveh1         1553 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh1     1554 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart02mveh2         1555 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvstartsrm002mveh2     1556 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvstart03mveh1         1557 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvstartsrm003mveh1     1558 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvstart05mveh1         1559 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvstartsrm005mveh1     1560 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvstart08mveh1         1561 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh1     1562 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart08mveh2         1563 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvstartsrm008mveh2     1564 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvstart09mveh1         1565 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvstartsrm009mveh1     1566 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvstart11mveh1         1567 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvstartsrm011mveh1     1568 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvstart21fts1          1569 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvstartsrm021fts1      1570 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvstart22fts1          1571 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts1      1572 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart22fts2          1573 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvstartsrm022fts2      1574 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvstart24fts1          1575 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvstartsrm024fts1      1576 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvstart26fts1          1577 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvstartsrm026fts1      1578 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvstart28fts1          1579 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvstartsrm028fts1      1580 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvstart31vtg1          1581 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg1      1582 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart31vtg2          1583 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvstartsrm031vtg2      1584 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvstart32vtg1          1585 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg1      1586 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart32vtg2          1587 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvstartsrm032vtg2      1588 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvstart33vtg1          1589 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg1      1590 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart33vtg2          1591 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvstartsrm033vtg2      1592 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvstart34vtg1          1593 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg1      1594 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart34vtg2          1595 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvstartsrm034vtg2      1596 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvstart38vtg1          1597 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg1      1598 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart38vtg2          1599 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvstartsrm038vtg2      1600 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvstart61mveh1         1601 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvstartsrm061mveh1     1602 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvstart62mveh1         1603 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh1     1604 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart62mveh2         1605 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvstartsrm062mveh2     1606 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvstart67mveh1         1607 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvstartsrm067mveh1     1608 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvstart68mveh1         1609 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh1     1610 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvstart84fts1          1611 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvstartsrm084fts1      1612 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvstart82fts1          1613 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvstartsrm082fts1      1614 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvstart81fts1          1615 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvstartsrm081fts1      1616 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvstart68mveh2         1617 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvstartsrm068mveh2     1618 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend02mveh1           1619 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh1       1620 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend02mveh2           1621 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                                                */
    #define prmrisvendsrm002mveh2       1622 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                                               */
    #define prmrisvend03mveh1           1623 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                                                */
    #define prmrisvendsrm003mveh1       1624 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                                               */
    #define prmrisvend05mveh1           1625 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                                                */
    #define prmrisvendsrm005mveh1       1626 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                                               */
    #define prmrisvend08mveh1           1627 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh1       1628 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend08mveh2           1629 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                                                */
    #define prmrisvendsrm008mveh2       1630 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                                               */
    #define prmrisvend09mveh1           1631 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                                                */
    #define prmrisvendsrm009mveh1       1632 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                                               */
    #define prmrisvend11mveh1           1633 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                                                */
    #define prmrisvendsrm011mveh1       1634 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                                               */
    #define prmrisvend21fts1            1635 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                                                */
    #define prmrisvendsrm021fts1        1636 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                                               */
    #define prmrisvend22fts1            1637 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts1        1638 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend22fts2            1639 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                                                */
    #define prmrisvendsrm022fts2        1640 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                                               */
    #define prmrisvend24fts1            1641 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                                                */
    #define prmrisvendsrm024fts1        1642 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                                               */
    #define prmrisvend26fts1            1643 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                                                */
    #define prmrisvendsrm026fts1        1644 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                                               */
    #define prmrisvend28fts1            1645 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                                                */
    #define prmrisvendsrm028fts1        1646 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                                               */
    #define prmrisvend31vtg1            1647 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg1        1648 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend31vtg2            1649 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                                                */
    #define prmrisvendsrm031vtg2        1650 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                                               */
    #define prmrisvend32vtg1            1651 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg1        1652 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend32vtg2            1653 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                                                */
    #define prmrisvendsrm032vtg2        1654 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                                               */
    #define prmrisvend33vtg1            1655 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg1        1656 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend33vtg2            1657 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                                                */
    #define prmrisvendsrm033vtg2        1658 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                                               */
    #define prmrisvend34vtg1            1659 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg1        1660 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend34vtg2            1661 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                                                */
    #define prmrisvendsrm034vtg2        1662 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                                               */
    #define prmrisvend38vtg1            1663 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg1        1664 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend38vtg2            1665 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                                                */
    #define prmrisvendsrm038vtg2        1666 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                                               */
    #define prmrisvend61mveh1           1667 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                                                */
    #define prmrisvendsrm061mveh1       1668 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                                               */
    #define prmrisvend62mveh1           1669 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh1       1670 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend62mveh2           1671 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                                                */
    #define prmrisvendsrm062mveh2       1672 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                                               */
    #define prmrisvend67mveh1           1673 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                                                */
    #define prmrisvendsrm067mveh1       1674 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                                               */
    #define prmrisvend68mveh1           1675 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh1       1676 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrisvend84fts1            1677 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                                                */
    #define prmrisvendsrm084fts1        1678 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                                               */
    #define prmrisvend82fts1            1679 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                                                */
    #define prmrisvendsrm082fts1        1680 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                                               */
    #define prmrisvend81fts1            1681 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                                                */
    #define prmrisvendsrm081fts1        1682 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                                               */
    #define prmrisvend68mveh2           1683 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                                                */
    #define prmrisvendsrm068mveh2       1684 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                                               */
    #define prmrispstart22fts1          1685 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart22fts2          1686 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispstart28fts1          1687 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                                             */
    #define prmrispend22fts1            1688 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend22fts2            1689 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                                             */
    #define prmrispend28fts1            1690 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                                             */
    #define prmmkrgd24_3                1691 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                      1692 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus              1693 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus              1694 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog               1695 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag               1696 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil             1697 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag           1698 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02                1699 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02                1700 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03                1701 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03                1702 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05                1703 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05                1704 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08                1705 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08                1706 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_11                1707 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11                1708 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmintvg_22                1709 /* Minimale verlenggroentijd fase 22                                                                                              */
    #define prmmaxtvg_22                1710 /* Maximale verlenggroentijd fase 22                                                                                              */
    #define prmmintvg_28                1711 /* Minimale verlenggroentijd fase 28                                                                                              */
    #define prmmaxtvg_28                1712 /* Maximale verlenggroentijd fase 28                                                                                              */
    #define prmsiexgrperc33             1713 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                                                */
    #define prmsiexgrperc34             1714 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                                                */
    #define prmmaxtvgvlog               1715 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog               1716 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02                  1717 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03                  1718 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05                  1719 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08                  1720 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09                  1721 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11                  1722 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21                  1723 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22                  1724 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24                  1725 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26                  1726 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28                  1727 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31                  1728 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32                  1729 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33                  1730 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34                  1731 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38                  1732 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61                  1733 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62                  1734 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67                  1735 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68                  1736 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81                  1737 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82                  1738 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84                  1739 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02                   1740 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02                   1741 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03                   1742 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03                   1743 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05                   1744 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05                   1745 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08                   1746 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08                   1747 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09                   1748 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09                   1749 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11                   1750 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11                   1751 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21                   1752 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21                   1753 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22                   1754 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232                 1755 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24                   1756 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484               1757 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26                   1758 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26                   1759 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28                   1760 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp2838                 1761 /* Minimale ruimte tbv alternatieve realisatie fasen 28, 38                                                                       */
    #define prmaltg31                   1762 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31                   1763 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32                   1764 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33                   1765 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384                 1766 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34                   1767 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434                 1768 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38                   1769 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltg61                   1770 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61                   1771 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62                   1772 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62                   1773 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67                   1774 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67                   1775 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68                   1776 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68                   1777 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81                   1778 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81                   1779 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82                   1780 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82                   1781 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84                   1782 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384               1783 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define prmminwtv                   1784 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax              1785 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin              1786 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
    #define prmttxconfidence15          1787
    #define prmlatencyminendsg          1788
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert              1789 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn               1790 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat               1791 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                     1792
#else
    #define PRMMAX1                     1789
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

