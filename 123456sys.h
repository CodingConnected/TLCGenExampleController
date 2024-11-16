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
 * 12.4.0   16-11-2024   TLCGen      Ontwikkel versie TLCGen (laastste portable) ISG
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.4.0 20241116"
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
    #define usincontrol      (FCMAX +  11) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt */
    #define usnocontrol      (FCMAX +  12) /* Verklikken of applicatie niet in staat is te regelen    */
    #define usFile68af       (FCMAX +  13) /* File ingreep File68af actief                            */
    #define usovtevroeg02bus (FCMAX +  14) /* Voorste OV voertuig bij 02 te vroeg Bus                 */
    #define usovoptijd02bus  (FCMAX +  15) /* Voorste OV voertuig bij 02 op tijd Bus                  */
    #define usovtelaat02bus  (FCMAX +  16) /* Voorste OV voertuig bij 02 te laat Bus                  */
    #define usovtevroeg03bus (FCMAX +  17) /* Voorste OV voertuig bij 03 te vroeg Bus                 */
    #define usovoptijd03bus  (FCMAX +  18) /* Voorste OV voertuig bij 03 op tijd Bus                  */
    #define usovtelaat03bus  (FCMAX +  19) /* Voorste OV voertuig bij 03 te laat Bus                  */
    #define usovtevroeg05bus (FCMAX +  20) /* Voorste OV voertuig bij 05 te vroeg Bus                 */
    #define usovoptijd05bus  (FCMAX +  21) /* Voorste OV voertuig bij 05 op tijd Bus                  */
    #define usovtelaat05bus  (FCMAX +  22) /* Voorste OV voertuig bij 05 te laat Bus                  */
    #define usovtevroeg08bus (FCMAX +  23) /* Voorste OV voertuig bij 08 te vroeg Bus                 */
    #define usovoptijd08bus  (FCMAX +  24) /* Voorste OV voertuig bij 08 op tijd Bus                  */
    #define usovtelaat08bus  (FCMAX +  25) /* Voorste OV voertuig bij 08 te laat Bus                  */
    #define usovtevroeg09bus (FCMAX +  26) /* Voorste OV voertuig bij 09 te vroeg Bus                 */
    #define usovoptijd09bus  (FCMAX +  27) /* Voorste OV voertuig bij 09 op tijd Bus                  */
    #define usovtelaat09bus  (FCMAX +  28) /* Voorste OV voertuig bij 09 te laat Bus                  */
    #define usovtevroeg11bus (FCMAX +  29) /* Voorste OV voertuig bij 11 te vroeg Bus                 */
    #define usovoptijd11bus  (FCMAX +  30) /* Voorste OV voertuig bij 11 op tijd Bus                  */
    #define usovtelaat11bus  (FCMAX +  31) /* Voorste OV voertuig bij 11 te laat Bus                  */
    #define usmaxwt          (FCMAX +  32) /* Verklikken maximale wachttijd overschreden              */
    #define uskarmelding     (FCMAX +  33) /* Verklikken ontvangst melding KAR                        */
    #define uskarog          (FCMAX +  34) /* Verklikken ondergedrag KAR                              */
    #define usovinm02bus     (FCMAX +  35) /* Verklikken inmelding OV fase 02                         */
    #define usovinm03bus     (FCMAX +  36) /* Verklikken inmelding OV fase 03                         */
    #define usovinm05bus     (FCMAX +  37) /* Verklikken inmelding OV fase 05                         */
    #define usovinm08bus     (FCMAX +  38) /* Verklikken inmelding OV fase 08                         */
    #define usovinm09bus     (FCMAX +  39) /* Verklikken inmelding OV fase 09                         */
    #define usovinm11bus     (FCMAX +  40) /* Verklikken inmelding OV fase 11                         */
    #define ushdinm02        (FCMAX +  41) /* Verklikken inmelding HD fase 02                         */
    #define ushdinm03        (FCMAX +  42) /* Verklikken inmelding HD fase 03                         */
    #define ushdinm05        (FCMAX +  43) /* Verklikken inmelding HD fase 05                         */
    #define ushdinm08        (FCMAX +  44) /* Verklikken inmelding HD fase 08                         */
    #define ushdinm09        (FCMAX +  45) /* Verklikken inmelding HD fase 09                         */
    #define ushdinm11        (FCMAX +  46) /* Verklikken inmelding HD fase 11                         */
    #define ushdinm61        (FCMAX +  47) /* Verklikken inmelding HD fase 61                         */
    #define ushdinm62        (FCMAX +  48) /* Verklikken inmelding HD fase 62                         */
    #define ushdinm67        (FCMAX +  49) /* Verklikken inmelding HD fase 67                         */
    #define ushdinm68        (FCMAX +  50) /* Verklikken inmelding HD fase 68                         */
    #define usperdef         (FCMAX +  51) /* Default periode actief                                  */
    #define usper1           (FCMAX +  52) /* Periode Reserve actief                                  */
    #define usperoFietsprio1 (FCMAX +  53) /* Periode actief                                          */
    #define usperoFietsprio2 (FCMAX +  54) /* Periode actief                                          */
    #define usperoFietsprio3 (FCMAX +  55) /* Periode actief                                          */
    #define usper2           (FCMAX +  56) /* Periode Dag periode actief                              */
    #define usper3           (FCMAX +  57) /* Periode Ochtendspits actief                             */
    #define usper4           (FCMAX +  58) /* Periode Avondspits actief                               */
    #define usper5           (FCMAX +  59) /* Periode Koopavond actief                                */
    #define usper6           (FCMAX +  60) /* Periode Weekend actief                                  */
    #define usper7           (FCMAX +  61) /* Periode Reserve actief                                  */
    #define usrgv            (FCMAX +  62) /* Verklikken actief zijn RoBuGrover                       */
    #define uswtv21          (FCMAX +  63) /* Verklikken aansturing wachttijdvoorspeller fase 21      */
    #define uswtv22          (FCMAX +  64) /* Verklikken aansturing wachttijdvoorspeller fase 22      */
    #define uswtv24          (FCMAX +  65) /* Verklikken aansturing wachttijdvoorspeller fase 24      */
    #define uswtv26          (FCMAX +  66) /* Verklikken aansturing wachttijdvoorspeller fase 26      */
    #define uswtv28          (FCMAX +  67) /* Verklikken aansturing wachttijdvoorspeller fase 28      */
    #define uswtv81          (FCMAX +  68) /* Verklikken aansturing wachttijdvoorspeller fase 81      */
    #define uswtv82          (FCMAX +  69) /* Verklikken aansturing wachttijdvoorspeller fase 82      */
    #define uswtv84          (FCMAX +  70) /* Verklikken aansturing wachttijdvoorspeller fase 84      */
    #define uswtk21          (FCMAX +  71) /* Aansturing waitsignaal detector k21                     */
    #define uswtk22          (FCMAX +  72) /* Aansturing waitsignaal detector k22                     */
    #define uswtk24          (FCMAX +  73) /* Aansturing waitsignaal detector k24                     */
    #define uswtk26          (FCMAX +  74) /* Aansturing waitsignaal detector k26                     */
    #define uswtk28          (FCMAX +  75) /* Aansturing waitsignaal detector k28                     */
    #define uswtk31a         (FCMAX +  76) /* Aansturing waitsignaal detector k31a                    */
    #define uswtk31b         (FCMAX +  77) /* Aansturing waitsignaal detector k31b                    */
    #define uswtk32a         (FCMAX +  78) /* Aansturing waitsignaal detector k32a                    */
    #define uswtk32b         (FCMAX +  79) /* Aansturing waitsignaal detector k32b                    */
    #define uswtk33a         (FCMAX +  80) /* Aansturing waitsignaal detector k33a                    */
    #define uswtk33b         (FCMAX +  81) /* Aansturing waitsignaal detector k33b                    */
    #define uswtk34a         (FCMAX +  82) /* Aansturing waitsignaal detector k34a                    */
    #define uswtk34b         (FCMAX +  83) /* Aansturing waitsignaal detector k34b                    */
    #define uswtk38a         (FCMAX +  84) /* Aansturing waitsignaal detector k38a                    */
    #define uswtk38b         (FCMAX +  85) /* Aansturing waitsignaal detector k38b                    */
    #define uswtk81          (FCMAX +  86) /* Aansturing waitsignaal detector k81                     */
    #define uswtk82          (FCMAX +  87) /* Aansturing waitsignaal detector k82                     */
    #define uswtk84          (FCMAX +  88) /* Aansturing waitsignaal detector k84                     */
    #define usisgtijd02      (FCMAX +  89) /* Verklikken PRIO 02 tbv interfunc                        */
    #define usisgtijd03      (FCMAX +  90) /* Verklikken PRIO 03 tbv interfunc                        */
    #define usisgtijd05      (FCMAX +  91) /* Verklikken PRIO 05 tbv interfunc                        */
    #define usisgtijd08      (FCMAX +  92) /* Verklikken PRIO 08 tbv interfunc                        */
    #define usisgtijd09      (FCMAX +  93) /* Verklikken PRIO 09 tbv interfunc                        */
    #define usisgtijd11      (FCMAX +  94) /* Verklikken PRIO 11 tbv interfunc                        */
    #define usisgtijd21      (FCMAX +  95) /* Verklikken PRIO 21 tbv interfunc                        */
    #define usisgtijd22      (FCMAX +  96) /* Verklikken PRIO 22 tbv interfunc                        */
    #define usisgtijd24      (FCMAX +  97) /* Verklikken PRIO 24 tbv interfunc                        */
    #define usisgtijd26      (FCMAX +  98) /* Verklikken PRIO 26 tbv interfunc                        */
    #define usisgtijd28      (FCMAX +  99) /* Verklikken PRIO 28 tbv interfunc                        */
    #define usisgtijd31      (FCMAX + 100) /* Verklikken PRIO 31 tbv interfunc                        */
    #define usisgtijd32      (FCMAX + 101) /* Verklikken PRIO 32 tbv interfunc                        */
    #define usisgtijd33      (FCMAX + 102) /* Verklikken PRIO 33 tbv interfunc                        */
    #define usisgtijd34      (FCMAX + 103) /* Verklikken PRIO 34 tbv interfunc                        */
    #define usisgtijd38      (FCMAX + 104) /* Verklikken PRIO 38 tbv interfunc                        */
    #define usisgtijd61      (FCMAX + 105) /* Verklikken PRIO 61 tbv interfunc                        */
    #define usisgtijd62      (FCMAX + 106) /* Verklikken PRIO 62 tbv interfunc                        */
    #define usisgtijd67      (FCMAX + 107) /* Verklikken PRIO 67 tbv interfunc                        */
    #define usisgtijd68      (FCMAX + 108) /* Verklikken PRIO 68 tbv interfunc                        */
    #define usisgtijd81      (FCMAX + 109) /* Verklikken PRIO 81 tbv interfunc                        */
    #define usisgtijd82      (FCMAX + 110) /* Verklikken PRIO 82 tbv interfunc                        */
    #define usisgtijd84      (FCMAX + 111) /* Verklikken PRIO 84 tbv interfunc                        */
    #define USMAX1           (FCMAX + 112)

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
    #define ddummykaruit02bus 80
    #define ddummykaruit03bus 81
    #define ddummykaruit05bus 82
    #define ddummykaruit08bus 83
    #define ddummykaruit09bus 84
    #define ddummykaruit11bus 85
    #define ddummyhdkarin02   86
    #define ddummyhdkaruit02  87
    #define ddummyhdkarin03   88
    #define ddummyhdkaruit03  89
    #define ddummyhdkarin05   90
    #define ddummyhdkaruit05  91
    #define ddummyhdkarin08   92
    #define ddummyhdkaruit08  93
    #define ddummyhdkarin09   94
    #define ddummyhdkaruit09  95
    #define ddummyhdkarin11   96
    #define ddummyhdkaruit11  97
    #define ddummyhdkarin61   98
    #define ddummyhdkaruit61  99
    #define ddummyhdkarin62   100
    #define ddummyhdkaruit62  101
    #define ddummyhdkarin67   102
    #define ddummyhdkaruit67  103
    #define ddummyhdkarin68   104
    #define ddummyhdkaruit68  105
    #define DPMAX1            106 /* aantal detectoren testomgeving */
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
    #define hopdrempelen08       0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08      1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a       2 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b       3 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a       4 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b       5 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a       6 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b       7 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a       8 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b       9 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09      10 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09     11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1       12 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2       13 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3       14 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11      15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11     16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1       17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2       18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3       19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4       20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a            21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk31b            22 /* Hulpelement onthouden melding meeaanvraag detector k31b            */
    #define hmadk32a            23 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk32b            24 /* Hulpelement onthouden melding meeaanvraag detector k32b            */
    #define hmadk33a            25 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk33b            26 /* Hulpelement onthouden melding meeaanvraag detector k33b            */
    #define hmadk34a            27 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hmadk34b            28 /* Hulpelement onthouden melding meeaanvraag detector k34b            */
    #define hfileFile68af       29 /* File File68af actief                                               */
    #define hfile68_9a          30 /* File 68_9a actief                                                  */
    #define hfile68_9b          31 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af  32 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af  33 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hnla02_1a           34 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b           35 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a           36 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b           37 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1            38 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1            39 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlsg3132           40 /* Hulpelement naloop SG van 31 naar 32                               */
    #define hnlak31a            41 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlsg3231           42 /* Hulpelement naloop SG van 32 naar 31                               */
    #define hnlak32a            43 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlsg3334           44 /* Hulpelement naloop SG van 33 naar 34                               */
    #define hnlak33a            45 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlsg3433           46 /* Hulpelement naloop SG van 34 naar 33                               */
    #define hnlak34a            47 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1            48 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus           49 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus           50 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus           51 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus           52 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus           53 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus           54 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hprio02bus          55 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02bus        56 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02bus       57 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02buskar     58 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02buskar    59 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio03bus          60 /* Bijhouden actief zijn prioriteit fase 03                           */
    #define hprioin03bus        61 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03bus       62 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprioin03buskar     63 /* Prioriteit inmelding fase 03 Bus                                   */
    #define hpriouit03buskar    64 /* Prioriteit uitmelding 03 Bus                                       */
    #define hprio05bus          65 /* Bijhouden actief zijn prioriteit fase 05                           */
    #define hprioin05bus        66 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05bus       67 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprioin05buskar     68 /* Prioriteit inmelding fase 05 Bus                                   */
    #define hpriouit05buskar    69 /* Prioriteit uitmelding 05 Bus                                       */
    #define hprio08bus          70 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08bus        71 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08bus       72 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08buskar     73 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08buskar    74 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio09bus          75 /* Bijhouden actief zijn prioriteit fase 09                           */
    #define hprioin09bus        76 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09bus       77 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprioin09buskar     78 /* Prioriteit inmelding fase 09 Bus                                   */
    #define hpriouit09buskar    79 /* Prioriteit uitmelding 09 Bus                                       */
    #define hprio11bus          80 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11bus        81 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11bus       82 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11buskar     83 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11buskar    84 /* Prioriteit uitmelding 11 Bus                                       */
    #define hhd02               85 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02             86 /* HD inmelding 02                                                    */
    #define hhduit02            87 /* HD uitmelding 02                                                   */
    #define hhdin02kar          88 /* HD inmelding 02                                                    */
    #define hhduit02kar         89 /* HD uitmelding 02                                                   */
    #define hhd03               90 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03             91 /* HD inmelding 03                                                    */
    #define hhduit03            92 /* HD uitmelding 03                                                   */
    #define hhdin03kar          93 /* HD inmelding 03                                                    */
    #define hhduit03kar         94 /* HD uitmelding 03                                                   */
    #define hhd05               95 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05             96 /* HD inmelding 05                                                    */
    #define hhduit05            97 /* HD uitmelding 05                                                   */
    #define hhdin05kar          98 /* HD inmelding 05                                                    */
    #define hhduit05kar         99 /* HD uitmelding 05                                                   */
    #define hhdin05ris         100 /* HD inmelding 05                                                    */
    #define hhduit05ris        101 /* HD uitmelding 05                                                   */
    #define hhd08              102 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08            103 /* HD inmelding 08                                                    */
    #define hhduit08           104 /* HD uitmelding 08                                                   */
    #define hhdin08kar         105 /* HD inmelding 08                                                    */
    #define hhduit08kar        106 /* HD uitmelding 08                                                   */
    #define hhdin08ris         107 /* HD inmelding 08                                                    */
    #define hhduit08ris        108 /* HD uitmelding 08                                                   */
    #define hhd09              109 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09            110 /* HD inmelding 09                                                    */
    #define hhduit09           111 /* HD uitmelding 09                                                   */
    #define hhdin09kar         112 /* HD inmelding 09                                                    */
    #define hhduit09kar        113 /* HD uitmelding 09                                                   */
    #define hhdin09ris         114 /* HD inmelding 09                                                    */
    #define hhduit09ris        115 /* HD uitmelding 09                                                   */
    #define hhd11              116 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11            117 /* HD inmelding 11                                                    */
    #define hhduit11           118 /* HD uitmelding 11                                                   */
    #define hhdin11kar         119 /* HD inmelding 11                                                    */
    #define hhduit11kar        120 /* HD uitmelding 11                                                   */
    #define hhdin11ris         121 /* HD inmelding 11                                                    */
    #define hhduit11ris        122 /* HD uitmelding 11                                                   */
    #define hhd61              123 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61            124 /* HD inmelding 61                                                    */
    #define hhduit61           125 /* HD uitmelding 61                                                   */
    #define hhdin61kar         126 /* HD inmelding 61                                                    */
    #define hhduit61kar        127 /* HD uitmelding 61                                                   */
    #define hhdin61ris         128 /* HD inmelding 61                                                    */
    #define hhduit61ris        129 /* HD uitmelding 61                                                   */
    #define hhd62              130 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62            131 /* HD inmelding 62                                                    */
    #define hhduit62           132 /* HD uitmelding 62                                                   */
    #define hhdin62kar         133 /* HD inmelding 62                                                    */
    #define hhduit62kar        134 /* HD uitmelding 62                                                   */
    #define hhdin62ris         135 /* HD inmelding 62                                                    */
    #define hhduit62ris        136 /* HD uitmelding 62                                                   */
    #define hhd67              137 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67            138 /* HD inmelding 67                                                    */
    #define hhduit67           139 /* HD uitmelding 67                                                   */
    #define hhdin67kar         140 /* HD inmelding 67                                                    */
    #define hhduit67kar        141 /* HD uitmelding 67                                                   */
    #define hhdin67ris         142 /* HD inmelding 67                                                    */
    #define hhduit67ris        143 /* HD uitmelding 67                                                   */
    #define hhd68              144 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68            145 /* HD inmelding 68                                                    */
    #define hhduit68           146 /* HD uitmelding 68                                                   */
    #define hhdin68kar         147 /* HD inmelding 68                                                    */
    #define hhduit68kar        148 /* HD uitmelding 68                                                   */
    #define hhdin68ris         149 /* HD inmelding 68                                                    */
    #define hhduit68ris        150 /* HD uitmelding 68                                                   */
    #define hperiodFietsprio1  151 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2  152 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3  153 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2    154 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hrgvact            155 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02          156 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03          157 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05          158 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08          159 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal09          160 /* Bijhouden primaire realisatie fase 09                              */
    #define hprreal11          161 /* Bijhouden primaire realisatie fase 11                              */
    #define hwtv21             162 /* Onthouden aansturing wachttijdvoorspeller fase 21                  */
    #define hwtv22             163 /* Onthouden aansturing wachttijdvoorspeller fase 22                  */
    #define hwtv24             164 /* Onthouden aansturing wachttijdvoorspeller fase 24                  */
    #define hwtv26             165 /* Onthouden aansturing wachttijdvoorspeller fase 26                  */
    #define hwtv28             166 /* Onthouden aansturing wachttijdvoorspeller fase 28                  */
    #define hwtv81             167 /* Onthouden aansturing wachttijdvoorspeller fase 81                  */
    #define hwtv82             168 /* Onthouden aansturing wachttijdvoorspeller fase 82                  */
    #define hwtv84             169 /* Onthouden aansturing wachttijdvoorspeller fase 84                  */
    #define hlos31             170 /* Toestaan los realiseren fase 31                                    */
    #define hlos32             171 /* Toestaan los realiseren fase 32                                    */
    #define hlos33             172 /* Toestaan los realiseren fase 33                                    */
    #define hlos34             173 /* Toestaan los realiseren fase 34                                    */
    #define HEMAX1             174

