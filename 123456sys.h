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
 * 12.4.0   01-09-2023   TLCGen      Ontwikkel versie TLCGen (portable) voor Interfunc
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.4.0 20230901"
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
    #define ussegm1          (FCMAX +  0) /* Aansturing segmenten display                            */
    #define ussegm2          (FCMAX +  1) /* Aansturing segmenten display                            */
    #define ussegm3          (FCMAX +  2) /* Aansturing segmenten display                            */
    #define ussegm4          (FCMAX +  3) /* Aansturing segmenten display                            */
    #define ussegm5          (FCMAX +  4) /* Aansturing segmenten display                            */
    #define ussegm6          (FCMAX +  5) /* Aansturing segmenten display                            */
    #define ussegm7          (FCMAX +  6) /* Aansturing segmenten display                            */
    #define usML1            (FCMAX +  7) /* Verklikken actief zijn ML1                              */
    #define usML2            (FCMAX +  8) /* Verklikken actief zijn ML2                              */
    #define usML3            (FCMAX +  9) /* Verklikken actief zijn ML3                              */
    #define usML4            (FCMAX + 10) /* Verklikken actief zijn ML4                              */
    #define usML5            (FCMAX + 11) /* Verklikken actief zijn ML5                              */
    #define usincontrol      (FCMAX + 12) /* Verklikken of applicatie daadwerkelijk de TLC aanstuurt */
    #define usnocontrol      (FCMAX + 13) /* Verklikken of applicatie niet in staat is te regelen    */
    #define usFile68af       (FCMAX + 14) /* File ingreep File68af actief                            */
    #define usovtevroeg02bus (FCMAX + 15) /* Voorste OV voertuig bij 02 te vroeg Bus                 */
    #define usovoptijd02bus  (FCMAX + 16) /* Voorste OV voertuig bij 02 op tijd Bus                  */
    #define usovtelaat02bus  (FCMAX + 17) /* Voorste OV voertuig bij 02 te laat Bus                  */
    #define usovtevroeg03bus (FCMAX + 18) /* Voorste OV voertuig bij 03 te vroeg Bus                 */
    #define usovoptijd03bus  (FCMAX + 19) /* Voorste OV voertuig bij 03 op tijd Bus                  */
    #define usovtelaat03bus  (FCMAX + 20) /* Voorste OV voertuig bij 03 te laat Bus                  */
    #define usovtevroeg05bus (FCMAX + 21) /* Voorste OV voertuig bij 05 te vroeg Bus                 */
    #define usovoptijd05bus  (FCMAX + 22) /* Voorste OV voertuig bij 05 op tijd Bus                  */
    #define usovtelaat05bus  (FCMAX + 23) /* Voorste OV voertuig bij 05 te laat Bus                  */
    #define usovtevroeg08bus (FCMAX + 24) /* Voorste OV voertuig bij 08 te vroeg Bus                 */
    #define usovoptijd08bus  (FCMAX + 25) /* Voorste OV voertuig bij 08 op tijd Bus                  */
    #define usovtelaat08bus  (FCMAX + 26) /* Voorste OV voertuig bij 08 te laat Bus                  */
    #define usovtevroeg09bus (FCMAX + 27) /* Voorste OV voertuig bij 09 te vroeg Bus                 */
    #define usovoptijd09bus  (FCMAX + 28) /* Voorste OV voertuig bij 09 op tijd Bus                  */
    #define usovtelaat09bus  (FCMAX + 29) /* Voorste OV voertuig bij 09 te laat Bus                  */
    #define usovtevroeg11bus (FCMAX + 30) /* Voorste OV voertuig bij 11 te vroeg Bus                 */
    #define usovoptijd11bus  (FCMAX + 31) /* Voorste OV voertuig bij 11 op tijd Bus                  */
    #define usovtelaat11bus  (FCMAX + 32) /* Voorste OV voertuig bij 11 te laat Bus                  */
    #define usovtevroeg61bus (FCMAX + 33) /* Voorste OV voertuig bij 61 te vroeg Bus                 */
    #define usovoptijd61bus  (FCMAX + 34) /* Voorste OV voertuig bij 61 op tijd Bus                  */
    #define usovtelaat61bus  (FCMAX + 35) /* Voorste OV voertuig bij 61 te laat Bus                  */
    #define usovtevroeg62bus (FCMAX + 36) /* Voorste OV voertuig bij 62 te vroeg Bus                 */
    #define usovoptijd62bus  (FCMAX + 37) /* Voorste OV voertuig bij 62 op tijd Bus                  */
    #define usovtelaat62bus  (FCMAX + 38) /* Voorste OV voertuig bij 62 te laat Bus                  */
    #define usovtevroeg67bus (FCMAX + 39) /* Voorste OV voertuig bij 67 te vroeg Bus                 */
    #define usovoptijd67bus  (FCMAX + 40) /* Voorste OV voertuig bij 67 op tijd Bus                  */
    #define usovtelaat67bus  (FCMAX + 41) /* Voorste OV voertuig bij 67 te laat Bus                  */
    #define usovtevroeg68bus (FCMAX + 42) /* Voorste OV voertuig bij 68 te vroeg Bus                 */
    #define usovoptijd68bus  (FCMAX + 43) /* Voorste OV voertuig bij 68 op tijd Bus                  */
    #define usovtelaat68bus  (FCMAX + 44) /* Voorste OV voertuig bij 68 te laat Bus                  */
    #define usperdef         (FCMAX + 45) /* Default periode actief                                  */
    #define usper1           (FCMAX + 46) /* Periode Reserve actief                                  */
    #define usperoFietsprio1 (FCMAX + 47) /* Periode actief                                          */
    #define usperoFietsprio2 (FCMAX + 48) /* Periode actief                                          */
    #define usperoFietsprio3 (FCMAX + 49) /* Periode actief                                          */
    #define usper2           (FCMAX + 50) /* Periode Dag periode actief                              */
    #define usper3           (FCMAX + 51) /* Periode Ochtendspits actief                             */
    #define usper4           (FCMAX + 52) /* Periode Avondspits actief                               */
    #define usper5           (FCMAX + 53) /* Periode Koopavond actief                                */
    #define usper6           (FCMAX + 54) /* Periode Weekend actief                                  */
    #define usper7           (FCMAX + 55) /* Periode Reserve actief                                  */
    #define uswtk21          (FCMAX + 56) /* Aansturing waitsignaal detector k21                     */
    #define uswtk22          (FCMAX + 57) /* Aansturing waitsignaal detector k22                     */
    #define uswtk24          (FCMAX + 58) /* Aansturing waitsignaal detector k24                     */
    #define uswtk26          (FCMAX + 59) /* Aansturing waitsignaal detector k26                     */
    #define uswtk28          (FCMAX + 60) /* Aansturing waitsignaal detector k28                     */
    #define uswtk31a         (FCMAX + 61) /* Aansturing waitsignaal detector k31a                    */
    #define uswtk31b         (FCMAX + 62) /* Aansturing waitsignaal detector k31b                    */
    #define uswtk32a         (FCMAX + 63) /* Aansturing waitsignaal detector k32a                    */
    #define uswtk32b         (FCMAX + 64) /* Aansturing waitsignaal detector k32b                    */
    #define uswtk33a         (FCMAX + 65) /* Aansturing waitsignaal detector k33a                    */
    #define uswtk33b         (FCMAX + 66) /* Aansturing waitsignaal detector k33b                    */
    #define uswtk34a         (FCMAX + 67) /* Aansturing waitsignaal detector k34a                    */
    #define uswtk34b         (FCMAX + 68) /* Aansturing waitsignaal detector k34b                    */
    #define uswtk38a         (FCMAX + 69) /* Aansturing waitsignaal detector k38a                    */
    #define uswtk38b         (FCMAX + 70) /* Aansturing waitsignaal detector k38b                    */
    #define uswtk81          (FCMAX + 71) /* Aansturing waitsignaal detector k81                     */
    #define uswtk82          (FCMAX + 72) /* Aansturing waitsignaal detector k82                     */
    #define uswtk84          (FCMAX + 73) /* Aansturing waitsignaal detector k84                     */
    #define USMAX1           (FCMAX + 74)

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
    #define hopdrempelen08      0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08     1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_08_1a      2 /* Instructie verlengen op detector 08_1a ongeacht dynamische hiaat   */
    #define hverleng_08_1b      3 /* Instructie verlengen op detector 08_1b ongeacht dynamische hiaat   */
    #define hverleng_08_2a      4 /* Instructie verlengen op detector 08_2a ongeacht dynamische hiaat   */
    #define hverleng_08_2b      5 /* Instructie verlengen op detector 08_2b ongeacht dynamische hiaat   */
    #define hverleng_08_3a      6 /* Instructie verlengen op detector 08_3a ongeacht dynamische hiaat   */
    #define hverleng_08_3b      7 /* Instructie verlengen op detector 08_3b ongeacht dynamische hiaat   */
    #define hverleng_08_4a      8 /* Instructie verlengen op detector 08_4a ongeacht dynamische hiaat   */
    #define hverleng_08_4b      9 /* Instructie verlengen op detector 08_4b ongeacht dynamische hiaat   */
    #define hopdrempelen09     10 /* Opdrempelen toepassen voor fase 09                                 */
    #define hgeendynhiaat09    11 /* Tegenhouden toepassen dynamische hiaattijden voor fase 09          */
    #define hverleng_09_1      12 /* Instructie verlengen op detector 09_1 ongeacht dynamische hiaat    */
    #define hverleng_09_2      13 /* Instructie verlengen op detector 09_2 ongeacht dynamische hiaat    */
    #define hverleng_09_3      14 /* Instructie verlengen op detector 09_3 ongeacht dynamische hiaat    */
    #define hopdrempelen11     15 /* Opdrempelen toepassen voor fase 11                                 */
    #define hgeendynhiaat11    16 /* Tegenhouden toepassen dynamische hiaattijden voor fase 11          */
    #define hverleng_11_1      17 /* Instructie verlengen op detector 11_1 ongeacht dynamische hiaat    */
    #define hverleng_11_2      18 /* Instructie verlengen op detector 11_2 ongeacht dynamische hiaat    */
    #define hverleng_11_3      19 /* Instructie verlengen op detector 11_3 ongeacht dynamische hiaat    */
    #define hverleng_11_4      20 /* Instructie verlengen op detector 11_4 ongeacht dynamische hiaat    */
    #define hmadk31a           21 /* Hulpelement onthouden melding meeaanvraag detector k31a            */
    #define hmadk32a           22 /* Hulpelement onthouden melding meeaanvraag detector k32a            */
    #define hmadk33a           23 /* Hulpelement onthouden melding meeaanvraag detector k33a            */
    #define hmadk34a           24 /* Hulpelement onthouden melding meeaanvraag detector k34a            */
    #define hfileFile68af      25 /* File File68af actief                                               */
    #define hfile68_9a         26 /* File 68_9a actief                                                  */
    #define hfile68_9b         27 /* File 68_9b actief                                                  */
    #define hafk08fileFile68af 28 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11fileFile68af 29 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hnla02_1a          30 /* Onthouden detectiemelding detector 02_1a tbv naloop van 02 naar 62 */
    #define hnla02_1b          31 /* Onthouden detectiemelding detector 02_1b tbv naloop van 02 naar 62 */
    #define hnla08_1a          32 /* Onthouden detectiemelding detector 08_1a tbv naloop van 08 naar 68 */
    #define hnla08_1b          33 /* Onthouden detectiemelding detector 08_1b tbv naloop van 08 naar 68 */
    #define hnla11_1           34 /* Onthouden detectiemelding detector 11_1 tbv naloop van 11 naar 68  */
    #define hnla22_1           35 /* Onthouden detectiemelding detector 22_1 tbv naloop van 22 naar 21  */
    #define hnlsg3132          36 /* Hulpelement naloop SG van 31 naar 32                               */
    #define hnlak31a           37 /* Onthouden detectiemelding detector k31a tbv naloop van 31 naar 32  */
    #define hnlsg3231          38 /* Hulpelement naloop SG van 32 naar 31                               */
    #define hnlak32a           39 /* Onthouden detectiemelding detector k32a tbv naloop van 32 naar 31  */
    #define hnlsg3334          40 /* Hulpelement naloop SG van 33 naar 34                               */
    #define hnlak33a           41 /* Onthouden detectiemelding detector k33a tbv naloop van 33 naar 34  */
    #define hnlsg3433          42 /* Hulpelement naloop SG van 34 naar 33                               */
    #define hnlak34a           43 /* Onthouden detectiemelding detector k34a tbv naloop van 34 naar 33  */
    #define hnla82_1           44 /* Onthouden detectiemelding detector 82_1 tbv naloop van 82 naar 81  */
    #define hstp02bus          45 /* Geconditioneerde prio OV mogelijk bij 02 Bus                       */
    #define hstp03bus          46 /* Geconditioneerde prio OV mogelijk bij 03 Bus                       */
    #define hstp05bus          47 /* Geconditioneerde prio OV mogelijk bij 05 Bus                       */
    #define hstp08bus          48 /* Geconditioneerde prio OV mogelijk bij 08 Bus                       */
    #define hstp09bus          49 /* Geconditioneerde prio OV mogelijk bij 09 Bus                       */
    #define hstp11bus          50 /* Geconditioneerde prio OV mogelijk bij 11 Bus                       */
    #define hstp61bus          51 /* Geconditioneerde prio OV mogelijk bij 61 Bus                       */
    #define hstp62bus          52 /* Geconditioneerde prio OV mogelijk bij 62 Bus                       */
    #define hstp67bus          53 /* Geconditioneerde prio OV mogelijk bij 67 Bus                       */
    #define hstp68bus          54 /* Geconditioneerde prio OV mogelijk bij 68 Bus                       */
    #define hperiodFietsprio1  55 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2  56 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3  57 /* Periode Fietsprio3 actief                                          */
    #define hrgvd24_3_d24_2    58 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 24_3 */
    #define hlos31             59 /* Toestaan los realiseren fase 31                                    */
    #define hlos32             60 /* Toestaan los realiseren fase 32                                    */
    #define hlos33             61 /* Toestaan los realiseren fase 33                                    */
    #define hlos34             62 /* Toestaan los realiseren fase 34                                    */
    #define HEMAX1             63

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
    #define mstp61bus  19 /* Stiptheid voorste OV voertuig bij 61 Bus                                    */
    #define mstp62bus  20 /* Stiptheid voorste OV voertuig bij 62 Bus                                    */
    #define mstp67bus  21 /* Stiptheid voorste OV voertuig bij 67 Bus                                    */
    #define mstp68bus  22 /* Stiptheid voorste OV voertuig bij 68 Bus                                    */
    #define mar02      23 /* Alternatieve ruimte fase 02                                                 */
    #define mar03      24 /* Alternatieve ruimte fase 03                                                 */
    #define mar05      25 /* Alternatieve ruimte fase 05                                                 */
    #define mar08      26 /* Alternatieve ruimte fase 08                                                 */
    #define mar09      27 /* Alternatieve ruimte fase 09                                                 */
    #define mar11      28 /* Alternatieve ruimte fase 11                                                 */
    #define mar21      29 /* Alternatieve ruimte fase 21                                                 */
    #define mar22      30 /* Alternatieve ruimte fase 22                                                 */
    #define mar24      31 /* Alternatieve ruimte fase 24                                                 */
    #define mar26      32 /* Alternatieve ruimte fase 26                                                 */
    #define mar28      33 /* Alternatieve ruimte fase 28                                                 */
    #define mar31      34 /* Alternatieve ruimte fase 31                                                 */
    #define mar32      35 /* Alternatieve ruimte fase 32                                                 */
    #define mar33      36 /* Alternatieve ruimte fase 33                                                 */
    #define mar34      37 /* Alternatieve ruimte fase 34                                                 */
    #define mar38      38 /* Alternatieve ruimte fase 38                                                 */
    #define mar61      39 /* Alternatieve ruimte fase 61                                                 */
    #define mar62      40 /* Alternatieve ruimte fase 62                                                 */
    #define mar67      41 /* Alternatieve ruimte fase 67                                                 */
    #define mar68      42 /* Alternatieve ruimte fase 68                                                 */
    #define mar81      43 /* Alternatieve ruimte fase 81                                                 */
    #define mar82      44 /* Alternatieve ruimte fase 82                                                 */
    #define mar84      45 /* Alternatieve ruimte fase 84                                                 */
    #define MEMAX1     46

