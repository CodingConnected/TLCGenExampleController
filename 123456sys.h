/* ALGEMENE APPLICATIEFILE */
/* ----------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sys.h
      CCOL:   8.0
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.8   16-08-2024   TLCGen      Release versie TLCGen
 * 12.5.0     28-08-2024   Wiersma     CCOL8 versie 
 *
 ************************************************************************************/

#define SYSTEM "123456"
#define VERSION "12.5.0 20240828"

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
    #define usML1              (FCMAX +  0) /* Verklikken actief zijn ML1                                                  */
    #define usML2              (FCMAX +  1) /* Verklikken actief zijn ML2                                                  */
    #define usML3              (FCMAX +  2) /* Verklikken actief zijn ML3                                                  */
    #define usML4              (FCMAX +  3) /* Verklikken actief zijn ML4                                                  */
    #define usfile68af         (FCMAX +  4) /* File ingreep 68af actief                                                    */
    #define usmaxwt            (FCMAX +  5) /* Verklikken maximale wachttijd overschreden                                  */
    #define uskarmelding       (FCMAX +  6) /* Verklikken ontvangst melding KAR                                            */
    #define uskarog            (FCMAX +  7) /* Verklikken ondergedrag KAR                                                  */
    #define usovinm02          (FCMAX +  8) /* Verklikken inmelding OV fase 02                                             */
    #define usovinm08          (FCMAX +  9) /* Verklikken inmelding OV fase 08                                             */
    #define usovinm11          (FCMAX + 10) /* Verklikken inmelding OV fase 11                                             */
    #define usovinm22          (FCMAX + 11) /* Verklikken inmelding OV fase 22                                             */
    #define usovinm24          (FCMAX + 12) /* Verklikken inmelding OV fase 24                                             */
    #define usovinm61          (FCMAX + 13) /* Verklikken inmelding OV fase 61                                             */
    #define usovinm84          (FCMAX + 14) /* Verklikken inmelding OV fase 84                                             */
    #define ushdinm02          (FCMAX + 15) /* Verklikken inmelding HD fase 02                                             */
    #define ushdinm03          (FCMAX + 16) /* Verklikken inmelding HD fase 03                                             */
    #define ushdinm05          (FCMAX + 17) /* Verklikken inmelding HD fase 05                                             */
    #define ushdinm08          (FCMAX + 18) /* Verklikken inmelding HD fase 08                                             */
    #define ushdinm09          (FCMAX + 19) /* Verklikken inmelding HD fase 09                                             */
    #define ushdinm11          (FCMAX + 20) /* Verklikken inmelding HD fase 11                                             */
    #define ushdinm61          (FCMAX + 21) /* Verklikken inmelding HD fase 61                                             */
    #define ushdinm62          (FCMAX + 22) /* Verklikken inmelding HD fase 62                                             */
    #define ushdinm67          (FCMAX + 23) /* Verklikken inmelding HD fase 67                                             */
    #define ushdinm68          (FCMAX + 24) /* Verklikken inmelding HD fase 68                                             */
    #define uspelinKOP02       (FCMAX + 25) /* Verklikken inkomend peloton gezien tbv peloton koppeling KOP02 naar fase 02 */
    #define usperdef           (FCMAX + 26) /* Default periode actief                                                      */
    #define usper1             (FCMAX + 27) /* Periode Reserve actief                                                      */
    #define usperoFietsprio1   (FCMAX + 28) /* Periode actief                                                              */
    #define usperoFietsprio2   (FCMAX + 29) /* Periode actief                                                              */
    #define usperoFietsprio3   (FCMAX + 30) /* Periode actief                                                              */
    #define usper2             (FCMAX + 31) /* Periode Dag periode actief                                                  */
    #define usper3             (FCMAX + 32) /* Periode Ochtendspits actief                                                 */
    #define usper4             (FCMAX + 33) /* Periode Avondspits actief                                                   */
    #define usper5             (FCMAX + 34) /* Periode Koopavond actief                                                    */
    #define usper6             (FCMAX + 35) /* Periode Weekend actief                                                      */
    #define usper7             (FCMAX + 36) /* Periode Reserve actief                                                      */
    #define usptp_ptp123456oke (FCMAX + 37) /* Verklikken PTP oke ptp123456                                                */
    #define usptp_ptp123456err (FCMAX + 38) /* Verklikken PTP error ptp123456                                              */
    #define usrgv              (FCMAX + 39) /* Verklikken actief zijn RoBuGrover                                           */
    #define USMAX1             (FCMAX + 40)

/* detectie */
/* -------- */
    #define d0201              0
    #define d0202              1
    #define d0203              2
    #define d0204              3
    #define d0205              4
    #define d0206              5
    #define d0207              6
    #define d0208              7
    #define d0301              8
    #define d0302              9
    #define d0501             10
    #define d0502             11
    #define d0801             12
    #define d0802             13
    #define d0803             14
    #define d0804             15
    #define d0805             16
    #define d0806             17
    #define d0807             18
    #define d0808             19
    #define d0901             20
    #define d0902             21
    #define d0903             22
    #define d1101             23
    #define d1102             24
    #define d1103             25
    #define d1104             26
    #define d2101             27
    #define d2131             28
    #define d2201             29
    #define d2231             30
    #define d2401             31
    #define d2402             32
    #define d2403             33
    #define d2431             34
    #define d2601             35
    #define d2631             36
    #define d2801             37
    #define d2802             38
    #define d2831             39
    #define d3131             40
    #define d3132             41
    #define d3231             42
    #define d3232             43
    #define d3331             44
    #define d3332             45
    #define d3431             46
    #define d3432             47
    #define d3831             48
    #define d3832             49
    #define d6101             50
    #define d6102             51
    #define d6201             52
    #define d6202             53
    #define d6203             54
    #define d6204             55
    #define d6701             56
    #define d6702             57
    #define d6801             58
    #define d6802             59
    #define d6803             60
    #define d6804             61
    #define d6821             62
    #define d6822             63
    #define d8101             64
    #define d8131             65
    #define d8201             66
    #define d8231             67
    #define d8401             68
    #define d8431             69
    #define d0241             70
    #define d0242             71
    #define d0841             72
    #define d0842             73
    #define d1141             74
    #define d1142             75
    #define d6141             76
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define ddummykarin02bus  77
    #define ddummykarin08bus  78
    #define ddummykarin11bus  79
    #define ddummykarin61bus  80
    #define ddummykaruit02bus 81
    #define ddummykaruit08bus 82
    #define ddummykaruit11bus 83
    #define ddummykaruit61bus 84
    #define ddummyhdkarin02   85
    #define ddummyhdkaruit02  86
    #define ddummyhdkarin03   87
    #define ddummyhdkaruit03  88
    #define ddummyhdkarin05   89
    #define ddummyhdkaruit05  90
    #define ddummyhdkarin08   91
    #define ddummyhdkaruit08  92
    #define ddummyhdkarin09   93
    #define ddummyhdkaruit09  94
    #define ddummyhdkarin11   95
    #define ddummyhdkaruit11  96
    #define ddummyhdkarin61   97
    #define ddummyhdkaruit61  98
    #define ddummyhdkarin62   99
    #define ddummyhdkaruit62  100
    #define ddummyhdkarin67   101
    #define ddummyhdkaruit67  102
    #define ddummyhdkarin68   103
    #define ddummyhdkaruit68  104
    #define DPMAX1            105 /* aantal detectoren testomgeving */
#else
    #define DPMAX1            77 /* aantal detectoren automaat omgeving */
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
    #define hopdrempelen08        0 /* Opdrempelen toepassen voor fase 08                                 */
    #define hgeendynhiaat08       1 /* Tegenhouden toepassen dynamische hiaattijden voor fase 08          */
    #define hverleng_0801         2 /* Instructie verlengen op detector 0801 ongeacht dynamische hiaat    */
    #define hverleng_0802         3 /* Instructie verlengen op detector 0802 ongeacht dynamische hiaat    */
    #define hverleng_0803         4 /* Instructie verlengen op detector 0803 ongeacht dynamische hiaat    */
    #define hverleng_0804         5 /* Instructie verlengen op detector 0804 ongeacht dynamische hiaat    */
    #define hverleng_0805         6 /* Instructie verlengen op detector 0805 ongeacht dynamische hiaat    */
    #define hverleng_0806         7 /* Instructie verlengen op detector 0806 ongeacht dynamische hiaat    */
    #define hverleng_0807         8 /* Instructie verlengen op detector 0807 ongeacht dynamische hiaat    */
    #define hverleng_0808         9 /* Instructie verlengen op detector 0808 ongeacht dynamische hiaat    */
    #define hmad3131             10 /* Hulpelement onthouden melding meeaanvraag detector 3131            */
    #define hmad3132             11 /* Hulpelement onthouden melding meeaanvraag detector 3132            */
    #define hmad3231             12 /* Hulpelement onthouden melding meeaanvraag detector 3231            */
    #define hmad3232             13 /* Hulpelement onthouden melding meeaanvraag detector 3232            */
    #define hmad3331             14 /* Hulpelement onthouden melding meeaanvraag detector 3331            */
    #define hmad3332             15 /* Hulpelement onthouden melding meeaanvraag detector 3332            */
    #define hmad3431             16 /* Hulpelement onthouden melding meeaanvraag detector 3431            */
    #define hmad3432             17 /* Hulpelement onthouden melding meeaanvraag detector 3432            */
    #define hfile68af            18 /* File 68af actief                                                   */
    #define hfile6821            19 /* File 6821 actief                                                   */
    #define hfile6822            20 /* File 6822 actief                                                   */
    #define hafk08file68af       21 /* Onthouden afkappen fase 08 bij start file ingreep                  */
    #define hafk11file68af       22 /* Onthouden afkappen fase 11 bij start file ingreep                  */
    #define hnla0201             23 /* Onthouden detectiemelding detector 0201 tbv naloop van 02 naar 62  */
    #define hnla0202             24 /* Onthouden detectiemelding detector 0202 tbv naloop van 02 naar 62  */
    #define hnla0501             25 /* Onthouden detectiemelding detector 0501 tbv naloop van 05 naar 62  */
    #define hnla0801             26 /* Onthouden detectiemelding detector 0801 tbv naloop van 08 naar 68  */
    #define hnla0802             27 /* Onthouden detectiemelding detector 0802 tbv naloop van 08 naar 68  */
    #define hnla1101             28 /* Onthouden detectiemelding detector 1101 tbv naloop van 11 naar 68  */
    #define hnla2201             29 /* Onthouden detectiemelding detector 2201 tbv naloop van 22 naar 21  */
    #define hnla3131             30 /* Onthouden detectiemelding detector 3131 tbv naloop van 31 naar 32  */
    #define hnla3232             31 /* Onthouden detectiemelding detector 3232 tbv naloop van 32 naar 31  */
    #define hnla3331             32 /* Onthouden detectiemelding detector 3331 tbv naloop van 33 naar 34  */
    #define hnla3432             33 /* Onthouden detectiemelding detector 3432 tbv naloop van 34 naar 33  */
    #define hnla8201             34 /* Onthouden detectiemelding detector 8201 tbv naloop van 82 naar 81  */
    #define hprio02              35 /* Bijhouden actief zijn prioriteit fase 02                           */
    #define hprioin02            36 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02           37 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprioin02kar         38 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hprioin02sd0242      39 /* Prioriteit inmelding fase 02 Bus                                   */
    #define hpriouit02kar        40 /* Prioriteit uitmelding 02 Bus                                       */
    #define hpriouit02sd0241     41 /* Prioriteit uitmelding 02 Bus                                       */
    #define hprio08              42 /* Bijhouden actief zijn prioriteit fase 08                           */
    #define hprioin08            43 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08           44 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprioin08kar         45 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hprioin08sd0842      46 /* Prioriteit inmelding fase 08 Bus                                   */
    #define hpriouit08kar        47 /* Prioriteit uitmelding 08 Bus                                       */
    #define hpriouit08sd0841     48 /* Prioriteit uitmelding 08 Bus                                       */
    #define hprio11              49 /* Bijhouden actief zijn prioriteit fase 11                           */
    #define hprioin11            50 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11           51 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprioin11kar         52 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hprioin11sd1142      53 /* Prioriteit inmelding fase 11 Bus                                   */
    #define hpriouit11kar        54 /* Prioriteit uitmelding 11 Bus                                       */
    #define hpriouit11sd1141     55 /* Prioriteit uitmelding 11 Bus                                       */
    #define hprio22              56 /* Bijhouden actief zijn prioriteit fase 22                           */
    #define hprioin22            57 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22           58 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprioin22fiets       59 /* Prioriteit inmelding fase 22 Fiets                                 */
    #define hpriouit22fiets      60 /* Prioriteit uitmelding 22 Fiets                                     */
    #define hprio24              61 /* Bijhouden actief zijn prioriteit fase 24                           */
    #define hprioin24            62 /* Prioriteit inmelding fase 24 Fiets                                 */
    #define hpriouit24           63 /* Prioriteit uitmelding 24 Fiets                                     */
    #define hprioin24fiets2403   64 /* Prioriteit inmelding fase 24 Fiets                                 */
    #define hpriouit24fiets      65 /* Prioriteit uitmelding 24 Fiets                                     */
    #define hprio61              66 /* Bijhouden actief zijn prioriteit fase 61                           */
    #define hprioin61            67 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61           68 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprioin61kar         69 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hprioin61sd0241      70 /* Prioriteit inmelding fase 61 Bus                                   */
    #define hpriouit61kar        71 /* Prioriteit uitmelding 61 Bus                                       */
    #define hpriouit61sd6141     72 /* Prioriteit uitmelding 61 Bus                                       */
    #define hprio84              73 /* Bijhouden actief zijn prioriteit fase 84                           */
    #define hprioin84            74 /* Prioriteit inmelding fase 84 Fiets                                 */
    #define hpriouit84           75 /* Prioriteit uitmelding 84 Fiets                                     */
    #define hprioin84fiets       76 /* Prioriteit inmelding fase 84 Fiets                                 */
    #define hpriouit84fiets      77 /* Prioriteit uitmelding 84 Fiets                                     */
    #define hhd02                78 /* Bijhouden aanwezigheid HD fase 02                                  */
    #define hhdin02              79 /* HD inmelding 02                                                    */
    #define hhduit02             80 /* HD uitmelding 02                                                   */
    #define hhdin02kar           81 /* HD inmelding 02                                                    */
    #define hhduit02kar          82 /* HD uitmelding 02                                                   */
    #define hhd03                83 /* Bijhouden aanwezigheid HD fase 03                                  */
    #define hhdin03              84 /* HD inmelding 03                                                    */
    #define hhduit03             85 /* HD uitmelding 03                                                   */
    #define hhdin03kar           86 /* HD inmelding 03                                                    */
    #define hhduit03kar          87 /* HD uitmelding 03                                                   */
    #define hhd05                88 /* Bijhouden aanwezigheid HD fase 05                                  */
    #define hhdin05              89 /* HD inmelding 05                                                    */
    #define hhduit05             90 /* HD uitmelding 05                                                   */
    #define hhdin05kar           91 /* HD inmelding 05                                                    */
    #define hhduit05kar          92 /* HD uitmelding 05                                                   */
    #define hhd08                93 /* Bijhouden aanwezigheid HD fase 08                                  */
    #define hhdin08              94 /* HD inmelding 08                                                    */
    #define hhduit08             95 /* HD uitmelding 08                                                   */
    #define hhdin08kar           96 /* HD inmelding 08                                                    */
    #define hhduit08kar          97 /* HD uitmelding 08                                                   */
    #define hhd09                98 /* Bijhouden aanwezigheid HD fase 09                                  */
    #define hhdin09              99 /* HD inmelding 09                                                    */
    #define hhduit09            100 /* HD uitmelding 09                                                   */
    #define hhdin09kar          101 /* HD inmelding 09                                                    */
    #define hhduit09kar         102 /* HD uitmelding 09                                                   */
    #define hhd11               103 /* Bijhouden aanwezigheid HD fase 11                                  */
    #define hhdin11             104 /* HD inmelding 11                                                    */
    #define hhduit11            105 /* HD uitmelding 11                                                   */
    #define hhdin11kar          106 /* HD inmelding 11                                                    */
    #define hhduit11kar         107 /* HD uitmelding 11                                                   */
    #define hhd61               108 /* Bijhouden aanwezigheid HD fase 61                                  */
    #define hhdin61             109 /* HD inmelding 61                                                    */
    #define hhduit61            110 /* HD uitmelding 61                                                   */
    #define hhdin61kar          111 /* HD inmelding 61                                                    */
    #define hhduit61kar         112 /* HD uitmelding 61                                                   */
    #define hhd62               113 /* Bijhouden aanwezigheid HD fase 62                                  */
    #define hhdin62             114 /* HD inmelding 62                                                    */
    #define hhduit62            115 /* HD uitmelding 62                                                   */
    #define hhdin62kar          116 /* HD inmelding 62                                                    */
    #define hhduit62kar         117 /* HD uitmelding 62                                                   */
    #define hhd67               118 /* Bijhouden aanwezigheid HD fase 67                                  */
    #define hhdin67             119 /* HD inmelding 67                                                    */
    #define hhduit67            120 /* HD uitmelding 67                                                   */
    #define hhdin67kar          121 /* HD inmelding 67                                                    */
    #define hhduit67kar         122 /* HD uitmelding 67                                                   */
    #define hhd68               123 /* Bijhouden aanwezigheid HD fase 68                                  */
    #define hhdin68             124 /* HD inmelding 68                                                    */
    #define hhduit68            125 /* HD uitmelding 68                                                   */
    #define hhdin68kar          126 /* HD inmelding 68                                                    */
    #define hhduit68kar         127 /* HD uitmelding 68                                                   */
    #define hpelinKOP02         128 /* Bijhouden aanwezigheid peloton tbv peloton koppeling KOP02 fase 02 */
    #define hpeltegenhKOP02     129 /* Tegenhouden opzetten RW voor peloton koppeling KOP02 fase 02       */
    #define hpkud6801KOP68_uit  130 /* Bijhouden uitgaande status 6801 voor koppeling KOP68_uit           */
    #define hpkud6802KOP68_uit  131 /* Bijhouden uitgaande status 6802 voor koppeling KOP68_uit           */
    #define hperiodFietsprio1   132 /* Periode Fietsprio1 actief                                          */
    #define hperiodFietsprio2   133 /* Periode Fietsprio2 actief                                          */
    #define hperiodFietsprio3   134 /* Periode Fietsprio3 actief                                          */
    #define hptp123456iks01     135 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks02     136 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks03     137 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks04     138 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks05     139 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks06     140 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks07     141 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks08     142 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks09     143 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks10     144 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks11     145 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks12     146 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks13     147 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks14     148 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks15     149 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456iks16     150 /* Inkomende PTP signalen van kruising ptp123456                      */
    #define hptp123456uks01     151 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks02     152 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks03     153 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks04     154 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks05     155 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks06     156 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks07     157 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks08     158 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks09     159 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks10     160 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks11     161 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks12     162 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks13     163 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks14     164 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks15     165 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp123456uks16     166 /* Uitgaande PTP signalen naar ptp123456                              */
    #define hptp_ptp123456oke   167 /* Onthouden PTP oke ptp123456                                        */
    #define hptp_ptp123456err   168 /* Onthouden PTP error ptp123456                                      */
    #define hptp_ptp123456err0  169 /* Onthouden PTP error 0 ptp123456                                    */
    #define hptp_ptp123456err1  170 /* Onthouden PTP error 1 ptp123456                                    */
    #define hptp_ptp123456err2  171 /* Onthouden PTP error 2 ptp123456                                    */
    #define hrgvd2403_d2402     172 /* Onthouden detector melding 24 richtinggevoelig verlengen fase 2403 */
    #define hrgvact             173 /* Bijhouden actief zijn RoBuGrover                                   */
    #define hprreal02           174 /* Bijhouden primaire realisatie fase 02                              */
    #define hprreal03           175 /* Bijhouden primaire realisatie fase 03                              */
    #define hprreal05           176 /* Bijhouden primaire realisatie fase 05                              */
    #define hprreal08           177 /* Bijhouden primaire realisatie fase 08                              */
    #define hprreal11           178 /* Bijhouden primaire realisatie fase 11                              */
    #define hprreal22           179 /* Bijhouden primaire realisatie fase 22                              */
    #define hprreal28           180 /* Bijhouden primaire realisatie fase 28                              */
    #define hschoolingreepd3331 181 /* Onthouden actief zijn schoolingreep voor fase 33 via detector 3331 */
    #define hschoolingreepd3332 182 /* Onthouden actief zijn schoolingreep voor fase 33 via detector 3332 */
    #define hschoolingreepd3431 183 /* Onthouden actief zijn schoolingreep voor fase 34 via detector 3431 */
    #define hschoolingreepd3432 184 /* Onthouden actief zijn schoolingreep voor fase 34 via detector 3432 */
    #define hsiexgr33           185 /* Onthouden actief zijn senioreningreep bij fase 33                  */
    #define hsiexgr34           186 /* Onthouden actief zijn senioreningreep bij fase 34                  */
    #define hnleg0262           187
    #define hnleg0562           188
    #define hnleg0868           189
    #define hnleg1168           190
    #define hnleg2221           191
    #define hnlsg3132           192
    #define hnlsg3231           193
    #define hnlsg3334           194
    #define hnlsg3433           195
    #define hnleg8281           196
    #define hinl32              197 /* Onthouden inlopen toestaan fase 32                                 */
    #define hlos32              198 /* Onthouden toestaan los realiseren fase 32                          */
    #define hinl31              199 /* Onthouden inlopen toestaan fase 31                                 */
    #define hlos31              200 /* Onthouden toestaan los realiseren fase 31                          */
    #define hinl34              201 /* Onthouden inlopen toestaan fase 34                                 */
    #define hlos34              202 /* Onthouden toestaan los realiseren fase 34                          */
    #define hinl33              203 /* Onthouden inlopen toestaan fase 33                                 */
    #define hlos33              204 /* Onthouden toestaan los realiseren fase 33                          */
    #define hlos62              205 /* Onthouden toestaan los realiseren fase 62                          */
    #define hlos68              206 /* Onthouden toestaan los realiseren fase 68                          */
    #define hlos21              207 /* Onthouden toestaan los realiseren fase 21                          */
    #define hlos81              208 /* Onthouden toestaan los realiseren fase 81                          */
    #define HEMAX1              209