/* geheugen elementen */
/* ------------------ */
    #define mperiod     0 /* Onthouden actieve periode                                                   */
    #define mlcycl      1 /* Onthouden laatste cyclustijd                                                */
    #define mmk03       2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 03                */
    #define mmk05       3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 05                */
    #define mmk08       4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08                */
    #define mmk09       5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 09                */
    #define mmk11       6 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11                */
    #define mmk61       7 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 61                */
    #define mmk62       8 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62                */
    #define mmk67       9 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 67                */
    #define mmk68      10 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68                */
    #define mfilemem08 11 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 08 */
    #define mfilemem11 12 /* Onthouden file melding tijdens niet meeverlenggroen voor te doseren fase 11 */
    #define mstp02bus  13 /* Stiptheid voorste OV voertuig bij 02 Bus                                    */
    #define mstp03bus  14 /* Stiptheid voorste OV voertuig bij 03 Bus                                    */
    #define mstp05bus  15 /* Stiptheid voorste OV voertuig bij 05 Bus                                    */
    #define mstp08bus  16 /* Stiptheid voorste OV voertuig bij 08 Bus                                    */
    #define mstp09bus  17 /* Stiptheid voorste OV voertuig bij 09 Bus                                    */
    #define mstp11bus  18 /* Stiptheid voorste OV voertuig bij 11 Bus                                    */
    #define mwtv21     19 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 21                  */
    #define mwtvm21    20 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 21                 */
    #define mwtv22     21 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 22                  */
    #define mwtvm22    22 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 22                 */
    #define mwtv24     23 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 24                  */
    #define mwtvm24    24 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 24                 */
    #define mwtv26     25 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 26                  */
    #define mwtvm26    26 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 26                 */
    #define mwtv28     27 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 28                  */
    #define mwtvm28    28 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 28                 */
    #define mwtv81     29 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 81                  */
    #define mwtvm81    30 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 81                 */
    #define mwtv82     31 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 82                  */
    #define mwtvm82    32 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 82                 */
    #define mwtv84     33 /* Onthouden aantal actieve LEDs wachttijdvoorspeller fase 84                  */
    #define mwtvm84    34 /* Aansturing aantal actieve LEDs wachttijdvoorspeller fase 84                 */
    #define mar02      35 /* Alternatieve ruimte fase 02                                                 */
    #define mar03      36 /* Alternatieve ruimte fase 03                                                 */
    #define mar05      37 /* Alternatieve ruimte fase 05                                                 */
    #define mar08      38 /* Alternatieve ruimte fase 08                                                 */
    #define mar09      39 /* Alternatieve ruimte fase 09                                                 */
    #define mar11      40 /* Alternatieve ruimte fase 11                                                 */
    #define mar21      41 /* Alternatieve ruimte fase 21                                                 */
    #define mar22      42 /* Alternatieve ruimte fase 22                                                 */
    #define mar24      43 /* Alternatieve ruimte fase 24                                                 */
    #define mar26      44 /* Alternatieve ruimte fase 26                                                 */
    #define mar28      45 /* Alternatieve ruimte fase 28                                                 */
    #define mar31      46 /* Alternatieve ruimte fase 31                                                 */
    #define mar32      47 /* Alternatieve ruimte fase 32                                                 */
    #define mar33      48 /* Alternatieve ruimte fase 33                                                 */
    #define mar34      49 /* Alternatieve ruimte fase 34                                                 */
    #define mar38      50 /* Alternatieve ruimte fase 38                                                 */
    #define mar61      51 /* Alternatieve ruimte fase 61                                                 */
    #define mar62      52 /* Alternatieve ruimte fase 62                                                 */
    #define mar67      53 /* Alternatieve ruimte fase 67                                                 */
    #define mar68      54 /* Alternatieve ruimte fase 68                                                 */
    #define mar81      55 /* Alternatieve ruimte fase 81                                                 */
    #define mar82      56 /* Alternatieve ruimte fase 82                                                 */
    #define mar84      57 /* Alternatieve ruimte fase 84                                                 */
    #define MEMAX1     58