/* tijd elementen */
/* -------------- */
    #define t08_1a_1                     0 /* Dynamische hiaattijden moment 1 voor detector 08_1a                   */
    #define t08_1a_2                     1 /* Dynamische hiaattijden moment 2 voor detector 08_1a                   */
    #define ttdh_08_1a_1                 2 /* Dynamische hiaattijden TDH 1 voor detector 08_1a                      */
    #define ttdh_08_1a_2                 3 /* Dynamische hiaattijden TDH 2 voor detector 08_1a                      */
    #define tmax_08_1a                   4 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1a            */
    #define t08_1b_1                     5 /* Dynamische hiaattijden moment 1 voor detector 08_1b                   */
    #define t08_1b_2                     6 /* Dynamische hiaattijden moment 2 voor detector 08_1b                   */
    #define ttdh_08_1b_1                 7 /* Dynamische hiaattijden TDH 1 voor detector 08_1b                      */
    #define ttdh_08_1b_2                 8 /* Dynamische hiaattijden TDH 2 voor detector 08_1b                      */
    #define tmax_08_1b                   9 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_1b            */
    #define t08_2a_1                    10 /* Dynamische hiaattijden moment 1 voor detector 08_2a                   */
    #define t08_2a_2                    11 /* Dynamische hiaattijden moment 2 voor detector 08_2a                   */
    #define ttdh_08_2a_1                12 /* Dynamische hiaattijden TDH 1 voor detector 08_2a                      */
    #define ttdh_08_2a_2                13 /* Dynamische hiaattijden TDH 2 voor detector 08_2a                      */
    #define tmax_08_2a                  14 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2a            */
    #define t08_2b_1                    15 /* Dynamische hiaattijden moment 1 voor detector 08_2b                   */
    #define t08_2b_2                    16 /* Dynamische hiaattijden moment 2 voor detector 08_2b                   */
    #define ttdh_08_2b_1                17 /* Dynamische hiaattijden TDH 1 voor detector 08_2b                      */
    #define ttdh_08_2b_2                18 /* Dynamische hiaattijden TDH 2 voor detector 08_2b                      */
    #define tmax_08_2b                  19 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_2b            */
    #define t08_3a_1                    20 /* Dynamische hiaattijden moment 1 voor detector 08_3a                   */
    #define t08_3a_2                    21 /* Dynamische hiaattijden moment 2 voor detector 08_3a                   */
    #define ttdh_08_3a_1                22 /* Dynamische hiaattijden TDH 1 voor detector 08_3a                      */
    #define ttdh_08_3a_2                23 /* Dynamische hiaattijden TDH 2 voor detector 08_3a                      */
    #define tmax_08_3a                  24 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3a            */
    #define t08_3b_1                    25 /* Dynamische hiaattijden moment 1 voor detector 08_3b                   */
    #define t08_3b_2                    26 /* Dynamische hiaattijden moment 2 voor detector 08_3b                   */
    #define ttdh_08_3b_1                27 /* Dynamische hiaattijden TDH 1 voor detector 08_3b                      */
    #define ttdh_08_3b_2                28 /* Dynamische hiaattijden TDH 2 voor detector 08_3b                      */
    #define tmax_08_3b                  29 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_3b            */
    #define t08_4a_1                    30 /* Dynamische hiaattijden moment 1 voor detector 08_4a                   */
    #define t08_4a_2                    31 /* Dynamische hiaattijden moment 2 voor detector 08_4a                   */
    #define ttdh_08_4a_1                32 /* Dynamische hiaattijden TDH 1 voor detector 08_4a                      */
    #define ttdh_08_4a_2                33 /* Dynamische hiaattijden TDH 2 voor detector 08_4a                      */
    #define tmax_08_4a                  34 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4a            */
    #define t08_4b_1                    35 /* Dynamische hiaattijden moment 1 voor detector 08_4b                   */
    #define t08_4b_2                    36 /* Dynamische hiaattijden moment 2 voor detector 08_4b                   */
    #define ttdh_08_4b_1                37 /* Dynamische hiaattijden TDH 1 voor detector 08_4b                      */
    #define ttdh_08_4b_2                38 /* Dynamische hiaattijden TDH 2 voor detector 08_4b                      */
    #define tmax_08_4b                  39 /* Dynamische hiaattijden maximale tijd 2 voor detector 08_4b            */
    #define t09_1_1                     40 /* Dynamische hiaattijden moment 1 voor detector 09_1                    */
    #define t09_1_2                     41 /* Dynamische hiaattijden moment 2 voor detector 09_1                    */
    #define ttdh_09_1_1                 42 /* Dynamische hiaattijden TDH 1 voor detector 09_1                       */
    #define ttdh_09_1_2                 43 /* Dynamische hiaattijden TDH 2 voor detector 09_1                       */
    #define tmax_09_1                   44 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_1             */
    #define t09_2_1                     45 /* Dynamische hiaattijden moment 1 voor detector 09_2                    */
    #define t09_2_2                     46 /* Dynamische hiaattijden moment 2 voor detector 09_2                    */
    #define ttdh_09_2_1                 47 /* Dynamische hiaattijden TDH 1 voor detector 09_2                       */
    #define ttdh_09_2_2                 48 /* Dynamische hiaattijden TDH 2 voor detector 09_2                       */
    #define tmax_09_2                   49 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_2             */
    #define t09_3_1                     50 /* Dynamische hiaattijden moment 1 voor detector 09_3                    */
    #define t09_3_2                     51 /* Dynamische hiaattijden moment 2 voor detector 09_3                    */
    #define ttdh_09_3_1                 52 /* Dynamische hiaattijden TDH 1 voor detector 09_3                       */
    #define ttdh_09_3_2                 53 /* Dynamische hiaattijden TDH 2 voor detector 09_3                       */
    #define tmax_09_3                   54 /* Dynamische hiaattijden maximale tijd 2 voor detector 09_3             */
    #define t11_1_1                     55 /* Dynamische hiaattijden moment 1 voor detector 11_1                    */
    #define t11_1_2                     56 /* Dynamische hiaattijden moment 2 voor detector 11_1                    */
    #define ttdh_11_1_1                 57 /* Dynamische hiaattijden TDH 1 voor detector 11_1                       */
    #define ttdh_11_1_2                 58 /* Dynamische hiaattijden TDH 2 voor detector 11_1                       */
    #define tmax_11_1                   59 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_1             */
    #define t11_2_1                     60 /* Dynamische hiaattijden moment 1 voor detector 11_2                    */
    #define t11_2_2                     61 /* Dynamische hiaattijden moment 2 voor detector 11_2                    */
    #define ttdh_11_2_1                 62 /* Dynamische hiaattijden TDH 1 voor detector 11_2                       */
    #define ttdh_11_2_2                 63 /* Dynamische hiaattijden TDH 2 voor detector 11_2                       */
    #define tmax_11_2                   64 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_2             */
    #define t11_3_1                     65 /* Dynamische hiaattijden moment 1 voor detector 11_3                    */
    #define t11_3_2                     66 /* Dynamische hiaattijden moment 2 voor detector 11_3                    */
    #define ttdh_11_3_1                 67 /* Dynamische hiaattijden TDH 1 voor detector 11_3                       */
    #define ttdh_11_3_2                 68 /* Dynamische hiaattijden TDH 2 voor detector 11_3                       */
    #define tmax_11_3                   69 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_3             */
    #define t11_4_1                     70 /* Dynamische hiaattijden moment 1 voor detector 11_4                    */
    #define t11_4_2                     71 /* Dynamische hiaattijden moment 2 voor detector 11_4                    */
    #define ttdh_11_4_1                 72 /* Dynamische hiaattijden TDH 1 voor detector 11_4                       */
    #define ttdh_11_4_2                 73 /* Dynamische hiaattijden TDH 2 voor detector 11_4                       */
    #define tmax_11_4                   74 /* Dynamische hiaattijden maximale tijd 2 voor detector 11_4             */
    #define tcycl                       75 /* Bijhouden actuele cyclustijd                                          */
    #define tav28_2                     76 /* Tijd na afvallen detector 28_2 tbv verwijderen aanvraag               */
    #define tkm02                       77 /* Kop maximum voor detector 02                                          */
    #define tkm03                       78 /* Kop maximum voor detector 03                                          */
    #define tkm05                       79 /* Kop maximum voor detector 05                                          */
    #define tkm08                       80 /* Kop maximum voor detector 08                                          */
    #define tkm09                       81 /* Kop maximum voor detector 09                                          */
    #define tkm11                       82 /* Kop maximum voor detector 11                                          */
    #define tkm21                       83 /* Kop maximum voor detector 21                                          */
    #define tkm22                       84 /* Kop maximum voor detector 22                                          */
    #define tkm24                       85 /* Kop maximum voor detector 24                                          */
    #define tkm26                       86 /* Kop maximum voor detector 26                                          */
    #define tkm28                       87 /* Kop maximum voor detector 28                                          */
    #define tkm61                       88 /* Kop maximum voor detector 61                                          */
    #define tkm62                       89 /* Kop maximum voor detector 62                                          */
    #define tkm67                       90 /* Kop maximum voor detector 67                                          */
    #define tkm68                       91 /* Kop maximum voor detector 68                                          */
    #define tkm81                       92 /* Kop maximum voor detector 81                                          */
    #define tkm82                       93 /* Kop maximum voor detector 82                                          */
    #define tkm84                       94 /* Kop maximum voor detector 84                                          */
    #define thdvd02_1a                  95 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1a            */
    #define thdvd02_1b                  96 /* Vervangend hiaat koplus fase 02 bij defect lange lus 02_1b            */
    #define tdstvert02                  97 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02   */
    #define thdvd03_1                   98 /* Vervangend hiaat koplus fase 03 bij defect lange lus 03_1             */
    #define tdstvert03                  99 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03   */
    #define thdvd05_1                  100 /* Vervangend hiaat koplus fase 05 bij defect lange lus 05_1             */
    #define tdstvert05                 101 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05   */
    #define thdvd08_1a                 102 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1a            */
    #define thdvd08_1b                 103 /* Vervangend hiaat koplus fase 08 bij defect lange lus 08_1b            */
    #define tdstvert08                 104 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08   */
    #define thdvd09_1                  105 /* Vervangend hiaat koplus fase 09 bij defect lange lus 09_1             */
    #define tdstvert09                 106 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09   */
    #define thdvd11_1                  107 /* Vervangend hiaat koplus fase 11 bij defect lange lus 11_1             */
    #define tdstvert11                 108 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11   */
    #define tdstvert21                 109 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21   */
    #define thdvd22_1                  110 /* Vervangend hiaat koplus fase 22 bij defect lange lus 22_1             */
    #define tdstvert22                 111 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22   */
    #define thdvd24_1                  112 /* Vervangend hiaat koplus fase 24 bij defect lange lus 24_1             */
    #define tdstvert24                 113 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24   */
    #define tdstvert26                 114 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26   */
    #define thdvd28_1                  115 /* Vervangend hiaat koplus fase 28 bij defect lange lus 28_1             */
    #define tdstvert28                 116 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28   */
    #define tdstvert31                 117 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31   */
    #define tdstvert32                 118 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32   */
    #define tdstvert33                 119 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33   */
    #define tdstvert34                 120 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34   */
    #define tdstvert38                 121 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38   */
    #define thdvd61_1                  122 /* Vervangend hiaat koplus fase 61 bij defect lange lus 61_1             */
    #define tdstvert61                 123 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61   */
    #define thdvd62_1a                 124 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1a            */
    #define thdvd62_1b                 125 /* Vervangend hiaat koplus fase 62 bij defect lange lus 62_1b            */
    #define tdstvert62                 126 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62   */
    #define thdvd67_1                  127 /* Vervangend hiaat koplus fase 67 bij defect lange lus 67_1             */
    #define tdstvert67                 128 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67   */
    #define thdvd68_1a                 129 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1a            */
    #define thdvd68_1b                 130 /* Vervangend hiaat koplus fase 68 bij defect lange lus 68_1b            */
    #define tdstvert68                 131 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68   */
    #define tdstvert81                 132 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81   */
    #define tdstvert82                 133 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82   */
    #define thdvd84_1                  134 /* Vervangend hiaat koplus fase 84 bij defect lange lus 84_1             */
    #define tdstvert84                 135 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84   */
    #define tafvFile68af               136 /* Afval vertraging file File68af                                        */
    #define tafv68_9a                  137 /* Afval vertraging file 68_9a                                           */
    #define tbz68_9a                   138 /* Bezettijd file detector 68_9a                                         */
    #define trij68_9a                  139 /* Rijtijd file detector 68_9a                                           */
    #define tafv68_9b                  140 /* Afval vertraging file 68_9b                                           */
    #define tbz68_9b                   141 /* Bezettijd file detector 68_9b                                         */
    #define trij68_9b                  142 /* Rijtijd file detector 68_9b                                           */
    #define tafkmingroen08fileFile68af 143 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep */
    #define tafkmingroen11fileFile68af 144 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep */
    #define tminrood08fileFile68af     145 /* Minimale roodtijd bij fase 08 voor file ingreep                       */
    #define tminrood11fileFile68af     146 /* Minimale roodtijd bij fase 11 voor file ingreep                       */
    #define tmaxgroen08fileFile68af    147 /* Maximale groentijd bij fase 08 voor file ingreep                      */
    #define tmaxgroen11fileFile68af    148 /* Maximale groentijd bij fase 11 voor file ingreep                      */
    #define tnlfg0262                  149 /* Naloop tijdens vastgroen van 02 naar 62                               */
    #define tnlfgd0262                 150 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62          */
    #define tnleg0262                  151 /* Naloop op einde groen van 02 naar 62                                  */
    #define tnlegd0262                 152 /* Detectieafhankelijke naloop op einde groen van 02 naar 62             */
    #define tvgnaloop0262              153 /* Timer naloop EG van 02 naar 62                                        */
    #define tnlfg0868                  154 /* Naloop tijdens vastgroen van 08 naar 68                               */
    #define tnlfgd0868                 155 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68          */
    #define tnleg0868                  156 /* Naloop op einde groen van 08 naar 68                                  */
    #define tnlegd0868                 157 /* Detectieafhankelijke naloop op einde groen van 08 naar 68             */
    #define tvgnaloop0868              158 /* Timer naloop EG van 08 naar 68                                        */
    #define tnlfg1168                  159 /* Naloop tijdens vastgroen van 11 naar 68                               */
    #define tnlfgd1168                 160 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68          */
    #define tnleg1168                  161 /* Naloop op einde groen van 11 naar 68                                  */
    #define tnlegd1168                 162 /* Detectieafhankelijke naloop op einde groen van 11 naar 68             */
    #define tvgnaloop1168              163 /* Timer naloop EG van 11 naar 68                                        */
    #define tnlfg2221                  164 /* Naloop tijdens vastgroen van 22 naar 21                               */
    #define tnlfgd2221                 165 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21          */
    #define tnleg2221                  166 /* Naloop op einde groen van 22 naar 21                                  */
    #define tnlegd2221                 167 /* Detectieafhankelijke naloop op einde groen van 22 naar 21             */
    #define tvgnaloop2221              168 /* Timer naloop EG van 22 naar 21                                        */
    #define tnlsg3132                  169 /* Naloop op start groen van 31 naar 32                                  */
    #define tnlsgd3132                 170 /* Detectieafhankelijke naloop op start groen van 31 naar 32             */
    #define tnlsg3231                  171 /* Naloop op start groen van 32 naar 31                                  */
    #define tnlsgd3231                 172 /* Detectieafhankelijke naloop op start groen van 32 naar 31             */
    #define tnlsgd3334                 173 /* Detectieafhankelijke naloop op start groen van 33 naar 34             */
    #define tnlsgd3433                 174 /* Detectieafhankelijke naloop op start groen van 34 naar 33             */
    #define tnlfg8281                  175 /* Naloop tijdens vastgroen van 82 naar 81                               */
    #define tnlfgd8281                 176 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81          */
    #define tnleg8281                  177 /* Naloop op einde groen van 82 naar 81                                  */
    #define tnlegd8281                 178 /* Detectieafhankelijke naloop op einde groen van 82 naar 81             */
    #define tvgnaloop8281              179 /* Timer naloop EG van 82 naar 81                                        */
    #define trgad24_3                  180 /* Richtinggevoelige aanvraag rijtijd fase 24 van 24_3 naar 24_2         */
    #define trgavd24_3                 181 /* Timer reset richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define trgrd24_3_d24_2            182 /* Richtinggevoelig verlengen rijtijd fase 24 van 24_3 naar 24_2         */
    #define trgvd24_3_d24_2            183 /* Richtinggevoelig verlengen hiaattijd fase 24 van 24_3 naar 24_2       */
    #define tvamax62                   184 /* Maximale tijd VA ontruimen na einde geel fase 62                      */
    #define tva6209_d62_1a             185 /* Tijdsduur VA ontruimen van 62 naar                                    */
    #define tva6211_d62_1a             186 /* Tijdsduur VA ontruimen van 62 naar                                    */
    #define tva6226_d62_1a             187 /* Tijdsduur VA ontruimen van 62 naar                                    */
    #define tuitgestca02               188 /* Uitgestelde cyclische aanvraag fase 02                                */
    #define tuitgestca03               189 /* Uitgestelde cyclische aanvraag fase 03                                */
    #define tuitgestca05               190 /* Uitgestelde cyclische aanvraag fase 05                                */
    #define tuitgestca08               191 /* Uitgestelde cyclische aanvraag fase 08                                */
    #define tuitgestca09               192 /* Uitgestelde cyclische aanvraag fase 09                                */
    #define tuitgestca11               193 /* Uitgestelde cyclische aanvraag fase 11                                */
    #define tuitgestca21               194 /* Uitgestelde cyclische aanvraag fase 21                                */
    #define tuitgestca22               195 /* Uitgestelde cyclische aanvraag fase 22                                */
    #define tuitgestca24               196 /* Uitgestelde cyclische aanvraag fase 24                                */
    #define tuitgestca26               197 /* Uitgestelde cyclische aanvraag fase 26                                */
    #define tuitgestca28               198 /* Uitgestelde cyclische aanvraag fase 28                                */
    #define tuitgestca31               199 /* Uitgestelde cyclische aanvraag fase 31                                */
    #define tuitgestca32               200 /* Uitgestelde cyclische aanvraag fase 32                                */
    #define tuitgestca33               201 /* Uitgestelde cyclische aanvraag fase 33                                */
    #define tuitgestca34               202 /* Uitgestelde cyclische aanvraag fase 34                                */
    #define tuitgestca38               203 /* Uitgestelde cyclische aanvraag fase 38                                */
    #define tuitgestca61               204 /* Uitgestelde cyclische aanvraag fase 61                                */
    #define tuitgestca62               205 /* Uitgestelde cyclische aanvraag fase 62                                */
    #define tuitgestca67               206 /* Uitgestelde cyclische aanvraag fase 67                                */
    #define tuitgestca68               207 /* Uitgestelde cyclische aanvraag fase 68                                */
    #define tuitgestca81               208 /* Uitgestelde cyclische aanvraag fase 81                                */
    #define tuitgestca82               209 /* Uitgestelde cyclische aanvraag fase 82                                */
    #define tuitgestca84               210 /* Uitgestelde cyclische aanvraag fase 84                                */
    #define tvs2205                    211 /* Voorstarttijd fase 22 op fase 05                                      */
    #define tfo2205                    212 /* Fictieve ontruimingstijd van 22 naar fase 05                          */
    #define tvs3205                    213 /* Voorstarttijd fase 32 op fase 05                                      */
    #define tfo3205                    214 /* Fictieve ontruimingstijd van 32 naar fase 05                          */
    #define tlr2611                    215 /* Late release tijd fase 26 naar fase 11                                */
    #define tfo2611                    216 /* Fictieve ontruimingstijd van 26 naar fase 11                          */
    #define tinl3132                   217 /* Inlooptijd fase 31                                                    */
    #define tinl3231                   218 /* Inlooptijd fase 32                                                    */
    #define tinl3334                   219 /* Inlooptijd fase 33                                                    */
    #define tinl3433                   220 /* Inlooptijd fase 34                                                    */
    #define TMMAX1                     221

