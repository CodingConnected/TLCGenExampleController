/* DISPLAY APPLICATIE */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456dpl.c
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

/* aantal ingangs-/uitgangs signalen */
/* --------------------------------- */
    #define ushdinm02_1 (USMAX + 0)
    #define ushdinm03_1 (USMAX + 1)
    #define ushdinm05_1 (USMAX + 2)
    #define ushdinm08_1 (USMAX + 3)
    #define ushdinm09_1 (USMAX + 4)
    #define ushdinm11_1 (USMAX + 5)
    #define ushdinm61_1 (USMAX + 6)
    #define ushdinm67_1 (USMAX + 7)

    #define USDPLMAX (USMAX + 8)
    #define ISDPLMAX (ISMAX + 0)

/* include files */
/* ------------- */
    #include "sysdef.c"
    #include "123456sys.h"
    #include "dplwvar.c"

void display_background(void)
{
    load_picture_bmp("123456.bmp");
}

void display_parameters(void)
{
    /* fasecycli */
    /* --------- */
    X_us[fc02] = 336; Y_us[fc02] = 119;
    X_us[fc03] = 357; Y_us[fc03] = 118;
    X_us[fc05] = 606; Y_us[fc05] = 255;
    X_us[fc08] = 421; Y_us[fc08] = 587;
    X_us[fc09] = 373; Y_us[fc09] = 556;
    X_us[fc11] = 156; Y_us[fc11] = 468;
    X_us[fc21] = 323; Y_us[fc21] = 231;
    X_us[fc22] = 420; Y_us[fc22] = 230;
    X_us[fc24] = 486; Y_us[fc24] = 263;
    X_us[fc26] = 372; Y_us[fc26] = 493;
    X_us[fc28] = 274; Y_us[fc28] = 477;
    X_us[fc31] = 356; Y_us[fc31] = 215;
    X_us[fc32] = 387; Y_us[fc32] = 213;
    X_us[fc33] = 508; Y_us[fc33] = 248;
    X_us[fc34] = 510; Y_us[fc34] = 296;
    X_us[fc38] = 251; Y_us[fc38] = 454;
    X_us[fc61] = 299; Y_us[fc61] = 340;
    X_us[fc62] = 335; Y_us[fc62] = 389;
    X_us[fc67] = 431; Y_us[fc67] = 418;
    X_us[fc68] = 396; Y_us[fc68] = 361;
    X_us[fc81] = 439; Y_us[fc81] = 315;
    X_us[fc82] = 342; Y_us[fc82] = 319;
    X_us[fc84] = 469; Y_us[fc84] = 292;

    /* detectie */
    /* -------- */
    X_is[d0201] = 319; Y_is[d0201] = 193;
    X_is[d0202] = 338; Y_is[d0202] = 193;
    X_is[d0203] = 316; Y_is[d0203] = 153;
    X_is[d0204] = 335; Y_is[d0204] = 142;
    X_is[d0205] = 315; Y_is[d0205] = 91;
    X_is[d0206] = 335; Y_is[d0206] = 91;
    X_is[d0207] = 318; Y_is[d0207] = 49;
    X_is[d0208] = 335; Y_is[d0208] = 48;
    X_is[d0301] = 361; Y_is[d0301] = 190;
    X_is[d0302] = 362; Y_is[d0302] = 154;
    X_is[d0501] = 532; Y_is[d0501] = 258;
    X_is[d0502] = 568; Y_is[d0502] = 254;
    X_is[d0801] = 411; Y_is[d0801] = 514;
    X_is[d0802] = 395; Y_is[d0802] = 515;
    X_is[d0803] = 419; Y_is[d0803] = 559;
    X_is[d0804] = 393; Y_is[d0804] = 560;
    X_is[d0805] = 418; Y_is[d0805] = 619;
    X_is[d0806] = 394; Y_is[d0806] = 628;
    X_is[d0807] = 417; Y_is[d0807] = 665;
    X_is[d0808] = 397; Y_is[d0808] = 666;
    X_is[d0901] = 370; Y_is[d0901] = 535;
    X_is[d0902] = 375; Y_is[d0902] = 595;
    X_is[d0903] = 372; Y_is[d0903] = 639;
    X_is[d1101] = 225; Y_is[d1101] = 473;
    X_is[d1102] = 185; Y_is[d1102] = 470;
    X_is[d1103] = 139; Y_is[d1103] = 469;
    X_is[d1104] = 96; Y_is[d1104] = 471;
    X_is[d2101] = 377; Y_is[d2101] = 229;
    X_is[d2131] = 372; Y_is[d2131] = 221;
    X_is[d2201] = 434; Y_is[d2201] = 229;
    X_is[d2231] = 433; Y_is[d2231] = 217;
    X_is[d2401] = 487; Y_is[d2401] = 302;
    X_is[d2402] = 488; Y_is[d2402] = 332;
    X_is[d2403] = 488; Y_is[d2403] = 339;
    X_is[d2431] = 504; Y_is[d2431] = 304;
    X_is[d2601] = 301; Y_is[d2601] = 503;
    X_is[d2631] = 301; Y_is[d2631] = 512;
    X_is[d2801] = 274; Y_is[d2801] = 411;
    X_is[d2802] = 276; Y_is[d2802] = 362;
    X_is[d2831] = 261; Y_is[d2831] = 411;
    X_is[d3131] = 306; Y_is[d3131] = 203;
    X_is[d3132] = 373; Y_is[d3132] = 203;
    X_is[d3231] = 383; Y_is[d3231] = 203;
    X_is[d3232] = 429; Y_is[d3232] = 203;
    X_is[d3331] = 521; Y_is[d3331] = 245;
    X_is[d3332] = 521; Y_is[d3332] = 267;
    X_is[d3431] = 521; Y_is[d3431] = 277;
    X_is[d3432] = 521; Y_is[d3432] = 299;
    X_is[d3831] = 249; Y_is[d3831] = 444;
    X_is[d3832] = 249; Y_is[d3832] = 480;
    X_is[d6101] = 294; Y_is[d6101] = 411;
    X_is[d6102] = 295; Y_is[d6102] = 376;
    X_is[d6201] = 316; Y_is[d6201] = 424;
    X_is[d6202] = 336; Y_is[d6202] = 423;
    X_is[d6203] = 319; Y_is[d6203] = 363;
    X_is[d6204] = 336; Y_is[d6204] = 365;
    X_is[d6701] = 435; Y_is[d6701] = 349;
    X_is[d6702] = 437; Y_is[d6702] = 379;
    X_is[d6801] = 417; Y_is[d6801] = 337;
    X_is[d6802] = 394; Y_is[d6802] = 337;
    X_is[d6803] = 417; Y_is[d6803] = 405;
    X_is[d6804] = 391; Y_is[d6804] = 410;
    X_is[d6821] = 417; Y_is[d6821] = 158;
    X_is[d6822] = 397; Y_is[d6822] = 162;
    X_is[d8101] = 378; Y_is[d8101] = 316;
    X_is[d8131] = 382; Y_is[d8131] = 327;
    X_is[d8201] = 290; Y_is[d8201] = 316;
    X_is[d8231] = 291; Y_is[d8231] = 331;
    X_is[d8401] = 468; Y_is[d8401] = 240;
    X_is[d8431] = 453; Y_is[d8431] = 239;
    X_is[d0241] = NG; Y_is[d0241] = NG;
    X_is[d0242] = NG; Y_is[d0242] = NG;
    X_is[d0841] = NG; Y_is[d0841] = NG;
    X_is[d0842] = NG; Y_is[d0842] = NG;
    X_is[d1141] = NG; Y_is[d1141] = NG;
    X_is[d1142] = NG; Y_is[d1142] = NG;
    X_is[d6141] = NG; Y_is[d6141] = NG;
#if (!defined AUTOMAAT_TEST)
    X_is[ddummykarin02bus] = 785; Y_is[ddummykarin02bus] = 30;
    X_is[ddummykarin08bus] = 779; Y_is[ddummykarin08bus] = 72;
    X_is[ddummykarin11bus] = 782; Y_is[ddummykarin11bus] = 99;
    X_is[ddummykarin61bus] = 782; Y_is[ddummykarin61bus] = 112;
    X_is[ddummykaruit02bus] = 797; Y_is[ddummykaruit02bus] = 33;
    X_is[ddummykaruit08bus] = 799; Y_is[ddummykaruit08bus] = 72;
    X_is[ddummykaruit11bus] = 799; Y_is[ddummykaruit11bus] = 100;
    X_is[ddummykaruit61bus] = 801; Y_is[ddummykaruit61bus] = 114;
    X_is[ddummyhdkarin02] = 815; Y_is[ddummyhdkarin02] = 37;
    X_is[ddummyhdkaruit02] = 831; Y_is[ddummyhdkaruit02] = 36;
    X_is[ddummyhdkarin03] = 816; Y_is[ddummyhdkarin03] = 44;
    X_is[ddummyhdkaruit03] = 827; Y_is[ddummyhdkaruit03] = 45;
    X_is[ddummyhdkarin05] = 809; Y_is[ddummyhdkarin05] = 61;
    X_is[ddummyhdkaruit05] = 830; Y_is[ddummyhdkaruit05] = 60;
    X_is[ddummyhdkarin08] = 815; Y_is[ddummyhdkarin08] = 73;
    X_is[ddummyhdkaruit08] = 829; Y_is[ddummyhdkaruit08] = 73;
    X_is[ddummyhdkarin09] = 815; Y_is[ddummyhdkarin09] = 88;
    X_is[ddummyhdkaruit09] = 834; Y_is[ddummyhdkaruit09] = 88;
    X_is[ddummyhdkarin11] = 815; Y_is[ddummyhdkarin11] = 99;
    X_is[ddummyhdkaruit11] = 827; Y_is[ddummyhdkaruit11] = 98;
    X_is[ddummyhdkarin61] = 814; Y_is[ddummyhdkarin61] = 112;
    X_is[ddummyhdkaruit61] = 827; Y_is[ddummyhdkaruit61] = 112;
    X_is[ddummyhdkarin62] = NG; Y_is[ddummyhdkarin62] = NG;
    X_is[ddummyhdkaruit62] = NG; Y_is[ddummyhdkaruit62] = NG;
    X_is[ddummyhdkarin67] = 816; Y_is[ddummyhdkarin67] = 139;
    X_is[ddummyhdkaruit67] = 830; Y_is[ddummyhdkaruit67] = 137;
    X_is[ddummyhdkarin68] = NG; Y_is[ddummyhdkarin68] = NG;
    X_is[ddummyhdkaruit68] = NG; Y_is[ddummyhdkaruit68] = NG;
#endif

    /* overige uitgangen */
    /* ----------------- */
    X_us[usML1] = 574; Y_us[usML1] = 143;
    X_us[usML2] = 574; Y_us[usML2] = 156;
    X_us[usML3] = 572; Y_us[usML3] = 170;
    X_us[usML4] = 572; Y_us[usML4] = 185;
    X_us[usfile68af] = 524; Y_us[usfile68af] = 101;
    X_us[usmaxwt] = 275; Y_us[usmaxwt] = 36;
    X_us[uskarmelding] = 276; Y_us[uskarmelding] = 11;
    X_us[uskarog] = 277; Y_us[uskarog] = 24;
    X_us[usovinm02] = 152; Y_us[usovinm02] = 33;
    X_us[usovinm08] = 152; Y_us[usovinm08] = 72;
    X_us[usovinm11] = 151; Y_us[usovinm11] = 98;
    X_us[usovinm22] = NG; Y_us[usovinm22] = NG;
    X_us[usovinm24] = NG; Y_us[usovinm24] = NG;
    X_us[usovinm61] = 153; Y_us[usovinm61] = 108;
    X_us[usovinm84] = NG; Y_us[usovinm84] = NG;
    X_us[ushdinm02] = 66; Y_us[ushdinm02] = 31;
    X_us[ushdinm02_1] = 167; Y_us[ushdinm02_1] = 29; NR_us[ushdinm02_1] = ushdinm02;
    X_us[ushdinm03] = 70; Y_us[ushdinm03] = 44;
    X_us[ushdinm03_1] = 167; Y_us[ushdinm03_1] = 45; NR_us[ushdinm03_1] = ushdinm03;
    X_us[ushdinm05] = 67; Y_us[ushdinm05] = 58;
    X_us[ushdinm05_1] = 169; Y_us[ushdinm05_1] = 59; NR_us[ushdinm05_1] = ushdinm05;
    X_us[ushdinm08] = 68; Y_us[ushdinm08] = 70;
    X_us[ushdinm08_1] = 169; Y_us[ushdinm08_1] = 71; NR_us[ushdinm08_1] = ushdinm08;
    X_us[ushdinm09] = 66; Y_us[ushdinm09] = 85;
    X_us[ushdinm09_1] = 166; Y_us[ushdinm09_1] = 85; NR_us[ushdinm09_1] = ushdinm09;
    X_us[ushdinm11] = 71; Y_us[ushdinm11] = 99;
    X_us[ushdinm11_1] = 168; Y_us[ushdinm11_1] = 98; NR_us[ushdinm11_1] = ushdinm11;
    X_us[ushdinm61] = 66; Y_us[ushdinm61] = 112;
    X_us[ushdinm61_1] = 172; Y_us[ushdinm61_1] = 110; NR_us[ushdinm61_1] = ushdinm61;
    X_us[ushdinm62] = NG; Y_us[ushdinm62] = NG;
    X_us[ushdinm67] = 68; Y_us[ushdinm67] = 134;
    X_us[ushdinm67_1] = 167; Y_us[ushdinm67_1] = 136; NR_us[ushdinm67_1] = ushdinm67;
    X_us[ushdinm68] = NG; Y_us[ushdinm68] = NG;
    X_us[uspelinKOP02] = 15; Y_us[uspelinKOP02] = 433;
    X_us[usperdef] = NG; Y_us[usperdef] = NG;
    X_us[usper1] = 625; Y_us[usper1] = 14;
    X_us[usperoFietsprio1] = NG; Y_us[usperoFietsprio1] = NG;
    X_us[usperoFietsprio2] = NG; Y_us[usperoFietsprio2] = NG;
    X_us[usperoFietsprio3] = NG; Y_us[usperoFietsprio3] = NG;
    X_us[usper2] = 625; Y_us[usper2] = 28;
    X_us[usper3] = 625; Y_us[usper3] = 42;
    X_us[usper4] = 625; Y_us[usper4] = 55;
    X_us[usper5] = 624; Y_us[usper5] = 69;
    X_us[usper6] = 624; Y_us[usper6] = 84;
    X_us[usper7] = 625; Y_us[usper7] = 98;
    X_us[usptp_ptp123456oke] = 43; Y_us[usptp_ptp123456oke] = 379;
    X_us[usptp_ptp123456err] = 43; Y_us[usptp_ptp123456err] = 392;
    X_us[usrgv] = 275; Y_us[usrgv] = 107;

    /* overige ingangen */
    /* ---------------- */
    X_is[isfix] = 625; Y_is[isfix] = 121;
#if (!defined AUTOMAAT_TEST)
    X_is[isris021car] = 680; Y_is[isris021car] = 35;
    X_is[isris021bus] = 698; Y_is[isris021bus] = 34;
    X_is[isris021special] = 711; Y_is[isris021special] = 34;
    X_is[isris021heavytruck] = 729; Y_is[isris021heavytruck] = 31;
    X_is[isris022car] = 677; Y_is[isris022car] = 45;
    X_is[isris022bus] = 697; Y_is[isris022bus] = 46;
    X_is[isris022special] = 714; Y_is[isris022special] = 47;
    X_is[isris022heavytruck] = 728; Y_is[isris022heavytruck] = 47;
    X_is[isris031car] = 680; Y_is[isris031car] = 59;
    X_is[isris031bus] = 696; Y_is[isris031bus] = 59;
    X_is[isris031special] = 708; Y_is[isris031special] = 59;
    X_is[isris031heavytruck] = 727; Y_is[isris031heavytruck] = 57;
    X_is[isris051car] = 679; Y_is[isris051car] = 72;
    X_is[isris051bus] = 695; Y_is[isris051bus] = 72;
    X_is[isris051special] = 712; Y_is[isris051special] = 73;
    X_is[isris051heavytruck] = 727; Y_is[isris051heavytruck] = 73;
    X_is[isris081car] = 679; Y_is[isris081car] = 87;
    X_is[isris081bus] = 695; Y_is[isris081bus] = 86;
    X_is[isris081special] = 714; Y_is[isris081special] = 86;
    X_is[isris081heavytruck] = 730; Y_is[isris081heavytruck] = 85;
    X_is[isris082car] = 679; Y_is[isris082car] = 99;
    X_is[isris082bus] = 698; Y_is[isris082bus] = 99;
    X_is[isris082special] = 711; Y_is[isris082special] = 99;
    X_is[isris082heavytruck] = 732; Y_is[isris082heavytruck] = 99;
    X_is[isris091car] = 679; Y_is[isris091car] = 111;
    X_is[isris091bus] = 691; Y_is[isris091bus] = 109;
    X_is[isris091special] = 711; Y_is[isris091special] = 111;
    X_is[isris091heavytruck] = 727; Y_is[isris091heavytruck] = 112;
    X_is[isris111car] = 679; Y_is[isris111car] = 124;
    X_is[isris111bus] = 693; Y_is[isris111bus] = 124;
    X_is[isris111special] = 707; Y_is[isris111special] = 124;
    X_is[isris111heavytruck] = 726; Y_is[isris111heavytruck] = 124;
    X_is[isris211cyclist] = 678; Y_is[isris211cyclist] = 137;
    X_is[isris221cyclist] = 681; Y_is[isris221cyclist] = 150;
    X_is[isris222cyclist] = NG; Y_is[isris222cyclist] = NG;
    X_is[isris241cyclist] = 679; Y_is[isris241cyclist] = 163;
    X_is[isris261cyclist] = 679; Y_is[isris261cyclist] = 178;
    X_is[isris281cyclist] = 682; Y_is[isris281cyclist] = 191;
    X_is[isris311pedestrian] = 679; Y_is[isris311pedestrian] = 200;
    X_is[isris312pedestrian] = 680; Y_is[isris312pedestrian] = 216;
    X_is[isris321pedestrian] = 678; Y_is[isris321pedestrian] = 229;
    X_is[isris322pedestrian] = 678; Y_is[isris322pedestrian] = 243;
    X_is[isris331pedestrian] = 679; Y_is[isris331pedestrian] = 254;
    X_is[isris332pedestrian] = 679; Y_is[isris332pedestrian] = 268;
    X_is[isris341pedestrian] = 678; Y_is[isris341pedestrian] = 282;
    X_is[isris342pedestrian] = 681; Y_is[isris342pedestrian] = 293;
    X_is[isris381pedestrian] = 679; Y_is[isris381pedestrian] = 305;
    X_is[isris382pedestrian] = 679; Y_is[isris382pedestrian] = 319;
    X_is[isris611car] = 679; Y_is[isris611car] = 334;
    X_is[isris611bus] = 694; Y_is[isris611bus] = 332;
    X_is[isris611special] = 708; Y_is[isris611special] = 331;
    X_is[isris611heavytruck] = 728; Y_is[isris611heavytruck] = 333;
    X_is[isris621car] = 681; Y_is[isris621car] = 342;
    X_is[isris621bus] = 697; Y_is[isris621bus] = 346;
    X_is[isris621special] = 710; Y_is[isris621special] = 346;
    X_is[isris621heavytruck] = 732; Y_is[isris621heavytruck] = 344;
    X_is[isris622car] = 680; Y_is[isris622car] = 360;
    X_is[isris622bus] = 694; Y_is[isris622bus] = 360;
    X_is[isris622special] = 711; Y_is[isris622special] = 360;
    X_is[isris622heavytruck] = 728; Y_is[isris622heavytruck] = 359;
    X_is[isris671car] = 677; Y_is[isris671car] = 372;
    X_is[isris671bus] = 696; Y_is[isris671bus] = 372;
    X_is[isris671special] = 711; Y_is[isris671special] = 371;
    X_is[isris671heavytruck] = 728; Y_is[isris671heavytruck] = 371;
    X_is[isris681car] = 675; Y_is[isris681car] = 383;
    X_is[isris681bus] = 697; Y_is[isris681bus] = 384;
    X_is[isris681special] = 714; Y_is[isris681special] = 382;
    X_is[isris681heavytruck] = 726; Y_is[isris681heavytruck] = 382;
    X_is[isris682car] = 681; Y_is[isris682car] = 395;
    X_is[isris682bus] = 697; Y_is[isris682bus] = 395;
    X_is[isris682special] = 711; Y_is[isris682special] = 396;
    X_is[isris682heavytruck] = 732; Y_is[isris682heavytruck] = 398;
    X_is[isris811cyclist] = 676; Y_is[isris811cyclist] = 411;
    X_is[isris821cyclist] = 680; Y_is[isris821cyclist] = 423;
    X_is[isris841cyclist] = 679; Y_is[isris841cyclist] = 435;
#endif

    /* Gebruikers toevoegingen file includen */
    /* ------------------------------------- */
    #include "123456dpl.add"

}