/* tijd elementen */
/* -------------- */
    #define t08_1a_1                     0 /* Dynamische hiaattijden moment 1 voor detector 08_1a                      */
    #define t08_1a_2                     1 /* Dynamische hiaattijden moment 2 voor detector 08_1a                      */
    #define ttdh_08_1a_1                 2 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                         */
    #define ttdh_08_1a_2                 3 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                         */
    #define tmax_08_1a                   4 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a               */
    #define t08_1b_1                     5 /* Dynamische hiaattijden moment 1 voor detector 08_1b                      */
    #define t08_1b_2                     6 /* Dynamische hiaattijden moment 2 voor detector 08_1b                      */
    #define ttdh_08_1b_1                 7 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                         */
    #define ttdh_08_1b_2                 8 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                         */
    #define tmax_08_1b                   9 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b               */
    #define t08_2a_1                    10 /* Dynamische hiaattijden moment 1 voor detector 08_2a                      */
    #define t08_2a_2                    11 /* Dynamische hiaattijden moment 2 voor detector 08_2a                      */
    #define ttdh_08_2a_1                12 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                         */
    #define ttdh_08_2a_2                13 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                         */
    #define tmax_08_2a                  14 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a               */
    #define t08_2b_1                    15 /* Dynamische hiaattijden moment 1 voor detector 08_2b                      */
    #define t08_2b_2                    16 /* Dynamische hiaattijden moment 2 voor detector 08_2b                      */
    #define ttdh_08_2b_1                17 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                         */
    #define ttdh_08_2b_2                18 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                         */
    #define tmax_08_2b                  19 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b               */
    #define t08_3a_1                    20 /* Dynamische hiaattijden moment 1 voor detector 08_3a                      */
    #define t08_3a_2                    21 /* Dynamische hiaattijden moment 2 voor detector 08_3a                      */
    #define ttdh_08_3a_1                22 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                         */
    #define ttdh_08_3a_2                23 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                         */
    #define tmax_08_3a                  24 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a               */
    #define t08_3b_1                    25 /* Dynamische hiaattijden moment 1 voor detector 08_3b                      */
    #define t08_3b_2                    26 /* Dynamische hiaattijden moment 2 voor detector 08_3b                      */
    #define ttdh_08_3b_1                27 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                         */
    #define ttdh_08_3b_2                28 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                         */
    #define tmax_08_3b                  29 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b               */
    #define t08_4a_1                    30 /* Dynamische hiaattijden moment 1 voor detector 08_4a                      */
    #define t08_4a_2                    31 /* Dynamische hiaattijden moment 2 voor detector 08_4a                      */
    #define ttdh_08_4a_1                32 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                         */
    #define ttdh_08_4a_2                33 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                         */
    #define tmax_08_4a                  34 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a               */
    #define t08_4b_1                    35 /* Dynamische hiaattijden moment 1 voor detector 08_4b                      */
    #define t08_4b_2                    36 /* Dynamische hiaattijden moment 2 voor detector 08_4b                      */
    #define ttdh_08_4b_1                37 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                         */
    #define ttdh_08_4b_2                38 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                         */
    #define tmax_08_4b                  39 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b               */
    #define t09_1_1                     40 /* Dynamische hiaattijden moment 1 voor detector 09_1                       */
    #define t09_1_2                     41 /* Dynamische hiaattijden moment 2 voor detector 09_1                       */
    #define ttdh_09_1_1                 42 /* Dynamische hiaattijden TDH 1 voor detector 09_1                          */
    #define ttdh_09_1_2                 43 /* Dynamische hiaattijden TDH 2 voor detector 09_1                          */
    #define tmax_09_1                   44 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1                */
    #define t09_2_1                     45 /* Dynamische hiaattijden moment 1 voor detector 09_2                       */
    #define t09_2_2                     46 /* Dynamische hiaattijden moment 2 voor detector 09_2                       */
    #define ttdh_09_2_1                 47 /* Dynamische hiaattijden TDH 1 voor detector 09_2                          */
    #define ttdh_09_2_2                 48 /* Dynamische hiaattijden TDH 2 voor detector 09_2                          */
    #define tmax_09_2                   49 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2                */
    #define t09_3_1                     50 /* Dynamische hiaattijden moment 1 voor detector 09_3                       */
    #define t09_3_2                     51 /* Dynamische hiaattijden moment 2 voor detector 09_3                       */
    #define ttdh_09_3_1                 52 /* Dynamische hiaattijden TDH 1 voor detector 09_3                          */
    #define ttdh_09_3_2                 53 /* Dynamische hiaattijden TDH 2 voor detector 09_3                          */
    #define tmax_09_3                   54 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3                */
    #define t11_1_1                     55 /* Dynamische hiaattijden moment 1 voor detector 11_1                       */
    #define t11_1_2                     56 /* Dynamische hiaattijden moment 2 voor detector 11_1                       */
    #define ttdh_11_1_1                 57 /* Dynamische hiaattijden TDH 1 voor detector 11_1                          */
    #define ttdh_11_1_2                 58 /* Dynamische hiaattijden TDH 2 voor detector 11_1                          */
    #define tmax_11_1                   59 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1                */
    #define t11_2_1                     60 /* Dynamische hiaattijden moment 1 voor detector 11_2                       */
    #define t11_2_2                     61 /* Dynamische hiaattijden moment 2 voor detector 11_2                       */
    #define ttdh_11_2_1                 62 /* Dynamische hiaattijden TDH 1 voor detector 11_2                          */
    #define ttdh_11_2_2                 63 /* Dynamische hiaattijden TDH 2 voor detector 11_2                          */
    #define tmax_11_2                   64 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2                */
    #define t11_3_1                     65 /* Dynamische hiaattijden moment 1 voor detector 11_3                       */
    #define t11_3_2                     66 /* Dynamische hiaattijden moment 2 voor detector 11_3                       */
    #define ttdh_11_3_1                 67 /* Dynamische hiaattijden TDH 1 voor detector 11_3                          */
    #define ttdh_11_3_2                 68 /* Dynamische hiaattijden TDH 2 voor detector 11_3                          */
    #define tmax_11_3                   69 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3                */
    #define t11_4_1                     70 /* Dynamische hiaattijden moment 1 voor detector 11_4                       */
    #define t11_4_2                     71 /* Dynamische hiaattijden moment 2 voor detector 11_4                       */
    #define ttdh_11_4_1                 72 /* Dynamische hiaattijden TDH 1 voor detector 11_4                          */
    #define ttdh_11_4_2                 73 /* Dynamische hiaattijden TDH 2 voor detector 11_4                          */
    #define tmax_11_4                   74 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4                */
    #define tcycl                       75 /* Bijhouden actuele cyclustijd                                             */
    #define tav28_2                     76 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag                  */
    #define tkm02                       77 /* Kop maximum voor detector 02                                             */
    #define tkm03                       78 /* Kop maximum voor detector 03                                             */
    #define tkm05                       79 /* Kop maximum voor detector 05                                             */
    #define tkm08                       80 /* Kop maximum voor detector 08                                             */
    #define tkm09                       81 /* Kop maximum voor detector 09                                             */
    #define tkm11                       82 /* Kop maximum voor detector 11                                             */
    #define tkm21                       83 /* Kop maximum voor detector 21                                             */
    #define tkm22                       84 /* Kop maximum voor detector 22                                             */
    #define tkm24                       85 /* Kop maximum voor detector 24                                             */
    #define tkm26                       86 /* Kop maximum voor detector 26                                             */
    #define tkm28                       87 /* Kop maximum voor detector 28                                             */
    #define tkm61                       88 /* Kop maximum voor detector 61                                             */
    #define tkm62                       89 /* Kop maximum voor detector 62                                             */
    #define tkm67                       90 /* Kop maximum voor detector 67                                             */
    #define tkm68                       91 /* Kop maximum voor detector 68                                             */
    #define tkm81                       92 /* Kop maximum voor detector 81                                             */
    #define tkm82                       93 /* Kop maximum voor detector 82                                             */
    #define tkm84                       94 /* Kop maximum voor detector 84                                             */
    #define thdvd02_1a                  95 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a               */
    #define thdvd02_1b                  96 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b               */
    #define tdstvert02                  97 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02      */
    #define thdvd03_1                   98 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1                */
    #define tdstvert03                  99 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03      */
    #define thdvd05_1                  100 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1                */
    #define tdstvert05                 101 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05      */
    #define thdvd08_1a                 102 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a               */
    #define thdvd08_1b                 103 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b               */
    #define tdstvert08                 104 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08      */
    #define thdvd09_1                  105 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1                */
    #define tdstvert09                 106 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09      */
    #define thdvd11_1                  107 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1                */
    #define tdstvert11                 108 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11      */
    #define tdstvert21                 109 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21      */
    #define thdvd22_1                  110 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1                */
    #define tdstvert22                 111 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22      */
    #define thdvd24_1                  112 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1                */
    #define tdstvert24                 113 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24      */
    #define tdstvert26                 114 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26      */
    #define thdvd28_1                  115 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1                */
    #define tdstvert28                 116 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28      */
    #define tdstvert31                 117 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31      */
    #define tdstvert32                 118 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32      */
    #define tdstvert33                 119 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33      */
    #define tdstvert34                 120 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34      */
    #define tdstvert38                 121 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38      */
    #define thdvd61_1                  122 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1                */
    #define tdstvert61                 123 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61      */
    #define thdvd62_1a                 124 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a               */
    #define thdvd62_1b                 125 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b               */
    #define tdstvert62                 126 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62      */
    #define thdvd67_1                  127 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1                */
    #define tdstvert67                 128 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67      */
    #define thdvd68_1a                 129 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a               */
    #define thdvd68_1b                 130 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b               */
    #define tdstvert68                 131 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68      */
    #define tdstvert81                 132 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81      */
    #define tdstvert82                 133 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82      */
    #define thdvd84_1                  134 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1                */
    #define tdstvert84                 135 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84      */
    #define tafvFile68af               136 /* Afval vertraging file File68af                                           */
    #define tafv68_9a                  137 /* Afval vertraging file 68_9a                                              */
    #define tbz68_9a                   138 /* Bezettijd file detector 68_9a                                            */
    #define trij68_9a                  139 /* Rijtijd file detector 68_9a                                              */
    #define tafv68_9b                  140 /* Afval vertraging file 68_9b                                              */
    #define tbz68_9b                   141 /* Bezettijd file detector 68_9b                                            */
    #define trij68_9b                  142 /* Rijtijd file detector 68_9b                                              */
    #define tafkmingroen08fileFile68af 143 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep    */
    #define tafkmingroen11fileFile68af 144 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep    */
    #define tminrood08fileFile68af     145 /* Minimale roodtijd bij fase 08 voor file ingreep                          */
    #define tminrood11fileFile68af     146 /* Minimale roodtijd bij fase 11 voor file ingreep                          */
    #define tmaxgroen08fileFile68af    147 /* Maximale groentijd bij fase 08 voor file ingreep                         */
    #define tmaxgroen11fileFile68af    148 /* Maximale groentijd bij fase 11 voor file ingreep                         */
    #define tnlfg0262                  149 /* Naloop tijdens vastgroen van 02 naar 62                                  */
    #define tnlfgd0262                 150 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62             */
    #define tnleg0262                  151 /* Naloop op einde groen van 02 naar 62                                     */
    #define tnlegd0262                 152 /* Detectieafhankelijke naloop op einde groen van 02 naar 62                */
    #define tvgnaloop0262              153 /* Timer naloop EG van 02 naar 62                                           */
    #define tnlfg0868                  154 /* Naloop tijdens vastgroen van 08 naar 68                                  */
    #define tnlfgd0868                 155 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68             */
    #define tnleg0868                  156 /* Naloop op einde groen van 08 naar 68                                     */
    #define tnlegd0868                 157 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                */
    #define tvgnaloop0868              158 /* Timer naloop EG van 08 naar 68                                           */
    #define tnlfg1168                  159 /* Naloop tijdens vastgroen van 11 naar 68                                  */
    #define tnlfgd1168                 160 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68             */
    #define tnleg1168                  161 /* Naloop op einde groen van 11 naar 68                                     */
    #define tnlegd1168                 162 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                */
    #define tvgnaloop1168              163 /* Timer naloop EG van 11 naar 68                                           */
    #define tnlfg2221                  164 /* Naloop tijdens vastgroen van 22 naar 21                                  */
    #define tnlfgd2221                 165 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21             */
    #define tnlcv2221                  166 /* Naloop tijdens cyclisch verlenggroen van 22 naar 21                      */
    #define tnlcvd2221                 167 /* Detectieafhankelijke naloop tijdens cyclisch verlenggroen van 22 naar 21 */
    #define tvgnaloop2221              168 /* Timer naloop EG van 22 naar 21                                           */
    #define tnlsgd3132                 169 /* Detectieafhankelijke naloop op start groen van 31 naar 32                */
    #define tnlsgd3231                 170 /* Detectieafhankelijke naloop op start groen van 32 naar 31                */
    #define tnlsgd3334                 171 /* Detectieafhankelijke naloop op start groen van 33 naar 34                */
    #define tnlsgd3433                 172 /* Detectieafhankelijke naloop op start groen van 34 naar 33                */
    #define tnlfg8281                  173 /* Naloop tijdens vastgroen van 82 naar 81                                  */
    #define tnlfgd8281                 174 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81             */
    #define tnleg8281                  175 /* Naloop op einde groen van 82 naar 81                                     */
    #define tnlegd8281                 176 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                */
    #define tvgnaloop8281              177 /* Timer naloop EG van 82 naar 81                                           */
    #define tkarmelding                178 /* Duur verklikking ontvangst melding KAR                                   */
    #define tkarog                     179 /* Ondergedrag KAR                                                          */
    #define tbtovg02bus                180 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                    */
    #define trt02bus                   181 /* Actuele rijtijd prio fase 02                                             */
    #define tgb02bus                   182 /* Groenbewaking prioriteit fase 02                                         */
    #define tblk02bus                  183 /* Blokkeertijd na prioriteitsingreep fase 02                               */
    #define tbtovg03bus                184 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                    */
    #define trt03bus                   185 /* Actuele rijtijd prio fase 03                                             */
    #define tgb03bus                   186 /* Groenbewaking prioriteit fase 03                                         */
    #define tblk03bus                  187 /* Blokkeertijd na prioriteitsingreep fase 03                               */
    #define tbtovg05bus                188 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                    */
    #define trt05bus                   189 /* Actuele rijtijd prio fase 05                                             */
    #define tgb05bus                   190 /* Groenbewaking prioriteit fase 05                                         */
    #define tblk05bus                  191 /* Blokkeertijd na prioriteitsingreep fase 05                               */
    #define tbtovg08bus                192 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                    */
    #define trt08bus                   193 /* Actuele rijtijd prio fase 08                                             */
    #define tgb08bus                   194 /* Groenbewaking prioriteit fase 08                                         */
    #define tblk08bus                  195 /* Blokkeertijd na prioriteitsingreep fase 08                               */
    #define tbtovg09bus                196 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                    */
    #define trt09bus                   197 /* Actuele rijtijd prio fase 09                                             */
    #define tgb09bus                   198 /* Groenbewaking prioriteit fase 09                                         */
    #define tblk09bus                  199 /* Blokkeertijd na prioriteitsingreep fase 09                               */
    #define tbtovg11bus                200 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                    */
    #define trt11bus                   201 /* Actuele rijtijd prio fase 11                                             */
    #define tgb11bus                   202 /* Groenbewaking prioriteit fase 11                                         */
    #define tblk11bus                  203 /* Blokkeertijd na prioriteitsingreep fase 11                               */
    #define tgbhd02                    204 /* Groenbewaking HD fase 02                                                 */
    #define trthd02                    205 /* Actuele rijtijd HD fase 02                                               */
    #define tbtovg02hd                 206 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                    */
    #define thdin02kar                 207 /* Anti jutter tijd inmelden HD 02 KAR                                      */
    #define thduit02kar                208 /* Anti jutter tijd uitmelden HD 02                                         */
    #define tgbhd03                    209 /* Groenbewaking HD fase 03                                                 */
    #define trthd03                    210 /* Actuele rijtijd HD fase 03                                               */
    #define tbtovg03hd                 211 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                    */
    #define thdin03kar                 212 /* Anti jutter tijd inmelden HD 03 KAR                                      */
    #define thduit03kar                213 /* Anti jutter tijd uitmelden HD 03                                         */
    #define tgbhd05                    214 /* Groenbewaking HD fase 05                                                 */
    #define trthd05                    215 /* Actuele rijtijd HD fase 05                                               */
    #define tbtovg05hd                 216 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                    */
    #define thdin05kar                 217 /* Anti jutter tijd inmelden HD 05 KAR                                      */
    #define thduit05kar                218 /* Anti jutter tijd uitmelden HD 05                                         */
    #define tgbhd08                    219 /* Groenbewaking HD fase 08                                                 */
    #define trthd08                    220 /* Actuele rijtijd HD fase 08                                               */
    #define tbtovg08hd                 221 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                    */
    #define thdin08kar                 222 /* Anti jutter tijd inmelden HD 08 KAR                                      */
    #define thduit08kar                223 /* Anti jutter tijd uitmelden HD 08                                         */
    #define tgbhd09                    224 /* Groenbewaking HD fase 09                                                 */
    #define trthd09                    225 /* Actuele rijtijd HD fase 09                                               */
    #define tbtovg09hd                 226 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                    */
    #define thdin09kar                 227 /* Anti jutter tijd inmelden HD 09 KAR                                      */
    #define thduit09kar                228 /* Anti jutter tijd uitmelden HD 09                                         */
    #define tgbhd11                    229 /* Groenbewaking HD fase 11                                                 */
    #define trthd11                    230 /* Actuele rijtijd HD fase 11                                               */
    #define tbtovg11hd                 231 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                    */
    #define thdin11kar                 232 /* Anti jutter tijd inmelden HD 11 KAR                                      */
    #define thduit11kar                233 /* Anti jutter tijd uitmelden HD 11                                         */
    #define tgbhd61                    234 /* Groenbewaking HD fase 61                                                 */
    #define trthd61                    235 /* Actuele rijtijd HD fase 61                                               */
    #define tbtovg61hd                 236 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                    */
    #define thdin61kar                 237 /* Anti jutter tijd inmelden HD 61 KAR                                      */
    #define thduit61kar                238 /* Anti jutter tijd uitmelden HD 61                                         */
    #define tgbhd62                    239 /* Groenbewaking HD fase 62                                                 */
    #define trthd62                    240 /* Actuele rijtijd HD fase 62                                               */
    #define tbtovg62hd                 241 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                    */
    #define thdin62kar                 242 /* Anti jutter tijd inmelden HD 62 KAR                                      */
    #define thduit62kar                243 /* Anti jutter tijd uitmelden HD 62                                         */
    #define tgbhd67                    244 /* Groenbewaking HD fase 67                                                 */
    #define trthd67                    245 /* Actuele rijtijd HD fase 67                                               */
    #define tbtovg67hd                 246 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                    */
    #define thdin67kar                 247 /* Anti jutter tijd inmelden HD 67 KAR                                      */
    #define thduit67kar                248 /* Anti jutter tijd uitmelden HD 67                                         */
    #define tgbhd68                    249 /* Groenbewaking HD fase 68                                                 */
    #define trthd68                    250 /* Actuele rijtijd HD fase 68                                               */
    #define tbtovg68hd                 251 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                    */
    #define thdin68kar                 252 /* Anti jutter tijd inmelden HD 68 KAR                                      */
    #define thduit68kar                253 /* Anti jutter tijd uitmelden HD 68                                         */
    #define trgad24_3                  254 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2            */
    #define trgavd24_3                 255 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2        */
    #define trgrd24_3_d24_2            256 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2            */
    #define trgvd24_3_d24_2            257 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2          */
    #define tfd02_1a                   258 /* File meting RoBuGrover fase 02 detector 02_1a                            */
    #define tfd02_1b                   259 /* File meting RoBuGrover fase 02 detector 02_1b                            */
    #define thd02_2a                   260 /* RoBuGrover hiaat meting fase 02 detector 02_2a                           */
    #define thd02_2b                   261 /* RoBuGrover hiaat meting fase 02 detector 02_2b                           */
    #define thd02_3a                   262 /* RoBuGrover hiaat meting fase 02 detector 02_3a                           */
    #define thd02_3b                   263 /* RoBuGrover hiaat meting fase 02 detector 02_3b                           */
    #define tfd03_1                    264 /* File meting RoBuGrover fase 03 detector 03_1                             */
    #define thd03_2                    265 /* RoBuGrover hiaat meting fase 03 detector 03_2                            */
    #define tfd05_1                    266 /* File meting RoBuGrover fase 05 detector 05_1                             */
    #define thd05_2                    267 /* RoBuGrover hiaat meting fase 05 detector 05_2                            */
    #define tfd08_1a                   268 /* File meting RoBuGrover fase 08 detector 08_1a                            */
    #define tfd08_1b                   269 /* File meting RoBuGrover fase 08 detector 08_1b                            */
    #define thd08_2a                   270 /* RoBuGrover hiaat meting fase 08 detector 08_2a                           */
    #define thd08_2b                   271 /* RoBuGrover hiaat meting fase 08 detector 08_2b                           */
    #define thd08_3a                   272 /* RoBuGrover hiaat meting fase 08 detector 08_3a                           */
    #define thd08_3b                   273 /* RoBuGrover hiaat meting fase 08 detector 08_3b                           */
    #define tfd09_1                    274 /* File meting RoBuGrover fase 09 detector 09_1                             */
    #define thd09_2                    275 /* RoBuGrover hiaat meting fase 09 detector 09_2                            */
    #define tfd11_1                    276 /* File meting RoBuGrover fase 11 detector 11_1                             */
    #define thd11_2                    277 /* RoBuGrover hiaat meting fase 11 detector 11_2                            */
    #define thd11_3                    278 /* RoBuGrover hiaat meting fase 11 detector 11_3                            */
    #define tuitgestca02               279 /* Uitgestelde cyclische aanvraag fase 02                                   */
    #define tuitgestca03               280 /* Uitgestelde cyclische aanvraag fase 03                                   */
    #define tuitgestca05               281 /* Uitgestelde cyclische aanvraag fase 05                                   */
    #define tuitgestca08               282 /* Uitgestelde cyclische aanvraag fase 08                                   */
    #define tuitgestca09               283 /* Uitgestelde cyclische aanvraag fase 09                                   */
    #define tuitgestca11               284 /* Uitgestelde cyclische aanvraag fase 11                                   */
    #define tuitgestca21               285 /* Uitgestelde cyclische aanvraag fase 21                                   */
    #define tuitgestca22               286 /* Uitgestelde cyclische aanvraag fase 22                                   */
    #define tuitgestca24               287 /* Uitgestelde cyclische aanvraag fase 24                                   */
    #define tuitgestca26               288 /* Uitgestelde cyclische aanvraag fase 26                                   */
    #define tuitgestca28               289 /* Uitgestelde cyclische aanvraag fase 28                                   */
    #define tuitgestca31               290 /* Uitgestelde cyclische aanvraag fase 31                                   */
    #define tuitgestca32               291 /* Uitgestelde cyclische aanvraag fase 32                                   */
    #define tuitgestca33               292 /* Uitgestelde cyclische aanvraag fase 33                                   */
    #define tuitgestca34               293 /* Uitgestelde cyclische aanvraag fase 34                                   */
    #define tuitgestca38               294 /* Uitgestelde cyclische aanvraag fase 38                                   */
    #define tuitgestca61               295 /* Uitgestelde cyclische aanvraag fase 61                                   */
    #define tuitgestca62               296 /* Uitgestelde cyclische aanvraag fase 62                                   */
    #define tuitgestca67               297 /* Uitgestelde cyclische aanvraag fase 67                                   */
    #define tuitgestca68               298 /* Uitgestelde cyclische aanvraag fase 68                                   */
    #define tuitgestca81               299 /* Uitgestelde cyclische aanvraag fase 81                                   */
    #define tuitgestca82               300 /* Uitgestelde cyclische aanvraag fase 82                                   */
    #define tuitgestca84               301 /* Uitgestelde cyclische aanvraag fase 84                                   */
    #define twtv21                     302 /* T.b.v. aansturing wachttijdvoorspeller fase 21                           */
    #define twtv22                     303 /* T.b.v. aansturing wachttijdvoorspeller fase 22                           */
    #define twtv24                     304 /* T.b.v. aansturing wachttijdvoorspeller fase 24                           */
    #define twtv26                     305 /* T.b.v. aansturing wachttijdvoorspeller fase 26                           */
    #define twtv28                     306 /* T.b.v. aansturing wachttijdvoorspeller fase 28                           */
    #define twtv81                     307 /* T.b.v. aansturing wachttijdvoorspeller fase 81                           */
    #define twtv82                     308 /* T.b.v. aansturing wachttijdvoorspeller fase 82                           */
    #define twtv84                     309 /* T.b.v. aansturing wachttijdvoorspeller fase 84                           */
    #define tvs2205                    310 /* Voorstarttijd fase 22 op fase 05                                         */
    #define tfo0522                    311 /* Fictieve ontruimingstijd van 22 naar fase 05                             */
    #define tvs3205                    312 /* Voorstarttijd fase 32 op fase 05                                         */
    #define tfo0532                    313 /* Fictieve ontruimingstijd van 32 naar fase 05                             */
    #define tlr2611                    314 /* Late release tijd fase 26 naar fase 11                                   */
    #define tfo2611                    315 /* Fictieve ontruimingstijd van 26 naar fase 11                             */
    #define tinl3132                   316 /* Inlooptijd fase 31                                                       */
    #define tinl3231                   317 /* Inlooptijd fase 32                                                       */
    #define tinl3334                   318 /* Inlooptijd fase 33                                                       */
    #define tinl3433                   319 /* Inlooptijd fase 34                                                       */
    #define txnl0262                   320 /* Tegenhouden fase 02 tbv naloop naar fase 62                              */
    #define txnl0868                   321 /* Tegenhouden fase 08 tbv naloop naar fase 68                              */
    #define txnl1168                   322 /* Tegenhouden fase 11 tbv naloop naar fase 68                              */
    #define txnl2221                   323 /* Tegenhouden fase 22 tbv naloop naar fase 21                              */
    #define txnl3132                   324 /* Tegenhouden fase 31 tbv naloop naar fase 32                              */
    #define txnl3231                   325 /* Tegenhouden fase 32 tbv naloop naar fase 31                              */
    #define txnl3334                   326 /* Tegenhouden fase 33 tbv naloop naar fase 34                              */
    #define txnl3433                   327 /* Tegenhouden fase 34 tbv naloop naar fase 33                              */
    #define txnl8281                   328 /* Tegenhouden fase 82 tbv naloop naar fase 81                              */
    #define TMMAX1                     329