/* geheugen elementen */
/* ------------------ */
    #define mperiod           0 /* Onthouden actieve periode                                               */
    #define mmk02             1 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 02            */
    #define mmk08             2 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 08            */
    #define mmk11             3 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 11            */
    #define mmk62             4 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 62            */
    #define mmk68             5 /* Onthouden MK per rijstrook tbv meetkriterium2() voor fase 68            */
    #define mpelvtgKOP02      6 /* Bijhouden aantal gemeten voertuigen tbv peloton koppeling KOP02 fase 02 */
    #define mpelinKOP02       7 /* Bijhouden inkomend peloton gezien tbv peloton koppeling KOP02 fase 02   */
    #define mrealtijd02       8 /* Realisatie tijd fase 02                                                 */
    #define mrealtijd03       9 /* Realisatie tijd fase 03                                                 */
    #define mrealtijd05      10 /* Realisatie tijd fase 05                                                 */
    #define mrealtijd08      11 /* Realisatie tijd fase 08                                                 */
    #define mrealtijd09      12 /* Realisatie tijd fase 09                                                 */
    #define mrealtijd11      13 /* Realisatie tijd fase 11                                                 */
    #define mrealtijd21      14 /* Realisatie tijd fase 21                                                 */
    #define mrealtijd22      15 /* Realisatie tijd fase 22                                                 */
    #define mrealtijd24      16 /* Realisatie tijd fase 24                                                 */
    #define mrealtijd26      17 /* Realisatie tijd fase 26                                                 */
    #define mrealtijd28      18 /* Realisatie tijd fase 28                                                 */
    #define mrealtijd31      19 /* Realisatie tijd fase 31                                                 */
    #define mrealtijd32      20 /* Realisatie tijd fase 32                                                 */
    #define mrealtijd33      21 /* Realisatie tijd fase 33                                                 */
    #define mrealtijd34      22 /* Realisatie tijd fase 34                                                 */
    #define mrealtijd38      23 /* Realisatie tijd fase 38                                                 */
    #define mrealtijd61      24 /* Realisatie tijd fase 61                                                 */
    #define mrealtijd62      25 /* Realisatie tijd fase 62                                                 */
    #define mrealtijd67      26 /* Realisatie tijd fase 67                                                 */
    #define mrealtijd68      27 /* Realisatie tijd fase 68                                                 */
    #define mrealtijd81      28 /* Realisatie tijd fase 81                                                 */
    #define mrealtijd82      29 /* Realisatie tijd fase 82                                                 */
    #define mrealtijd84      30 /* Realisatie tijd fase 84                                                 */
    #define mar02            31 /* Alternatieve ruimte fase 02                                             */
    #define mar03            32 /* Alternatieve ruimte fase 03                                             */
    #define mar05            33 /* Alternatieve ruimte fase 05                                             */
    #define mar08            34 /* Alternatieve ruimte fase 08                                             */
    #define mar09            35 /* Alternatieve ruimte fase 09                                             */
    #define mar11            36 /* Alternatieve ruimte fase 11                                             */
    #define mar21            37 /* Alternatieve ruimte fase 21                                             */
    #define mar22            38 /* Alternatieve ruimte fase 22                                             */
    #define mar24            39 /* Alternatieve ruimte fase 24                                             */
    #define mar26            40 /* Alternatieve ruimte fase 26                                             */
    #define mar28            41 /* Alternatieve ruimte fase 28                                             */
    #define mar31            42 /* Alternatieve ruimte fase 31                                             */
    #define mar32            43 /* Alternatieve ruimte fase 32                                             */
    #define mar33            44 /* Alternatieve ruimte fase 33                                             */
    #define mar34            45 /* Alternatieve ruimte fase 34                                             */
    #define mar38            46 /* Alternatieve ruimte fase 38                                             */
    #define mar61            47 /* Alternatieve ruimte fase 61                                             */
    #define mar62            48 /* Alternatieve ruimte fase 62                                             */
    #define mar67            49 /* Alternatieve ruimte fase 67                                             */
    #define mar68            50 /* Alternatieve ruimte fase 68                                             */
    #define mar81            51 /* Alternatieve ruimte fase 81                                             */
    #define mar82            52 /* Alternatieve ruimte fase 82                                             */
    #define mar84            53 /* Alternatieve ruimte fase 84                                             */
    #define mwijzpb          54 /* Wijziging aan PB doorgeven                                              */
    #define maantalvgtwijzpb 55 /* Aantal doorgegeven wijzigingen aan PB bijhouden                         */
    #define MEMAX1           56