/* teller elementen */
/* ---------------- */
    #define cdummy 0
    #define CTMAX1 1

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
    #define schgs2232                 20 /* Schakelbare gelijkstart van 32 naar 22                         */
    #define schgs2434                 21 /* Schakelbare gelijkstart van 34 naar 24                         */
    #define schgs2484                 22 /* Schakelbare gelijkstart van 84 naar 24                         */
    #define schgs3384                 23 /* Schakelbare gelijkstart van 84 naar 33                         */
    #define schma0261                 24 /* Meeaanvraag van 02 naar 61 actief                              */
    #define schma0262                 25 /* Meeaanvraag van 02 naar 62 actief                              */
    #define schma0521                 26 /* Meeaanvraag van 05 naar 21 actief                              */
    #define schma0522                 27 /* Meeaanvraag van 05 naar 22 actief                              */
    #define schma0532                 28 /* Meeaanvraag van 05 naar 32 actief                              */
    #define schma0868                 29 /* Meeaanvraag van 08 naar 68 actief                              */
    #define schma1126                 30 /* Meeaanvraag van 11 naar 26 actief                              */
    #define schma1168                 31 /* Meeaanvraag van 11 naar 68 actief                              */
    #define schma2221                 32 /* Meeaanvraag van 22 naar 21 actief                              */
    #define schma2611                 33 /* Meeaanvraag van 26 naar 11 actief                              */
    #define schma3122                 34 /* Meeaanvraag van 31 naar 22 actief                              */
    #define schma3132                 35 /* Meeaanvraag van 31 naar 32 actief                              */
    #define schma3222                 36 /* Meeaanvraag van 32 naar 22 actief                              */
    #define schma3231                 37 /* Meeaanvraag van 32 naar 31 actief                              */
    #define schma3324                 38 /* Meeaanvraag van 33 naar 24 actief                              */
    #define schma3334                 39 /* Meeaanvraag van 33 naar 34 actief                              */
    #define schma3384                 40 /* Meeaanvraag van 33 naar 84 actief                              */
    #define schma3424                 41 /* Meeaanvraag van 34 naar 24 actief                              */
    #define schma3433                 42 /* Meeaanvraag van 34 naar 33 actief                              */
    #define schma3484                 43 /* Meeaanvraag van 34 naar 84 actief                              */
    #define schma8281                 44 /* Meeaanvraag van 82 naar 81 actief                              */
    #define schmv02                   45 /* Meeverlengen fase 02                                           */
    #define schmv03                   46 /* Meeverlengen fase 03                                           */
    #define schmv05                   47 /* Meeverlengen fase 05                                           */
    #define schmv08                   48 /* Meeverlengen fase 08                                           */
    #define schmv09                   49 /* Meeverlengen fase 09                                           */
    #define schmv11                   50 /* Meeverlengen fase 11                                           */
    #define schmv21                   51 /* Meeverlengen fase 21                                           */
    #define schmv22                   52 /* Meeverlengen fase 22                                           */
    #define schhardmv2205             53 /* Hard meeverlengen fase 22 met fase 05                          */
    #define schmv24                   54 /* Meeverlengen fase 24                                           */
    #define schmv26                   55 /* Meeverlengen fase 26                                           */
    #define schhardmv2611             56 /* Hard meeverlengen fase 26 met fase 11                          */
    #define schmv28                   57 /* Meeverlengen fase 28                                           */
    #define schmv31                   58 /* Meeverlengen fase 31                                           */
    #define schmv32                   59 /* Meeverlengen fase 32                                           */
    #define schhardmv3205             60 /* Hard meeverlengen fase 32 met fase 05                          */
    #define schmv33                   61 /* Meeverlengen fase 33                                           */
    #define schmv34                   62 /* Meeverlengen fase 34                                           */
    #define schmv38                   63 /* Meeverlengen fase 38                                           */
    #define schmv61                   64 /* Meeverlengen fase 61                                           */
    #define schmv62                   65 /* Meeverlengen fase 62                                           */
    #define schmv67                   66 /* Meeverlengen fase 67                                           */
    #define schmv68                   67 /* Meeverlengen fase 68                                           */
    #define schmv81                   68 /* Meeverlengen fase 81                                           */
    #define schmv82                   69 /* Meeverlengen fase 82                                           */
    #define schmv84                   70 /* Meeverlengen fase 84                                           */
    #define schmlprm                  71 /* Toepassen parametriseerbare modulestructuur                    */
    #define schovstipt02bus           72 /* Geconditioneerde prioteit voor OV bij 02 Bus                   */
    #define schovstipt03bus           73 /* Geconditioneerde prioteit voor OV bij 03 Bus                   */
    #define schovstipt05bus           74 /* Geconditioneerde prioteit voor OV bij 05 Bus                   */
    #define schovstipt08bus           75 /* Geconditioneerde prioteit voor OV bij 08 Bus                   */
    #define schovstipt09bus           76 /* Geconditioneerde prioteit voor OV bij 09 Bus                   */
    #define schovstipt11bus           77 /* Geconditioneerde prioteit voor OV bij 11 Bus                   */
    #define schovstipt61bus           78 /* Geconditioneerde prioteit voor OV bij 61 Bus                   */
    #define schovstipt62bus           79 /* Geconditioneerde prioteit voor OV bij 62 Bus                   */
    #define schovstipt67bus           80 /* Geconditioneerde prioteit voor OV bij 67 Bus                   */
    #define schovstipt68bus           81 /* Geconditioneerde prioteit voor OV bij 68 Bus                   */
    #define schrgadd24_3              82 /* Type richtinggevoelige aanvraag fase 24 van 24_3 naar 24_2     */
    #define schca02                   83 /* Cyclische aanvraag fase 02                                     */
    #define schca03                   84 /* Cyclische aanvraag fase 03                                     */
    #define schca05                   85 /* Cyclische aanvraag fase 05                                     */
    #define schca08                   86 /* Cyclische aanvraag fase 08                                     */
    #define schca09                   87 /* Cyclische aanvraag fase 09                                     */
    #define schca11                   88 /* Cyclische aanvraag fase 11                                     */
    #define schca21                   89 /* Cyclische aanvraag fase 21                                     */
    #define schca22                   90 /* Cyclische aanvraag fase 22                                     */
    #define schca24                   91 /* Cyclische aanvraag fase 24                                     */
    #define schca26                   92 /* Cyclische aanvraag fase 26                                     */
    #define schca28                   93 /* Cyclische aanvraag fase 28                                     */
    #define schca31                   94 /* Cyclische aanvraag fase 31                                     */
    #define schca32                   95 /* Cyclische aanvraag fase 32                                     */
    #define schca33                   96 /* Cyclische aanvraag fase 33                                     */
    #define schca34                   97 /* Cyclische aanvraag fase 34                                     */
    #define schca38                   98 /* Cyclische aanvraag fase 38                                     */
    #define schca61                   99 /* Cyclische aanvraag fase 61                                     */
    #define schca62                  100 /* Cyclische aanvraag fase 62                                     */
    #define schca67                  101 /* Cyclische aanvraag fase 67                                     */
    #define schca68                  102 /* Cyclische aanvraag fase 68                                     */
    #define schca81                  103 /* Cyclische aanvraag fase 81                                     */
    #define schca82                  104 /* Cyclische aanvraag fase 82                                     */
    #define schca84                  105 /* Cyclische aanvraag fase 84                                     */
    #define schaltg02                106 /* Alternatieve realisatie toestaan fase 02                       */
    #define schaltg03                107 /* Alternatieve realisatie toestaan fase 03                       */
    #define schaltg05                108 /* Alternatieve realisatie toestaan fase 05                       */
    #define schaltg08                109 /* Alternatieve realisatie toestaan fase 08                       */
    #define schaltg09                110 /* Alternatieve realisatie toestaan fase 09                       */
    #define schaltg11                111 /* Alternatieve realisatie toestaan fase 11                       */
    #define schaltg21                112 /* Alternatieve realisatie toestaan fase 21                       */
    #define schaltg2232              113 /* Alternatieve realisatie toestaan fasen 22, 32                  */
    #define schaltg243484            114 /* Alternatieve realisatie toestaan fasen 24, 34, 84              */
    #define schaltg26                115 /* Alternatieve realisatie toestaan fase 26                       */
    #define schaltg28                116 /* Alternatieve realisatie toestaan fase 28                       */
    #define schaltg31                117 /* Alternatieve realisatie toestaan fase 31                       */
    #define schaltg3384              118 /* Alternatieve realisatie toestaan fasen 33, 84                  */
    #define schaltg2434              119 /* Alternatieve realisatie toestaan fasen 24, 34                  */
    #define schaltg38                120 /* Alternatieve realisatie toestaan fase 38                       */
    #define schaltg61                121 /* Alternatieve realisatie toestaan fase 61                       */
    #define schaltg62                122 /* Alternatieve realisatie toestaan fase 62                       */
    #define schaltg67                123 /* Alternatieve realisatie toestaan fase 67                       */
    #define schaltg68                124 /* Alternatieve realisatie toestaan fase 68                       */
    #define schaltg81                125 /* Alternatieve realisatie toestaan fase 81                       */
    #define schaltg82                126 /* Alternatieve realisatie toestaan fase 82                       */
    #define schaltg243384            127 /* Alternatieve realisatie toestaan fasen 24, 33, 84              */
    #define schwg02                  128 /* Wachtstand groen fase 02                                       */
    #define schwg03                  129 /* Wachtstand groen fase 03                                       */
    #define schwg05                  130 /* Wachtstand groen fase 05                                       */
    #define schwg08                  131 /* Wachtstand groen fase 08                                       */
    #define schwg09                  132 /* Wachtstand groen fase 09                                       */
    #define schwg11                  133 /* Wachtstand groen fase 11                                       */
    #define schwg21                  134 /* Wachtstand groen fase 21                                       */
    #define schwg22                  135 /* Wachtstand groen fase 22                                       */
    #define schwg24                  136 /* Wachtstand groen fase 24                                       */
    #define schwg26                  137 /* Wachtstand groen fase 26                                       */
    #define schwg28                  138 /* Wachtstand groen fase 28                                       */
    #define schwg31                  139 /* Wachtstand groen fase 31                                       */
    #define schwg32                  140 /* Wachtstand groen fase 32                                       */
    #define schwg33                  141 /* Wachtstand groen fase 33                                       */
    #define schwg34                  142 /* Wachtstand groen fase 34                                       */
    #define schwg38                  143 /* Wachtstand groen fase 38                                       */
    #define schwg61                  144 /* Wachtstand groen fase 61                                       */
    #define schwg62                  145 /* Wachtstand groen fase 62                                       */
    #define schwg67                  146 /* Wachtstand groen fase 67                                       */
    #define schwg68                  147 /* Wachtstand groen fase 68                                       */
    #define schwg81                  148 /* Wachtstand groen fase 81                                       */
    #define schwg82                  149 /* Wachtstand groen fase 82                                       */
    #define schwg84                  150 /* Wachtstand groen fase 84                                       */
    #define schsneld02_1a            151 /* Aanvraag snel voor detector 02_1a aan of uit                   */
    #define schsneld02_1b            152 /* Aanvraag snel voor detector 02_1b aan of uit                   */
    #define schsneld03_1             153 /* Aanvraag snel voor detector 03_1 aan of uit                    */
    #define schsneld05_1             154 /* Aanvraag snel voor detector 05_1 aan of uit                    */
    #define schsneld08_1a            155 /* Aanvraag snel voor detector 08_1a aan of uit                   */
    #define schsneld08_1b            156 /* Aanvraag snel voor detector 08_1b aan of uit                   */
    #define schsneld09_1             157 /* Aanvraag snel voor detector 09_1 aan of uit                    */
    #define schsneld11_1             158 /* Aanvraag snel voor detector 11_1 aan of uit                    */
    #define schsneld211              159 /* Aanvraag snel voor detector 211 aan of uit                     */
    #define schsneld22_1             160 /* Aanvraag snel voor detector 22_1 aan of uit                    */
    #define schsneld24_1             161 /* Aanvraag snel voor detector 24_1 aan of uit                    */
    #define schsneld261              162 /* Aanvraag snel voor detector 261 aan of uit                     */
    #define schsneld28_1             163 /* Aanvraag snel voor detector 28_1 aan of uit                    */
    #define schsneld61_1             164 /* Aanvraag snel voor detector 61_1 aan of uit                    */
    #define schsneld62_1a            165 /* Aanvraag snel voor detector 62_1a aan of uit                   */
    #define schsneld62_1b            166 /* Aanvraag snel voor detector 62_1b aan of uit                   */
    #define schsneld67_1             167 /* Aanvraag snel voor detector 67_1 aan of uit                    */
    #define schsneld68_1a            168 /* Aanvraag snel voor detector 68_1a aan of uit                   */
    #define schsneld68_1b            169 /* Aanvraag snel voor detector 68_1b aan of uit                   */
    #define schsneld81_1             170 /* Aanvraag snel voor detector 81_1 aan of uit                    */
    #define schsneld82_1             171 /* Aanvraag snel voor detector 82_1 aan of uit                    */
    #define schsneld84_1             172 /* Aanvraag snel voor detector 84_1 aan of uit                    */
    #define SCHMAX1                  173

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
    #define prmtypema0261          175 /* Type meeaanvraag van 02 naar 61                                                                                                */
    #define prmtypema0262          176 /* Type meeaanvraag van 02 naar 62                                                                                                */
    #define prmtypema0521          177 /* Type meeaanvraag van 05 naar 21                                                                                                */
    #define prmtypema0522          178 /* Type meeaanvraag van 05 naar 22                                                                                                */
    #define prmtypema0532          179 /* Type meeaanvraag van 05 naar 32                                                                                                */
    #define prmtypema0868          180 /* Type meeaanvraag van 08 naar 68                                                                                                */
    #define prmtypema1126          181 /* Type meeaanvraag van 11 naar 26                                                                                                */
    #define prmtypema1168          182 /* Type meeaanvraag van 11 naar 68                                                                                                */
    #define prmtypema2221          183 /* Type meeaanvraag van 22 naar 21                                                                                                */
    #define prmtypema2611          184 /* Type meeaanvraag van 26 naar 11                                                                                                */
    #define prmtypema3122          185 /* Type meeaanvraag van 31 naar 22                                                                                                */
    #define prmtypema3132          186 /* Type meeaanvraag van 31 naar 32                                                                                                */
    #define prmtypema3222          187 /* Type meeaanvraag van 32 naar 22                                                                                                */
    #define prmtypema3231          188 /* Type meeaanvraag van 32 naar 31                                                                                                */
    #define prmtypema3324          189 /* Type meeaanvraag van 33 naar 24                                                                                                */
    #define prmtypema3334          190 /* Type meeaanvraag van 33 naar 34                                                                                                */
    #define prmtypema3384          191 /* Type meeaanvraag van 33 naar 84                                                                                                */
    #define prmtypema3424          192 /* Type meeaanvraag van 34 naar 24                                                                                                */
    #define prmtypema3433          193 /* Type meeaanvraag van 34 naar 33                                                                                                */
    #define prmtypema3484          194 /* Type meeaanvraag van 34 naar 84                                                                                                */
    #define prmtypema3828          195 /* Type meeaanvraag van 38 naar 28                                                                                                */
    #define prmtypema8281          196 /* Type meeaanvraag van 82 naar 81                                                                                                */
    #define prmmv02                197 /* Type meeverlengen fase 02 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv03                198 /* Type meeverlengen fase 03 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv05                199 /* Type meeverlengen fase 05 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv08                200 /* Type meeverlengen fase 08 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv09                201 /* Type meeverlengen fase 09 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv11                202 /* Type meeverlengen fase 11 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv21                203 /* Type meeverlengen fase 21 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv22                204 /* Type meeverlengen fase 22 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv24                205 /* Type meeverlengen fase 24 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv26                206 /* Type meeverlengen fase 26 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv28                207 /* Type meeverlengen fase 28 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv31                208 /* Type meeverlengen fase 31 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv32                209 /* Type meeverlengen fase 32 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv33                210 /* Type meeverlengen fase 33 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv34                211 /* Type meeverlengen fase 34 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv38                212 /* Type meeverlengen fase 38 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv61                213 /* Type meeverlengen fase 61 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv62                214 /* Type meeverlengen fase 62 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv67                215 /* Type meeverlengen fase 67 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv68                216 /* Type meeverlengen fase 68 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv81                217 /* Type meeverlengen fase 81 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv82                218 /* Type meeverlengen fase 82 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmmv84                219 /* Type meeverlengen fase 84 (0=uit,1=ymmaxV1,2=ymmaxtoV1,3=ymmaxV1|MK&ymmaxtoV1,4=ymmaxvtg,5=ymmax,6=ymmaxto,7=ymmax|MK&ymmaxto) */
    #define prmprml02              220 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml03              221 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml05              222 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml08              223 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml09              224 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml11              225 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml21              226 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml22              227 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml24              228 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml26              229 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml28              230 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml31              231 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml32              232 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml33              233 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml34              234 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml38              235 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml61              236 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml62              237 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml67              238 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml68              239 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml81              240 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml82              241 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmprml84              242 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen)                              */
    #define prmxnl0262             243 /* Tijd tegenhouden voedende richting naloop van 02 naar 62                                                                       */
    #define prmxnl0868             244 /* Tijd tegenhouden voedende richting naloop van 08 naar 68                                                                       */
    #define prmxnl1168             245 /* Tijd tegenhouden voedende richting naloop van 11 naar 68                                                                       */
    #define prmxnl2221             246 /* Tijd tegenhouden voedende richting naloop van 22 naar 21                                                                       */
    #define prmxnl3132             247 /* Tijd tegenhouden voedende richting naloop van 31 naar 32                                                                       */
    #define prmxnl3231             248 /* Tijd tegenhouden voedende richting naloop van 32 naar 31                                                                       */
    #define prmxnl3334             249 /* Tijd tegenhouden voedende richting naloop van 33 naar 34                                                                       */
    #define prmxnl3433             250 /* Tijd tegenhouden voedende richting naloop van 34 naar 33                                                                       */
    #define prmxnl8281             251 /* Tijd tegenhouden voedende richting naloop van 82 naar 81                                                                       */
    #define prmOVtstpgrensvroeg    252 /* Grens waarboven een OV voertuig als te vroeg wordt aangemerkt                                                                  */
    #define prmOVtstpgrenslaat     253 /* Grens waarboven een OV voertuig als te laat wordt aangemerkt                                                                   */
    #define prmovstipttevroeg02bus 254 /* Prioriteitsnveau OV te vroeg bij 02 Bus                                                                                        */
    #define prmovstiptoptijd02bus  255 /* Prioriteitsnveau OV op tijd bij 02 Bus                                                                                         */
    #define prmovstipttelaat02bus  256 /* Prioriteitsnveau OV te laat bij 02 Bus                                                                                         */
    #define prmovstipttevroeg03bus 257 /* Prioriteitsnveau OV te vroeg bij 03 Bus                                                                                        */
    #define prmovstiptoptijd03bus  258 /* Prioriteitsnveau OV op tijd bij 03 Bus                                                                                         */
    #define prmovstipttelaat03bus  259 /* Prioriteitsnveau OV te laat bij 03 Bus                                                                                         */
    #define prmovstipttevroeg05bus 260 /* Prioriteitsnveau OV te vroeg bij 05 Bus                                                                                        */
    #define prmovstiptoptijd05bus  261 /* Prioriteitsnveau OV op tijd bij 05 Bus                                                                                         */
    #define prmovstipttelaat05bus  262 /* Prioriteitsnveau OV te laat bij 05 Bus                                                                                         */
    #define prmovstipttevroeg08bus 263 /* Prioriteitsnveau OV te vroeg bij 08 Bus                                                                                        */
    #define prmovstiptoptijd08bus  264 /* Prioriteitsnveau OV op tijd bij 08 Bus                                                                                         */
    #define prmovstipttelaat08bus  265 /* Prioriteitsnveau OV te laat bij 08 Bus                                                                                         */
    #define prmovstipttevroeg09bus 266 /* Prioriteitsnveau OV te vroeg bij 09 Bus                                                                                        */
    #define prmovstiptoptijd09bus  267 /* Prioriteitsnveau OV op tijd bij 09 Bus                                                                                         */
    #define prmovstipttelaat09bus  268 /* Prioriteitsnveau OV te laat bij 09 Bus                                                                                         */
    #define prmovstipttevroeg11bus 269 /* Prioriteitsnveau OV te vroeg bij 11 Bus                                                                                        */
    #define prmovstiptoptijd11bus  270 /* Prioriteitsnveau OV op tijd bij 11 Bus                                                                                         */
    #define prmovstipttelaat11bus  271 /* Prioriteitsnveau OV te laat bij 11 Bus                                                                                         */
    #define prmovstipttevroeg61bus 272 /* Prioriteitsnveau OV te vroeg bij 61 Bus                                                                                        */
    #define prmovstiptoptijd61bus  273 /* Prioriteitsnveau OV op tijd bij 61 Bus                                                                                         */
    #define prmovstipttelaat61bus  274 /* Prioriteitsnveau OV te laat bij 61 Bus                                                                                         */
    #define prmovstipttevroeg62bus 275 /* Prioriteitsnveau OV te vroeg bij 62 Bus                                                                                        */
    #define prmovstiptoptijd62bus  276 /* Prioriteitsnveau OV op tijd bij 62 Bus                                                                                         */
    #define prmovstipttelaat62bus  277 /* Prioriteitsnveau OV te laat bij 62 Bus                                                                                         */
    #define prmovstipttevroeg67bus 278 /* Prioriteitsnveau OV te vroeg bij 67 Bus                                                                                        */
    #define prmovstiptoptijd67bus  279 /* Prioriteitsnveau OV op tijd bij 67 Bus                                                                                         */
    #define prmovstipttelaat67bus  280 /* Prioriteitsnveau OV te laat bij 67 Bus                                                                                         */
    #define prmovstipttevroeg68bus 281 /* Prioriteitsnveau OV te vroeg bij 68 Bus                                                                                        */
    #define prmovstiptoptijd68bus  282 /* Prioriteitsnveau OV op tijd bij 68 Bus                                                                                         */
    #define prmovstipttelaat68bus  283 /* Prioriteitsnveau OV te laat bij 68 Bus                                                                                         */
    #define prmstkp1               284 /* Start klokperiode nacht                                                                                                        */
    #define prmetkp1               285 /* Einde klokperiode nacht                                                                                                        */
    #define prmdckp1               286 /* Dagsoort klokperiode nacht                                                                                                     */
    #define prmstkp2               287 /* Start klokperiode dag                                                                                                          */
    #define prmetkp2               288 /* Einde klokperiode dag                                                                                                          */
    #define prmdckp2               289 /* Dagsoort klokperiode dag                                                                                                       */
    #define prmstkp3               290 /* Start klokperiode ochtend                                                                                                      */
    #define prmetkp3               291 /* Einde klokperiode ochtend                                                                                                      */
    #define prmdckp3               292 /* Dagsoort klokperiode ochtend                                                                                                   */
    #define prmstkp4               293 /* Start klokperiode avond                                                                                                        */
    #define prmetkp4               294 /* Einde klokperiode avond                                                                                                        */
    #define prmdckp4               295 /* Dagsoort klokperiode avond                                                                                                     */
    #define prmstkp5               296 /* Start klokperiode koopavond                                                                                                    */
    #define prmetkp5               297 /* Einde klokperiode koopavond                                                                                                    */
    #define prmdckp5               298 /* Dagsoort klokperiode koopavond                                                                                                 */
    #define prmstkp6               299 /* Start klokperiode weekend                                                                                                      */
    #define prmetkp6               300 /* Einde klokperiode weekend                                                                                                      */
    #define prmdckp6               301 /* Dagsoort klokperiode weekend                                                                                                   */
    #define prmstkp7               302 /* Start klokperiode reserve                                                                                                      */
    #define prmetkp7               303 /* Einde klokperiode reserve                                                                                                      */
    #define prmdckp7               304 /* Dagsoort klokperiode reserve                                                                                                   */
    #define prmstkpoFietsprio1     305 /* Start klokperiode Fietsprio1                                                                                                   */
    #define prmetkpoFietsprio1     306 /* Einde klokperiode Fietsprio1                                                                                                   */
    #define prmdckpoFietsprio1     307 /* Dagsoort klokperiode Fietsprio1                                                                                                */
    #define prmstkpoFietsprio2     308 /* Start klokperiode Fietsprio2                                                                                                   */
    #define prmetkpoFietsprio2     309 /* Einde klokperiode Fietsprio2                                                                                                   */
    #define prmdckpoFietsprio2     310 /* Dagsoort klokperiode Fietsprio2                                                                                                */
    #define prmstkpoFietsprio3     311 /* Start klokperiode Fietsprio3                                                                                                   */
    #define prmetkpoFietsprio3     312 /* Einde klokperiode Fietsprio3                                                                                                   */
    #define prmdckpoFietsprio3     313 /* Dagsoort klokperiode Fietsprio3                                                                                                */
    #define prmvg1_02              314 /* Verlenggroentijd VG1 02                                                                                                        */
    #define prmvg1_03              315 /* Verlenggroentijd VG1 03                                                                                                        */
    #define prmvg1_05              316 /* Verlenggroentijd VG1 05                                                                                                        */
    #define prmvg1_08              317 /* Verlenggroentijd VG1 08                                                                                                        */
    #define prmvg1_09              318 /* Verlenggroentijd VG1 09                                                                                                        */
    #define prmvg1_11              319 /* Verlenggroentijd VG1 11                                                                                                        */
    #define prmvg1_21              320 /* Verlenggroentijd VG1 21                                                                                                        */
    #define prmvg1_22              321 /* Verlenggroentijd VG1 22                                                                                                        */
    #define prmvg1_24              322 /* Verlenggroentijd VG1 24                                                                                                        */
    #define prmvg1_26              323 /* Verlenggroentijd VG1 26                                                                                                        */
    #define prmvg1_28              324 /* Verlenggroentijd VG1 28                                                                                                        */
    #define prmvg1_61              325 /* Verlenggroentijd VG1 61                                                                                                        */
    #define prmvg1_62              326 /* Verlenggroentijd VG1 62                                                                                                        */
    #define prmvg1_67              327 /* Verlenggroentijd VG1 67                                                                                                        */
    #define prmvg1_68              328 /* Verlenggroentijd VG1 68                                                                                                        */
    #define prmvg1_81              329 /* Verlenggroentijd VG1 81                                                                                                        */
    #define prmvg1_82              330 /* Verlenggroentijd VG1 82                                                                                                        */
    #define prmvg1_84              331 /* Verlenggroentijd VG1 84                                                                                                        */
    #define prmvg2_02              332 /* Verlenggroentijd VG2 02                                                                                                        */
    #define prmvg2_03              333 /* Verlenggroentijd VG2 03                                                                                                        */
    #define prmvg2_05              334 /* Verlenggroentijd VG2 05                                                                                                        */
    #define prmvg2_08              335 /* Verlenggroentijd VG2 08                                                                                                        */
    #define prmvg2_09              336 /* Verlenggroentijd VG2 09                                                                                                        */
    #define prmvg2_11              337 /* Verlenggroentijd VG2 11                                                                                                        */
    #define prmvg2_21              338 /* Verlenggroentijd VG2 21                                                                                                        */
    #define prmvg2_22              339 /* Verlenggroentijd VG2 22                                                                                                        */
    #define prmvg2_24              340 /* Verlenggroentijd VG2 24                                                                                                        */
    #define prmvg2_26              341 /* Verlenggroentijd VG2 26                                                                                                        */
    #define prmvg2_28              342 /* Verlenggroentijd VG2 28                                                                                                        */
    #define prmvg2_61              343 /* Verlenggroentijd VG2 61                                                                                                        */
    #define prmvg2_62              344 /* Verlenggroentijd VG2 62                                                                                                        */
    #define prmvg2_67              345 /* Verlenggroentijd VG2 67                                                                                                        */
    #define prmvg2_68              346 /* Verlenggroentijd VG2 68                                                                                                        */
    #define prmvg2_81              347 /* Verlenggroentijd VG2 81                                                                                                        */
    #define prmvg2_82              348 /* Verlenggroentijd VG2 82                                                                                                        */
    #define prmvg2_84              349 /* Verlenggroentijd VG2 84                                                                                                        */
    #define prmvg3_02              350 /* Verlenggroentijd VG3 02                                                                                                        */
    #define prmvg3_03              351 /* Verlenggroentijd VG3 03                                                                                                        */
    #define prmvg3_05              352 /* Verlenggroentijd VG3 05                                                                                                        */
    #define prmvg3_08              353 /* Verlenggroentijd VG3 08                                                                                                        */
    #define prmvg3_09              354 /* Verlenggroentijd VG3 09                                                                                                        */
    #define prmvg3_11              355 /* Verlenggroentijd VG3 11                                                                                                        */
    #define prmvg3_21              356 /* Verlenggroentijd VG3 21                                                                                                        */
    #define prmvg3_22              357 /* Verlenggroentijd VG3 22                                                                                                        */
    #define prmvg3_24              358 /* Verlenggroentijd VG3 24                                                                                                        */
    #define prmvg3_26              359 /* Verlenggroentijd VG3 26                                                                                                        */
    #define prmvg3_28              360 /* Verlenggroentijd VG3 28                                                                                                        */
    #define prmvg3_61              361 /* Verlenggroentijd VG3 61                                                                                                        */
    #define prmvg3_62              362 /* Verlenggroentijd VG3 62                                                                                                        */
    #define prmvg3_67              363 /* Verlenggroentijd VG3 67                                                                                                        */
    #define prmvg3_68              364 /* Verlenggroentijd VG3 68                                                                                                        */
    #define prmvg3_81              365 /* Verlenggroentijd VG3 81                                                                                                        */
    #define prmvg3_82              366 /* Verlenggroentijd VG3 82                                                                                                        */
    #define prmvg3_84              367 /* Verlenggroentijd VG3 84                                                                                                        */
    #define prmvg4_02              368 /* Verlenggroentijd VG4 02                                                                                                        */
    #define prmvg4_03              369 /* Verlenggroentijd VG4 03                                                                                                        */
    #define prmvg4_05              370 /* Verlenggroentijd VG4 05                                                                                                        */
    #define prmvg4_08              371 /* Verlenggroentijd VG4 08                                                                                                        */
    #define prmvg4_09              372 /* Verlenggroentijd VG4 09                                                                                                        */
    #define prmvg4_11              373 /* Verlenggroentijd VG4 11                                                                                                        */
    #define prmvg4_21              374 /* Verlenggroentijd VG4 21                                                                                                        */
    #define prmvg4_22              375 /* Verlenggroentijd VG4 22                                                                                                        */
    #define prmvg4_24              376 /* Verlenggroentijd VG4 24                                                                                                        */
    #define prmvg4_26              377 /* Verlenggroentijd VG4 26                                                                                                        */
    #define prmvg4_28              378 /* Verlenggroentijd VG4 28                                                                                                        */
    #define prmvg4_61              379 /* Verlenggroentijd VG4 61                                                                                                        */
    #define prmvg4_62              380 /* Verlenggroentijd VG4 62                                                                                                        */
    #define prmvg4_67              381 /* Verlenggroentijd VG4 67                                                                                                        */
    #define prmvg4_68              382 /* Verlenggroentijd VG4 68                                                                                                        */
    #define prmvg4_81              383 /* Verlenggroentijd VG4 81                                                                                                        */
    #define prmvg4_82              384 /* Verlenggroentijd VG4 82                                                                                                        */
    #define prmvg4_84              385 /* Verlenggroentijd VG4 84                                                                                                        */
    #define prmvg5_02              386 /* Verlenggroentijd VG5 02                                                                                                        */
    #define prmvg5_03              387 /* Verlenggroentijd VG5 03                                                                                                        */
    #define prmvg5_05              388 /* Verlenggroentijd VG5 05                                                                                                        */
    #define prmvg5_08              389 /* Verlenggroentijd VG5 08                                                                                                        */
    #define prmvg5_09              390 /* Verlenggroentijd VG5 09                                                                                                        */
    #define prmvg5_11              391 /* Verlenggroentijd VG5 11                                                                                                        */
    #define prmvg5_21              392 /* Verlenggroentijd VG5 21                                                                                                        */
    #define prmvg5_22              393 /* Verlenggroentijd VG5 22                                                                                                        */
    #define prmvg5_24              394 /* Verlenggroentijd VG5 24                                                                                                        */
    #define prmvg5_26              395 /* Verlenggroentijd VG5 26                                                                                                        */
    #define prmvg5_28              396 /* Verlenggroentijd VG5 28                                                                                                        */
    #define prmvg5_61              397 /* Verlenggroentijd VG5 61                                                                                                        */
    #define prmvg5_62              398 /* Verlenggroentijd VG5 62                                                                                                        */
    #define prmvg5_67              399 /* Verlenggroentijd VG5 67                                                                                                        */
    #define prmvg5_68              400 /* Verlenggroentijd VG5 68                                                                                                        */
    #define prmvg5_81              401 /* Verlenggroentijd VG5 81                                                                                                        */
    #define prmvg5_82              402 /* Verlenggroentijd VG5 82                                                                                                        */
    #define prmvg5_84              403 /* Verlenggroentijd VG5 84                                                                                                        */
    #define prmvg6_02              404 /* Verlenggroentijd VG6 02                                                                                                        */
    #define prmvg6_03              405 /* Verlenggroentijd VG6 03                                                                                                        */
    #define prmvg6_05              406 /* Verlenggroentijd VG6 05                                                                                                        */
    #define prmvg6_08              407 /* Verlenggroentijd VG6 08                                                                                                        */
    #define prmvg6_09              408 /* Verlenggroentijd VG6 09                                                                                                        */
    #define prmvg6_11              409 /* Verlenggroentijd VG6 11                                                                                                        */
    #define prmvg6_21              410 /* Verlenggroentijd VG6 21                                                                                                        */
    #define prmvg6_22              411 /* Verlenggroentijd VG6 22                                                                                                        */
    #define prmvg6_24              412 /* Verlenggroentijd VG6 24                                                                                                        */
    #define prmvg6_26              413 /* Verlenggroentijd VG6 26                                                                                                        */
    #define prmvg6_28              414 /* Verlenggroentijd VG6 28                                                                                                        */
    #define prmvg6_61              415 /* Verlenggroentijd VG6 61                                                                                                        */
    #define prmvg6_62              416 /* Verlenggroentijd VG6 62                                                                                                        */
    #define prmvg6_67              417 /* Verlenggroentijd VG6 67                                                                                                        */
    #define prmvg6_68              418 /* Verlenggroentijd VG6 68                                                                                                        */
    #define prmvg6_81              419 /* Verlenggroentijd VG6 81                                                                                                        */
    #define prmvg6_82              420 /* Verlenggroentijd VG6 82                                                                                                        */
    #define prmvg6_84              421 /* Verlenggroentijd VG6 84                                                                                                        */
    #define prmvg7_02              422 /* Verlenggroentijd VG7 02                                                                                                        */
    #define prmvg7_03              423 /* Verlenggroentijd VG7 03                                                                                                        */
    #define prmvg7_05              424 /* Verlenggroentijd VG7 05                                                                                                        */
    #define prmvg7_08              425 /* Verlenggroentijd VG7 08                                                                                                        */
    #define prmvg7_09              426 /* Verlenggroentijd VG7 09                                                                                                        */
    #define prmvg7_11              427 /* Verlenggroentijd VG7 11                                                                                                        */
    #define prmvg7_21              428 /* Verlenggroentijd VG7 21                                                                                                        */
    #define prmvg7_22              429 /* Verlenggroentijd VG7 22                                                                                                        */
    #define prmvg7_24              430 /* Verlenggroentijd VG7 24                                                                                                        */
    #define prmvg7_26              431 /* Verlenggroentijd VG7 26                                                                                                        */
    #define prmvg7_28              432 /* Verlenggroentijd VG7 28                                                                                                        */
    #define prmvg7_61              433 /* Verlenggroentijd VG7 61                                                                                                        */
    #define prmvg7_62              434 /* Verlenggroentijd VG7 62                                                                                                        */
    #define prmvg7_67              435 /* Verlenggroentijd VG7 67                                                                                                        */
    #define prmvg7_68              436 /* Verlenggroentijd VG7 68                                                                                                        */
    #define prmvg7_81              437 /* Verlenggroentijd VG7 81                                                                                                        */
    #define prmvg7_82              438 /* Verlenggroentijd VG7 82                                                                                                        */
    #define prmvg7_84              439 /* Verlenggroentijd VG7 84                                                                                                        */
    #define prmmkrgd24_3           440 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                                                          */
    #define prmmaxtvgvlog          441 /* Parameter VLOG max. aantal volledige verlenggroen                                                                              */
    #define prmmaxtfbvlog          442 /* Parameter VLOG max. wachttijd na aanvraag                                                                                      */
    #define prmmlfpr02             443 /* Maximaal aantal modules vooruit fase 02                                                                                        */
    #define prmmlfpr03             444 /* Maximaal aantal modules vooruit fase 03                                                                                        */
    #define prmmlfpr05             445 /* Maximaal aantal modules vooruit fase 05                                                                                        */
    #define prmmlfpr08             446 /* Maximaal aantal modules vooruit fase 08                                                                                        */
    #define prmmlfpr09             447 /* Maximaal aantal modules vooruit fase 09                                                                                        */
    #define prmmlfpr11             448 /* Maximaal aantal modules vooruit fase 11                                                                                        */
    #define prmmlfpr21             449 /* Maximaal aantal modules vooruit fase 21                                                                                        */
    #define prmmlfpr22             450 /* Maximaal aantal modules vooruit fase 22                                                                                        */
    #define prmmlfpr24             451 /* Maximaal aantal modules vooruit fase 24                                                                                        */
    #define prmmlfpr26             452 /* Maximaal aantal modules vooruit fase 26                                                                                        */
    #define prmmlfpr28             453 /* Maximaal aantal modules vooruit fase 28                                                                                        */
    #define prmmlfpr31             454 /* Maximaal aantal modules vooruit fase 31                                                                                        */
    #define prmmlfpr32             455 /* Maximaal aantal modules vooruit fase 32                                                                                        */
    #define prmmlfpr33             456 /* Maximaal aantal modules vooruit fase 33                                                                                        */
    #define prmmlfpr34             457 /* Maximaal aantal modules vooruit fase 34                                                                                        */
    #define prmmlfpr38             458 /* Maximaal aantal modules vooruit fase 38                                                                                        */
    #define prmmlfpr61             459 /* Maximaal aantal modules vooruit fase 61                                                                                        */
    #define prmmlfpr62             460 /* Maximaal aantal modules vooruit fase 62                                                                                        */
    #define prmmlfpr67             461 /* Maximaal aantal modules vooruit fase 67                                                                                        */
    #define prmmlfpr68             462 /* Maximaal aantal modules vooruit fase 68                                                                                        */
    #define prmmlfpr81             463 /* Maximaal aantal modules vooruit fase 81                                                                                        */
    #define prmmlfpr82             464 /* Maximaal aantal modules vooruit fase 82                                                                                        */
    #define prmmlfpr84             465 /* Maximaal aantal modules vooruit fase 84                                                                                        */
    #define prmaltg02              466 /* Minimale groentijd bij alternatieve realisatie fase 02                                                                         */
    #define prmaltp02              467 /* Minimale ruimte tbv alternatieve realisatie fase 02                                                                            */
    #define prmaltg03              468 /* Minimale groentijd bij alternatieve realisatie fase 03                                                                         */
    #define prmaltp03              469 /* Minimale ruimte tbv alternatieve realisatie fase 03                                                                            */
    #define prmaltg05              470 /* Minimale groentijd bij alternatieve realisatie fase 05                                                                         */
    #define prmaltp05              471 /* Minimale ruimte tbv alternatieve realisatie fase 05                                                                            */
    #define prmaltg08              472 /* Minimale groentijd bij alternatieve realisatie fase 08                                                                         */
    #define prmaltp08              473 /* Minimale ruimte tbv alternatieve realisatie fase 08                                                                            */
    #define prmaltg09              474 /* Minimale groentijd bij alternatieve realisatie fase 09                                                                         */
    #define prmaltp09              475 /* Minimale ruimte tbv alternatieve realisatie fase 09                                                                            */
    #define prmaltg11              476 /* Minimale groentijd bij alternatieve realisatie fase 11                                                                         */
    #define prmaltp11              477 /* Minimale ruimte tbv alternatieve realisatie fase 11                                                                            */
    #define prmaltg21              478 /* Minimale groentijd bij alternatieve realisatie fase 21                                                                         */
    #define prmaltp21              479 /* Minimale ruimte tbv alternatieve realisatie fase 21                                                                            */
    #define prmaltg22              480 /* Minimale groentijd bij alternatieve realisatie fase 22                                                                         */
    #define prmaltp2232            481 /* Minimale ruimte tbv alternatieve realisatie fasen 22, 32                                                                       */
    #define prmaltg24              482 /* Minimale groentijd bij alternatieve realisatie fase 24                                                                         */
    #define prmaltp243484          483 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34, 84                                                                   */
    #define prmaltg26              484 /* Minimale groentijd bij alternatieve realisatie fase 26                                                                         */
    #define prmaltp26              485 /* Minimale ruimte tbv alternatieve realisatie fase 26                                                                            */
    #define prmaltg28              486 /* Minimale groentijd bij alternatieve realisatie fase 28                                                                         */
    #define prmaltp28              487 /* Minimale ruimte tbv alternatieve realisatie fase 28                                                                            */
    #define prmaltg31              488 /* Minimale groentijd bij alternatieve realisatie fase 31                                                                         */
    #define prmaltp31              489 /* Minimale ruimte tbv alternatieve realisatie fase 31                                                                            */
    #define prmaltg32              490 /* Minimale groentijd bij alternatieve realisatie fase 32                                                                         */
    #define prmaltg33              491 /* Minimale groentijd bij alternatieve realisatie fase 33                                                                         */
    #define prmaltp3384            492 /* Minimale ruimte tbv alternatieve realisatie fasen 33, 84                                                                       */
    #define prmaltg34              493 /* Minimale groentijd bij alternatieve realisatie fase 34                                                                         */
    #define prmaltp2434            494 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 34                                                                       */
    #define prmaltg38              495 /* Minimale groentijd bij alternatieve realisatie fase 38                                                                         */
    #define prmaltp38              496 /* Minimale ruimte tbv alternatieve realisatie fase 38                                                                            */
    #define prmaltg61              497 /* Minimale groentijd bij alternatieve realisatie fase 61                                                                         */
    #define prmaltp61              498 /* Minimale ruimte tbv alternatieve realisatie fase 61                                                                            */
    #define prmaltg62              499 /* Minimale groentijd bij alternatieve realisatie fase 62                                                                         */
    #define prmaltp62              500 /* Minimale ruimte tbv alternatieve realisatie fase 62                                                                            */
    #define prmaltg67              501 /* Minimale groentijd bij alternatieve realisatie fase 67                                                                         */
    #define prmaltp67              502 /* Minimale ruimte tbv alternatieve realisatie fase 67                                                                            */
    #define prmaltg68              503 /* Minimale groentijd bij alternatieve realisatie fase 68                                                                         */
    #define prmaltp68              504 /* Minimale ruimte tbv alternatieve realisatie fase 68                                                                            */
    #define prmaltg81              505 /* Minimale groentijd bij alternatieve realisatie fase 81                                                                         */
    #define prmaltp81              506 /* Minimale ruimte tbv alternatieve realisatie fase 81                                                                            */
    #define prmaltg82              507 /* Minimale groentijd bij alternatieve realisatie fase 82                                                                         */
    #define prmaltp82              508 /* Minimale ruimte tbv alternatieve realisatie fase 82                                                                            */
    #define prmaltg84              509 /* Minimale groentijd bij alternatieve realisatie fase 84                                                                         */
    #define prmaltp243384          510 /* Minimale ruimte tbv alternatieve realisatie fasen 24, 33, 84                                                                   */
    #define PRMMAX1                511

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR */
    #define DSMAX    1

/* modulen */
/* ------- */
    #define MLMAX1 5 /* aantal modulen */

/* Aantal perioden voor max groen */
/* ------- */
    #define MPERIODMAX 8 /* aantal groenperioden */

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined PRACTICE_TEST
    #define TESTOMGEVING
#endif

/* Gebruikers toevoegingen file includen */
/* ------------------------------------- */
    #include "123456sys.add"