/* teller elementen */
/* ---------------- */
    #define cvc02bus  0 /* Bijhouden prio inmeldingen fase 02 type Bus */
    #define cvc03bus  1 /* Bijhouden prio inmeldingen fase 03 type Bus */
    #define cvc05bus  2 /* Bijhouden prio inmeldingen fase 05 type Bus */
    #define cvc08bus  3 /* Bijhouden prio inmeldingen fase 08 type Bus */
    #define cvc09bus  4 /* Bijhouden prio inmeldingen fase 09 type Bus */
    #define cvc11bus  5 /* Bijhouden prio inmeldingen fase 11 type Bus */
    #define cvchd02   6 /* Bijhouden prio inmeldingen fase 02          */
    #define cvchd03   7 /* Bijhouden prio inmeldingen fase 03          */
    #define cvchd05   8 /* Bijhouden prio inmeldingen fase 05          */
    #define cvchd08   9 /* Bijhouden prio inmeldingen fase 08          */
    #define cvchd09  10 /* Bijhouden prio inmeldingen fase 09          */
    #define cvchd11  11 /* Bijhouden prio inmeldingen fase 11          */
    #define cvchd61  12 /* Bijhouden prio inmeldingen fase 61          */
    #define cvchd62  13 /* Bijhouden prio inmeldingen fase 62          */
    #define cvchd67  14 /* Bijhouden prio inmeldingen fase 67          */
    #define cvchd68  15 /* Bijhouden prio inmeldingen fase 68          */
    #define CTMAX1   16