/* tijd elementen */
/* -------------- */
    #define t0801_1                  0 /* Dynamische hiaattijden moment 1 voor detector 0801                                      */
    #define t0801_2                  1 /* Dynamische hiaattijden moment 2 voor detector 0801                                      */
    #define ttdh_0801_1              2 /* Dynamische hiaattijden TDH 1 voor detector 0801                                         */
    #define ttdh_0801_2              3 /* Dynamische hiaattijden TDH 2 voor detector 0801                                         */
    #define tmax_0801                4 /* Dynamische hiaattijden maximale tijd 2 voor detector 0801                               */
    #define t0802_1                  5 /* Dynamische hiaattijden moment 1 voor detector 0802                                      */
    #define t0802_2                  6 /* Dynamische hiaattijden moment 2 voor detector 0802                                      */
    #define ttdh_0802_1              7 /* Dynamische hiaattijden TDH 1 voor detector 0802                                         */
    #define ttdh_0802_2              8 /* Dynamische hiaattijden TDH 2 voor detector 0802                                         */
    #define tmax_0802                9 /* Dynamische hiaattijden maximale tijd 2 voor detector 0802                               */
    #define t0803_1                 10 /* Dynamische hiaattijden moment 1 voor detector 0803                                      */
    #define t0803_2                 11 /* Dynamische hiaattijden moment 2 voor detector 0803                                      */
    #define ttdh_0803_1             12 /* Dynamische hiaattijden TDH 1 voor detector 0803                                         */
    #define ttdh_0803_2             13 /* Dynamische hiaattijden TDH 2 voor detector 0803                                         */
    #define tmax_0803               14 /* Dynamische hiaattijden maximale tijd 2 voor detector 0803                               */
    #define t0804_1                 15 /* Dynamische hiaattijden moment 1 voor detector 0804                                      */
    #define t0804_2                 16 /* Dynamische hiaattijden moment 2 voor detector 0804                                      */
    #define ttdh_0804_1             17 /* Dynamische hiaattijden TDH 1 voor detector 0804                                         */
    #define ttdh_0804_2             18 /* Dynamische hiaattijden TDH 2 voor detector 0804                                         */
    #define tmax_0804               19 /* Dynamische hiaattijden maximale tijd 2 voor detector 0804                               */
    #define t0805_1                 20 /* Dynamische hiaattijden moment 1 voor detector 0805                                      */
    #define t0805_2                 21 /* Dynamische hiaattijden moment 2 voor detector 0805                                      */
    #define ttdh_0805_1             22 /* Dynamische hiaattijden TDH 1 voor detector 0805                                         */
    #define ttdh_0805_2             23 /* Dynamische hiaattijden TDH 2 voor detector 0805                                         */
    #define tmax_0805               24 /* Dynamische hiaattijden maximale tijd 2 voor detector 0805                               */
    #define t0806_1                 25 /* Dynamische hiaattijden moment 1 voor detector 0806                                      */
    #define t0806_2                 26 /* Dynamische hiaattijden moment 2 voor detector 0806                                      */
    #define ttdh_0806_1             27 /* Dynamische hiaattijden TDH 1 voor detector 0806                                         */
    #define ttdh_0806_2             28 /* Dynamische hiaattijden TDH 2 voor detector 0806                                         */
    #define tmax_0806               29 /* Dynamische hiaattijden maximale tijd 2 voor detector 0806                               */
    #define t0807_1                 30 /* Dynamische hiaattijden moment 1 voor detector 0807                                      */
    #define t0807_2                 31 /* Dynamische hiaattijden moment 2 voor detector 0807                                      */
    #define ttdh_0807_1             32 /* Dynamische hiaattijden TDH 1 voor detector 0807                                         */
    #define ttdh_0807_2             33 /* Dynamische hiaattijden TDH 2 voor detector 0807                                         */
    #define tmax_0807               34 /* Dynamische hiaattijden maximale tijd 2 voor detector 0807                               */
    #define t0808_1                 35 /* Dynamische hiaattijden moment 1 voor detector 0808                                      */
    #define t0808_2                 36 /* Dynamische hiaattijden moment 2 voor detector 0808                                      */
    #define ttdh_0808_1             37 /* Dynamische hiaattijden TDH 1 voor detector 0808                                         */
    #define ttdh_0808_2             38 /* Dynamische hiaattijden TDH 2 voor detector 0808                                         */
    #define tmax_0808               39 /* Dynamische hiaattijden maximale tijd 2 voor detector 0808                               */
    #define tav2802                 40 /* Tijd na afvallen detector 2802 tbv verwijderen aanvraag                                 */
    #define tkm02                   41 /* Kop maximum voor detector 02                                                            */
    #define tkm03                   42 /* Kop maximum voor detector 03                                                            */
    #define tkm05                   43 /* Kop maximum voor detector 05                                                            */
    #define tkm08                   44 /* Kop maximum voor detector 08                                                            */
    #define tkm09                   45 /* Kop maximum voor detector 09                                                            */
    #define tkm11                   46 /* Kop maximum voor detector 11                                                            */
    #define tkm21                   47 /* Kop maximum voor detector 21                                                            */
    #define tkm22                   48 /* Kop maximum voor detector 22                                                            */
    #define tkm24                   49 /* Kop maximum voor detector 24                                                            */
    #define tkm26                   50 /* Kop maximum voor detector 26                                                            */
    #define tkm28                   51 /* Kop maximum voor detector 28                                                            */
    #define tkm61                   52 /* Kop maximum voor detector 61                                                            */
    #define tkm62                   53 /* Kop maximum voor detector 62                                                            */
    #define tkm67                   54 /* Kop maximum voor detector 67                                                            */
    #define tkm68                   55 /* Kop maximum voor detector 68                                                            */
    #define tkm81                   56 /* Kop maximum voor detector 81                                                            */
    #define tkm82                   57 /* Kop maximum voor detector 82                                                            */
    #define tkm84                   58 /* Kop maximum voor detector 84                                                            */
    #define thdvd0201               59 /* Vervangend hiaat koplus fase 02 bij defect lange lus 0201                               */
    #define thdvd0202               60 /* Vervangend hiaat koplus fase 02 bij defect lange lus 0202                               */
    #define tdstvert02              61 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 02                     */
    #define thdvd0301               62 /* Vervangend hiaat koplus fase 03 bij defect lange lus 0301                               */
    #define tdstvert03              63 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 03                     */
    #define thdvd0501               64 /* Vervangend hiaat koplus fase 05 bij defect lange lus 0501                               */
    #define tdstvert05              65 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 05                     */
    #define thdvd0801               66 /* Vervangend hiaat koplus fase 08 bij defect lange lus 0801                               */
    #define thdvd0802               67 /* Vervangend hiaat koplus fase 08 bij defect lange lus 0802                               */
    #define tdstvert08              68 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 08                     */
    #define thdvd0901               69 /* Vervangend hiaat koplus fase 09 bij defect lange lus 0901                               */
    #define tdstvert09              70 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 09                     */
    #define thdvd1101               71 /* Vervangend hiaat koplus fase 11 bij defect lange lus 1101                               */
    #define tdstvert11              72 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 11                     */
    #define tdstvert21              73 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 21                     */
    #define thdvd2201               74 /* Vervangend hiaat koplus fase 22 bij defect lange lus 2201                               */
    #define tdstvert22              75 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 22                     */
    #define thdvd2401               76 /* Vervangend hiaat koplus fase 24 bij defect lange lus 2401                               */
    #define tdstvert24              77 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 24                     */
    #define tdstvert26              78 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 26                     */
    #define thdvd2801               79 /* Vervangend hiaat koplus fase 28 bij defect lange lus 2801                               */
    #define tdstvert28              80 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 28                     */
    #define tdstvert31              81 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 31                     */
    #define tdstvert32              82 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 32                     */
    #define tdstvert33              83 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 33                     */
    #define tdstvert34              84 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 34                     */
    #define tdstvert38              85 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 38                     */
    #define thdvd6101               86 /* Vervangend hiaat koplus fase 61 bij defect lange lus 6101                               */
    #define tdstvert61              87 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 61                     */
    #define thdvd6201               88 /* Vervangend hiaat koplus fase 62 bij defect lange lus 6201                               */
    #define thdvd6202               89 /* Vervangend hiaat koplus fase 62 bij defect lange lus 6202                               */
    #define tdstvert62              90 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 62                     */
    #define thdvd6701               91 /* Vervangend hiaat koplus fase 67 bij defect lange lus 6701                               */
    #define tdstvert67              92 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 67                     */
    #define thdvd6801               93 /* Vervangend hiaat koplus fase 68 bij defect lange lus 6801                               */
    #define thdvd6802               94 /* Vervangend hiaat koplus fase 68 bij defect lange lus 6802                               */
    #define tdstvert68              95 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 68                     */
    #define tdstvert81              96 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 81                     */
    #define tdstvert82              97 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 82                     */
    #define thdvd8401               98 /* Vervangend hiaat koplus fase 84 bij defect lange lus 8401                               */
    #define tdstvert84              99 /* Vertraging vaste aanvraag bij storing op alle detectie voor fase 84                     */
    #define tafv68af               100 /* Afval vertraging file 68af                                                              */
    #define tafv6821               101 /* Afval vertraging file 6821                                                              */
    #define tbz6821                102 /* Bezettijd file detector 6821                                                            */
    #define trij6821               103 /* Rijtijd file detector 6821                                                              */
    #define tafv6822               104 /* Afval vertraging file 6822                                                              */
    #define tbz6822                105 /* Bezettijd file detector 6822                                                            */
    #define trij6822               106 /* Rijtijd file detector 6822                                                              */
    #define tafkmingroen08file68af 107 /* Minimale groentijd fase 08 vooraf aan afkappen bij start file ingreep                   */
    #define tafkmingroen11file68af 108 /* Minimale groentijd fase 11 vooraf aan afkappen bij start file ingreep                   */
    #define tminrood08file68af     109 /* Minimale roodtijd bij fase 08 voor file ingreep                                         */
    #define tminrood11file68af     110 /* Minimale roodtijd bij fase 11 voor file ingreep                                         */
    #define tmaxgroen08file68af    111 /* Maximale groentijd bij fase 08 voor file ingreep                                        */
    #define tmaxgroen11file68af    112 /* Maximale groentijd bij fase 11 voor file ingreep                                        */
    #define tnlfgd0262             113 /* Detectieafhankelijke naloop tijdens vastgroen van 02 naar 62                            */
    #define tnlegd0262             114 /* Detectieafhankelijke naloop op einde groen van 02 naar 62                               */
    #define tnlfgd0562             115 /* Detectieafhankelijke naloop tijdens vastgroen van 05 naar 62                            */
    #define tnlegd0562             116 /* Detectieafhankelijke naloop op einde groen van 05 naar 62                               */
    #define tnlfgd0868             117 /* Detectieafhankelijke naloop tijdens vastgroen van 08 naar 68                            */
    #define tnlegd0868             118 /* Detectieafhankelijke naloop op einde groen van 08 naar 68                               */
    #define tnlfgd1168             119 /* Detectieafhankelijke naloop tijdens vastgroen van 11 naar 68                            */
    #define tnlegd1168             120 /* Detectieafhankelijke naloop op einde groen van 11 naar 68                               */
    #define tnlfgd2221             121 /* Detectieafhankelijke naloop tijdens vastgroen van 22 naar 21                            */
    #define tnlegd2221             122 /* Detectieafhankelijke naloop op einde groen van 22 naar 21                               */
    #define tnlsgd3132             123 /* Detectieafhankelijke naloop op start groen van 31 naar 32                               */
    #define tnlsgd3231             124 /* Detectieafhankelijke naloop op start groen van 32 naar 31                               */
    #define tnlsgd3334             125 /* Detectieafhankelijke naloop op start groen van 33 naar 34                               */
    #define tnlsgd3433             126 /* Detectieafhankelijke naloop op start groen van 34 naar 33                               */
    #define tnlfgd8281             127 /* Detectieafhankelijke naloop tijdens vastgroen van 82 naar 81                            */
    #define tnlegd8281             128 /* Detectieafhankelijke naloop op einde groen van 82 naar 81                               */
    #define tkarmelding            129 /* Duur verklikking ontvangst melding KAR                                                  */
    #define tkarog                 130 /* Ondergedrag KAR                                                                         */
    #define tprioin02kar           131 /* Anti jutter tijd inmelden 02 Bus                                                        */
    #define tprioin02sd0242        132 /* Anti jutter tijd inmelden 02 Bus                                                        */
    #define tpriouit02kar          133 /* Anti jutter tijd uitmelden 02                                                           */
    #define tpriouit02sd0241       134 /* Anti jutter tijd uitmelden 02                                                           */
    #define tprioin02              135 /* Anti jutter tijd inmelden 02 Bus                                                        */
    #define tpriouit02             136 /* Anti jutter tijd uitmelden 02                                                           */
    #define tbtovg02               137 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                   */
    #define trt02                  138 /* Actuele rijtijd prio fase 02                                                            */
    #define tgb02                  139 /* Groenbewaking prioriteit fase 02                                                        */
    #define tblk02                 140 /* Blokkeertijd na prioriteitsingreep fase 02                                              */
    #define tprioin08sd0842        141 /* Anti jutter tijd inmelden 08 Bus                                                        */
    #define tpriouit08kar          142 /* Anti jutter tijd uitmelden 08                                                           */
    #define tpriouit08sd0841       143 /* Anti jutter tijd uitmelden 08                                                           */
    #define tbtovg08               144 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                   */
    #define trt08                  145 /* Actuele rijtijd prio fase 08                                                            */
    #define tgb08                  146 /* Groenbewaking prioriteit fase 08                                                        */
    #define tblk08                 147 /* Blokkeertijd na prioriteitsingreep fase 08                                              */
    #define tprioin11sd1142        148 /* Anti jutter tijd inmelden 11 Bus                                                        */
    #define tpriouit11kar          149 /* Anti jutter tijd uitmelden 11                                                           */
    #define tpriouit11sd1141       150 /* Anti jutter tijd uitmelden 11                                                           */
    #define tbtovg11               151 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                   */
    #define trt11                  152 /* Actuele rijtijd prio fase 11                                                            */
    #define tgb11                  153 /* Groenbewaking prioriteit fase 11                                                        */
    #define tblk11                 154 /* Blokkeertijd na prioriteitsingreep fase 11                                              */
    #define tprioin22fiets         155 /* Anti jutter tijd inmelden 22 Fiets                                                      */
    #define tprioin22              156 /* Anti jutter tijd inmelden 22 Fiets                                                      */
    #define tpriouit22             157 /* Anti jutter tijd uitmelden 22                                                           */
    #define tbtovg22               158 /* Timer bezettijd prioriteit gehinderde rijtijd fase 22                                   */
    #define trt22                  159 /* Actuele rijtijd prio fase 22                                                            */
    #define tgb22                  160 /* Groenbewaking prioriteit fase 22                                                        */
    #define tblk22                 161 /* Blokkeertijd na prioriteitsingreep fase 22                                              */
    #define tprioin24fiets2403     162 /* Anti jutter tijd inmelden 24 Fiets                                                      */
    #define tprioin24              163 /* Anti jutter tijd inmelden 24 Fiets                                                      */
    #define tpriouit24             164 /* Anti jutter tijd uitmelden 24                                                           */
    #define tbtovg24               165 /* Timer bezettijd prioriteit gehinderde rijtijd fase 24                                   */
    #define trt24                  166 /* Actuele rijtijd prio fase 24                                                            */
    #define tgb24                  167 /* Groenbewaking prioriteit fase 24                                                        */
    #define tblk24                 168 /* Blokkeertijd na prioriteitsingreep fase 24                                              */
    #define tbtovg61               169 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                   */
    #define trt61                  170 /* Actuele rijtijd prio fase 61                                                            */
    #define tgb61                  171 /* Groenbewaking prioriteit fase 61                                                        */
    #define tblk61                 172 /* Blokkeertijd na prioriteitsingreep fase 61                                              */
    #define tprioin84fiets         173 /* Anti jutter tijd inmelden 84 Fiets                                                      */
    #define tprioin84              174 /* Anti jutter tijd inmelden 84 Fiets                                                      */
    #define tpriouit84             175 /* Anti jutter tijd uitmelden 84                                                           */
    #define tbtovg84               176 /* Timer bezettijd prioriteit gehinderde rijtijd fase 84                                   */
    #define trt84                  177 /* Actuele rijtijd prio fase 84                                                            */
    #define tgb84                  178 /* Groenbewaking prioriteit fase 84                                                        */
    #define tblk84                 179 /* Blokkeertijd na prioriteitsingreep fase 84                                              */
    #define tgbhd02                180 /* Groenbewaking HD fase 02                                                                */
    #define trthd02                181 /* Actuele rijtijd HD fase 02                                                              */
    #define tbtovg02hd             182 /* Timer bezettijd prioriteit gehinderde rijtijd fase 02                                   */
    #define thdin02kar             183 /* Anti jutter tijd inmelden HD 02 KAR                                                     */
    #define thduit02kar            184 /* Anti jutter tijd uitmelden HD 02                                                        */
    #define tgbhd03                185 /* Groenbewaking HD fase 03                                                                */
    #define trthd03                186 /* Actuele rijtijd HD fase 03                                                              */
    #define tbtovg03hd             187 /* Timer bezettijd prioriteit gehinderde rijtijd fase 03                                   */
    #define thdin03kar             188 /* Anti jutter tijd inmelden HD 03 KAR                                                     */
    #define thduit03kar            189 /* Anti jutter tijd uitmelden HD 03                                                        */
    #define tgbhd05                190 /* Groenbewaking HD fase 05                                                                */
    #define trthd05                191 /* Actuele rijtijd HD fase 05                                                              */
    #define tbtovg05hd             192 /* Timer bezettijd prioriteit gehinderde rijtijd fase 05                                   */
    #define thdin05kar             193 /* Anti jutter tijd inmelden HD 05 KAR                                                     */
    #define thduit05kar            194 /* Anti jutter tijd uitmelden HD 05                                                        */
    #define tgbhd08                195 /* Groenbewaking HD fase 08                                                                */
    #define trthd08                196 /* Actuele rijtijd HD fase 08                                                              */
    #define tbtovg08hd             197 /* Timer bezettijd prioriteit gehinderde rijtijd fase 08                                   */
    #define thdin08kar             198 /* Anti jutter tijd inmelden HD 08 KAR                                                     */
    #define thduit08kar            199 /* Anti jutter tijd uitmelden HD 08                                                        */
    #define tgbhd09                200 /* Groenbewaking HD fase 09                                                                */
    #define trthd09                201 /* Actuele rijtijd HD fase 09                                                              */
    #define tbtovg09hd             202 /* Timer bezettijd prioriteit gehinderde rijtijd fase 09                                   */
    #define thdin09kar             203 /* Anti jutter tijd inmelden HD 09 KAR                                                     */
    #define thduit09kar            204 /* Anti jutter tijd uitmelden HD 09                                                        */
    #define tgbhd11                205 /* Groenbewaking HD fase 11                                                                */
    #define trthd11                206 /* Actuele rijtijd HD fase 11                                                              */
    #define tbtovg11hd             207 /* Timer bezettijd prioriteit gehinderde rijtijd fase 11                                   */
    #define thdin11kar             208 /* Anti jutter tijd inmelden HD 11 KAR                                                     */
    #define thduit11kar            209 /* Anti jutter tijd uitmelden HD 11                                                        */
    #define tgbhd61                210 /* Groenbewaking HD fase 61                                                                */
    #define trthd61                211 /* Actuele rijtijd HD fase 61                                                              */
    #define tbtovg61hd             212 /* Timer bezettijd prioriteit gehinderde rijtijd fase 61                                   */
    #define thdin61kar             213 /* Anti jutter tijd inmelden HD 61 KAR                                                     */
    #define thduit61kar            214 /* Anti jutter tijd uitmelden HD 61                                                        */
    #define tgbhd62                215 /* Groenbewaking HD fase 62                                                                */
    #define trthd62                216 /* Actuele rijtijd HD fase 62                                                              */
    #define tbtovg62hd             217 /* Timer bezettijd prioriteit gehinderde rijtijd fase 62                                   */
    #define thdin62kar             218 /* Anti jutter tijd inmelden HD 62 KAR                                                     */
    #define thduit62kar            219 /* Anti jutter tijd uitmelden HD 62                                                        */
    #define tgbhd67                220 /* Groenbewaking HD fase 67                                                                */
    #define trthd67                221 /* Actuele rijtijd HD fase 67                                                              */
    #define tbtovg67hd             222 /* Timer bezettijd prioriteit gehinderde rijtijd fase 67                                   */
    #define thdin67kar             223 /* Anti jutter tijd inmelden HD 67 KAR                                                     */
    #define thduit67kar            224 /* Anti jutter tijd uitmelden HD 67                                                        */
    #define tgbhd68                225 /* Groenbewaking HD fase 68                                                                */
    #define trthd68                226 /* Actuele rijtijd HD fase 68                                                              */
    #define tbtovg68hd             227 /* Timer bezettijd prioriteit gehinderde rijtijd fase 68                                   */
    #define thdin68kar             228 /* Anti jutter tijd inmelden HD 68 KAR                                                     */
    #define thduit68kar            229 /* Anti jutter tijd uitmelden HD 68                                                        */
    #define tpelmeetKOP02          230 /* Meetperiode peloton koppeling KOP02 fase KOP02                                          */
    #define tpelmaxhiaatKOP02      231 /* Maximaal hiaat tbv meting peloton koppeling KOP02 fase 02                               */
    #define tpelrwKOP02            232 /* Tijdsduur toepassen RW na meting peloton bij KOP02 voor fase 02                         */
    #define tpelrwmaxKOP02         233 /* Maximale tijdsduur toepassen RW vanaf SG voor peloton koppeling bij KOP02 voor fase 02  */
    #define tpelstartrwKOP02       234 /* Tijdsduur vanaf meting peloton tot toepassen RW voor KOP02 bij fase 02                  */
    #define tpelaKOP02             235 /* Tijdsduur tot aanvraag na meting peloton voor KOP02 bij fase 02                         */
    #define trgad2403              236 /* Richtinggevoelige aanvraag rijtijd fase 24 van 2403 naar 2402                           */
    #define trgavd2403             237 /* Timer reset richtinggevoelige aanvraag fase 24 van 2403 naar 2402                       */
    #define trgrd2403_d2402        238 /* Richtinggevoelig verlengen rijtijd fase 24 van 2403 naar 2402                           */
    #define trgvd2403_d2402        239 /* Richtinggevoelig verlengen hiaattijd fase 24 van 2403 naar 2402                         */
    #define tfd0201                240 /* File meting RoBuGrover fase 02 detector 0201                                            */
    #define tfd0202                241 /* File meting RoBuGrover fase 02 detector 0202                                            */
    #define thd0203                242 /* RoBuGrover hiaat meting fase 02 detector 0203                                           */
    #define thd0204                243 /* RoBuGrover hiaat meting fase 02 detector 0204                                           */
    #define thd0205                244 /* RoBuGrover hiaat meting fase 02 detector 0205                                           */
    #define thd0206                245 /* RoBuGrover hiaat meting fase 02 detector 0206                                           */
    #define tfd0301                246 /* File meting RoBuGrover fase 03 detector 0301                                            */
    #define thd0302                247 /* RoBuGrover hiaat meting fase 03 detector 0302                                           */
    #define tfd0501                248 /* File meting RoBuGrover fase 05 detector 0501                                            */
    #define thd0502                249 /* RoBuGrover hiaat meting fase 05 detector 0502                                           */
    #define tfd0801                250 /* File meting RoBuGrover fase 08 detector 0801                                            */
    #define tfd0802                251 /* File meting RoBuGrover fase 08 detector 0802                                            */
    #define thd0803                252 /* RoBuGrover hiaat meting fase 08 detector 0803                                           */
    #define thd0804                253 /* RoBuGrover hiaat meting fase 08 detector 0804                                           */
    #define thd0805                254 /* RoBuGrover hiaat meting fase 08 detector 0805                                           */
    #define thd0806                255 /* RoBuGrover hiaat meting fase 08 detector 0806                                           */
    #define tfd1101                256 /* File meting RoBuGrover fase 11 detector 1101                                            */
    #define thd1102                257 /* RoBuGrover hiaat meting fase 11 detector 1102                                           */
    #define thd1103                258 /* RoBuGrover hiaat meting fase 11 detector 1103                                           */
    #define tfd2201                259 /* File meting RoBuGrover fase 22 detector 2201                                            */
    #define thd2201                260 /* RoBuGrover hiaat meting fase 22 detector 2201                                           */
    #define tfd2801                261 /* File meting RoBuGrover fase 28 detector 2801                                            */
    #define thd2801                262 /* RoBuGrover hiaat meting fase 28 detector 2801                                           */
    #define tschoolingreepmaxg33   263 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 33                       */
    #define tdbsid3331             264 /* Bezettijd detector 3331 t.b.v. schoolingreep                                            */
    #define tdbsid3332             265 /* Bezettijd detector 3332 t.b.v. schoolingreep                                            */
    #define tschoolingreepmaxg34   266 /* Maximale duur groen vanaf startgroen bij schoolingreep op fase 34                       */
    #define tdbsid3431             267 /* Bezettijd detector 3431 t.b.v. schoolingreep                                            */
    #define tdbsid3432             268 /* Bezettijd detector 3432 t.b.v. schoolingreep                                            */
    #define tsiexgr33              269 /* Meten duur extra groen bij senioreningreep op fase 33                                   */
    #define tdbsiexgrd3331         270 /* Bezettijd detector 3331 t.b.v. Senioreningreep                                          */
    #define tdbsiexgrd3332         271 /* Bezettijd detector 3332 t.b.v. Senioreningreep                                          */
    #define tsiexgr34              272 /* Meten duur extra groen bij senioreningreep op fase 34                                   */
    #define tdbsiexgrd3431         273 /* Bezettijd detector 3431 t.b.v. Senioreningreep                                          */
    #define tdbsiexgrd3432         274 /* Bezettijd detector 3432 t.b.v. Senioreningreep                                          */
    #define tvamax62               275 /* Maximale tijd VA ontruimen na einde geel fase 62                                        */
    #define tva6209_d6201          276 /* Tijdsduur VA ontruimen van 62 naar                                                      */
    #define tva6211_d6201          277 /* Tijdsduur VA ontruimen van 62 naar                                                      */
    #define tva6226_d6201          278 /* Tijdsduur VA ontruimen van 62 naar                                                      */
    #define tvgmax02               279 /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    #define tvgvolg0207            280 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0207 van fase 02 */
    #define tvghiaat0207           281 /* Hiaattijd bij actief zijn veiligheidsgroen detector 0207 van fase 02                    */
    #define tvgvolg0208            282 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0208 van fase 02 */
    #define tvghiaat0208           283 /* Hiaattijd bij actief zijn veiligheidsgroen detector 0208 van fase 02                    */
    #define tvgmax08               284 /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    #define tvgvolg0807            285 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0807 van fase 08 */
    #define tvghiaat0807           286 /* Hiaattijd bij actief zijn veiligheidsgroen detector 0807 van fase 08                    */
    #define tvgvolg0808            287 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 0808 van fase 08 */
    #define tvghiaat0808           288 /* Hiaattijd bij actief zijn veiligheidsgroen detector 0808 van fase 08                    */
    #define tvgmax11               289 /* Maximale tijdsduur veiligheidsgroen voor fase                                           */
    #define tvgvolg1104            290 /* Volgtijd meting opeenvolgende voertuigen tbv veiligheidsgroen detector 1104 van fase 11 */
    #define tvghiaat1104           291 /* Hiaattijd bij actief zijn veiligheidsgroen detector 1104 van fase 11                    */
    #define tvs2205                292 /* Voorstarttijd fase 22 op fase 05                                                        */
    #define tvs3205                293 /* Voorstarttijd fase 32 op fase 05                                                        */
    #define tlr2611                294 /* Late release tijd fase 26 na fase 11                                                    */
    #define tlr6202                295 /* Late release tijd fase 62 na fase 02                                                    */
    #define tlr6205                296 /* Late release tijd fase 62 na fase 05                                                    */
    #define tlr6808                297 /* Late release tijd fase 68 na fase 08                                                    */
    #define tlr6811                298 /* Late release tijd fase 68 na fase 11                                                    */
    #define tlr2122                299 /* Late release tijd fase 21 na fase 22                                                    */
    #define tlr8182                300 /* Late release tijd fase 81 na fase 82                                                    */
    #define til3231                301 /* Inloop tijd fase 32 naar fase 31                                                        */
    #define til3132                302 /* Inloop tijd fase 31 naar fase 32                                                        */
    #define til3433                303 /* Inloop tijd fase 34 naar fase 33                                                        */
    #define til3334                304 /* Inloop tijd fase 33 naar fase 34                                                        */
    #define tfo0522                305 /* Fictieve ontruimingstijd van 05 naar fase 22                                            */
    #define tfo0532                306 /* Fictieve ontruimingstijd van 05 naar fase 32                                            */
    #define tfo1126                307 /* Fictieve ontruimingstijd van 11 naar fase 26                                            */
    #define TMMAX1                 308

/* teller elementen */
/* ---------------- */
    #define cvc02           0 /* Bijhouden prio inmeldingen fase 02 type Bus             */
    #define cvc08           1 /* Bijhouden prio inmeldingen fase 08 type Bus             */
    #define cvc11           2 /* Bijhouden prio inmeldingen fase 11 type Bus             */
    #define cftscyc22fiets  3 /* Bijhouden realisaties tbv peloton prio voor fase 22     */
    #define cvc22           4 /* Bijhouden prio inmeldingen fase 22 type Fiets           */
    #define cftscyc24fiets  5 /* Bijhouden realisaties tbv peloton prio voor fase 24     */
    #define cftsvtg24fiets  6 /* Bijhouden aantal fietsers tbv peloton prio voor fase 24 */
    #define cvc24           7 /* Bijhouden prio inmeldingen fase 24 type Fiets           */
    #define cvc61           8 /* Bijhouden prio inmeldingen fase 61 type Bus             */
    #define cftscyc84fiets  9 /* Bijhouden realisaties tbv peloton prio voor fase 84     */
    #define cvc84          10 /* Bijhouden prio inmeldingen fase 84 type Fiets           */
    #define cvchd02        11 /* Bijhouden prio inmeldingen fase 02                      */
    #define cvchd03        12 /* Bijhouden prio inmeldingen fase 03                      */
    #define cvchd05        13 /* Bijhouden prio inmeldingen fase 05                      */
    #define cvchd08        14 /* Bijhouden prio inmeldingen fase 08                      */
    #define cvchd09        15 /* Bijhouden prio inmeldingen fase 09                      */
    #define cvchd11        16 /* Bijhouden prio inmeldingen fase 11                      */
    #define cvchd61        17 /* Bijhouden prio inmeldingen fase 61                      */
    #define cvchd62        18 /* Bijhouden prio inmeldingen fase 62                      */
    #define cvchd67        19 /* Bijhouden prio inmeldingen fase 67                      */
    #define cvchd68        20 /* Bijhouden prio inmeldingen fase 68                      */
    #define CTMAX1         21