/* schakelaars */
/* ----------- */
    #define schdynhiaat08              0 /* Toepassen dynamsich hiaat bij fase 08                          */
    #define schopdrempelen08           1 /* Opdrempelen toepassen voor fase 08                             */
    #define schedkop_08                2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus */
    #define schdynhiaat09              3 /* Toepassen dynamsich hiaat bij fase 09                          */
    #define schopdrempelen09           4 /* Opdrempelen toepassen voor fase 09                             */
    #define schedkop_09                5 /* Start timers dynamische hiaat fase 09 op einde detectie koplus */
    #define schdynhiaat11              6 /* Toepassen dynamsich hiaat bij fase 11                          */
    #define schopdrempelen11           7 /* Opdrempelen toepassen voor fase 11                             */
    #define schedkop_11                8 /* Start timers dynamische hiaat fase 11 op einde detectie koplus */
    #define schcycl                    9 /* Bijhouden actuele cyclustijd aan of uit                        */
    #define schcycl_reset             10 /* Reset meting cyclustijd                                        */
    #define schdvakd02_1a             11 /* Aanvraag fase 02 bij storing op detector 02_1a                 */
    #define schdvakd02_1b             12 /* Aanvraag fase 02 bij storing op detector 02_1b                 */
    #define schdvakd03_1              13 /* Aanvraag fase 03 bij storing op detector 03_1                  */
    #define schdvakdk31a              14 /* Aanvraag fase 31 bij storing op detector k31a                  */
    #define schdvakdk31b              15 /* Aanvraag fase 31 bij storing op detector k31b                  */
    #define schfileFile68af           16 /* File ingreep File68af toepassen                                */
    #define schfiledoserenFile68af    17 /* Toepassen doseerpercentages voor fileingreep File68af          */
    #define schfileFile68afparstrook  18 /* Parallele file meldingen per strook file ingreep File68af      */
    #define schbmfix                  19 /* Bijkomen tijdens fixatie mogelijk                              */
    #define schgs2484                 20 /* Schakelbare gelijkstart van 84 naar 24                         */
    #define schma0262                 21 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521                 22 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522                 23 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532                 24 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868                 25 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126                 26 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma1168                 27 /* Meeaanvraag van 11 naar 68 actief                              */
    #define schma2221                 28 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma3122                 29 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                 30 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                 31 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                 32 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                 33 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                 34 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                 35 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                 36 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                 37 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                 38 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                 39 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                   40 /* Meeverlengen fase 02                                           */
    #define schmv03                   41 /* Meeverlengen fase 03                                           */
    #define schmv05                   42 /* Meeverlengen fase 05                                           */
    #define schmv08                   43 /* Meeverlengen fase 08                                           */
    #define schmv09                   44 /* Meeverlengen fase 09                                           */
    #define schmv11                   45 /* Meeverlengen fase 11                                           */
    #define schmv21                   46 /* Meeverlengen fase 21                                           */
    #define schmv22                   47 /* Meeverlengen fase 22                                           */
    #define schhardmv2205             48 /* Hard meeverlengen fase 22 met fase 05                          */
    #define schmv24                   49 /* Meeverlengen fase 24                                           */
    #define schmv26                   50 /* Meeverlengen fase 26                                           */
    #define schhardmv2611             51 /* Hard meeverlengen fase 26 met fase 11                          */
    #define schmv28                   52 /* Meeverlengen fase 28                                           */
    #define schmv31                   53 /* Meeverlengen fase 31                                           */
    #define schmv32                   54 /* Meeverlengen fase 32                                           */
    #define schhardmv3205             55 /* Hard meeverlengen fase 32 met fase 05                          */
    #define schmv33                   56 /* Meeverlengen fase 33                                           */
    #define schmv34                   57 /* Meeverlengen fase 34                                           */
    #define schmv38                   58 /* Meeverlengen fase 38                                           */
    #define schmv61                   59 /* Meeverlengen fase 61                                           */
    #define schmv62                   60 /* Meeverlengen fase 62                                           */
    #define schmv67                   61 /* Meeverlengen fase 67                                           */
    #define schmv68                   62 /* Meeverlengen fase 68                                           */
    #define schmv81                   63 /* Meeverlengen fase 81                                           */
    #define schmv82                   64 /* Meeverlengen fase 82                                           */
    #define schmv84                   65 /* Meeverlengen fase 84                                           */
    #define schmlprm                  66 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus           67 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus           68 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus           69 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus           70 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus           71 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus           72 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schcheckdstype            73 /* Check type DSI bericht bij VECOM                               */
    #define schprioin02buskar         74 /* Inmelden 02 via Bus toestaan                                   */
    #define schpriouit02buskar        75 /* Uitmelden 02 via Bus toestaan                                  */
    #define schupinagb02bus           76 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02  */
    #define schprioin03buskar         77 /* Inmelden 03 via Bus toestaan                                   */
    #define schpriouit03buskar        78 /* Uitmelden 03 via Bus toestaan                                  */
    #define schupinagb03bus           79 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 03  */
    #define schprioin05buskar         80 /* Inmelden 05 via Bus toestaan                                   */
    #define schpriouit05buskar        81 /* Uitmelden 05 via Bus toestaan                                  */
    #define schupinagb05bus           82 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 05  */
    #define schprioin08buskar         83 /* Inmelden 08 via Bus toestaan                                   */
    #define schpriouit08buskar        84 /* Uitmelden 08 via Bus toestaan                                  */
    #define schupinagb08bus           85 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08  */
    #define schprioin09buskar         86 /* Inmelden 09 via Bus toestaan                                   */
    #define schpriouit09buskar        87 /* Uitmelden 09 via Bus toestaan                                  */
    #define schupinagb09bus           88 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 09  */
    #define schprioin11buskar         89 /* Inmelden 11 via Bus toestaan                                   */
    #define schpriouit11buskar        90 /* Uitmelden 11 via Bus toestaan                                  */
    #define schupinagb11bus           91 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11  */
    #define schupinagbhd02            92 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02  */
    #define schhdin02kar              93 /* Inmelden 02 via KAR HD toestaan                                */
    #define schhduit02kar             94 /* Uitmelden 02 via KAR HD toestaan                               */
    #define schchecksirene02          95 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR         */
    #define schupinagbhd03            96 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03  */
    #define schhdin03kar              97 /* Inmelden 03 via KAR HD toestaan                                */
    #define schhduit03kar             98 /* Uitmelden 03 via KAR HD toestaan                               */
    #define schchecksirene03          99 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR         */
    #define schupinagbhd05           100 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05  */
    #define schhdin05kar             101 /* Inmelden 05 via KAR HD toestaan                                */
    #define schhduit05kar            102 /* Uitmelden 05 via KAR HD toestaan                               */
    #define schchecksirene05         103 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR         */
    #define schhdin05ris             104 /* Inmelden 05 via RIS HD toestaan                                */
    #define schhduit05ris            105 /* Uitmelden 05 via RIS HD toestaan                               */
    #define schupinagbhd08           106 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08  */
    #define schhdin08kar             107 /* Inmelden 08 via KAR HD toestaan                                */
    #define schhduit08kar            108 /* Uitmelden 08 via KAR HD toestaan                               */
    #define schchecksirene08         109 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR         */
    #define schhdin08ris             110 /* Inmelden 08 via RIS HD toestaan                                */
    #define schhduit08ris            111 /* Uitmelden 08 via RIS HD toestaan                               */
    #define schupinagbhd09           112 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09  */
    #define schhdin09kar             113 /* Inmelden 09 via KAR HD toestaan                                */
    #define schhduit09kar            114 /* Uitmelden 09 via KAR HD toestaan                               */
    #define schchecksirene09         115 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR         */
    #define schhdin09ris             116 /* Inmelden 09 via RIS HD toestaan                                */
    #define schhduit09ris            117 /* Uitmelden 09 via RIS HD toestaan                               */
    #define schupinagbhd11           118 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11  */
    #define schhdin11kar             119 /* Inmelden 11 via KAR HD toestaan                                */
    #define schhduit11kar            120 /* Uitmelden 11 via KAR HD toestaan                               */
    #define schchecksirene11         121 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR         */
    #define schhdin11ris             122 /* Inmelden 11 via RIS HD toestaan                                */
    #define schhduit11ris            123 /* Uitmelden 11 via RIS HD toestaan                               */
    #define schupinagbhd61           124 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61  */
    #define schhdin61kar             125 /* Inmelden 61 via KAR HD toestaan                                */
    #define schhduit61kar            126 /* Uitmelden 61 via KAR HD toestaan                               */
    #define schchecksirene61         127 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR         */
    #define schhdin61ris             128 /* Inmelden 61 via RIS HD toestaan                                */
    #define schhduit61ris            129 /* Uitmelden 61 via RIS HD toestaan                               */
    #define schupinagbhd62           130 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62  */
    #define schhdin62kar             131 /* Inmelden 62 via KAR HD toestaan                                */
    #define schhduit62kar            132 /* Uitmelden 62 via KAR HD toestaan                               */
    #define schchecksirene62         133 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR         */
    #define schhdin62ris             134 /* Inmelden 62 via RIS HD toestaan                                */
    #define schhduit62ris            135 /* Uitmelden 62 via RIS HD toestaan                               */
    #define schupinagbhd67           136 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67  */
    #define schhdin67kar             137 /* Inmelden 67 via KAR HD toestaan                                */
    #define schhduit67kar            138 /* Uitmelden 67 via KAR HD toestaan                               */
    #define schchecksirene67         139 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR         */
    #define schhdin67ris             140 /* Inmelden 67 via RIS HD toestaan                                */
    #define schhduit67ris            141 /* Uitmelden 67 via RIS HD toestaan                               */
    #define schupinagbhd68           142 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68  */
    #define schhdin68kar             143 /* Inmelden 68 via KAR HD toestaan                                */
    #define schhduit68kar            144 /* Uitmelden 68 via KAR HD toestaan                               */
    #define schchecksirene68         145 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR         */
    #define schhdin68ris             146 /* Inmelden 68 via RIS HD toestaan                                */
    #define schhduit68ris            147 /* Uitmelden 68 via RIS HD toestaan                               */
    #define schrgadd24_3             148 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schrgv                   149 /* RoBuGrover aan of uit                                          */
    #define schrgv_snel              150 /* RoBuGrover versneld ophogen of verlagen                        */
    #define schca02                  151 /* Cyclische aanvraag fase 02                                     */
    #define schca03                  152 /* Cyclische aanvraag fase 03                                     */
    #define schca05                  153 /* Cyclische aanvraag fase 05                                     */
    #define schca08                  154 /* Cyclische aanvraag fase 08                                     */
    #define schca09                  155 /* Cyclische aanvraag fase 09                                     */
    #define schca11                  156 /* Cyclische aanvraag fase 11                                     */
    #define schca21                  157 /* Cyclische aanvraag fase 21                                     */
    #define schca22                  158 /* Cyclische aanvraag fase 22                                     */
    #define schca24                  159 /* Cyclische aanvraag fase 24                                     */
    #define schca26                  160 /* Cyclische aanvraag fase 26                                     */
    #define schca28                  161 /* Cyclische aanvraag fase 28                                     */
    #define schca31                  162 /* Cyclische aanvraag fase 31                                     */
    #define schca32                  163 /* Cyclische aanvraag fase 32                                     */
    #define schca33                  164 /* Cyclische aanvraag fase 33                                     */
    #define schca34                  165 /* Cyclische aanvraag fase 34                                     */
    #define schca38                  166 /* Cyclische aanvraag fase 38                                     */
    #define schca61                  167 /* Cyclische aanvraag fase 61                                     */
    #define schca62                  168 /* Cyclische aanvraag fase 62                                     */
    #define schca67                  169 /* Cyclische aanvraag fase 67                                     */
    #define schca68                  170 /* Cyclische aanvraag fase 68                                     */
    #define schca81                  171 /* Cyclische aanvraag fase 81                                     */
    #define schca82                  172 /* Cyclische aanvraag fase 82                                     */
    #define schca84                  173 /* Cyclische aanvraag fase 84                                     */
    #define schaltg02                174 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                175 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                176 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                177 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                178 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                179 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                180 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg22                181 /* Alternatieve realisatie toestaan fase 22                       */
    #define schaltg2484              182 /* Alternatieve realisatie toestaan fasen 24, 84                  */
    #define schaltg26                183 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                184 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                185 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg32                186 /* Alternatieve realisatie toestaan fase 32                       */
    #define schaltg33                187 /* Alternatieve realisatie toestaan fase 33                       */
    #define schaltg34                188 /* Alternatieve realisatie toestaan fase 34                       */
    #define schaltg38                189 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                190 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                191 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                192 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                193 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg81                194 /* Alternatieve realisatie toestaan fase 81                       */
    #define schaltg82                195 /* Alternatieve realisatie toestaan fase 82                       */
    #define schwg02                  196 /* Wachtstand groen fase 02                                       */
    #define schwg03                  197 /* Wachtstand groen fase 03                                       */
    #define schwg05                  198 /* Wachtstand groen fase 05                                       */
    #define schwg08                  199 /* Wachtstand groen fase 08                                       */
    #define schwg09                  200 /* Wachtstand groen fase 09                                       */
    #define schwg11                  201 /* Wachtstand groen fase 11                                       */
    #define schwg21                  202 /* Wachtstand groen fase 21                                       */
    #define schwg22                  203 /* Wachtstand groen fase 22                                       */
    #define schwg24                  204 /* Wachtstand groen fase 24                                       */
    #define schwg26                  205 /* Wachtstand groen fase 26                                       */
    #define schwg28                  206 /* Wachtstand groen fase 28                                       */
    #define schwg31                  207 /* Wachtstand groen fase 31                                       */
    #define schwg32                  208 /* Wachtstand groen fase 32                                       */
    #define schwg33                  209 /* Wachtstand groen fase 33                                       */
    #define schwg34                  210 /* Wachtstand groen fase 34                                       */
    #define schwg38                  211 /* Wachtstand groen fase 38                                       */
    #define schwg61                  212 /* Wachtstand groen fase 61                                       */
    #define schwg62                  213 /* Wachtstand groen fase 62                                       */
    #define schwg67                  214 /* Wachtstand groen fase 67                                       */
    #define schwg68                  215 /* Wachtstand groen fase 68                                       */
    #define schwg81                  216 /* Wachtstand groen fase 81                                       */
    #define schwg82                  217 /* Wachtstand groen fase 82                                       */
    #define schwg84                  218 /* Wachtstand groen fase 84                                       */
    #define schwtv21                 219 /* Aansturing wachttijdvoorspeller fase 21 aan of uit             */
    #define schwtv22                 220 /* Aansturing wachttijdvoorspeller fase 22 aan of uit             */
    #define schwtv24                 221 /* Aansturing wachttijdvoorspeller fase 24 aan of uit             */
    #define schwtv26                 222 /* Aansturing wachttijdvoorspeller fase 26 aan of uit             */
    #define schwtv28                 223 /* Aansturing wachttijdvoorspeller fase 28 aan of uit             */
    #define schwtv81                 224 /* Aansturing wachttijdvoorspeller fase 81 aan of uit             */
    #define schwtv82                 225 /* Aansturing wachttijdvoorspeller fase 82 aan of uit             */
    #define schwtv84                 226 /* Aansturing wachttijdvoorspeller fase 84 aan of uit             */
    #define schwtvbusbijhd           227 /* Aansturing wachttijdvoorspeller BUS licht bij HD ingreep       */
    #define schlos31_1               228 /* Wel/niet toestaan losse realisatie 31                          */
    #define schlos31_2               229 /* Wel/niet toestaan losse realisatie 31                          */
    #define schlos32_1               230 /* Wel/niet toestaan losse realisatie 32                          */
    #define schlos32_2               231 /* Wel/niet toestaan losse realisatie 32                          */
    #define schlos33_1               232 /* Wel/niet toestaan losse realisatie 33                          */
    #define schlos33_2               233 /* Wel/niet toestaan losse realisatie 33                          */
    #define schlos34_1               234 /* Wel/niet toestaan losse realisatie 34                          */
    #define schlos34_2               235 /* Wel/niet toestaan losse realisatie 34                          */
    #define schsneld02_1a            236 /* Aanvraag snel voor detector 02_1a aan of uit                   */
    #define schsneld02_1b            237 /* Aanvraag snel voor detector 02_1b aan of uit                   */
    #define schsneld03_1             238 /* Aanvraag snel voor detector 03_1 aan of uit                    */
    #define schsneld05_1             239 /* Aanvraag snel voor detector 05_1 aan of uit                    */
    #define schsneld08_1a            240 /* Aanvraag snel voor detector 08_1a aan of uit                   */
    #define schsneld08_1b            241 /* Aanvraag snel voor detector 08_1b aan of uit                   */
    #define schsneld09_1             242 /* Aanvraag snel voor detector 09_1 aan of uit                    */
    #define schsneld11_1             243 /* Aanvraag snel voor detector 11_1 aan of uit                    */
    #define schsneld211              244 /* Aanvraag snel voor detector 211 aan of uit                     */
    #define schsneld22_1             245 /* Aanvraag snel voor detector 22_1 aan of uit                    */
    #define schsneld24_1             246 /* Aanvraag snel voor detector 24_1 aan of uit                    */
    #define schsneld261              247 /* Aanvraag snel voor detector 261 aan of uit                     */
    #define schsneld28_1             248 /* Aanvraag snel voor detector 28_1 aan of uit                    */
    #define schsneld61_1             249 /* Aanvraag snel voor detector 61_1 aan of uit                    */
    #define schsneld62_1a            250 /* Aanvraag snel voor detector 62_1a aan of uit                   */
    #define schsneld62_1b            251 /* Aanvraag snel voor detector 62_1b aan of uit                   */
    #define schsneld67_1             252 /* Aanvraag snel voor detector 67_1 aan of uit                    */
    #define schsneld68_1a            253 /* Aanvraag snel voor detector 68_1a aan of uit                   */
    #define schsneld68_1b            254 /* Aanvraag snel voor detector 68_1b aan of uit                   */
    #define schsneld81_1             255 /* Aanvraag snel voor detector 81_1 aan of uit                    */
    #define schsneld82_1             256 /* Aanvraag snel voor detector 82_1 aan of uit                    */
    #define schsneld84_1             257 /* Aanvraag snel voor detector 84_1 aan of uit                    */
    #define SCHMAX1                  258

/* parameters */
/* ---------- */
    #define prmspringverleng_08_1a   0 /* Dyn. hiaattij instelling voor det. 08_1a (via bitsturing)                                                                      */
    #define prmspringverleng_08_1b   1 /* Dyn. hiaattij instelling voor det. 08_1b (via bitsturing)                                                                      */
    #define prmspringverleng_08_2a   2 /* Dyn. hiaattij instelling voor det. 08_2a (via bitsturing)                                                                      */
    #define prmspringverleng_08_2b   3 /* Dyn. hiaattij instelling voor det. 08_2b (via bitsturing)                                                                      */
    #define prmspringverleng_08_3a   4 /* Dyn. hiaattij instelling voor det. 08_3a (via bitsturing)                                                                      */
    #define prmspringverleng_08_3b   5 /* Dyn. hiaattij instelling voor det. 08_3b (via bitsturing)                                                                      */
    #define prmspringverleng_08_4a   6 /* Dyn. hiaattij instelling voor det. 08_4a (via bitsturing)                                                                      */
    #define prmspringverleng_08_4b   7 /* Dyn. hiaattij instelling voor det. 08_4b (via bitsturing)                                                                      */
    #define prmspringverleng_09_1    8 /* Dyn. hiaattij instelling voor det. 09_1 (via bitsturing)                                                                       */
    #define prmspringverleng_09_2    9 /* Dyn. hiaattij instelling voor det. 09_2 (via bitsturing)                                                                       */
    #define prmspringverleng_09_3   10 /* Dyn. hiaattij instelling voor det. 09_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_1   11 /* Dyn. hiaattij instelling voor det. 11_1 (via bitsturing)                                                                       */
    #define prmspringverleng_11_2   12 /* Dyn. hiaattij instelling voor det. 11_2 (via bitsturing)                                                                       */
    #define prmspringverleng_11_3   13 /* Dyn. hiaattij instelling voor det. 11_3 (via bitsturing)                                                                       */
    #define prmspringverleng_11_4   14 /* Dyn. hiaattij instelling voor det. 11_4 (via bitsturing)                                                                       */
    #define prmfb                   15 /* Instelling fasebewaking                                                                                                        */
    #define prmxx                   16 /* Versiebeheer xx                                                                                                                */
    #define prmyy                   17 /* Versiebeheer yy                                                                                                                */
    #define prmzz                   18 /* Versiebeheer zz                                                                                                                */
    #define prmaltb02               19 /* Alternatief per blok voor fase 02                                                                                              */
    #define prmaltb03               20 /* Alternatief per blok voor fase 03                                                                                              */
    #define prmaltb05               21 /* Alternatief per blok voor fase 05                                                                                              */
    #define prmaltb08               22 /* Alternatief per blok voor fase 08                                                                                              */
    #define prmaltb09               23 /* Alternatief per blok voor fase 09                                                                                              */
    #define prmaltb11               24 /* Alternatief per blok voor fase 11                                                                                              */
    #define prmaltb21               25 /* Alternatief per blok voor fase 21                                                                                              */
    #define prmaltb22               26 /* Alternatief per blok voor fase 22                                                                                              */
    #define prmaltb24               27 /* Alternatief per blok voor fase 24                                                                                              */
    #define prmaltb26               28 /* Alternatief per blok voor fase 26                                                                                              */
    #define prmaltb28               29 /* Alternatief per blok voor fase 28                                                                                              */
    #define prmaltb31               30 /* Alternatief per blok voor fase 31                                                                                              */
    #define prmaltb32               31 /* Alternatief per blok voor fase 32                                                                                              */
    #define prmaltb33               32 /* Alternatief per blok voor fase 33                                                                                              */
    #define prmaltb34               33 /* Alternatief per blok voor fase 34                                                                                              */
    #define prmaltb38               34 /* Alternatief per blok voor fase 38                                                                                              */
    #define prmaltb61               35 /* Alternatief per blok voor fase 61                                                                                              */
    #define prmaltb62               36 /* Alternatief per blok voor fase 62                                                                                              */
    #define prmaltb67               37 /* Alternatief per blok voor fase 67                                                                                              */
    #define prmaltb68               38 /* Alternatief per blok voor fase 68                                                                                              */
    #define prmaltb81               39 /* Alternatief per blok voor fase 81                                                                                              */
    #define prmaltb82               40 /* Alternatief per blok voor fase 82                                                                                              */
    #define prmaltb84               41 /* Alternatief per blok voor fase 84                                                                                              */
    #define prmda02_1a              42 /* Aanvraag functie voor detector 02_1a                                                                                           */
    #define prmda02_1b              43 /* Aanvraag functie voor detector 02_1b                                                                                           */
    #define prmda02_2a              44 /* Aanvraag functie voor detector 02_2a                                                                                           */
    #define prmda02_2b              45 /* Aanvraag functie voor detector 02_2b                                                                                           */
    #define prmda02_3a              46 /* Aanvraag functie voor detector 02_3a                                                                                           */
    #define prmda02_3b              47 /* Aanvraag functie voor detector 02_3b                                                                                           */
    #define prmda02_4a              48 /* Aanvraag functie voor detector 02_4a                                                                                           */
    #define prmda02_4b              49 /* Aanvraag functie voor detector 02_4b                                                                                           */
    #define prmda03_1               50 /* Aanvraag functie voor detector 03_1                                                                                            */
    #define prmda03_2               51 /* Aanvraag functie voor detector 03_2                                                                                            */
    #define prmda05_1               52 /* Aanvraag functie voor detector 05_1                                                                                            */
    #define prmda05_2               53 /* Aanvraag functie voor detector 05_2                                                                                            */
    #define prmda08_1a              54 /* Aanvraag functie voor detector 08_1a                                                                                           */
    #define prmda08_1b              55 /* Aanvraag functie voor detector 08_1b                                                                                           */
    #define prmda08_2a              56 /* Aanvraag functie voor detector 08_2a                                                                                           */
    #define prmda08_2b              57 /* Aanvraag functie voor detector 08_2b                                                                                           */
    #define prmda08_3a              58 /* Aanvraag functie voor detector 08_3a                                                                                           */
    #define prmda08_3b              59 /* Aanvraag functie voor detector 08_3b                                                                                           */
    #define prmda08_4a              60 /* Aanvraag functie voor detector 08_4a                                                                                           */
    #define prmda08_4b              61 /* Aanvraag functie voor detector 08_4b                                                                                           */
    #define prmda09_1               62 /* Aanvraag functie voor detector 09_1                                                                                            */
    #define prmda09_2               63 /* Aanvraag functie voor detector 09_2                                                                                            */
    #define prmda09_3               64 /* Aanvraag functie voor detector 09_3                                                                                            */
    #define prmda11_1               65 /* Aanvraag functie voor detector 11_1                                                                                            */
    #define prmda11_2               66 /* Aanvraag functie voor detector 11_2                                                                                            */
    #define prmda11_3               67 /* Aanvraag functie voor detector 11_3                                                                                            */
    #define prmda11_4               68 /* Aanvraag functie voor detector 11_4                                                                                            */
    #define prmda211                69 /* Aanvraag functie voor detector 211                                                                                             */
    #define prmdak21                70 /* Aanvraag functie voor detector k21                                                                                             */
    #define prmda22_1               71 /* Aanvraag functie voor detector 22_1                                                                                            */
    #define prmdak22                72 /* Aanvraag functie voor detector k22                                                                                             */
    #define prmda24_1               73 /* Aanvraag functie voor detector 24_1                                                                                            */
    #define prmda24_2               74 /* Aanvraag functie voor detector 24_2                                                                                            */
    #define prmda24_3               75 /* Aanvraag functie voor detector 24_3                                                                                            */
    #define prmdak24                76 /* Aanvraag functie voor detector k24                                                                                             */
    #define prmda261                77 /* Aanvraag functie voor detector 261                                                                                             */
    #define prmdak26                78 /* Aanvraag functie voor detector k26                                                                                             */
    #define prmda28_1               79 /* Aanvraag functie voor detector 28_1                                                                                            */
    #define prmda28_2               80 /* Aanvraag functie voor detector 28_2                                                                                            */
    #define prmdak28                81 /* Aanvraag functie voor detector k28                                                                                             */
    #define prmdak31a               82 /* Aanvraag functie voor detector k31a                                                                                            */
    #define prmdak31b               83 /* Aanvraag functie voor detector k31b                                                                                            */
    #define prmdak32a               84 /* Aanvraag functie voor detector k32a                                                                                            */
    #define prmdak32b               85 /* Aanvraag functie voor detector k32b                                                                                            */
    #define prmdak33a               86 /* Aanvraag functie voor detector k33a                                                                                            */
    #define prmdak33b               87 /* Aanvraag functie voor detector k33b                                                                                            */
    #define prmdak34a               88 /* Aanvraag functie voor detector k34a                                                                                            */
    #define prmdak34b               89 /* Aanvraag functie voor detector k34b                                                                                            */
    #define prmdak38a               90 /* Aanvraag functie voor detector k38a                                                                                            */
    #define prmdak38b               91 /* Aanvraag functie voor detector k38b                                                                                            */
    #define prmda61_1               92 /* Aanvraag functie voor detector 61_1                                                                                            */
    #define prmda61_2               93 /* Aanvraag functie voor detector 61_2                                                                                            */
    #define prmda62_1a              94 /* Aanvraag functie voor detector 62_1a                                                                                           */
    #define prmda62_1b              95 /* Aanvraag functie voor detector 62_1b                                                                                           */
    #define prmda62_2a              96 /* Aanvraag functie voor detector 62_2a                                                                                           */
    #define prmda62_2b              97 /* Aanvraag functie voor detector 62_2b                                                                                           */
    #define prmda67_1               98 /* Aanvraag functie voor detector 67_1                                                                                            */
    #define prmda67_2               99 /* Aanvraag functie voor detector 67_2                                                                                            */
    #define prmda68_1a             100 /* Aanvraag functie voor detector 68_1a                                                                                           */
    #define prmda68_1b             101 /* Aanvraag functie voor detector 68_1b                                                                                           */
    #define prmda68_2a             102 /* Aanvraag functie voor detector 68_2a                                                                                           */
    #define prmda68_2b             103 /* Aanvraag functie voor detector 68_2b                                                                                           */
    #define prmda68_9a             104 /* Aanvraag functie voor detector 68_9a                                                                                           */
    #define prmda68_9b             105 /* Aanvraag functie voor detector 68_9b                                                                                           */
    #define prmda81_1              106 /* Aanvraag functie voor detector 81_1                                                                                            */
    #define prmdak81               107 /* Aanvraag functie voor detector k81                                                                                             */
    #define prmda82_1              108 /* Aanvraag functie voor detector 82_1                                                                                            */
    #define prmdak82               109 /* Aanvraag functie voor detector k82                                                                                             */
    #define prmda84_1              110 /* Aanvraag functie voor detector 84_1                                                                                            */
    #define prmdak84               111 /* Aanvraag functie voor detector k84                                                                                             */
    #define prmmk02_1a             112 /* Meetkriterium type voor detector 02_1a                                                                                         */
    #define prmmk02_1b             113 /* Meetkriterium type voor detector 02_1b                                                                                         */
    #define prmmk02_2a             114 /* Meetkriterium type voor detector 02_2a                                                                                         */
    #define prmmk02_2b             115 /* Meetkriterium type voor detector 02_2b                                                                                         */
    #define prmmk02_3a             116 /* Meetkriterium type voor detector 02_3a                                                                                         */
    #define prmmk02_3b             117 /* Meetkriterium type voor detector 02_3b                                                                                         */
    #define prmmk02_4a             118 /* Meetkriterium type voor detector 02_4a                                                                                         */
    #define prmmk02_4b             119 /* Meetkriterium type voor detector 02_4b                                                                                         */
    #define prmmk03_1              120 /* Meetkriterium type voor detector 03_1                                                                                          */
    #define prmmk03_2              121 /* Meetkriterium type voor detector 03_2                                                                                          */
    #define prmmk05_1              122 /* Meetkriterium type voor detector 05_1                                                                                          */
    #define prmmk05_2              123 /* Meetkriterium type voor detector 05_2                                                                                          */
    #define prmmk08_1a             124 /* Meetkriterium type voor detector 08_1a                                                                                         */
    #define prmmk08_1b             125 /* Meetkriterium type voor detector 08_1b                                                                                         */
    #define prmmk08_2a             126 /* Meetkriterium type voor detector 08_2a                                                                                         */
    #define prmmk08_2b             127 /* Meetkriterium type voor detector 08_2b                                                                                         */
    #define prmmk08_3a             128 /* Meetkriterium type voor detector 08_3a                                                                                         */
    #define prmmk08_3b             129 /* Meetkriterium type voor detector 08_3b                                                                                         */
    #define prmmk08_4a             130 /* Meetkriterium type voor detector 08_4a                                                                                         */
    #define prmmk08_4b             131 /* Meetkriterium type voor detector 08_4b                                                                                         */
    #define prmmk09_1              132 /* Meetkriterium type voor detector 09_1                                                                                          */
    #define prmmk09_2              133 /* Meetkriterium type voor detector 09_2                                                                                          */
    #define prmmk09_3              134 /* Meetkriterium type voor detector 09_3                                                                                          */
    #define prmmk11_1              135 /* Meetkriterium type voor detector 11_1                                                                                          */
    #define prmmk11_2              136 /* Meetkriterium type voor detector 11_2                                                                                          */
    #define prmmk11_3              137 /* Meetkriterium type voor detector 11_3                                                                                          */
    #define prmmk11_4              138 /* Meetkriterium type voor detector 11_4                                                                                          */
    #define prmmk211               139 /* Meetkriterium type voor detector 211                                                                                           */
    #define prmmk22_1              140 /* Meetkriterium type voor detector 22_1                                                                                          */
    #define prmmk24_1              141 /* Meetkriterium type voor detector 24_1                                                                                          */
    #define prmmk24_2              142 /* Meetkriterium type voor detector 24_2                                                                                          */
    #define prmmk24_3              143 /* Meetkriterium type voor detector 24_3                                                                                          */
    #define prmmk261               144 /* Meetkriterium type voor detector 261                                                                                           */
    #define prmmk28_1              145 /* Meetkriterium type voor detector 28_1                                                                                          */
    #define prmmk28_2              146 /* Meetkriterium type voor detector 28_2                                                                                          */
    #define prmmk61_1              147 /* Meetkriterium type voor detector 61_1                                                                                          */
    #define prmmk61_2              148 /* Meetkriterium type voor detector 61_2                                                                                          */
    #define prmmk62_1a             149 /* Meetkriterium type voor detector 62_1a                                                                                         */
    #define prmmk62_1b             150 /* Meetkriterium type voor detector 62_1b                                                                                         */
    #define prmmk62_2a             151 /* Meetkriterium type voor detector 62_2a                                                                                         */
    #define prmmk62_2b             152 /* Meetkriterium type voor detector 62_2b                                                                                         */
    #define prmmk67_1              153 /* Meetkriterium type voor detector 67_1                                                                                          */
    #define prmmk67_2              154 /* Meetkriterium type voor detector 67_2                                                                                          */
    #define prmmk68_1a             155 /* Meetkriterium type voor detector 68_1a                                                                                         */
    #define prmmk68_1b             156 /* Meetkriterium type voor detector 68_1b                                                                                         */
    #define prmmk68_2a             157 /* Meetkriterium type voor detector 68_2a                                                                                         */
    #define prmmk68_2b             158 /* Meetkriterium type voor detector 68_2b                                                                                         */
    #define prmmk68_9a             159 /* Meetkriterium type voor detector 68_9a                                                                                         */
    #define prmmk68_9b             160 /* Meetkriterium type voor detector 68_9b                                                                                         */
    #define prmmk81_1              161 /* Meetkriterium type voor detector 81_1                                                                                          */
    #define prmmk82_1              162 /* Meetkriterium type voor detector 82_1                                                                                          */
    #define prmmk84_1              163 /* Meetkriterium type voor detector 84_1                                                                                          */
    #define prmperc03              164 /* Percentage groentijd fase 03 bij defect kop en lange lus                                                                       */
    #define prmperc05              165 /* Percentage groentijd fase 05 bij defect kop en lange lus                                                                       */
    #define prmperc08              166 /* Percentage groentijd fase 08 bij defect kop en lange lus                                                                       */
    #define prmperc09              167 /* Percentage groentijd fase 09 bij defect kop en lange lus                                                                       */
    #define prmperc11              168 /* Percentage groentijd fase 11 bij defect kop en lange lus                                                                       */
    #define prmperc61              169 /* Percentage groentijd fase 61 bij defect kop en lange lus                                                                       */
    #define prmperc62              170 /* Percentage groentijd fase 62 bij defect kop en lange lus                                                                       */
    #define prmperc67              171 /* Percentage groentijd fase 67 bij defect kop en lange lus                                                                       */
    #define prmperc68              172 /* Percentage groentijd fase 68 bij defect kop en lange lus                                                                       */
    #define prmfpercFile68af08     173 /* Doseerpercentage 08                                                                                                            */
    #define prmfpercFile68af11     174 /* Doseerpercentage 11                                                                                                            */
    #define prmmv02                175 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                176 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                177 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                178 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                179 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                180 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                181 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                182 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                183 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                184 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                185 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                186 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                187 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                188 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                189 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                190 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                191 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                192 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                193 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                194 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                195 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                196 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                197 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02              198 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03              199 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05              200 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08              201 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09              202 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11              203 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21              204 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22              205 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24              206 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26              207 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28              208 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31              209 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32              210 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33              211 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34              212 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38              213 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61              214 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62              215 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67              216 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68              217 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81              218 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82              219 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84              220 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmxnl0262             221 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868             222 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168             223 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221             224 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132             225 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231             226 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334             227 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433             228 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281             229 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg    230 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat     231 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus 232 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus  233 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus  234 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus 235 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus  236 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus  237 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus 238 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus  239 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus  240 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus 241 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus  242 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus  243 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus 244 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus  245 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus  246 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus 247 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus  248 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus  249 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmmwta                250 /* Maximale wachttijd autoverkeer                                                                                                 */
    #define prmmwtfts              251 /* Maximale wachttijd fiets                                                                                                       */
    #define prmmwtvtg              252 /* Maximale wachttijd voetgangers                                                                                                 */
    #define prmpmgt02              253 /* Minimaal percentage groentijd primair tbv. terugkomen fase 02                                                                  */
    #define prmognt02              254 /* Minimale groentijd bij terugkomen fase 02                                                                                      */
    #define prmnofm02              255 /* Aantal malen niet afkappen na OV ingreep fase 02                                                                               */
    #define prmmgcov02             256 /* Minimum groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov02            257 /* Minimum percentage groentijd waarna fase 02 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg02             258 /* Percentage ophogen groentijd na afkappen fase 02                                                                               */
    #define prmpmgt03              259 /* Minimaal percentage groentijd primair tbv. terugkomen fase 03                                                                  */
    #define prmognt03              260 /* Minimale groentijd bij terugkomen fase 03                                                                                      */
    #define prmnofm03              261 /* Aantal malen niet afkappen na OV ingreep fase 03                                                                               */
    #define prmmgcov03             262 /* Minimum groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov03            263 /* Minimum percentage groentijd waarna fase 03 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg03             264 /* Percentage ophogen groentijd na afkappen fase 03                                                                               */
    #define prmpmgt05              265 /* Minimaal percentage groentijd primair tbv. terugkomen fase 05                                                                  */
    #define prmognt05              266 /* Minimale groentijd bij terugkomen fase 05                                                                                      */
    #define prmnofm05              267 /* Aantal malen niet afkappen na OV ingreep fase 05                                                                               */
    #define prmmgcov05             268 /* Minimum groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov05            269 /* Minimum percentage groentijd waarna fase 05 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg05             270 /* Percentage ophogen groentijd na afkappen fase 05                                                                               */
    #define prmpmgt08              271 /* Minimaal percentage groentijd primair tbv. terugkomen fase 08                                                                  */
    #define prmognt08              272 /* Minimale groentijd bij terugkomen fase 08                                                                                      */
    #define prmnofm08              273 /* Aantal malen niet afkappen na OV ingreep fase 08                                                                               */
    #define prmmgcov08             274 /* Minimum groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov08            275 /* Minimum percentage groentijd waarna fase 08 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg08             276 /* Percentage ophogen groentijd na afkappen fase 08                                                                               */
    #define prmpmgt09              277 /* Minimaal percentage groentijd primair tbv. terugkomen fase 09                                                                  */
    #define prmognt09              278 /* Minimale groentijd bij terugkomen fase 09                                                                                      */
    #define prmnofm09              279 /* Aantal malen niet afkappen na OV ingreep fase 09                                                                               */
    #define prmmgcov09             280 /* Minimum groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov09            281 /* Minimum percentage groentijd waarna fase 09 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg09             282 /* Percentage ophogen groentijd na afkappen fase 09                                                                               */
    #define prmpmgt11              283 /* Minimaal percentage groentijd primair tbv. terugkomen fase 11                                                                  */
    #define prmognt11              284 /* Minimale groentijd bij terugkomen fase 11                                                                                      */
    #define prmnofm11              285 /* Aantal malen niet afkappen na OV ingreep fase 11                                                                               */
    #define prmmgcov11             286 /* Minimum groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov11            287 /* Minimum percentage groentijd waarna fase 11 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg11             288 /* Percentage ophogen groentijd na afkappen fase 11                                                                               */
    #define prmpmgt21              289 /* Minimaal percentage groentijd primair tbv. terugkomen fase 21                                                                  */
    #define prmognt21              290 /* Minimale groentijd bij terugkomen fase 21                                                                                      */
    #define prmnofm21              291 /* Aantal malen niet afkappen na OV ingreep fase 21                                                                               */
    #define prmmgcov21             292 /* Minimum groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov21            293 /* Minimum percentage groentijd waarna fase 21 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg21             294 /* Percentage ophogen groentijd na afkappen fase 21                                                                               */
    #define prmpmgt24              295 /* Minimaal percentage groentijd primair tbv. terugkomen fase 24                                                                  */
    #define prmognt24              296 /* Minimale groentijd bij terugkomen fase 24                                                                                      */
    #define prmnofm24              297 /* Aantal malen niet afkappen na OV ingreep fase 24                                                                               */
    #define prmmgcov24             298 /* Minimum groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov24            299 /* Minimum percentage groentijd waarna fase 24 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg24             300 /* Percentage ophogen groentijd na afkappen fase 24                                                                               */
    #define prmpmgt26              301 /* Minimaal percentage groentijd primair tbv. terugkomen fase 26                                                                  */
    #define prmognt26              302 /* Minimale groentijd bij terugkomen fase 26                                                                                      */
    #define prmnofm26              303 /* Aantal malen niet afkappen na OV ingreep fase 26                                                                               */
    #define prmmgcov26             304 /* Minimum groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov26            305 /* Minimum percentage groentijd waarna fase 26 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg26             306 /* Percentage ophogen groentijd na afkappen fase 26                                                                               */
    #define prmpmgt28              307 /* Minimaal percentage groentijd primair tbv. terugkomen fase 28                                                                  */
    #define prmognt28              308 /* Minimale groentijd bij terugkomen fase 28                                                                                      */
    #define prmnofm28              309 /* Aantal malen niet afkappen na OV ingreep fase 28                                                                               */
    #define prmmgcov28             310 /* Minimum groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov28            311 /* Minimum percentage groentijd waarna fase 28 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg28             312 /* Percentage ophogen groentijd na afkappen fase 28                                                                               */
    #define prmpmgt31              313 /* Minimaal percentage groentijd primair tbv. terugkomen fase 31                                                                  */
    #define prmognt31              314 /* Minimale groentijd bij terugkomen fase 31                                                                                      */
    #define prmpmgt33              315 /* Minimaal percentage groentijd primair tbv. terugkomen fase 33                                                                  */
    #define prmognt33              316 /* Minimale groentijd bij terugkomen fase 33                                                                                      */
    #define prmpmgt34              317 /* Minimaal percentage groentijd primair tbv. terugkomen fase 34                                                                  */
    #define prmognt34              318 /* Minimale groentijd bij terugkomen fase 34                                                                                      */
    #define prmpmgt38              319 /* Minimaal percentage groentijd primair tbv. terugkomen fase 38                                                                  */
    #define prmognt38              320 /* Minimale groentijd bij terugkomen fase 38                                                                                      */
    #define prmpmgt61              321 /* Minimaal percentage groentijd primair tbv. terugkomen fase 61                                                                  */
    #define prmognt61              322 /* Minimale groentijd bij terugkomen fase 61                                                                                      */
    #define prmnofm61              323 /* Aantal malen niet afkappen na OV ingreep fase 61                                                                               */
    #define prmmgcov61             324 /* Minimum groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov61            325 /* Minimum percentage groentijd waarna fase 61 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg61             326 /* Percentage ophogen groentijd na afkappen fase 61                                                                               */
    #define prmpmgt62              327 /* Minimaal percentage groentijd primair tbv. terugkomen fase 62                                                                  */
    #define prmognt62              328 /* Minimale groentijd bij terugkomen fase 62                                                                                      */
    #define prmnofm62              329 /* Aantal malen niet afkappen na OV ingreep fase 62                                                                               */
    #define prmmgcov62             330 /* Minimum groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov62            331 /* Minimum percentage groentijd waarna fase 62 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg62             332 /* Percentage ophogen groentijd na afkappen fase 62                                                                               */
    #define prmpmgt67              333 /* Minimaal percentage groentijd primair tbv. terugkomen fase 67                                                                  */
    #define prmognt67              334 /* Minimale groentijd bij terugkomen fase 67                                                                                      */
    #define prmnofm67              335 /* Aantal malen niet afkappen na OV ingreep fase 67                                                                               */
    #define prmmgcov67             336 /* Minimum groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov67            337 /* Minimum percentage groentijd waarna fase 67 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg67             338 /* Percentage ophogen groentijd na afkappen fase 67                                                                               */
    #define prmpmgt68              339 /* Minimaal percentage groentijd primair tbv. terugkomen fase 68                                                                  */
    #define prmognt68              340 /* Minimale groentijd bij terugkomen fase 68                                                                                      */
    #define prmnofm68              341 /* Aantal malen niet afkappen na OV ingreep fase 68                                                                               */
    #define prmmgcov68             342 /* Minimum groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov68            343 /* Minimum percentage groentijd waarna fase 68 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg68             344 /* Percentage ophogen groentijd na afkappen fase 68                                                                               */
    #define prmpmgt82              345 /* Minimaal percentage groentijd primair tbv. terugkomen fase 82                                                                  */
    #define prmognt82              346 /* Minimale groentijd bij terugkomen fase 82                                                                                      */
    #define prmnofm82              347 /* Aantal malen niet afkappen na OV ingreep fase 82                                                                               */
    #define prmmgcov82             348 /* Minimum groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov82            349 /* Minimum percentage groentijd waarna fase 82 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg82             350 /* Percentage ophogen groentijd na afkappen fase 82                                                                               */
    #define prmpmgt84              351 /* Minimaal percentage groentijd primair tbv. terugkomen fase 84                                                                  */
    #define prmognt84              352 /* Minimale groentijd bij terugkomen fase 84                                                                                      */
    #define prmnofm84              353 /* Aantal malen niet afkappen na OV ingreep fase 84                                                                               */
    #define prmmgcov84             354 /* Minimum groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                            */
    #define prmpmgcov84            355 /* Minimum percentage groentijd waarna fase 84 afgkapt mag worden door OV ingreep                                                 */
    #define prmohpmg84             356 /* Percentage ophogen groentijd na afkappen fase 84                                                                               */
    #define prmrto02bus            357 /* Ongehinderde rijtijd prioriteit fase 02                                                                                        */
    #define prmrtbg02bus           358 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                                                  */
    #define prmrtg02bus            359 /* Gehinderde rijtijd prioriteit fase 02                                                                                          */
    #define prmomx02bus            360 /* Ondermaximum OV fase 02                                                                                                        */
    #define prmvtgcat02bus         361 /* Voertuigcategorie DSI voor prio ingreep 02bus                                                                                  */
    #define prmprio02bus           362 /* Prioriteitsinstelling OV fase 02                                                                                               */
    #define prmrto03bus            363 /* Ongehinderde rijtijd prioriteit fase 03                                                                                        */
    #define prmrtbg03bus           364 /* Beperkt gehinderde rijtijd prioriteit fase 03                                                                                  */
    #define prmrtg03bus            365 /* Gehinderde rijtijd prioriteit fase 03                                                                                          */
    #define prmomx03bus            366 /* Ondermaximum OV fase 03                                                                                                        */
    #define prmvtgcat03bus         367 /* Voertuigcategorie DSI voor prio ingreep 03bus                                                                                  */
    #define prmprio03bus           368 /* Prioriteitsinstelling OV fase 03                                                                                               */
    #define prmrto05bus            369 /* Ongehinderde rijtijd prioriteit fase 05                                                                                        */
    #define prmrtbg05bus           370 /* Beperkt gehinderde rijtijd prioriteit fase 05                                                                                  */
    #define prmrtg05bus            371 /* Gehinderde rijtijd prioriteit fase 05                                                                                          */
    #define prmomx05bus            372 /* Ondermaximum OV fase 05                                                                                                        */
    #define prmvtgcat05bus         373 /* Voertuigcategorie DSI voor prio ingreep 05bus                                                                                  */
    #define prmprio05bus           374 /* Prioriteitsinstelling OV fase 05                                                                                               */
    #define prmrto08bus            375 /* Ongehinderde rijtijd prioriteit fase 08                                                                                        */
    #define prmrtbg08bus           376 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                                                  */
    #define prmrtg08bus            377 /* Gehinderde rijtijd prioriteit fase 08                                                                                          */
    #define prmomx08bus            378 /* Ondermaximum OV fase 08                                                                                                        */
    #define prmvtgcat08bus         379 /* Voertuigcategorie DSI voor prio ingreep 08bus                                                                                  */
    #define prmprio08bus           380 /* Prioriteitsinstelling OV fase 08                                                                                               */
    #define prmrto09bus            381 /* Ongehinderde rijtijd prioriteit fase 09                                                                                        */
    #define prmrtbg09bus           382 /* Beperkt gehinderde rijtijd prioriteit fase 09                                                                                  */
    #define prmrtg09bus            383 /* Gehinderde rijtijd prioriteit fase 09                                                                                          */
    #define prmomx09bus            384 /* Ondermaximum OV fase 09                                                                                                        */
    #define prmvtgcat09bus         385 /* Voertuigcategorie DSI voor prio ingreep 09bus                                                                                  */
    #define prmprio09bus           386 /* Prioriteitsinstelling OV fase 09                                                                                               */
    #define prmrto11bus            387 /* Ongehinderde rijtijd prioriteit fase 11                                                                                        */
    #define prmrtbg11bus           388 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                                                  */
    #define prmrtg11bus            389 /* Gehinderde rijtijd prioriteit fase 11                                                                                          */
    #define prmomx11bus            390 /* Ondermaximum OV fase 11                                                                                                        */
    #define prmvtgcat11bus         391 /* Voertuigcategorie DSI voor prio ingreep 11bus                                                                                  */
    #define prmprio11bus           392 /* Prioriteitsinstelling OV fase 11                                                                                               */
    #define prmpriohd02            393 /* Prioriteitsinstelling HD fase 02                                                                                               */
    #define prmrtohd02             394 /* Ongehinderde rijtijd HD fase 02                                                                                                */
    #define prmrtbghd02            395 /* Beperkt gehinderde rijtijd HD fase 02                                                                                          */
    #define prmrtghd02             396 /* Gehinderde rijtijd HD fase 02                                                                                                  */
    #define prmpriohd03            397 /* Prioriteitsinstelling HD fase 03                                                                                               */
    #define prmrtohd03             398 /* Ongehinderde rijtijd HD fase 03                                                                                                */
    #define prmrtbghd03            399 /* Beperkt gehinderde rijtijd HD fase 03                                                                                          */
    #define prmrtghd03             400 /* Gehinderde rijtijd HD fase 03                                                                                                  */
    #define prmpriohd05            401 /* Prioriteitsinstelling HD fase 05                                                                                               */
    #define prmrtohd05             402 /* Ongehinderde rijtijd HD fase 05                                                                                                */
    #define prmrtbghd05            403 /* Beperkt gehinderde rijtijd HD fase 05                                                                                          */
    #define prmrtghd05             404 /* Gehinderde rijtijd HD fase 05                                                                                                  */
    #define prmrisstart05hd        405
    #define prmrisend05hd          406
    #define prmriseta05hd          407
    #define prmrisrole05hd         408
    #define prmrissubrole05hd      409
    #define prmrisimportance05hd   410
    #define prmrisstationtype05hd  411
    #define prmrisapproachid05hd   412
    #define prmrislaneid05hd_1     413
    #define prmpriohd08            414 /* Prioriteitsinstelling HD fase 08                                                                                               */
    #define prmrtohd08             415 /* Ongehinderde rijtijd HD fase 08                                                                                                */
    #define prmrtbghd08            416 /* Beperkt gehinderde rijtijd HD fase 08                                                                                          */
    #define prmrtghd08             417 /* Gehinderde rijtijd HD fase 08                                                                                                  */
    #define prmrisstart08hd        418
    #define prmrisend08hd          419
    #define prmriseta08hd          420
    #define prmrisrole08hd         421
    #define prmrissubrole08hd      422
    #define prmrisimportance08hd   423
    #define prmrisstationtype08hd  424
    #define prmrisapproachid08hd   425
    #define prmrislaneid08hd_1     426
    #define prmrislaneid08hd_2     427
    #define prmpriohd09            428 /* Prioriteitsinstelling HD fase 09                                                                                               */
    #define prmrtohd09             429 /* Ongehinderde rijtijd HD fase 09                                                                                                */
    #define prmrtbghd09            430 /* Beperkt gehinderde rijtijd HD fase 09                                                                                          */
    #define prmrtghd09             431 /* Gehinderde rijtijd HD fase 09                                                                                                  */
    #define prmrisstart09hd        432
    #define prmrisend09hd          433
    #define prmriseta09hd          434
    #define prmrisrole09hd         435
    #define prmrissubrole09hd      436
    #define prmrisimportance09hd   437
    #define prmrisstationtype09hd  438
    #define prmrisapproachid09hd   439
    #define prmrislaneid09hd_1     440
    #define prmpriohd11            441 /* Prioriteitsinstelling HD fase 11                                                                                               */
    #define prmrtohd11             442 /* Ongehinderde rijtijd HD fase 11                                                                                                */
    #define prmrtbghd11            443 /* Beperkt gehinderde rijtijd HD fase 11                                                                                          */
    #define prmrtghd11             444 /* Gehinderde rijtijd HD fase 11                                                                                                  */
    #define prmrisstart11hd        445
    #define prmrisend11hd          446
    #define prmriseta11hd          447
    #define prmrisrole11hd         448
    #define prmrissubrole11hd      449
    #define prmrisimportance11hd   450
    #define prmrisstationtype11hd  451
    #define prmrisapproachid11hd   452
    #define prmrislaneid11hd_1     453
    #define prmpriohd61            454 /* Prioriteitsinstelling HD fase 61                                                                                               */
    #define prmrtohd61             455 /* Ongehinderde rijtijd HD fase 61                                                                                                */
    #define prmrtbghd61            456 /* Beperkt gehinderde rijtijd HD fase 61                                                                                          */
    #define prmrtghd61             457 /* Gehinderde rijtijd HD fase 61                                                                                                  */
    #define prmrisstart61hd        458
    #define prmrisend61hd          459
    #define prmriseta61hd          460
    #define prmrisrole61hd         461
    #define prmrissubrole61hd      462
    #define prmrisimportance61hd   463
    #define prmrisstationtype61hd  464
    #define prmrisapproachid61hd   465
    #define prmrislaneid61hd_1     466
    #define prmpriohd62            467 /* Prioriteitsinstelling HD fase 62                                                                                               */
    #define prmrtohd62             468 /* Ongehinderde rijtijd HD fase 62                                                                                                */
    #define prmrtbghd62            469 /* Beperkt gehinderde rijtijd HD fase 62                                                                                          */
    #define prmrtghd62             470 /* Gehinderde rijtijd HD fase 62                                                                                                  */
    #define prmrisstart62hd        471
    #define prmrisend62hd          472
    #define prmriseta62hd          473
    #define prmrisrole62hd         474
    #define prmrissubrole62hd      475
    #define prmrisimportance62hd   476
    #define prmrisstationtype62hd  477
    #define prmrisapproachid62hd   478
    #define prmrislaneid62hd_1     479
    #define prmrislaneid62hd_2     480
    #define prmpriohd67            481 /* Prioriteitsinstelling HD fase 67                                                                                               */
    #define prmrtohd67             482 /* Ongehinderde rijtijd HD fase 67                                                                                                */
    #define prmrtbghd67            483 /* Beperkt gehinderde rijtijd HD fase 67                                                                                          */
    #define prmrtghd67             484 /* Gehinderde rijtijd HD fase 67                                                                                                  */
    #define prmrisstart67hd        485
    #define prmrisend67hd          486
    #define prmriseta67hd          487
    #define prmrisrole67hd         488
    #define prmrissubrole67hd      489
    #define prmrisimportance67hd   490
    #define prmrisstationtype67hd  491
    #define prmrisapproachid67hd   492
    #define prmrislaneid67hd_1     493
    #define prmpriohd68            494 /* Prioriteitsinstelling HD fase 68                                                                                               */
    #define prmrtohd68             495 /* Ongehinderde rijtijd HD fase 68                                                                                                */
    #define prmrtbghd68            496 /* Beperkt gehinderde rijtijd HD fase 68                                                                                          */
    #define prmrtghd68             497 /* Gehinderde rijtijd HD fase 68                                                                                                  */
    #define prmrisstart68hd        498
    #define prmrisend68hd          499
    #define prmriseta68hd          500
    #define prmrisrole68hd         501
    #define prmrissubrole68hd      502
    #define prmrisimportance68hd   503
    #define prmrisstationtype68hd  504
    #define prmrisapproachid68hd   505
    #define prmrislaneid68hd_1     506
    #define prmrislaneid68hd_2     507
    #define prmstkp1               508 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1               509 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1               510 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2               511 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2               512 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2               513 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3               514 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3               515 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3               516 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4               517 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4               518 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4               519 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5               520 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5               521 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5               522 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6               523 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6               524 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6               525 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7               526 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7               527 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7               528 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1     529 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1     530 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1     531 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2     532 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2     533 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2     534 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3     535 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3     536 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3     537 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02              538 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03              539 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05              540 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08              541 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09              542 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11              543 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21              544 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22              545 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24              546 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26              547 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28              548 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61              549 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62              550 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67              551 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68              552 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81              553 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82              554 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84              555 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02              556 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03              557 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05              558 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08              559 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09              560 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11              561 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21              562 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22              563 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24              564 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26              565 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28              566 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61              567 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62              568 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67              569 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68              570 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81              571 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82              572 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84              573 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02              574 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03              575 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05              576 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08              577 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09              578 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11              579 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21              580 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22              581 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24              582 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26              583 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28              584 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61              585 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62              586 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67              587 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68              588 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81              589 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82              590 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84              591 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02              592 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03              593 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05              594 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08              595 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09              596 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11              597 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21              598 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22              599 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24              600 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26              601 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28              602 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61              603 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62              604 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67              605 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68              606 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81              607 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82              608 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84              609 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02              610 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03              611 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05              612 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08              613 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09              614 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11              615 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21              616 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22              617 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24              618 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26              619 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28              620 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61              621 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62              622 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67              623 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68              624 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81              625 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82              626 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84              627 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02              628 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03              629 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05              630 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08              631 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09              632 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11              633 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21              634 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22              635 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24              636 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26              637 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28              638 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61              639 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62              640 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67              641 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68              642 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81              643 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82              644 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84              645 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02              646 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03              647 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05              648 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08              649 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09              650 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11              651 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21              652 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22              653 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24              654 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26              655 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28              656 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61              657 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62              658 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67              659 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68              660 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81              661 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82              662 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84              663 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmmkrgd24_3           664 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmrgv                 665 /* Type RoBuGrover                                                                                                                */
    #define prmmin_tcyclus         666 /* Minimale cyclustijd                                                                                                            */
    #define prmmax_tcyclus         667 /* Maximale cyclustijd                                                                                                            */
    #define prmtvg_omhoog          668 /* Hoeveelheid ophogen TVG                                                                                                        */
    #define prmtvg_omlaag          669 /* Hoeveelheid verlagen TVG                                                                                                       */
    #define prmtvg_verschil        670 /* Parameter verschil                                                                                                             */
    #define prmtvg_npr_omlaag      671 /* Hoeveelheid verlagen TVG bij niet primair                                                                                      */
    #define prmmintvg_02           672 /* Minimale verlenggroentijd fase 02                                                                                              */
    #define prmmaxtvg_02           673 /* Maximale verlenggroentijd fase 02                                                                                              */
    #define prmmintvg_03           674 /* Minimale verlenggroentijd fase 03                                                                                              */
    #define prmmaxtvg_03           675 /* Maximale verlenggroentijd fase 03                                                                                              */
    #define prmmintvg_05           676 /* Minimale verlenggroentijd fase 05                                                                                              */
    #define prmmaxtvg_05           677 /* Maximale verlenggroentijd fase 05                                                                                              */
    #define prmmintvg_08           678 /* Minimale verlenggroentijd fase 08                                                                                              */
    #define prmmaxtvg_08           679 /* Maximale verlenggroentijd fase 08                                                                                              */
    #define prmmintvg_09           680 /* Minimale verlenggroentijd fase 09                                                                                              */
    #define prmmaxtvg_09           681 /* Maximale verlenggroentijd fase 09                                                                                              */
    #define prmmintvg_11           682 /* Minimale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvg_11           683 /* Maximale verlenggroentijd fase 11                                                                                              */
    #define prmmaxtvgvlog          684 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog          685 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02             686 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03             687 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05             688 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08             689 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09             690 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11             691 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21             692 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22             693 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24             694 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26             695 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28             696 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31             697 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32             698 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33             699 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34             700 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38             701 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61             702 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62             703 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67             704 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68             705 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81             706 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82             707 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84             708 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02              709 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02              710 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03              711 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03              712 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05              713 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05              714 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08              715 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08              716 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09              717 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09              718 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11              719 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11              720 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21              721 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21              722 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22              723 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp22              724 /* Minimale ruimte tbv alternatieve realisatie fase 22                                                                            */
    #define prmaltg24              725 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp2484            726 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 84                                                                       */
    #define prmaltg26              727 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26              728 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28              729 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28              730 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31              731 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31              732 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32              733 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltp32              734 /* Minimale ruimte tbv alternatieve realisatie fase 32                                                                            */
    #define prmaltg33              735 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp33              736 /* Minimale ruimte tbv alternatieve realisatie fase 33                                                                            */
    #define prmaltg34              737 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp34              738 /* Minimale ruimte tbv alternatieve realisatie fase 34                                                                            */
    #define prmaltg38              739 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38              740 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61              741 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61              742 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62              743 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62              744 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67              745 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67              746 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68              747 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68              748 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81              749 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81              750 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82              751 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82              752 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84              753 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmminwtv              754 /* Minimale tijd die een LED moet branden tijdens aftellen                                                                        */
    #define prmwtvnhaltmax         755 /* Niet halteren wachttijdvoorspellers indien meer dan of zoveel leds branden                                                     */
    #define prmwtvnhaltmin         756 /* Niet halteren wachttijdvoorspellers indien minder dan of zoveel leds branden                                                   */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert         757 /* Testen vertraging in DSI bericht in testomgeving                                                                               */
    #define prmtestdsilyn          758 /* Testen lijnnummer DSI bericht in testomgeving                                                                                  */
    #define prmtestdsicat          759 /* Testen ritcategorie DSI bericht in testomgeving                                                                                */
    #define PRMMAX1                760
#else
    #define PRMMAX1                757
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

    #define prioFC02bus 0
    #define prioFC03bus 1
    #define prioFC05bus 2
    #define prioFC08bus 3
    #define prioFC09bus 4
    #define prioFC11bus 5
    #define hdFC02 6
    #define hdFC03 7
    #define hdFC05 8
    #define hdFC08 9
    #define hdFC09 10
    #define hdFC11 11
    #define hdFC61 12
    #define hdFC62 13
    #define hdFC67 14
    #define hdFC68 15
    #define prioFCMAX 16

/* modulen */
/* ------- */
    #define MLMAX1 4 /* aantal modulen */

/* Aantal perioden voor max groen */
/* ------- */
    #define MPERIODMAX 8 /* aantal groenperioden */

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    #define TESTOMGEVING
#endif

/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