/* schakelaars */
/* ----------- */
    #define schdynhiaat08          0 /* Toepassen dynamisch hiaat bij fase 08                                */
    #define schopdrempelen08       1 /* Opdrempelen toepassen voor fase 08                                   */
    #define schedkop_08            2 /* Start timers dynamische hiaat fase 08 op einde detectie koplus       */
    #define schdvakd0201           3 /* Aanvraag fase 02 bij storing op detector 0201                        */
    #define schdvakd0202           4 /* Aanvraag fase 02 bij storing op detector 0202                        */
    #define schdvakd0301           5 /* Aanvraag fase 03 bij storing op detector 0301                        */
    #define schdvakd3131           6 /* Aanvraag fase 31 bij storing op detector 3131                        */
    #define schdvakd3132           7 /* Aanvraag fase 31 bij storing op detector 3132                        */
    #define schfile68af            8 /* File ingreep 68af toepassen                                          */
    #define schfiledoseren68af     9 /* Toepassen doseerpercentages voor fileingreep 68af                    */
    #define schfile68afparstrook  10 /* Parallele file meldingen per strook file ingreep 68af                */
    #define schbmfix              11 /* Bijkomen tijdens fixatie mogelijk                                    */
    #define schma0522             12 /* Meeaanvraag van 05 naar 22 actief                                    */
    #define schma0531             13 /* Meeaanvraag van 05 naar 31 actief                                    */
    #define schma0532             14 /* Meeaanvraag van 05 naar 32 actief                                    */
    #define schma0562             15 /* Meeaanvraag van 05 naar 62 actief                                    */
    #define schma1126             16 /* Meeaanvraag van 11 naar 26 actief                                    */
    #define schma1168             17 /* Meeaanvraag van 11 naar 68 actief                                    */
    #define schma2221             18 /* Meeaanvraag van 22 naar 21 actief                                    */
    #define schma2484             19 /* Meeaanvraag van 24 naar 84 actief                                    */
    #define schma3122             20 /* Meeaanvraag van 31 naar 22 actief                                    */
    #define schma3222             21 /* Meeaanvraag van 32 naar 22 actief                                    */
    #define schma3324             22 /* Meeaanvraag van 33 naar 24 actief                                    */
    #define schma3384             23 /* Meeaanvraag van 33 naar 84 actief                                    */
    #define schma3424             24 /* Meeaanvraag van 34 naar 24 actief                                    */
    #define schma3484             25 /* Meeaanvraag van 34 naar 84 actief                                    */
    #define schma8424             26 /* Meeaanvraag van 84 naar 24 actief                                    */
    #define schmv02               27 /* Meeverlengen fase 02                                                 */
    #define schmv03               28 /* Meeverlengen fase 03                                                 */
    #define schmv05               29 /* Meeverlengen fase 05                                                 */
    #define schmv08               30 /* Meeverlengen fase 08                                                 */
    #define schmv09               31 /* Meeverlengen fase 09                                                 */
    #define schmv11               32 /* Meeverlengen fase 11                                                 */
    #define schmv21               33 /* Meeverlengen fase 21                                                 */
    #define schmv22               34 /* Meeverlengen fase 22                                                 */
    #define schmv24               35 /* Meeverlengen fase 24                                                 */
    #define schmv26               36 /* Meeverlengen fase 26                                                 */
    #define schmv28               37 /* Meeverlengen fase 28                                                 */
    #define schmv31               38 /* Meeverlengen fase 31                                                 */
    #define schmv32               39 /* Meeverlengen fase 32                                                 */
    #define schhardmv3205         40 /* Hard meeverlengen fase 32 met fase 05                                */
    #define schmv33               41 /* Meeverlengen fase 33                                                 */
    #define schmv34               42 /* Meeverlengen fase 34                                                 */
    #define schmv38               43 /* Meeverlengen fase 38                                                 */
    #define schmv61               44 /* Meeverlengen fase 61                                                 */
    #define schmv62               45 /* Meeverlengen fase 62                                                 */
    #define schmv67               46 /* Meeverlengen fase 67                                                 */
    #define schmv68               47 /* Meeverlengen fase 68                                                 */
    #define schmv81               48 /* Meeverlengen fase 81                                                 */
    #define schmv82               49 /* Meeverlengen fase 82                                                 */
    #define schmv84               50 /* Meeverlengen fase 84                                                 */
    #define schmlprm              51 /* Toepassen parametriseerbare modulestructuur                          */
    #define schcovuber            52 /* Weergeven wijzigingen PRIO_teller via CIF_UBER                       */
    #define schcheckdstype        53 /* Check type DSI bericht bij VECOM                                     */
    #define schprioin02kar        54 /* Inmelden 02 via Bus toestaan                                         */
    #define schprioin02sd0242SD   55 /* Inmelden 02 via Bus toestaan                                         */
    #define schpriouit02kar       56 /* Uitmelden 02 via Bus toestaan                                        */
    #define schpriouit02sd0241SD  57 /* Uitmelden 02 via Bus toestaan                                        */
    #define schupinagb02          58 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 02        */
    #define schprioin08kar        59 /* Inmelden 08 via Bus toestaan                                         */
    #define schprioin08sd0842SD   60 /* Inmelden 08 via Bus toestaan                                         */
    #define schpriouit08kar       61 /* Uitmelden 08 via Bus toestaan                                        */
    #define schpriouit08sd0841SD  62 /* Uitmelden 08 via Bus toestaan                                        */
    #define schupinagb08          63 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 08        */
    #define schprioin11kar        64 /* Inmelden 11 via Bus toestaan                                         */
    #define schprioin11sd1142SD   65 /* Inmelden 11 via Bus toestaan                                         */
    #define schpriouit11kar       66 /* Uitmelden 11 via Bus toestaan                                        */
    #define schpriouit11sd1141SD  67 /* Uitmelden 11 via Bus toestaan                                        */
    #define schupinagb11          68 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 11        */
    #define schprioin22fiets      69 /* Inmelden 22 via Fiets toestaan                                       */
    #define schpriouit22fiets     70 /* Uitmelden 22 via Fiets toestaan                                      */
    #define schupinagb22          71 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 22        */
    #define schprioin24fiets2403  72 /* Inmelden 24 via Fiets toestaan                                       */
    #define schpriouit24fiets     73 /* Uitmelden 24 via Fiets toestaan                                      */
    #define schupinagb24          74 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 24        */
    #define schprioin61kar        75 /* Inmelden 61 via Bus toestaan                                         */
    #define schprioin61sd0241SD   76 /* Inmelden 61 via Bus toestaan                                         */
    #define schpriouit61kar       77 /* Uitmelden 61 via Bus toestaan                                        */
    #define schpriouit61sd6141SD  78 /* Uitmelden 61 via Bus toestaan                                        */
    #define schupinagb61          79 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 61        */
    #define schprioin84fiets      80 /* Inmelden 84 via Fiets toestaan                                       */
    #define schpriouit84fiets     81 /* Uitmelden 84 via Fiets toestaan                                      */
    #define schupinagb84          82 /* Selectieve detectie onbetrouwbaar na groenbewaking OV fase 84        */
    #define schupinagbhd02        83 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 02        */
    #define schhdin02kar          84 /* Inmelden 02 via KAR HD toestaan                                      */
    #define schhduit02kar         85 /* Uitmelden 02 via KAR HD toestaan                                     */
    #define schchecksirene02      86 /* Bij HD meldingen bij 02 via DSI controleren op CIF_SIR               */
    #define schupinagbhd03        87 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 03        */
    #define schhdin03kar          88 /* Inmelden 03 via KAR HD toestaan                                      */
    #define schhduit03kar         89 /* Uitmelden 03 via KAR HD toestaan                                     */
    #define schchecksirene03      90 /* Bij HD meldingen bij 03 via DSI controleren op CIF_SIR               */
    #define schupinagbhd05        91 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 05        */
    #define schhdin05kar          92 /* Inmelden 05 via KAR HD toestaan                                      */
    #define schhduit05kar         93 /* Uitmelden 05 via KAR HD toestaan                                     */
    #define schchecksirene05      94 /* Bij HD meldingen bij 05 via DSI controleren op CIF_SIR               */
    #define schupinagbhd08        95 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 08        */
    #define schhdin08kar          96 /* Inmelden 08 via KAR HD toestaan                                      */
    #define schhduit08kar         97 /* Uitmelden 08 via KAR HD toestaan                                     */
    #define schchecksirene08      98 /* Bij HD meldingen bij 08 via DSI controleren op CIF_SIR               */
    #define schupinagbhd09        99 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 09        */
    #define schhdin09kar         100 /* Inmelden 09 via KAR HD toestaan                                      */
    #define schhduit09kar        101 /* Uitmelden 09 via KAR HD toestaan                                     */
    #define schchecksirene09     102 /* Bij HD meldingen bij 09 via DSI controleren op CIF_SIR               */
    #define schupinagbhd11       103 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 11        */
    #define schhdin11kar         104 /* Inmelden 11 via KAR HD toestaan                                      */
    #define schhduit11kar        105 /* Uitmelden 11 via KAR HD toestaan                                     */
    #define schchecksirene11     106 /* Bij HD meldingen bij 11 via DSI controleren op CIF_SIR               */
    #define schupinagbhd61       107 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 61        */
    #define schhdin61kar         108 /* Inmelden 61 via KAR HD toestaan                                      */
    #define schhduit61kar        109 /* Uitmelden 61 via KAR HD toestaan                                     */
    #define schchecksirene61     110 /* Bij HD meldingen bij 61 via DSI controleren op CIF_SIR               */
    #define schupinagbhd62       111 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 62        */
    #define schhdin62kar         112 /* Inmelden 62 via KAR HD toestaan                                      */
    #define schhduit62kar        113 /* Uitmelden 62 via KAR HD toestaan                                     */
    #define schchecksirene62     114 /* Bij HD meldingen bij 62 via DSI controleren op CIF_SIR               */
    #define schupinagbhd67       115 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 67        */
    #define schhdin67kar         116 /* Inmelden 67 via KAR HD toestaan                                      */
    #define schhduit67kar        117 /* Uitmelden 67 via KAR HD toestaan                                     */
    #define schchecksirene67     118 /* Bij HD meldingen bij 67 via DSI controleren op CIF_SIR               */
    #define schupinagbhd68       119 /* Selectieve detectie onbetrouwbaar na groenbewaking HD fase 68        */
    #define schhdin68kar         120 /* Inmelden 68 via KAR HD toestaan                                      */
    #define schhduit68kar        121 /* Uitmelden 68 via KAR HD toestaan                                     */
    #define schchecksirene68     122 /* Bij HD meldingen bij 68 via DSI controleren op CIF_SIR               */
    #define schpelrwKOP02        123 /* Toepassen retour wachtgroen na meting peloton bij voor KOP02 fase 02 */
    #define schpelmkKOP02        124 /* Toepassen vasthouden MK na meting peloton voor KOP02 bij fase 02     */
    #define schpelaKOP02         125 /* Toepassen aanvraag na meting peloton voor KOP02 bij fase 02          */
    #define schpkuKOP68_uit68    126 /* Toepassen uitgaande koppeling vanaf fase 68 voor koppeling KOP68_uit */
    #define schrisgeencheckopsg  127 /* Niet checken op signaalgroep bij RIS aanvragen en verlengen          */
    #define schrisaanvraag       128 /* Globaal in of uitschakelen aanvragen via RIS                         */
    #define schrisverlengen      129 /* Globaal in of uitschakelen verlengen via RIS                         */
    #define schrgadd2403         130 /* Type richtinggevoelige aanvraag fase 24 van 2403 naar 2402           */
    #define schrgad2403          131 /* Richtinggevoelig aanvragen fase 24 aan/uit van 2403 naar 2402        */
    #define schrgvd2403          132 /* Richtinggevoelig verlengen fase 24 aan/uit van 2403 naar 2402        */
    #define schrgv               133 /* RoBuGrover aan of uit                                                */
    #define schrgv_snel          134 /* RoBuGrover versneld ophogen of verlagen                              */
    #define schschoolingreep33   135 /* Schoolingreep aan of uit voor fase 33                                */
    #define schschoolingreep34   136 /* Schoolingreep aan of uit voor fase 34                                */
    #define schsi33              137 /* Senioreningreep aan of uit voor fase 33                              */
    #define schsi34              138 /* Senioreningreep aan of uit voor fase 34                              */
    #define schca02              139 /* Cyclische aanvraag fase 02                                           */
    #define schca03              140 /* Cyclische aanvraag fase 03                                           */
    #define schca05              141 /* Cyclische aanvraag fase 05                                           */
    #define schca08              142 /* Cyclische aanvraag fase 08                                           */
    #define schca09              143 /* Cyclische aanvraag fase 09                                           */
    #define schca11              144 /* Cyclische aanvraag fase 11                                           */
    #define schca21              145 /* Cyclische aanvraag fase 21                                           */
    #define schca22              146 /* Cyclische aanvraag fase 22                                           */
    #define schca24              147 /* Cyclische aanvraag fase 24                                           */
    #define schca26              148 /* Cyclische aanvraag fase 26                                           */
    #define schca28              149 /* Cyclische aanvraag fase 28                                           */
    #define schca31              150 /* Cyclische aanvraag fase 31                                           */
    #define schca32              151 /* Cyclische aanvraag fase 32                                           */
    #define schca33              152 /* Cyclische aanvraag fase 33                                           */
    #define schca34              153 /* Cyclische aanvraag fase 34                                           */
    #define schca38              154 /* Cyclische aanvraag fase 38                                           */
    #define schca61              155 /* Cyclische aanvraag fase 61                                           */
    #define schca62              156 /* Cyclische aanvraag fase 62                                           */
    #define schca67              157 /* Cyclische aanvraag fase 67                                           */
    #define schca68              158 /* Cyclische aanvraag fase 68                                           */
    #define schca81              159 /* Cyclische aanvraag fase 81                                           */
    #define schca82              160 /* Cyclische aanvraag fase 82                                           */
    #define schca84              161 /* Cyclische aanvraag fase 84                                           */
    #define schvg0207            162 /* Veiligheidsgroen detector 0207 fase 02                               */
    #define schvg0208            163 /* Veiligheidsgroen detector 0208 fase 02                               */
    #define schvg0807            164 /* Veiligheidsgroen detector 0807 fase 08                               */
    #define schvg0808            165 /* Veiligheidsgroen detector 0808 fase 08                               */
    #define schvg1104            166 /* Veiligheidsgroen detector 1104 fase 11                               */
    #define schaltg02            167 /* Alternatieve realisatie toestaan fase 02                             */
    #define schaltg03            168 /* Alternatieve realisatie toestaan fase 03                             */
    #define schaltg05            169 /* Alternatieve realisatie toestaan fase 05                             */
    #define schaltg08            170 /* Alternatieve realisatie toestaan fase 08                             */
    #define schaltg09            171 /* Alternatieve realisatie toestaan fase 09                             */
    #define schaltg11            172 /* Alternatieve realisatie toestaan fase 11                             */
    #define schaltg21            173 /* Alternatieve realisatie toestaan fase 21                             */
    #define schaltg22            174 /* Alternatieve realisatie toestaan fase 22                             */
    #define schaltg24            175 /* Alternatieve realisatie toestaan fase 24                             */
    #define schaltg26            176 /* Alternatieve realisatie toestaan fase 26                             */
    #define schaltg28            177 /* Alternatieve realisatie toestaan fase 28                             */
    #define schaltg31            178 /* Alternatieve realisatie toestaan fase 31                             */
    #define schaltg32            179 /* Alternatieve realisatie toestaan fase 32                             */
    #define schaltg33            180 /* Alternatieve realisatie toestaan fase 33                             */
    #define schaltg34            181 /* Alternatieve realisatie toestaan fase 34                             */
    #define schaltg38            182 /* Alternatieve realisatie toestaan fase 38                             */
    #define schaltg61            183 /* Alternatieve realisatie toestaan fase 61                             */
    #define schaltg62            184 /* Alternatieve realisatie toestaan fase 62                             */
    #define schaltg67            185 /* Alternatieve realisatie toestaan fase 67                             */
    #define schaltg68            186 /* Alternatieve realisatie toestaan fase 68                             */
    #define schaltg81            187 /* Alternatieve realisatie toestaan fase 81                             */
    #define schaltg82            188 /* Alternatieve realisatie toestaan fase 82                             */
    #define schaltg84            189 /* Alternatieve realisatie toestaan fase 84                             */
    #define schwg02              190 /* Wachtstand groen fase 02                                             */
    #define schwg03              191 /* Wachtstand groen fase 03                                             */
    #define schwg05              192 /* Wachtstand groen fase 05                                             */
    #define schwg08              193 /* Wachtstand groen fase 08                                             */
    #define schwg09              194 /* Wachtstand groen fase 09                                             */
    #define schwg11              195 /* Wachtstand groen fase 11                                             */
    #define schwg21              196 /* Wachtstand groen fase 21                                             */
    #define schwg22              197 /* Wachtstand groen fase 22                                             */
    #define schwg24              198 /* Wachtstand groen fase 24                                             */
    #define schwg26              199 /* Wachtstand groen fase 26                                             */
    #define schwg28              200 /* Wachtstand groen fase 28                                             */
    #define schwg31              201 /* Wachtstand groen fase 31                                             */
    #define schwg32              202 /* Wachtstand groen fase 32                                             */
    #define schwg33              203 /* Wachtstand groen fase 33                                             */
    #define schwg34              204 /* Wachtstand groen fase 34                                             */
    #define schwg38              205 /* Wachtstand groen fase 38                                             */
    #define schwg61              206 /* Wachtstand groen fase 61                                             */
    #define schwg62              207 /* Wachtstand groen fase 62                                             */
    #define schwg67              208 /* Wachtstand groen fase 67                                             */
    #define schwg68              209 /* Wachtstand groen fase 68                                             */
    #define schwg81              210 /* Wachtstand groen fase 81                                             */
    #define schwg82              211 /* Wachtstand groen fase 82                                             */
    #define schwg84              212 /* Wachtstand groen fase 84                                             */
    #define schlos32_1           213 /* Toestaan los realiseren fase 32                                      */
    #define schlos32_2           214 /* Toestaan los realiseren fase 32                                      */
    #define schlos31_1           215 /* Toestaan los realiseren fase 31                                      */
    #define schlos31_2           216 /* Toestaan los realiseren fase 31                                      */
    #define schlos34_1           217 /* Toestaan los realiseren fase 34                                      */
    #define schlos34_2           218 /* Toestaan los realiseren fase 34                                      */
    #define schlos33_1           219 /* Toestaan los realiseren fase 33                                      */
    #define schlos33_2           220 /* Toestaan los realiseren fase 33                                      */
    #define schsneld2101         221 /* Aanvraag snel voor detector 2101 aan of uit                          */
    #define schsneld2201         222 /* Aanvraag snel voor detector 2201 aan of uit                          */
    #define schsneld2401         223 /* Aanvraag snel voor detector 2401 aan of uit                          */
    #define schsneld2601         224 /* Aanvraag snel voor detector 2601 aan of uit                          */
    #define schsneld2801         225 /* Aanvraag snel voor detector 2801 aan of uit                          */
    #define schsneld8101         226 /* Aanvraag snel voor detector 8101 aan of uit                          */
    #define schsneld8201         227 /* Aanvraag snel voor detector 8201 aan of uit                          */
    #define schsneld8401         228 /* Aanvraag snel voor detector 8401 aan of uit                          */
    #define SCHMAX1              229

/* parameters */
/* ---------- */
    #define prmspringverleng_0801        0 /* Dyn. hiaattij instelling voor det. 0801 (via bitsturing)                                          */
    #define prmspringverleng_0802        1 /* Dyn. hiaattij instelling voor det. 0802 (via bitsturing)                                          */
    #define prmspringverleng_0803        2 /* Dyn. hiaattij instelling voor det. 0803 (via bitsturing)                                          */
    #define prmspringverleng_0804        3 /* Dyn. hiaattij instelling voor det. 0804 (via bitsturing)                                          */
    #define prmspringverleng_0805        4 /* Dyn. hiaattij instelling voor det. 0805 (via bitsturing)                                          */
    #define prmspringverleng_0806        5 /* Dyn. hiaattij instelling voor det. 0806 (via bitsturing)                                          */
    #define prmspringverleng_0807        6 /* Dyn. hiaattij instelling voor det. 0807 (via bitsturing)                                          */
    #define prmspringverleng_0808        7 /* Dyn. hiaattij instelling voor det. 0808 (via bitsturing)                                          */
    #define prmfb                        8 /* Instelling fasebewaking                                                                           */
    #define prmxx                        9 /* Versiebeheer xx                                                                                   */
    #define prmyy                       10 /* Versiebeheer yy                                                                                   */
    #define prmzz                       11 /* Versiebeheer zz                                                                                   */
    #define prmda0201                   12 /* Aanvraag functie voor detector 0201                                                               */
    #define prmda0202                   13 /* Aanvraag functie voor detector 0202                                                               */
    #define prmda0203                   14 /* Aanvraag functie voor detector 0203                                                               */
    #define prmda0204                   15 /* Aanvraag functie voor detector 0204                                                               */
    #define prmda0205                   16 /* Aanvraag functie voor detector 0205                                                               */
    #define prmda0206                   17 /* Aanvraag functie voor detector 0206                                                               */
    #define prmda0207                   18 /* Aanvraag functie voor detector 0207                                                               */
    #define prmda0208                   19 /* Aanvraag functie voor detector 0208                                                               */
    #define prmda0301                   20 /* Aanvraag functie voor detector 0301                                                               */
    #define prmda0302                   21 /* Aanvraag functie voor detector 0302                                                               */
    #define prmda0501                   22 /* Aanvraag functie voor detector 0501                                                               */
    #define prmda0502                   23 /* Aanvraag functie voor detector 0502                                                               */
    #define prmda0801                   24 /* Aanvraag functie voor detector 0801                                                               */
    #define prmda0802                   25 /* Aanvraag functie voor detector 0802                                                               */
    #define prmda0803                   26 /* Aanvraag functie voor detector 0803                                                               */
    #define prmda0804                   27 /* Aanvraag functie voor detector 0804                                                               */
    #define prmda0805                   28 /* Aanvraag functie voor detector 0805                                                               */
    #define prmda0806                   29 /* Aanvraag functie voor detector 0806                                                               */
    #define prmda0807                   30 /* Aanvraag functie voor detector 0807                                                               */
    #define prmda0808                   31 /* Aanvraag functie voor detector 0808                                                               */
    #define prmda0901                   32 /* Aanvraag functie voor detector 0901                                                               */
    #define prmda0902                   33 /* Aanvraag functie voor detector 0902                                                               */
    #define prmda0903                   34 /* Aanvraag functie voor detector 0903                                                               */
    #define prmda1101                   35 /* Aanvraag functie voor detector 1101                                                               */
    #define prmda1102                   36 /* Aanvraag functie voor detector 1102                                                               */
    #define prmda1103                   37 /* Aanvraag functie voor detector 1103                                                               */
    #define prmda1104                   38 /* Aanvraag functie voor detector 1104                                                               */
    #define prmda2101                   39 /* Aanvraag functie voor detector 2101                                                               */
    #define prmda2131                   40 /* Aanvraag functie voor detector 2131                                                               */
    #define prmda2201                   41 /* Aanvraag functie voor detector 2201                                                               */
    #define prmda2231                   42 /* Aanvraag functie voor detector 2231                                                               */
    #define prmda2401                   43 /* Aanvraag functie voor detector 2401                                                               */
    #define prmda2402                   44 /* Aanvraag functie voor detector 2402                                                               */
    #define prmda2403                   45 /* Aanvraag functie voor detector 2403                                                               */
    #define prmda2431                   46 /* Aanvraag functie voor detector 2431                                                               */
    #define prmda2601                   47 /* Aanvraag functie voor detector 2601                                                               */
    #define prmda2631                   48 /* Aanvraag functie voor detector 2631                                                               */
    #define prmda2801                   49 /* Aanvraag functie voor detector 2801                                                               */
    #define prmda2802                   50 /* Aanvraag functie voor detector 2802                                                               */
    #define prmda2831                   51 /* Aanvraag functie voor detector 2831                                                               */
    #define prmda3131                   52 /* Aanvraag functie voor detector 3131                                                               */
    #define prmda3132                   53 /* Aanvraag functie voor detector 3132                                                               */
    #define prmda3231                   54 /* Aanvraag functie voor detector 3231                                                               */
    #define prmda3232                   55 /* Aanvraag functie voor detector 3232                                                               */
    #define prmda3331                   56 /* Aanvraag functie voor detector 3331                                                               */
    #define prmda3332                   57 /* Aanvraag functie voor detector 3332                                                               */
    #define prmda3431                   58 /* Aanvraag functie voor detector 3431                                                               */
    #define prmda3432                   59 /* Aanvraag functie voor detector 3432                                                               */
    #define prmda3831                   60 /* Aanvraag functie voor detector 3831                                                               */
    #define prmda3832                   61 /* Aanvraag functie voor detector 3832                                                               */
    #define prmda6101                   62 /* Aanvraag functie voor detector 6101                                                               */
    #define prmda6102                   63 /* Aanvraag functie voor detector 6102                                                               */
    #define prmda6201                   64 /* Aanvraag functie voor detector 6201                                                               */
    #define prmda6202                   65 /* Aanvraag functie voor detector 6202                                                               */
    #define prmda6203                   66 /* Aanvraag functie voor detector 6203                                                               */
    #define prmda6204                   67 /* Aanvraag functie voor detector 6204                                                               */
    #define prmda6701                   68 /* Aanvraag functie voor detector 6701                                                               */
    #define prmda6702                   69 /* Aanvraag functie voor detector 6702                                                               */
    #define prmda6801                   70 /* Aanvraag functie voor detector 6801                                                               */
    #define prmda6802                   71 /* Aanvraag functie voor detector 6802                                                               */
    #define prmda6803                   72 /* Aanvraag functie voor detector 6803                                                               */
    #define prmda6804                   73 /* Aanvraag functie voor detector 6804                                                               */
    #define prmda6821                   74 /* Aanvraag functie voor detector 6821                                                               */
    #define prmda6822                   75 /* Aanvraag functie voor detector 6822                                                               */
    #define prmda8101                   76 /* Aanvraag functie voor detector 8101                                                               */
    #define prmda8131                   77 /* Aanvraag functie voor detector 8131                                                               */
    #define prmda8201                   78 /* Aanvraag functie voor detector 8201                                                               */
    #define prmda8231                   79 /* Aanvraag functie voor detector 8231                                                               */
    #define prmda8401                   80 /* Aanvraag functie voor detector 8401                                                               */
    #define prmda8431                   81 /* Aanvraag functie voor detector 8431                                                               */
    #define prmmk0201                   82 /* Meetkriterium type voor detector 0201                                                             */
    #define prmmk0202                   83 /* Meetkriterium type voor detector 0202                                                             */
    #define prmmk0203                   84 /* Meetkriterium type voor detector 0203                                                             */
    #define prmmk0204                   85 /* Meetkriterium type voor detector 0204                                                             */
    #define prmmk0205                   86 /* Meetkriterium type voor detector 0205                                                             */
    #define prmmk0206                   87 /* Meetkriterium type voor detector 0206                                                             */
    #define prmmk0207                   88 /* Meetkriterium type voor detector 0207                                                             */
    #define prmmk0208                   89 /* Meetkriterium type voor detector 0208                                                             */
    #define prmmk0301                   90 /* Meetkriterium type voor detector 0301                                                             */
    #define prmmk0302                   91 /* Meetkriterium type voor detector 0302                                                             */
    #define prmmk0501                   92 /* Meetkriterium type voor detector 0501                                                             */
    #define prmmk0502                   93 /* Meetkriterium type voor detector 0502                                                             */
    #define prmmk0801                   94 /* Meetkriterium type voor detector 0801                                                             */
    #define prmmk0802                   95 /* Meetkriterium type voor detector 0802                                                             */
    #define prmmk0803                   96 /* Meetkriterium type voor detector 0803                                                             */
    #define prmmk0804                   97 /* Meetkriterium type voor detector 0804                                                             */
    #define prmmk0805                   98 /* Meetkriterium type voor detector 0805                                                             */
    #define prmmk0806                   99 /* Meetkriterium type voor detector 0806                                                             */
    #define prmmk0807                  100 /* Meetkriterium type voor detector 0807                                                             */
    #define prmmk0808                  101 /* Meetkriterium type voor detector 0808                                                             */
    #define prmmk0901                  102 /* Meetkriterium type voor detector 0901                                                             */
    #define prmmk0902                  103 /* Meetkriterium type voor detector 0902                                                             */
    #define prmmk0903                  104 /* Meetkriterium type voor detector 0903                                                             */
    #define prmmk1101                  105 /* Meetkriterium type voor detector 1101                                                             */
    #define prmmk1102                  106 /* Meetkriterium type voor detector 1102                                                             */
    #define prmmk1103                  107 /* Meetkriterium type voor detector 1103                                                             */
    #define prmmk1104                  108 /* Meetkriterium type voor detector 1104                                                             */
    #define prmmk2101                  109 /* Meetkriterium type voor detector 2101                                                             */
    #define prmmk2201                  110 /* Meetkriterium type voor detector 2201                                                             */
    #define prmmk2401                  111 /* Meetkriterium type voor detector 2401                                                             */
    #define prmmk2402                  112 /* Meetkriterium type voor detector 2402                                                             */
    #define prmmk2403                  113 /* Meetkriterium type voor detector 2403                                                             */
    #define prmmk2601                  114 /* Meetkriterium type voor detector 2601                                                             */
    #define prmmk2801                  115 /* Meetkriterium type voor detector 2801                                                             */
    #define prmmk2802                  116 /* Meetkriterium type voor detector 2802                                                             */
    #define prmmk6101                  117 /* Meetkriterium type voor detector 6101                                                             */
    #define prmmk6102                  118 /* Meetkriterium type voor detector 6102                                                             */
    #define prmmk6201                  119 /* Meetkriterium type voor detector 6201                                                             */
    #define prmmk6202                  120 /* Meetkriterium type voor detector 6202                                                             */
    #define prmmk6203                  121 /* Meetkriterium type voor detector 6203                                                             */
    #define prmmk6204                  122 /* Meetkriterium type voor detector 6204                                                             */
    #define prmmk6701                  123 /* Meetkriterium type voor detector 6701                                                             */
    #define prmmk6702                  124 /* Meetkriterium type voor detector 6702                                                             */
    #define prmmk6801                  125 /* Meetkriterium type voor detector 6801                                                             */
    #define prmmk6802                  126 /* Meetkriterium type voor detector 6802                                                             */
    #define prmmk6803                  127 /* Meetkriterium type voor detector 6803                                                             */
    #define prmmk6804                  128 /* Meetkriterium type voor detector 6804                                                             */
    #define prmmk6821                  129 /* Meetkriterium type voor detector 6821                                                             */
    #define prmmk6822                  130 /* Meetkriterium type voor detector 6822                                                             */
    #define prmmk8101                  131 /* Meetkriterium type voor detector 8101                                                             */
    #define prmmk8201                  132 /* Meetkriterium type voor detector 8201                                                             */
    #define prmmk8401                  133 /* Meetkriterium type voor detector 8401                                                             */
    #define prmperc03                  134 /* Percentage groentijd fase 03 bij defect kop en lange lus                                          */
    #define prmperc05                  135 /* Percentage groentijd fase 05 bij defect kop en lange lus                                          */
    #define prmperc08                  136 /* Percentage groentijd fase 08 bij defect kop en lange lus                                          */
    #define prmperc09                  137 /* Percentage groentijd fase 09 bij defect kop en lange lus                                          */
    #define prmperc11                  138 /* Percentage groentijd fase 11 bij defect kop en lange lus                                          */
    #define prmperc61                  139 /* Percentage groentijd fase 61 bij defect kop en lange lus                                          */
    #define prmperc62                  140 /* Percentage groentijd fase 62 bij defect kop en lange lus                                          */
    #define prmperc67                  141 /* Percentage groentijd fase 67 bij defect kop en lange lus                                          */
    #define prmperc68                  142 /* Percentage groentijd fase 68 bij defect kop en lange lus                                          */
    #define prmfperc68af08             143 /* Doseerpercentage 08                                                                               */
    #define prmfperc68af11             144 /* Doseerpercentage 11                                                                               */
    #define prmprml02                  145 /* Toewijzen PRML voor fase 02 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml03                  146 /* Toewijzen PRML voor fase 03 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml05                  147 /* Toewijzen PRML voor fase 05 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml08                  148 /* Toewijzen PRML voor fase 08 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml09                  149 /* Toewijzen PRML voor fase 09 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml11                  150 /* Toewijzen PRML voor fase 11 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml21                  151 /* Toewijzen PRML voor fase 21 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml22                  152 /* Toewijzen PRML voor fase 22 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml24                  153 /* Toewijzen PRML voor fase 24 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml26                  154 /* Toewijzen PRML voor fase 26 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml28                  155 /* Toewijzen PRML voor fase 28 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml31                  156 /* Toewijzen PRML voor fase 31 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml32                  157 /* Toewijzen PRML voor fase 32 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml33                  158 /* Toewijzen PRML voor fase 33 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml34                  159 /* Toewijzen PRML voor fase 34 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml38                  160 /* Toewijzen PRML voor fase 38 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml61                  161 /* Toewijzen PRML voor fase 61 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml62                  162 /* Toewijzen PRML voor fase 62 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml67                  163 /* Toewijzen PRML voor fase 67 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml68                  164 /* Toewijzen PRML voor fase 68 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml81                  165 /* Toewijzen PRML voor fase 81 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml82                  166 /* Toewijzen PRML voor fase 82 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmprml84                  167 /* Toewijzen PRML voor fase 84 (bitwise BIT0 tot en met BIT14; gebruik BIT10 indien niet toegewezen) */
    #define prmmwta                    168 /* Maximale wachttijd autoverkeer                                                                    */
    #define prmmwtfts                  169 /* Maximale wachttijd fiets                                                                          */
    #define prmmwtvtg                  170 /* Maximale wachttijd voetgangers                                                                    */
    #define prmrto02                   171 /* Ongehinderde rijtijd prioriteit fase 02                                                           */
    #define prmrtbg02                  172 /* Beperkt gehinderde rijtijd prioriteit fase 02                                                     */
    #define prmrtg02                   173 /* Gehinderde rijtijd prioriteit fase 02                                                             */
    #define prmomx02                   174 /* Ondermaximum OV fase 02                                                                           */
    #define prmvtgcat02                175 /* Voertuigcategorie DSI voor prio ingreep 02                                                        */
    #define prmprio02                  176 /* Prioriteitsinstelling OV fase 02                                                                  */
    #define prmrto08                   177 /* Ongehinderde rijtijd prioriteit fase 08                                                           */
    #define prmrtbg08                  178 /* Beperkt gehinderde rijtijd prioriteit fase 08                                                     */
    #define prmrtg08                   179 /* Gehinderde rijtijd prioriteit fase 08                                                             */
    #define prmomx08                   180 /* Ondermaximum OV fase 08                                                                           */
    #define prmvtgcat08                181 /* Voertuigcategorie DSI voor prio ingreep 08                                                        */
    #define prmprio08                  182 /* Prioriteitsinstelling OV fase 08                                                                  */
    #define prmrto11                   183 /* Ongehinderde rijtijd prioriteit fase 11                                                           */
    #define prmrtbg11                  184 /* Beperkt gehinderde rijtijd prioriteit fase 11                                                     */
    #define prmrtg11                   185 /* Gehinderde rijtijd prioriteit fase 11                                                             */
    #define prmomx11                   186 /* Ondermaximum OV fase 11                                                                           */
    #define prmvtgcat11                187 /* Voertuigcategorie DSI voor prio ingreep 11                                                        */
    #define prmprio11                  188 /* Prioriteitsinstelling OV fase 11                                                                  */
    #define prmftsblok22fiets          189 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 22                                    */
    #define prmftsmaxpercyc22fiets     190 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 22                                   */
    #define prmftsminwt22fiets         191 /* Minimale wachttijd tbv peloton prio voor fase 22                                                  */
    #define prmrto22                   192 /* Ongehinderde rijtijd prioriteit fase 22                                                           */
    #define prmrtbg22                  193 /* Beperkt gehinderde rijtijd prioriteit fase 22                                                     */
    #define prmrtg22                   194 /* Gehinderde rijtijd prioriteit fase 22                                                             */
    #define prmomx22                   195 /* Ondermaximum OV fase 22                                                                           */
    #define prmprio22                  196 /* Prioriteitsinstelling OV fase 22                                                                  */
    #define prmftsblok24fiets          197 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 24                                    */
    #define prmftsmaxpercyc24fiets     198 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 24                                   */
    #define prmftsminvtg24fiets        199 /* Minimaal aantal gemeten fietsers tbv peloton prio voor fase 24                                    */
    #define prmftsminwt24fiets         200 /* Minimale wachttijd tbv peloton prio voor fase 24                                                  */
    #define prmrto24                   201 /* Ongehinderde rijtijd prioriteit fase 24                                                           */
    #define prmrtbg24                  202 /* Beperkt gehinderde rijtijd prioriteit fase 24                                                     */
    #define prmrtg24                   203 /* Gehinderde rijtijd prioriteit fase 24                                                             */
    #define prmomx24                   204 /* Ondermaximum OV fase 24                                                                           */
    #define prmprio24                  205 /* Prioriteitsinstelling OV fase 24                                                                  */
    #define prmrto61                   206 /* Ongehinderde rijtijd prioriteit fase 61                                                           */
    #define prmrtbg61                  207 /* Beperkt gehinderde rijtijd prioriteit fase 61                                                     */
    #define prmrtg61                   208 /* Gehinderde rijtijd prioriteit fase 61                                                             */
    #define prmomx61                   209 /* Ondermaximum OV fase 61                                                                           */
    #define prmvtgcat61                210 /* Voertuigcategorie DSI voor prio ingreep 61                                                        */
    #define prmprio61                  211 /* Prioriteitsinstelling OV fase 61                                                                  */
    #define prmallelijnen61            212 /* Prioriteit geven aan alle lijnen fase 61                                                          */
    #define prmlijn61_01               213 /* Lijnnummer 1 tbv prioriteit OV fase 61                                                            */
    #define prmlijn61_02               214 /* Lijnnummer 2 tbv prioriteit OV fase 61                                                            */
    #define prmlijn61_03               215 /* Lijnnummer 3 tbv prioriteit OV fase 61                                                            */
    #define prmlijn61_04               216 /* Lijnnummer 4 tbv prioriteit OV fase 61                                                            */
    #define prmlijn61_05               217 /* Lijnnummer 5 tbv prioriteit OV fase 61                                                            */
    #define prmftsblok84fiets          218 /* Blokken waarin fiets peloton prio actief mag zijn voor fase 84                                    */
    #define prmftsmaxpercyc84fiets     219 /* Maximaal aantal keer fiets peloton prio per cyclus voor fase 84                                   */
    #define prmftsminwt84fiets         220 /* Minimale wachttijd tbv peloton prio voor fase 84                                                  */
    #define prmrto84                   221 /* Ongehinderde rijtijd prioriteit fase 84                                                           */
    #define prmrtbg84                  222 /* Beperkt gehinderde rijtijd prioriteit fase 84                                                     */
    #define prmrtg84                   223 /* Gehinderde rijtijd prioriteit fase 84                                                             */
    #define prmomx84                   224 /* Ondermaximum OV fase 84                                                                           */
    #define prmprio84                  225 /* Prioriteitsinstelling OV fase 84                                                                  */
    #define prmpriohd02                226 /* Prioriteitsinstelling HD fase 02                                                                  */
    #define prmrtohd02                 227 /* Ongehinderde rijtijd HD fase 02                                                                   */
    #define prmrtbghd02                228 /* Beperkt gehinderde rijtijd HD fase 02                                                             */
    #define prmrtghd02                 229 /* Gehinderde rijtijd HD fase 02                                                                     */
    #define prmpriohd03                230 /* Prioriteitsinstelling HD fase 03                                                                  */
    #define prmrtohd03                 231 /* Ongehinderde rijtijd HD fase 03                                                                   */
    #define prmrtbghd03                232 /* Beperkt gehinderde rijtijd HD fase 03                                                             */
    #define prmrtghd03                 233 /* Gehinderde rijtijd HD fase 03                                                                     */
    #define prmpriohd05                234 /* Prioriteitsinstelling HD fase 05                                                                  */
    #define prmrtohd05                 235 /* Ongehinderde rijtijd HD fase 05                                                                   */
    #define prmrtbghd05                236 /* Beperkt gehinderde rijtijd HD fase 05                                                             */
    #define prmrtghd05                 237 /* Gehinderde rijtijd HD fase 05                                                                     */
    #define prmpriohd08                238 /* Prioriteitsinstelling HD fase 08                                                                  */
    #define prmrtohd08                 239 /* Ongehinderde rijtijd HD fase 08                                                                   */
    #define prmrtbghd08                240 /* Beperkt gehinderde rijtijd HD fase 08                                                             */
    #define prmrtghd08                 241 /* Gehinderde rijtijd HD fase 08                                                                     */
    #define prmpriohd09                242 /* Prioriteitsinstelling HD fase 09                                                                  */
    #define prmrtohd09                 243 /* Ongehinderde rijtijd HD fase 09                                                                   */
    #define prmrtbghd09                244 /* Beperkt gehinderde rijtijd HD fase 09                                                             */
    #define prmrtghd09                 245 /* Gehinderde rijtijd HD fase 09                                                                     */
    #define prmpriohd11                246 /* Prioriteitsinstelling HD fase 11                                                                  */
    #define prmrtohd11                 247 /* Ongehinderde rijtijd HD fase 11                                                                   */
    #define prmrtbghd11                248 /* Beperkt gehinderde rijtijd HD fase 11                                                             */
    #define prmrtghd11                 249 /* Gehinderde rijtijd HD fase 11                                                                     */
    #define prmpriohd61                250 /* Prioriteitsinstelling HD fase 61                                                                  */
    #define prmrtohd61                 251 /* Ongehinderde rijtijd HD fase 61                                                                   */
    #define prmrtbghd61                252 /* Beperkt gehinderde rijtijd HD fase 61                                                             */
    #define prmrtghd61                 253 /* Gehinderde rijtijd HD fase 61                                                                     */
    #define prmpriohd62                254 /* Prioriteitsinstelling HD fase 62                                                                  */
    #define prmrtohd62                 255 /* Ongehinderde rijtijd HD fase 62                                                                   */
    #define prmrtbghd62                256 /* Beperkt gehinderde rijtijd HD fase 62                                                             */
    #define prmrtghd62                 257 /* Gehinderde rijtijd HD fase 62                                                                     */
    #define prmpriohd67                258 /* Prioriteitsinstelling HD fase 67                                                                  */
    #define prmrtohd67                 259 /* Ongehinderde rijtijd HD fase 67                                                                   */
    #define prmrtbghd67                260 /* Beperkt gehinderde rijtijd HD fase 67                                                             */
    #define prmrtghd67                 261 /* Gehinderde rijtijd HD fase 67                                                                     */
    #define prmpriohd68                262 /* Prioriteitsinstelling HD fase 68                                                                  */
    #define prmrtohd68                 263 /* Ongehinderde rijtijd HD fase 68                                                                   */
    #define prmrtbghd68                264 /* Beperkt gehinderde rijtijd HD fase 68                                                             */
    #define prmrtghd68                 265 /* Gehinderde rijtijd HD fase 68                                                                     */
    #define prmkarsg02                 266 /* Signaalgroep nummer voor fase 02 bij inmelding via DSI                                            */
    #define prmkarsg08                 267 /* Signaalgroep nummer voor fase 08 bij inmelding via DSI                                            */
    #define prmkarsg11                 268 /* Signaalgroep nummer voor fase 11 bij inmelding via DSI                                            */
    #define prmkarsg61                 269 /* Signaalgroep nummer voor fase 61 bij inmelding via DSI                                            */
    #define prmkarsghd02               270 /* Signaalgroep nummer voor fase 02 bij inmelding HD via DSI                                         */
    #define prmkarsghd03               271 /* Signaalgroep nummer voor fase 03 bij inmelding HD via DSI                                         */
    #define prmkarsghd05               272 /* Signaalgroep nummer voor fase 05 bij inmelding HD via DSI                                         */
    #define prmkarsghd08               273 /* Signaalgroep nummer voor fase 08 bij inmelding HD via DSI                                         */
    #define prmkarsghd09               274 /* Signaalgroep nummer voor fase 09 bij inmelding HD via DSI                                         */
    #define prmkarsghd11               275 /* Signaalgroep nummer voor fase 11 bij inmelding HD via DSI                                         */
    #define prmkarsghd61               276 /* Signaalgroep nummer voor fase 61 bij inmelding HD via DSI                                         */
    #define prmkarsghd62               277 /* Signaalgroep nummer voor fase 62 bij inmelding HD via DSI                                         */
    #define prmkarsghd67               278 /* Signaalgroep nummer voor fase 67 bij inmelding HD via DSI                                         */
    #define prmkarsghd68               279 /* Signaalgroep nummer voor fase 68 bij inmelding HD via DSI                                         */
    #define prmpelgrensKOP02           280 /* Minimaal aantal voertuigen tbv peloton koppeling KOP02 fase 02                                    */
    #define prmstkp1                   281 /* Start klokperiode nacht                                                                           */
    #define prmetkp1                   282 /* Einde klokperiode nacht                                                                           */
    #define prmdckp1                   283 /* Dagsoort klokperiode nacht                                                                        */
    #define prmstkp2                   284 /* Start klokperiode dag                                                                             */
    #define prmetkp2                   285 /* Einde klokperiode dag                                                                             */
    #define prmdckp2                   286 /* Dagsoort klokperiode dag                                                                          */
    #define prmstkp3                   287 /* Start klokperiode ochtend                                                                         */
    #define prmetkp3                   288 /* Einde klokperiode ochtend                                                                         */
    #define prmdckp3                   289 /* Dagsoort klokperiode ochtend                                                                      */
    #define prmstkp4                   290 /* Start klokperiode avond                                                                           */
    #define prmetkp4                   291 /* Einde klokperiode avond                                                                           */
    #define prmdckp4                   292 /* Dagsoort klokperiode avond                                                                        */
    #define prmstkp5                   293 /* Start klokperiode koopavond                                                                       */
    #define prmetkp5                   294 /* Einde klokperiode koopavond                                                                       */
    #define prmdckp5                   295 /* Dagsoort klokperiode koopavond                                                                    */
    #define prmstkp6                   296 /* Start klokperiode weekend                                                                         */
    #define prmetkp6                   297 /* Einde klokperiode weekend                                                                         */
    #define prmdckp6                   298 /* Dagsoort klokperiode weekend                                                                      */
    #define prmstkp7                   299 /* Start klokperiode reserve                                                                         */
    #define prmetkp7                   300 /* Einde klokperiode reserve                                                                         */
    #define prmdckp7                   301 /* Dagsoort klokperiode reserve                                                                      */
    #define prmstkpoFietsprio1         302 /* Start klokperiode Fietsprio1                                                                      */
    #define prmetkpoFietsprio1         303 /* Einde klokperiode Fietsprio1                                                                      */
    #define prmdckpoFietsprio1         304 /* Dagsoort klokperiode Fietsprio1                                                                   */
    #define prmstkpoFietsprio2         305 /* Start klokperiode Fietsprio2                                                                      */
    #define prmetkpoFietsprio2         306 /* Einde klokperiode Fietsprio2                                                                      */
    #define prmdckpoFietsprio2         307 /* Dagsoort klokperiode Fietsprio2                                                                   */
    #define prmstkpoFietsprio3         308 /* Start klokperiode Fietsprio3                                                                      */
    #define prmetkpoFietsprio3         309 /* Einde klokperiode Fietsprio3                                                                      */
    #define prmdckpoFietsprio3         310 /* Dagsoort klokperiode Fietsprio3                                                                   */
    #define prmvg1_02                  311 /* Verlenggroentijd VG1 02                                                                           */
    #define prmvg1_03                  312 /* Verlenggroentijd VG1 03                                                                           */
    #define prmvg1_05                  313 /* Verlenggroentijd VG1 05                                                                           */
    #define prmvg1_08                  314 /* Verlenggroentijd VG1 08                                                                           */
    #define prmvg1_09                  315 /* Verlenggroentijd VG1 09                                                                           */
    #define prmvg1_11                  316 /* Verlenggroentijd VG1 11                                                                           */
    #define prmvg1_21                  317 /* Verlenggroentijd VG1 21                                                                           */
    #define prmvg1_22                  318 /* Verlenggroentijd VG1 22                                                                           */
    #define prmvg1_24                  319 /* Verlenggroentijd VG1 24                                                                           */
    #define prmvg1_26                  320 /* Verlenggroentijd VG1 26                                                                           */
    #define prmvg1_28                  321 /* Verlenggroentijd VG1 28                                                                           */
    #define prmvg1_61                  322 /* Verlenggroentijd VG1 61                                                                           */
    #define prmvg1_62                  323 /* Verlenggroentijd VG1 62                                                                           */
    #define prmvg1_67                  324 /* Verlenggroentijd VG1 67                                                                           */
    #define prmvg1_68                  325 /* Verlenggroentijd VG1 68                                                                           */
    #define prmvg1_81                  326 /* Verlenggroentijd VG1 81                                                                           */
    #define prmvg1_82                  327 /* Verlenggroentijd VG1 82                                                                           */
    #define prmvg1_84                  328 /* Verlenggroentijd VG1 84                                                                           */
    #define prmvg2_02                  329 /* Verlenggroentijd VG2 02                                                                           */
    #define prmvg2_03                  330 /* Verlenggroentijd VG2 03                                                                           */
    #define prmvg2_05                  331 /* Verlenggroentijd VG2 05                                                                           */
    #define prmvg2_08                  332 /* Verlenggroentijd VG2 08                                                                           */
    #define prmvg2_09                  333 /* Verlenggroentijd VG2 09                                                                           */
    #define prmvg2_11                  334 /* Verlenggroentijd VG2 11                                                                           */
    #define prmvg2_21                  335 /* Verlenggroentijd VG2 21                                                                           */
    #define prmvg2_22                  336 /* Verlenggroentijd VG2 22                                                                           */
    #define prmvg2_24                  337 /* Verlenggroentijd VG2 24                                                                           */
    #define prmvg2_26                  338 /* Verlenggroentijd VG2 26                                                                           */
    #define prmvg2_28                  339 /* Verlenggroentijd VG2 28                                                                           */
    #define prmvg2_61                  340 /* Verlenggroentijd VG2 61                                                                           */
    #define prmvg2_62                  341 /* Verlenggroentijd VG2 62                                                                           */
    #define prmvg2_67                  342 /* Verlenggroentijd VG2 67                                                                           */
    #define prmvg2_68                  343 /* Verlenggroentijd VG2 68                                                                           */
    #define prmvg2_81                  344 /* Verlenggroentijd VG2 81                                                                           */
    #define prmvg2_82                  345 /* Verlenggroentijd VG2 82                                                                           */
    #define prmvg2_84                  346 /* Verlenggroentijd VG2 84                                                                           */
    #define prmvg3_02                  347 /* Verlenggroentijd VG3 02                                                                           */
    #define prmvg3_03                  348 /* Verlenggroentijd VG3 03                                                                           */
    #define prmvg3_05                  349 /* Verlenggroentijd VG3 05                                                                           */
    #define prmvg3_08                  350 /* Verlenggroentijd VG3 08                                                                           */
    #define prmvg3_09                  351 /* Verlenggroentijd VG3 09                                                                           */
    #define prmvg3_11                  352 /* Verlenggroentijd VG3 11                                                                           */
    #define prmvg3_21                  353 /* Verlenggroentijd VG3 21                                                                           */
    #define prmvg3_22                  354 /* Verlenggroentijd VG3 22                                                                           */
    #define prmvg3_24                  355 /* Verlenggroentijd VG3 24                                                                           */
    #define prmvg3_26                  356 /* Verlenggroentijd VG3 26                                                                           */
    #define prmvg3_28                  357 /* Verlenggroentijd VG3 28                                                                           */
    #define prmvg3_61                  358 /* Verlenggroentijd VG3 61                                                                           */
    #define prmvg3_62                  359 /* Verlenggroentijd VG3 62                                                                           */
    #define prmvg3_67                  360 /* Verlenggroentijd VG3 67                                                                           */
    #define prmvg3_68                  361 /* Verlenggroentijd VG3 68                                                                           */
    #define prmvg3_81                  362 /* Verlenggroentijd VG3 81                                                                           */
    #define prmvg3_82                  363 /* Verlenggroentijd VG3 82                                                                           */
    #define prmvg3_84                  364 /* Verlenggroentijd VG3 84                                                                           */
    #define prmvg4_02                  365 /* Verlenggroentijd VG4 02                                                                           */
    #define prmvg4_03                  366 /* Verlenggroentijd VG4 03                                                                           */
    #define prmvg4_05                  367 /* Verlenggroentijd VG4 05                                                                           */
    #define prmvg4_08                  368 /* Verlenggroentijd VG4 08                                                                           */
    #define prmvg4_09                  369 /* Verlenggroentijd VG4 09                                                                           */
    #define prmvg4_11                  370 /* Verlenggroentijd VG4 11                                                                           */
    #define prmvg4_21                  371 /* Verlenggroentijd VG4 21                                                                           */
    #define prmvg4_22                  372 /* Verlenggroentijd VG4 22                                                                           */
    #define prmvg4_24                  373 /* Verlenggroentijd VG4 24                                                                           */
    #define prmvg4_26                  374 /* Verlenggroentijd VG4 26                                                                           */
    #define prmvg4_28                  375 /* Verlenggroentijd VG4 28                                                                           */
    #define prmvg4_61                  376 /* Verlenggroentijd VG4 61                                                                           */
    #define prmvg4_62                  377 /* Verlenggroentijd VG4 62                                                                           */
    #define prmvg4_67                  378 /* Verlenggroentijd VG4 67                                                                           */
    #define prmvg4_68                  379 /* Verlenggroentijd VG4 68                                                                           */
    #define prmvg4_81                  380 /* Verlenggroentijd VG4 81                                                                           */
    #define prmvg4_82                  381 /* Verlenggroentijd VG4 82                                                                           */
    #define prmvg4_84                  382 /* Verlenggroentijd VG4 84                                                                           */
    #define prmvg5_02                  383 /* Verlenggroentijd VG5 02                                                                           */
    #define prmvg5_03                  384 /* Verlenggroentijd VG5 03                                                                           */
    #define prmvg5_05                  385 /* Verlenggroentijd VG5 05                                                                           */
    #define prmvg5_08                  386 /* Verlenggroentijd VG5 08                                                                           */
    #define prmvg5_09                  387 /* Verlenggroentijd VG5 09                                                                           */
    #define prmvg5_11                  388 /* Verlenggroentijd VG5 11                                                                           */
    #define prmvg5_21                  389 /* Verlenggroentijd VG5 21                                                                           */
    #define prmvg5_22                  390 /* Verlenggroentijd VG5 22                                                                           */
    #define prmvg5_24                  391 /* Verlenggroentijd VG5 24                                                                           */
    #define prmvg5_26                  392 /* Verlenggroentijd VG5 26                                                                           */
    #define prmvg5_28                  393 /* Verlenggroentijd VG5 28                                                                           */
    #define prmvg5_61                  394 /* Verlenggroentijd VG5 61                                                                           */
    #define prmvg5_62                  395 /* Verlenggroentijd VG5 62                                                                           */
    #define prmvg5_67                  396 /* Verlenggroentijd VG5 67                                                                           */
    #define prmvg5_68                  397 /* Verlenggroentijd VG5 68                                                                           */
    #define prmvg5_81                  398 /* Verlenggroentijd VG5 81                                                                           */
    #define prmvg5_82                  399 /* Verlenggroentijd VG5 82                                                                           */
    #define prmvg5_84                  400 /* Verlenggroentijd VG5 84                                                                           */
    #define prmvg6_02                  401 /* Verlenggroentijd VG6 02                                                                           */
    #define prmvg6_03                  402 /* Verlenggroentijd VG6 03                                                                           */
    #define prmvg6_05                  403 /* Verlenggroentijd VG6 05                                                                           */
    #define prmvg6_08                  404 /* Verlenggroentijd VG6 08                                                                           */
    #define prmvg6_09                  405 /* Verlenggroentijd VG6 09                                                                           */
    #define prmvg6_11                  406 /* Verlenggroentijd VG6 11                                                                           */
    #define prmvg6_21                  407 /* Verlenggroentijd VG6 21                                                                           */
    #define prmvg6_22                  408 /* Verlenggroentijd VG6 22                                                                           */
    #define prmvg6_24                  409 /* Verlenggroentijd VG6 24                                                                           */
    #define prmvg6_26                  410 /* Verlenggroentijd VG6 26                                                                           */
    #define prmvg6_28                  411 /* Verlenggroentijd VG6 28                                                                           */
    #define prmvg6_61                  412 /* Verlenggroentijd VG6 61                                                                           */
    #define prmvg6_62                  413 /* Verlenggroentijd VG6 62                                                                           */
    #define prmvg6_67                  414 /* Verlenggroentijd VG6 67                                                                           */
    #define prmvg6_68                  415 /* Verlenggroentijd VG6 68                                                                           */
    #define prmvg6_81                  416 /* Verlenggroentijd VG6 81                                                                           */
    #define prmvg6_82                  417 /* Verlenggroentijd VG6 82                                                                           */
    #define prmvg6_84                  418 /* Verlenggroentijd VG6 84                                                                           */
    #define prmvg7_02                  419 /* Verlenggroentijd VG7 02                                                                           */
    #define prmvg7_03                  420 /* Verlenggroentijd VG7 03                                                                           */
    #define prmvg7_05                  421 /* Verlenggroentijd VG7 05                                                                           */
    #define prmvg7_08                  422 /* Verlenggroentijd VG7 08                                                                           */
    #define prmvg7_09                  423 /* Verlenggroentijd VG7 09                                                                           */
    #define prmvg7_11                  424 /* Verlenggroentijd VG7 11                                                                           */
    #define prmvg7_21                  425 /* Verlenggroentijd VG7 21                                                                           */
    #define prmvg7_22                  426 /* Verlenggroentijd VG7 22                                                                           */
    #define prmvg7_24                  427 /* Verlenggroentijd VG7 24                                                                           */
    #define prmvg7_26                  428 /* Verlenggroentijd VG7 26                                                                           */
    #define prmvg7_28                  429 /* Verlenggroentijd VG7 28                                                                           */
    #define prmvg7_61                  430 /* Verlenggroentijd VG7 61                                                                           */
    #define prmvg7_62                  431 /* Verlenggroentijd VG7 62                                                                           */
    #define prmvg7_67                  432 /* Verlenggroentijd VG7 67                                                                           */
    #define prmvg7_68                  433 /* Verlenggroentijd VG7 68                                                                           */
    #define prmvg7_81                  434 /* Verlenggroentijd VG7 81                                                                           */
    #define prmvg7_82                  435 /* Verlenggroentijd VG7 82                                                                           */
    #define prmvg7_84                  436 /* Verlenggroentijd VG7 84                                                                           */
    #define prmvg8_02                  437 /* Verlenggroentijd VG8 02                                                                           */
    #define prmvg8_03                  438 /* Verlenggroentijd VG8 03                                                                           */
    #define prmvg8_05                  439 /* Verlenggroentijd VG8 05                                                                           */
    #define prmvg8_08                  440 /* Verlenggroentijd VG8 08                                                                           */
    #define prmvg8_09                  441 /* Verlenggroentijd VG8 09                                                                           */
    #define prmvg8_11                  442 /* Verlenggroentijd VG8 11                                                                           */
    #define prmvg8_21                  443 /* Verlenggroentijd VG8 21                                                                           */
    #define prmvg8_22                  444 /* Verlenggroentijd VG8 22                                                                           */
    #define prmvg8_24                  445 /* Verlenggroentijd VG8 24                                                                           */
    #define prmvg8_26                  446 /* Verlenggroentijd VG8 26                                                                           */
    #define prmvg8_28                  447 /* Verlenggroentijd VG8 28                                                                           */
    #define prmvg8_61                  448 /* Verlenggroentijd VG8 61                                                                           */
    #define prmvg8_62                  449 /* Verlenggroentijd VG8 62                                                                           */
    #define prmvg8_67                  450 /* Verlenggroentijd VG8 67                                                                           */
    #define prmvg8_68                  451 /* Verlenggroentijd VG8 68                                                                           */
    #define prmvg8_81                  452 /* Verlenggroentijd VG8 81                                                                           */
    #define prmvg8_82                  453 /* Verlenggroentijd VG8 82                                                                           */
    #define prmvg8_84                  454 /* Verlenggroentijd VG8 84                                                                           */
    #define prmptp123456iks01          455 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks02          456 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks03          457 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks04          458 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks05          459 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks06          460 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks07          461 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks08          462 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks09          463 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks10          464 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks11          465 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks12          466 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks13          467 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks14          468 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks15          469 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456iks16          470 /* Instelling inkomende signalen van ptp123456                                                       */
    #define prmptp123456uks01          471 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks02          472 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks03          473 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks04          474 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks05          475 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks06          476 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks07          477 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks08          478 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks09          479 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks10          480 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks11          481 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks12          482 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks13          483 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks14          484 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks15          485 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp123456uks16          486 /* Instelling uitgaande signalen naar ptp123456                                                      */
    #define prmptp_ptp123456oke        487 /* PTP oke ptp123456                                                                                 */
    #define prmptp_ptp123456err        488 /* PTP error ptp123456                                                                               */
    #define prmptp_ptp123456err0       489 /* PTP error 0 ptp123456                                                                             */
    #define prmptp_ptp123456err1       490 /* PTP error 1 ptp123456                                                                             */
    #define prmptp_ptp123456err2       491 /* PTP error 2 ptp123456                                                                             */
    #define prmrisapproachid02         492 /* Approach id voor fase 02                                                                          */
    #define prmrisapproachid03         493 /* Approach id voor fase 03                                                                          */
    #define prmrisapproachid05         494 /* Approach id voor fase 05                                                                          */
    #define prmrisapproachid08         495 /* Approach id voor fase 08                                                                          */
    #define prmrisapproachid09         496 /* Approach id voor fase 09                                                                          */
    #define prmrisapproachid11         497 /* Approach id voor fase 11                                                                          */
    #define prmrisapproachid21         498 /* Approach id voor fase 21                                                                          */
    #define prmrisapproachid22         499 /* Approach id voor fase 22                                                                          */
    #define prmrisapproachid24         500 /* Approach id voor fase 24                                                                          */
    #define prmrisapproachid26         501 /* Approach id voor fase 26                                                                          */
    #define prmrisapproachid28         502 /* Approach id voor fase 28                                                                          */
    #define prmrisapproachid31         503 /* Approach id voor fase 31                                                                          */
    #define prmrisapproachid32         504 /* Approach id voor fase 32                                                                          */
    #define prmrisapproachid33         505 /* Approach id voor fase 33                                                                          */
    #define prmrisapproachid34         506 /* Approach id voor fase 34                                                                          */
    #define prmrisapproachid38         507 /* Approach id voor fase 38                                                                          */
    #define prmrisapproachid61         508 /* Approach id voor fase 61                                                                          */
    #define prmrisapproachid62         509 /* Approach id voor fase 62                                                                          */
    #define prmrisapproachid67         510 /* Approach id voor fase 67                                                                          */
    #define prmrisapproachid68         511 /* Approach id voor fase 68                                                                          */
    #define prmrisapproachid81         512 /* Approach id voor fase 81                                                                          */
    #define prmrisapproachid82         513 /* Approach id voor fase 82                                                                          */
    #define prmrisapproachid84         514 /* Approach id voor fase 84                                                                          */
    #define prmrislaneid02_1           515 /* Lane id voor lane met index 1 bij fase 02                                                         */
    #define prmrislaneid02_2           516 /* Lane id voor lane met index 2 bij fase 02                                                         */
    #define prmrislaneid03_1           517 /* Lane id voor lane met index 1 bij fase 03                                                         */
    #define prmrislaneid05_1           518 /* Lane id voor lane met index 1 bij fase 05                                                         */
    #define prmrislaneid08_1           519 /* Lane id voor lane met index 1 bij fase 08                                                         */
    #define prmrislaneid08_2           520 /* Lane id voor lane met index 2 bij fase 08                                                         */
    #define prmrislaneid09_1           521 /* Lane id voor lane met index 1 bij fase 09                                                         */
    #define prmrislaneid11_1           522 /* Lane id voor lane met index 1 bij fase 11                                                         */
    #define prmrislaneid21_1           523 /* Lane id voor lane met index 1 bij fase 21                                                         */
    #define prmrislaneheading21_1      524 /* Lane heading voor lane met index 1 bij fase 21                                                    */
    #define prmrislaneheadingmarge21_1 525 /* Lane heading marge voor lane met index 1 bij fase 21                                              */
    #define prmrislaneid22_1           526 /* Lane id voor lane met index 1 bij fase 22                                                         */
    #define prmrislaneheading22_1      527 /* Lane heading voor lane met index 1 bij fase 22                                                    */
    #define prmrislaneheadingmarge22_1 528 /* Lane heading marge voor lane met index 1 bij fase 22                                              */
    #define prmrislaneid22_2           529 /* Lane id voor lane met index 2 bij fase 22                                                         */
    #define prmrislaneheading22_2      530 /* Lane heading voor lane met index 2 bij fase 22                                                    */
    #define prmrislaneheadingmarge22_2 531 /* Lane heading marge voor lane met index 2 bij fase 22                                              */
    #define prmrislaneid24_1           532 /* Lane id voor lane met index 1 bij fase 24                                                         */
    #define prmrislaneheading24_1      533 /* Lane heading voor lane met index 1 bij fase 24                                                    */
    #define prmrislaneheadingmarge24_1 534 /* Lane heading marge voor lane met index 1 bij fase 24                                              */
    #define prmrislaneid26_1           535 /* Lane id voor lane met index 1 bij fase 26                                                         */
    #define prmrislaneheading26_1      536 /* Lane heading voor lane met index 1 bij fase 26                                                    */
    #define prmrislaneheadingmarge26_1 537 /* Lane heading marge voor lane met index 1 bij fase 26                                              */
    #define prmrislaneid28_1           538 /* Lane id voor lane met index 1 bij fase 28                                                         */
    #define prmrislaneheading28_1      539 /* Lane heading voor lane met index 1 bij fase 28                                                    */
    #define prmrislaneheadingmarge28_1 540 /* Lane heading marge voor lane met index 1 bij fase 28                                              */
    #define prmrislaneid31_1           541 /* Lane id voor lane met index 1 bij fase 31                                                         */
    #define prmrislaneid31_2           542 /* Lane id voor lane met index 2 bij fase 31                                                         */
    #define prmrislaneid32_1           543 /* Lane id voor lane met index 1 bij fase 32                                                         */
    #define prmrislaneid32_2           544 /* Lane id voor lane met index 2 bij fase 32                                                         */
    #define prmrislaneid33_1           545 /* Lane id voor lane met index 1 bij fase 33                                                         */
    #define prmrislaneid33_2           546 /* Lane id voor lane met index 2 bij fase 33                                                         */
    #define prmrislaneid34_1           547 /* Lane id voor lane met index 1 bij fase 34                                                         */
    #define prmrislaneid34_2           548 /* Lane id voor lane met index 2 bij fase 34                                                         */
    #define prmrislaneid38_1           549 /* Lane id voor lane met index 1 bij fase 38                                                         */
    #define prmrislaneid38_2           550 /* Lane id voor lane met index 2 bij fase 38                                                         */
    #define prmrislaneid61_1           551 /* Lane id voor lane met index 1 bij fase 61                                                         */
    #define prmrislaneid62_1           552 /* Lane id voor lane met index 1 bij fase 62                                                         */
    #define prmrislaneid62_2           553 /* Lane id voor lane met index 2 bij fase 62                                                         */
    #define prmrislaneid67_1           554 /* Lane id voor lane met index 1 bij fase 67                                                         */
    #define prmrislaneid68_1           555 /* Lane id voor lane met index 1 bij fase 68                                                         */
    #define prmrislaneid68_2           556 /* Lane id voor lane met index 2 bij fase 68                                                         */
    #define prmrislaneid81_1           557 /* Lane id voor lane met index 1 bij fase 81                                                         */
    #define prmrislaneid82_1           558 /* Lane id voor lane met index 1 bij fase 82                                                         */
    #define prmrislaneid84_1           559 /* Lane id voor lane met index 1 bij fase 84                                                         */
    #define prmrisastart02mveh1        560 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                  */
    #define prmrisastartsrm002mveh1    561 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                 */
    #define prmrisastart02mveh2        562 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 02                                  */
    #define prmrisastartsrm002mveh2    563 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 02                                 */
    #define prmrisastart03mveh1        564 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 03                                  */
    #define prmrisastartsrm003mveh1    565 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 03                                 */
    #define prmrisastart05mveh1        566 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 05                                  */
    #define prmrisastartsrm005mveh1    567 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 05                                 */
    #define prmrisastart08mveh1        568 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                  */
    #define prmrisastartsrm008mveh1    569 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                 */
    #define prmrisastart08mveh2        570 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 08                                  */
    #define prmrisastartsrm008mveh2    571 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 08                                 */
    #define prmrisastart09mveh1        572 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 09                                  */
    #define prmrisastartsrm009mveh1    573 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 09                                 */
    #define prmrisastart11mveh1        574 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 11                                  */
    #define prmrisastartsrm011mveh1    575 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 11                                 */
    #define prmrisastart21fts1         576 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 21                                  */
    #define prmrisastartsrm021fts1     577 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 21                                 */
    #define prmrisastart22fts1         578 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                  */
    #define prmrisastartsrm022fts1     579 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                 */
    #define prmrisastart22fts2         580 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 22                                  */
    #define prmrisastartsrm022fts2     581 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 22                                 */
    #define prmrisastart24fts1         582 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 24                                  */
    #define prmrisastartsrm024fts1     583 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 24                                 */
    #define prmrisastart26fts1         584 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 26                                  */
    #define prmrisastartsrm026fts1     585 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 26                                 */
    #define prmrisastart28fts1         586 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 28                                  */
    #define prmrisastartsrm028fts1     587 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 28                                 */
    #define prmrisastart31vtg1         588 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                  */
    #define prmrisastartsrm031vtg1     589 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                 */
    #define prmrisastart31vtg2         590 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 31                                  */
    #define prmrisastartsrm031vtg2     591 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 31                                 */
    #define prmrisastart32vtg1         592 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                  */
    #define prmrisastartsrm032vtg1     593 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                 */
    #define prmrisastart32vtg2         594 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 32                                  */
    #define prmrisastartsrm032vtg2     595 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 32                                 */
    #define prmrisastart33vtg1         596 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                  */
    #define prmrisastartsrm033vtg1     597 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                 */
    #define prmrisastart33vtg2         598 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 33                                  */
    #define prmrisastartsrm033vtg2     599 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 33                                 */
    #define prmrisastart34vtg1         600 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                  */
    #define prmrisastartsrm034vtg1     601 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                 */
    #define prmrisastart34vtg2         602 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 34                                  */
    #define prmrisastartsrm034vtg2     603 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 34                                 */
    #define prmrisastart84fts1         604 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 84                                  */
    #define prmrisastartsrm084fts1     605 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 84                                 */
    #define prmrisastart82fts1         606 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 82                                  */
    #define prmrisastartsrm082fts1     607 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 82                                 */
    #define prmrisastart81fts1         608 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 81                                  */
    #define prmrisastartsrm081fts1     609 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 81                                 */
    #define prmrisastart68mveh2        610 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                  */
    #define prmrisastartsrm068mveh2    611 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                 */
    #define prmrisastart68mveh1        612 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 68                                  */
    #define prmrisastartsrm068mveh1    613 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 68                                 */
    #define prmrisastart67mveh1        614 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 67                                  */
    #define prmrisastartsrm067mveh1    615 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 67                                 */
    #define prmrisastart62mveh2        616 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                  */
    #define prmrisastartsrm062mveh2    617 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                 */
    #define prmrisastart62mveh1        618 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 62                                  */
    #define prmrisastartsrm062mveh1    619 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 62                                 */
    #define prmrisastart61mveh1        620 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 61                                  */
    #define prmrisastartsrm061mveh1    621 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 61                                 */
    #define prmrisastart38vtg2         622 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                  */
    #define prmrisastartsrm038vtg2     623 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                 */
    #define prmrisastart38vtg1         624 /* Afstand van stopstreep tot start aanvraag gebied RIS CAM fase 38                                  */
    #define prmrisastartsrm038vtg1     625 /* Afstand van stopstreep tot start aanvraag gebied RIS SRM0 fase 38                                 */
    #define prmrisaend02mveh1          626 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                  */
    #define prmrisaendsrm002mveh1      627 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                 */
    #define prmrisaend02mveh2          628 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 02                                  */
    #define prmrisaendsrm002mveh2      629 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 02                                 */
    #define prmrisaend03mveh1          630 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 03                                  */
    #define prmrisaendsrm003mveh1      631 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 03                                 */
    #define prmrisaend05mveh1          632 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 05                                  */
    #define prmrisaendsrm005mveh1      633 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 05                                 */
    #define prmrisaend08mveh1          634 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                  */
    #define prmrisaendsrm008mveh1      635 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                 */
    #define prmrisaend08mveh2          636 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 08                                  */
    #define prmrisaendsrm008mveh2      637 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 08                                 */
    #define prmrisaend09mveh1          638 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 09                                  */
    #define prmrisaendsrm009mveh1      639 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 09                                 */
    #define prmrisaend11mveh1          640 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 11                                  */
    #define prmrisaendsrm011mveh1      641 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 11                                 */
    #define prmrisaend21fts1           642 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 21                                  */
    #define prmrisaendsrm021fts1       643 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 21                                 */
    #define prmrisaend22fts1           644 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                  */
    #define prmrisaendsrm022fts1       645 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                 */
    #define prmrisaend22fts2           646 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 22                                  */
    #define prmrisaendsrm022fts2       647 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 22                                 */
    #define prmrisaend24fts1           648 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 24                                  */
    #define prmrisaendsrm024fts1       649 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 24                                 */
    #define prmrisaend26fts1           650 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 26                                  */
    #define prmrisaendsrm026fts1       651 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 26                                 */
    #define prmrisaend28fts1           652 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 28                                  */
    #define prmrisaendsrm028fts1       653 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 28                                 */
    #define prmrisaend31vtg1           654 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                  */
    #define prmrisaendsrm031vtg1       655 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                 */
    #define prmrisaend31vtg2           656 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 31                                  */
    #define prmrisaendsrm031vtg2       657 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 31                                 */
    #define prmrisaend32vtg1           658 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                  */
    #define prmrisaendsrm032vtg1       659 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                 */
    #define prmrisaend32vtg2           660 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 32                                  */
    #define prmrisaendsrm032vtg2       661 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 32                                 */
    #define prmrisaend33vtg1           662 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                  */
    #define prmrisaendsrm033vtg1       663 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                 */
    #define prmrisaend33vtg2           664 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 33                                  */
    #define prmrisaendsrm033vtg2       665 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 33                                 */
    #define prmrisaend34vtg1           666 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                  */
    #define prmrisaendsrm034vtg1       667 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                 */
    #define prmrisaend34vtg2           668 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 34                                  */
    #define prmrisaendsrm034vtg2       669 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 34                                 */
    #define prmrisaend84fts1           670 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 84                                  */
    #define prmrisaendsrm084fts1       671 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 84                                 */
    #define prmrisaend82fts1           672 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 82                                  */
    #define prmrisaendsrm082fts1       673 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 82                                 */
    #define prmrisaend81fts1           674 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 81                                  */
    #define prmrisaendsrm081fts1       675 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 81                                 */
    #define prmrisaend68mveh2          676 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                  */
    #define prmrisaendsrm068mveh2      677 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                 */
    #define prmrisaend68mveh1          678 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 68                                  */
    #define prmrisaendsrm068mveh1      679 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 68                                 */
    #define prmrisaend67mveh1          680 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 67                                  */
    #define prmrisaendsrm067mveh1      681 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 67                                 */
    #define prmrisaend62mveh2          682 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                  */
    #define prmrisaendsrm062mveh2      683 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                 */
    #define prmrisaend62mveh1          684 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 62                                  */
    #define prmrisaendsrm062mveh1      685 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 62                                 */
    #define prmrisaend61mveh1          686 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 61                                  */
    #define prmrisaendsrm061mveh1      687 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 61                                 */
    #define prmrisaend38vtg2           688 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                  */
    #define prmrisaendsrm038vtg2       689 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                 */
    #define prmrisaend38vtg1           690 /* Afstand van stopstreep tot einde aanvraag gebied RIS CAM fase 38                                  */
    #define prmrisaendsrm038vtg1       691 /* Afstand van stopstreep tot einde aanvraag gebied RIS SRM0 fase 38                                 */
    #define prmrisvstart02mveh1        692 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                   */
    #define prmrisvstartsrm002mveh1    693 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                  */
    #define prmrisvstart02mveh2        694 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 02                                   */
    #define prmrisvstartsrm002mveh2    695 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 02                                  */
    #define prmrisvstart03mveh1        696 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 03                                   */
    #define prmrisvstartsrm003mveh1    697 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 03                                  */
    #define prmrisvstart05mveh1        698 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 05                                   */
    #define prmrisvstartsrm005mveh1    699 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 05                                  */
    #define prmrisvstart08mveh1        700 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                   */
    #define prmrisvstartsrm008mveh1    701 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                  */
    #define prmrisvstart08mveh2        702 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 08                                   */
    #define prmrisvstartsrm008mveh2    703 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 08                                  */
    #define prmrisvstart09mveh1        704 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 09                                   */
    #define prmrisvstartsrm009mveh1    705 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 09                                  */
    #define prmrisvstart11mveh1        706 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 11                                   */
    #define prmrisvstartsrm011mveh1    707 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 11                                  */
    #define prmrisvstart21fts1         708 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 21                                   */
    #define prmrisvstartsrm021fts1     709 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 21                                  */
    #define prmrisvstart22fts1         710 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                   */
    #define prmrisvstartsrm022fts1     711 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                  */
    #define prmrisvstart22fts2         712 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 22                                   */
    #define prmrisvstartsrm022fts2     713 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 22                                  */
    #define prmrisvstart24fts1         714 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 24                                   */
    #define prmrisvstartsrm024fts1     715 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 24                                  */
    #define prmrisvstart26fts1         716 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 26                                   */
    #define prmrisvstartsrm026fts1     717 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 26                                  */
    #define prmrisvstart28fts1         718 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 28                                   */
    #define prmrisvstartsrm028fts1     719 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 28                                  */
    #define prmrisvstart31vtg1         720 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                   */
    #define prmrisvstartsrm031vtg1     721 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                  */
    #define prmrisvstart31vtg2         722 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 31                                   */
    #define prmrisvstartsrm031vtg2     723 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 31                                  */
    #define prmrisvstart32vtg1         724 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                   */
    #define prmrisvstartsrm032vtg1     725 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                  */
    #define prmrisvstart32vtg2         726 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 32                                   */
    #define prmrisvstartsrm032vtg2     727 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 32                                  */
    #define prmrisvstart33vtg1         728 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                   */
    #define prmrisvstartsrm033vtg1     729 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                  */
    #define prmrisvstart33vtg2         730 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 33                                   */
    #define prmrisvstartsrm033vtg2     731 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 33                                  */
    #define prmrisvstart34vtg1         732 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                   */
    #define prmrisvstartsrm034vtg1     733 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                  */
    #define prmrisvstart34vtg2         734 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 34                                   */
    #define prmrisvstartsrm034vtg2     735 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 34                                  */
    #define prmrisvstart84fts1         736 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 84                                   */
    #define prmrisvstartsrm084fts1     737 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 84                                  */
    #define prmrisvstart82fts1         738 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 82                                   */
    #define prmrisvstartsrm082fts1     739 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 82                                  */
    #define prmrisvstart81fts1         740 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 81                                   */
    #define prmrisvstartsrm081fts1     741 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 81                                  */
    #define prmrisvstart68mveh2        742 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                   */
    #define prmrisvstartsrm068mveh2    743 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                  */
    #define prmrisvstart68mveh1        744 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 68                                   */
    #define prmrisvstartsrm068mveh1    745 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 68                                  */
    #define prmrisvstart67mveh1        746 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 67                                   */
    #define prmrisvstartsrm067mveh1    747 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 67                                  */
    #define prmrisvstart62mveh2        748 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                   */
    #define prmrisvstartsrm062mveh2    749 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                  */
    #define prmrisvstart62mveh1        750 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 62                                   */
    #define prmrisvstartsrm062mveh1    751 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 62                                  */
    #define prmrisvstart61mveh1        752 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 61                                   */
    #define prmrisvstartsrm061mveh1    753 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 61                                  */
    #define prmrisvstart38vtg2         754 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                   */
    #define prmrisvstartsrm038vtg2     755 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                  */
    #define prmrisvstart38vtg1         756 /* Afstand van stopstreep tot start verleng gebied RIS CAM fase 38                                   */
    #define prmrisvstartsrm038vtg1     757 /* Afstand van stopstreep tot start verleng gebied RIS SRM0 fase 38                                  */
    #define prmrisvend02mveh1          758 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                   */
    #define prmrisvendsrm002mveh1      759 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                  */
    #define prmrisvend02mveh2          760 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 02                                   */
    #define prmrisvendsrm002mveh2      761 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 02                                  */
    #define prmrisvend03mveh1          762 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 03                                   */
    #define prmrisvendsrm003mveh1      763 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 03                                  */
    #define prmrisvend05mveh1          764 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 05                                   */
    #define prmrisvendsrm005mveh1      765 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 05                                  */
    #define prmrisvend08mveh1          766 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                   */
    #define prmrisvendsrm008mveh1      767 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                  */
    #define prmrisvend08mveh2          768 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 08                                   */
    #define prmrisvendsrm008mveh2      769 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 08                                  */
    #define prmrisvend09mveh1          770 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 09                                   */
    #define prmrisvendsrm009mveh1      771 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 09                                  */
    #define prmrisvend11mveh1          772 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 11                                   */
    #define prmrisvendsrm011mveh1      773 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 11                                  */
    #define prmrisvend21fts1           774 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 21                                   */
    #define prmrisvendsrm021fts1       775 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 21                                  */
    #define prmrisvend22fts1           776 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                   */
    #define prmrisvendsrm022fts1       777 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                  */
    #define prmrisvend22fts2           778 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 22                                   */
    #define prmrisvendsrm022fts2       779 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 22                                  */
    #define prmrisvend24fts1           780 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 24                                   */
    #define prmrisvendsrm024fts1       781 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 24                                  */
    #define prmrisvend26fts1           782 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 26                                   */
    #define prmrisvendsrm026fts1       783 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 26                                  */
    #define prmrisvend28fts1           784 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 28                                   */
    #define prmrisvendsrm028fts1       785 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 28                                  */
    #define prmrisvend31vtg1           786 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                   */
    #define prmrisvendsrm031vtg1       787 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                  */
    #define prmrisvend31vtg2           788 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 31                                   */
    #define prmrisvendsrm031vtg2       789 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 31                                  */
    #define prmrisvend32vtg1           790 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                   */
    #define prmrisvendsrm032vtg1       791 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                  */
    #define prmrisvend32vtg2           792 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 32                                   */
    #define prmrisvendsrm032vtg2       793 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 32                                  */
    #define prmrisvend33vtg1           794 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                   */
    #define prmrisvendsrm033vtg1       795 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                  */
    #define prmrisvend33vtg2           796 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 33                                   */
    #define prmrisvendsrm033vtg2       797 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 33                                  */
    #define prmrisvend34vtg1           798 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                   */
    #define prmrisvendsrm034vtg1       799 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                  */
    #define prmrisvend34vtg2           800 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 34                                   */
    #define prmrisvendsrm034vtg2       801 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 34                                  */
    #define prmrisvend84fts1           802 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 84                                   */
    #define prmrisvendsrm084fts1       803 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 84                                  */
    #define prmrisvend82fts1           804 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 82                                   */
    #define prmrisvendsrm082fts1       805 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 82                                  */
    #define prmrisvend81fts1           806 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 81                                   */
    #define prmrisvendsrm081fts1       807 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 81                                  */
    #define prmrisvend68mveh2          808 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                   */
    #define prmrisvendsrm068mveh2      809 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                  */
    #define prmrisvend68mveh1          810 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 68                                   */
    #define prmrisvendsrm068mveh1      811 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 68                                  */
    #define prmrisvend67mveh1          812 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 67                                   */
    #define prmrisvendsrm067mveh1      813 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 67                                  */
    #define prmrisvend62mveh2          814 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                   */
    #define prmrisvendsrm062mveh2      815 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                  */
    #define prmrisvend62mveh1          816 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 62                                   */
    #define prmrisvendsrm062mveh1      817 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 62                                  */
    #define prmrisvend61mveh1          818 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 61                                   */
    #define prmrisvendsrm061mveh1      819 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 61                                  */
    #define prmrisvend38vtg2           820 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                   */
    #define prmrisvendsrm038vtg2       821 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                  */
    #define prmrisvend38vtg1           822 /* Afstand van stopstreep tot einde verleng gebied RIS CAM fase 38                                   */
    #define prmrisvendsrm038vtg1       823 /* Afstand van stopstreep tot einde verleng gebied RIS SRM0 fase 38                                  */
    #define prmrispstart22fts1         824 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                */
    #define prmrispstart22fts2         825 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 22                                */
    #define prmrispstart28fts1         826 /* Afstand van stopstreep tot start peloton bepaal gebied RIS fase 28                                */
    #define prmrispend22fts1           827 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                */
    #define prmrispend22fts2           828 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 22                                */
    #define prmrispend28fts1           829 /* Afstand van stopstreep tot einde peloton bepaal gebied RIS fase 28                                */
    #define prmmkrgd2403               830 /* Type verlengen tbv richtinggevoelig verlengen fase 24                                             */
    #define prmrgv                     831 /* Type RoBuGrover                                                                                   */
    #define prmmin_tcyclus             832 /* Minimale cyclustijd                                                                               */
    #define prmmax_tcyclus             833 /* Maximale cyclustijd                                                                               */
    #define prmtvg_omhoog              834 /* Hoeveelheid ophogen TVG                                                                           */
    #define prmtvg_omlaag              835 /* Hoeveelheid verlagen TVG                                                                          */
    #define prmtvg_verschil            836 /* Parameter verschil                                                                                */
    #define prmtvg_npr_omlaag          837 /* Hoeveelheid verlagen TVG bij niet primair                                                         */
    #define prmmintvg_02               838 /* Minimale verlenggroentijd fase 02                                                                 */
    #define prmmaxtvg_02               839 /* Maximale verlenggroentijd fase 02                                                                 */
    #define prmmintvg_03               840 /* Minimale verlenggroentijd fase 03                                                                 */
    #define prmmaxtvg_03               841 /* Maximale verlenggroentijd fase 03                                                                 */
    #define prmmintvg_05               842 /* Minimale verlenggroentijd fase 05                                                                 */
    #define prmmaxtvg_05               843 /* Maximale verlenggroentijd fase 05                                                                 */
    #define prmmintvg_08               844 /* Minimale verlenggroentijd fase 08                                                                 */
    #define prmmaxtvg_08               845 /* Maximale verlenggroentijd fase 08                                                                 */
    #define prmmintvg_11               846 /* Minimale verlenggroentijd fase 11                                                                 */
    #define prmmaxtvg_11               847 /* Maximale verlenggroentijd fase 11                                                                 */
    #define prmmintvg_22               848 /* Minimale verlenggroentijd fase 22                                                                 */
    #define prmmaxtvg_22               849 /* Maximale verlenggroentijd fase 22                                                                 */
    #define prmmintvg_28               850 /* Minimale verlenggroentijd fase 28                                                                 */
    #define prmmaxtvg_28               851 /* Maximale verlenggroentijd fase 28                                                                 */
    #define prmsiexgrperc33            852 /* Extra groen percentage tov. TFG voor senioreningreep op fase 33                                   */
    #define prmsiexgrperc34            853 /* Extra groen percentage tov. TFG voor senioreningreep op fase 34                                   */
    #define prmmaxtvgvlog              854 /* Parameter VLOG max. aantal volledige verlenggroen                                                 */
    #define prmmaxtfbvlog              855 /* Parameter VLOG max. wachttijd na aanvraag                                                         */
    #define prmmlfpr02                 856 /* Maximaal aantal modules vooruit fase 02                                                           */
    #define prmmlfpr03                 857 /* Maximaal aantal modules vooruit fase 03                                                           */
    #define prmmlfpr05                 858 /* Maximaal aantal modules vooruit fase 05                                                           */
    #define prmmlfpr08                 859 /* Maximaal aantal modules vooruit fase 08                                                           */
    #define prmmlfpr09                 860 /* Maximaal aantal modules vooruit fase 09                                                           */
    #define prmmlfpr11                 861 /* Maximaal aantal modules vooruit fase 11                                                           */
    #define prmmlfpr21                 862 /* Maximaal aantal modules vooruit fase 21                                                           */
    #define prmmlfpr22                 863 /* Maximaal aantal modules vooruit fase 22                                                           */
    #define prmmlfpr24                 864 /* Maximaal aantal modules vooruit fase 24                                                           */
    #define prmmlfpr26                 865 /* Maximaal aantal modules vooruit fase 26                                                           */
    #define prmmlfpr28                 866 /* Maximaal aantal modules vooruit fase 28                                                           */
    #define prmmlfpr31                 867 /* Maximaal aantal modules vooruit fase 31                                                           */
    #define prmmlfpr32                 868 /* Maximaal aantal modules vooruit fase 32                                                           */
    #define prmmlfpr33                 869 /* Maximaal aantal modules vooruit fase 33                                                           */
    #define prmmlfpr34                 870 /* Maximaal aantal modules vooruit fase 34                                                           */
    #define prmmlfpr38                 871 /* Maximaal aantal modules vooruit fase 38                                                           */
    #define prmmlfpr61                 872 /* Maximaal aantal modules vooruit fase 61                                                           */
    #define prmmlfpr62                 873 /* Maximaal aantal modules vooruit fase 62                                                           */
    #define prmmlfpr67                 874 /* Maximaal aantal modules vooruit fase 67                                                           */
    #define prmmlfpr68                 875 /* Maximaal aantal modules vooruit fase 68                                                           */
    #define prmmlfpr81                 876 /* Maximaal aantal modules vooruit fase 81                                                           */
    #define prmmlfpr82                 877 /* Maximaal aantal modules vooruit fase 82                                                           */
    #define prmmlfpr84                 878 /* Maximaal aantal modules vooruit fase 84                                                           */
    #define prmaltg02                  879 /* Minimale groentijd bij alternatieve realisatie fase 02                                            */
    #define prmaltp02                  880 /* Minimale ruimte tbv alternatieve realisatie fase 02                                               */
    #define prmaltg03                  881 /* Minimale groentijd bij alternatieve realisatie fase 03                                            */
    #define prmaltp03                  882 /* Minimale ruimte tbv alternatieve realisatie fase 03                                               */
    #define prmaltg05                  883 /* Minimale groentijd bij alternatieve realisatie fase 05                                            */
    #define prmaltp05                  884 /* Minimale ruimte tbv alternatieve realisatie fase 05                                               */
    #define prmaltg08                  885 /* Minimale groentijd bij alternatieve realisatie fase 08                                            */
    #define prmaltp08                  886 /* Minimale ruimte tbv alternatieve realisatie fase 08                                               */
    #define prmaltg09                  887 /* Minimale groentijd bij alternatieve realisatie fase 09                                            */
    #define prmaltp09                  888 /* Minimale ruimte tbv alternatieve realisatie fase 09                                               */
    #define prmaltg11                  889 /* Minimale groentijd bij alternatieve realisatie fase 11                                            */
    #define prmaltp11                  890 /* Minimale ruimte tbv alternatieve realisatie fase 11                                               */
    #define prmaltg21                  891 /* Minimale groentijd bij alternatieve realisatie fase 21                                            */
    #define prmaltp21                  892 /* Minimale ruimte tbv alternatieve realisatie fase 21                                               */
    #define prmaltg22                  893 /* Minimale groentijd bij alternatieve realisatie fase 22                                            */
    #define prmaltp22                  894 /* Minimale ruimte tbv alternatieve realisatie fase 22                                               */
    #define prmaltg24                  895 /* Minimale groentijd bij alternatieve realisatie fase 24                                            */
    #define prmaltp24                  896 /* Minimale ruimte tbv alternatieve realisatie fase 24                                               */
    #define prmaltg26                  897 /* Minimale groentijd bij alternatieve realisatie fase 26                                            */
    #define prmaltp26                  898 /* Minimale ruimte tbv alternatieve realisatie fase 26                                               */
    #define prmaltg28                  899 /* Minimale groentijd bij alternatieve realisatie fase 28                                            */
    #define prmaltp28                  900 /* Minimale ruimte tbv alternatieve realisatie fase 28                                               */
    #define prmaltg31                  901 /* Minimale groentijd bij alternatieve realisatie fase 31                                            */
    #define prmaltp31                  902 /* Minimale ruimte tbv alternatieve realisatie fase 31                                               */
    #define prmaltg32                  903 /* Minimale groentijd bij alternatieve realisatie fase 32                                            */
    #define prmaltp32                  904 /* Minimale ruimte tbv alternatieve realisatie fase 32                                               */
    #define prmaltg33                  905 /* Minimale groentijd bij alternatieve realisatie fase 33                                            */
    #define prmaltp33                  906 /* Minimale ruimte tbv alternatieve realisatie fase 33                                               */
    #define prmaltg34                  907 /* Minimale groentijd bij alternatieve realisatie fase 34                                            */
    #define prmaltp34                  908 /* Minimale ruimte tbv alternatieve realisatie fase 34                                               */
    #define prmaltg38                  909 /* Minimale groentijd bij alternatieve realisatie fase 38                                            */
    #define prmaltp38                  910 /* Minimale ruimte tbv alternatieve realisatie fase 38                                               */
    #define prmaltg61                  911 /* Minimale groentijd bij alternatieve realisatie fase 61                                            */
    #define prmaltp61                  912 /* Minimale ruimte tbv alternatieve realisatie fase 61                                               */
    #define prmaltg62                  913 /* Minimale groentijd bij alternatieve realisatie fase 62                                            */
    #define prmaltp62                  914 /* Minimale ruimte tbv alternatieve realisatie fase 62                                               */
    #define prmaltg67                  915 /* Minimale groentijd bij alternatieve realisatie fase 67                                            */
    #define prmaltp67                  916 /* Minimale ruimte tbv alternatieve realisatie fase 67                                               */
    #define prmaltg68                  917 /* Minimale groentijd bij alternatieve realisatie fase 68                                            */
    #define prmaltp68                  918 /* Minimale ruimte tbv alternatieve realisatie fase 68                                               */
    #define prmaltg81                  919 /* Minimale groentijd bij alternatieve realisatie fase 81                                            */
    #define prmaltp81                  920 /* Minimale ruimte tbv alternatieve realisatie fase 81                                               */
    #define prmaltg82                  921 /* Minimale groentijd bij alternatieve realisatie fase 82                                            */
    #define prmaltp82                  922 /* Minimale ruimte tbv alternatieve realisatie fase 82                                               */
    #define prmaltg84                  923 /* Minimale groentijd bij alternatieve realisatie fase 84                                            */
    #define prmaltp84                  924 /* Minimale ruimte tbv alternatieve realisatie fase 84                                               */
#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) || defined VISSIM || defined PRACTICE_TEST
    #define prmtestdsivert             925 /* Testen vertraging in DSI bericht in testomgeving                                                  */
    #define prmtestdsilyn              926 /* Testen lijnnummer DSI bericht in testomgeving                                                     */
    #define prmtestdsicat              927 /* Testen ritcategorie DSI bericht in testomgeving                                                   */
    #define PRMMAX1                    928
#else
    #define PRMMAX1                    925
#endif

/* Selectieve detectie */
/* ------------------- */
    #define dsdummy 0 /* Dummy SD lus 0: tbv KAR & VECOM start op 1 */
    #define D0241 1
    #define D0242 2
    #define D0841 3
    #define D0842 4
    #define D1141 5
    #define D1142 6
    #define D6141 7
    #define DSMAX    8

    #define prioFC02 0
    #define prioFC08 1
    #define prioFC11 2
    #define prioFC22 3
    #define prioFC24 4
    #define prioFC61 5
    #define prioFC84 6
    #define hdFC02 7
    #define hdFC03 8
    #define hdFC05 9
    #define hdFC08 10
    #define hdFC09 11
    #define hdFC11 12
    #define hdFC61 13
    #define hdFC62 14
    #define hdFC67 15
    #define hdFC68 16
    #define prioFCMAX 17

/* modulen */
/* ------- */
    #define MLMAX1 4 /* aantal modulen */

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

