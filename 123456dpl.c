/* DISPLAY APPLICATIE */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456dpl.c
      CCOL:   12.0
    TLCGEN:   12.4.0.18
   CCOLGEN:   12.4.0.18
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum   Ontwerper   Commentaar
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
    #define ushdinm62_1 (USMAX + 7)
    #define ushdinm67_1 (USMAX + 8)
    #define ushdinm68_1 (USMAX + 9)

    #define USDPLMAX (USMAX + 10)
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
    X_is[d02_1a] = 319; Y_is[d02_1a] = 193;
    X_is[d02_1b] = 338; Y_is[d02_1b] = 193;
    X_is[d02_2a] = 316; Y_is[d02_2a] = 153;
    X_is[d02_2b] = 335; Y_is[d02_2b] = 142;
    X_is[d02_3a] = 315; Y_is[d02_3a] = 91;
    X_is[d02_3b] = 335; Y_is[d02_3b] = 91;
    X_is[d02_4a] = 318; Y_is[d02_4a] = 49;
    X_is[d02_4b] = 335; Y_is[d02_4b] = 48;
    X_is[d03_1] = 361; Y_is[d03_1] = 190;
    X_is[d03_2] = 362; Y_is[d03_2] = 154;
    X_is[d05_1] = 532; Y_is[d05_1] = 258;
    X_is[d05_2] = 568; Y_is[d05_2] = 254;
    X_is[d08_1a] = 411; Y_is[d08_1a] = 514;
    X_is[d08_1b] = 395; Y_is[d08_1b] = 515;
    X_is[d08_2a] = 419; Y_is[d08_2a] = 559;
    X_is[d08_2b] = 393; Y_is[d08_2b] = 560;
    X_is[d08_3a] = 418; Y_is[d08_3a] = 619;
    X_is[d08_3b] = 394; Y_is[d08_3b] = 628;
    X_is[d08_4a] = 417; Y_is[d08_4a] = 665;
    X_is[d08_4b] = 397; Y_is[d08_4b] = 666;
    X_is[d09_1] = 370; Y_is[d09_1] = 535;
    X_is[d09_2] = 375; Y_is[d09_2] = 595;
    X_is[d09_3] = 372; Y_is[d09_3] = 639;
    X_is[d11_1] = 225; Y_is[d11_1] = 473;
    X_is[d11_2] = 185; Y_is[d11_2] = 470;
    X_is[d11_3] = 139; Y_is[d11_3] = 469;
    X_is[d11_4] = 96; Y_is[d11_4] = 471;
    X_is[d211] = 377; Y_is[d211] = 229;
    X_is[dk21] = 372; Y_is[dk21] = 221;
    X_is[d22_1] = 434; Y_is[d22_1] = 229;
    X_is[dk22] = 433; Y_is[dk22] = 217;
    X_is[d24_1] = 487; Y_is[d24_1] = 302;
    X_is[d24_2] = 488; Y_is[d24_2] = 332;
    X_is[d24_3] = 488; Y_is[d24_3] = 339;
    X_is[dk24] = 504; Y_is[dk24] = 304;
    X_is[d261] = 301; Y_is[d261] = 503;
    X_is[dk26] = 301; Y_is[dk26] = 512;
    X_is[d28_1] = 274; Y_is[d28_1] = 411;
    X_is[d28_2] = 276; Y_is[d28_2] = 362;
    X_is[dk28] = 261; Y_is[dk28] = 411;
    X_is[dk31a] = 306; Y_is[dk31a] = 203;
    X_is[dk31b] = 373; Y_is[dk31b] = 203;
    X_is[dk32a] = 429; Y_is[dk32a] = 203;
    X_is[dk32b] = 383; Y_is[dk32b] = 203;
    X_is[dk33a] = 521; Y_is[dk33a] = 245;
    X_is[dk33b] = 521; Y_is[dk33b] = 267;
    X_is[dk34a] = 521; Y_is[dk34a] = 299;
    X_is[dk34b] = 521; Y_is[dk34b] = 277;
    X_is[dk38a] = 249; Y_is[dk38a] = 444;
    X_is[dk38b] = 249; Y_is[dk38b] = 480;
    X_is[d61_1] = 294; Y_is[d61_1] = 411;
    X_is[d61_2] = 295; Y_is[d61_2] = 376;
    X_is[d62_1a] = 316; Y_is[d62_1a] = 424;
    X_is[d62_1b] = 336; Y_is[d62_1b] = 423;
    X_is[d62_2a] = 319; Y_is[d62_2a] = 363;
    X_is[d62_2b] = 336; Y_is[d62_2b] = 365;
    X_is[d67_1] = 435; Y_is[d67_1] = 349;
    X_is[d67_2] = 437; Y_is[d67_2] = 379;
    X_is[d68_1a] = 417; Y_is[d68_1a] = 337;
    X_is[d68_1b] = 394; Y_is[d68_1b] = 337;
    X_is[d68_2a] = 417; Y_is[d68_2a] = 405;
    X_is[d68_2b] = 391; Y_is[d68_2b] = 410;
    X_is[d68_9a] = 417; Y_is[d68_9a] = 158;
    X_is[d68_9b] = 397; Y_is[d68_9b] = 162;
    X_is[d81_1] = 378; Y_is[d81_1] = 316;
    X_is[dk81] = 382; Y_is[dk81] = 327;
    X_is[d82_1] = 290; Y_is[d82_1] = 316;
    X_is[dk82] = 291; Y_is[dk82] = 331;
    X_is[d84_1] = 468; Y_is[d84_1] = 240;
    X_is[dk84] = 453; Y_is[dk84] = 239;
    X_is[dopt02] = 34; Y_is[dopt02] = 295;
    X_is[dopt05] = 37; Y_is[dopt05] = 305;
    X_is[dopt08] = 39; Y_is[dopt08] = 317;
    X_is[dopt11] = 38; Y_is[dopt11] = 333;
#if (!defined AUTOMAAT_TEST)
    X_is[ddummykarin02karbus] = 783; Y_is[ddummykarin02karbus] = 34;
    X_is[ddummykarin03karbus] = 780; Y_is[ddummykarin03karbus] = 49;
    X_is[ddummykarin05karbus] = 784; Y_is[ddummykarin05karbus] = 56;
    X_is[ddummykarin08karbus] = 781; Y_is[ddummykarin08karbus] = 72;
    X_is[ddummykarin09karbus] = 781; Y_is[ddummykarin09karbus] = 84;
    X_is[ddummykarin11karbus] = 778; Y_is[ddummykarin11karbus] = 101;
    X_is[ddummykarin61karbus] = 785; Y_is[ddummykarin61karbus] = 111;
    X_is[ddummykarin62karbus] = 780; Y_is[ddummykarin62karbus] = 125;
    X_is[ddummykarin67karbus] = 780; Y_is[ddummykarin67karbus] = 136;
    X_is[ddummykarin68karbus] = 779; Y_is[ddummykarin68karbus] = 153;
    X_is[ddummykaruit02karbus] = 797; Y_is[ddummykaruit02karbus] = 34;
    X_is[ddummykaruit03karbus] = 798; Y_is[ddummykaruit03karbus] = 47;
    X_is[ddummykaruit05karbus] = 800; Y_is[ddummykaruit05karbus] = 61;
    X_is[ddummykaruit08karbus] = 797; Y_is[ddummykaruit08karbus] = 73;
    X_is[ddummykaruit09karbus] = 796; Y_is[ddummykaruit09karbus] = 85;
    X_is[ddummykaruit11karbus] = 798; Y_is[ddummykaruit11karbus] = 98;
    X_is[ddummykaruit61karbus] = 797; Y_is[ddummykaruit61karbus] = 109;
    X_is[ddummykaruit62karbus] = 797; Y_is[ddummykaruit62karbus] = 124;
    X_is[ddummykaruit67karbus] = 799; Y_is[ddummykaruit67karbus] = 135;
    X_is[ddummykaruit68karbus] = 796; Y_is[ddummykaruit68karbus] = 149;
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
    X_is[ddummyhdkarin62] = 817; Y_is[ddummyhdkarin62] = 125;
    X_is[ddummyhdkaruit62] = 831; Y_is[ddummyhdkaruit62] = 124;
    X_is[ddummyhdkarin67] = 816; Y_is[ddummyhdkarin67] = 139;
    X_is[ddummyhdkaruit67] = 830; Y_is[ddummyhdkaruit67] = 137;
    X_is[ddummyhdkarin68] = 814; Y_is[ddummyhdkarin68] = 150;
    X_is[ddummyhdkaruit68] = 830; Y_is[ddummyhdkaruit68] = 150;
#endif

    /* overige uitgangen */
    /* ----------------- */
    X_us[ussegm1] = 406; Y_us[ussegm1] = 15;
    X_us[ussegm2] = 395; Y_us[ussegm2] = 21;
    X_us[ussegm3] = 413; Y_us[ussegm3] = 26;
    X_us[ussegm4] = 404; Y_us[ussegm4] = 32;
    X_us[ussegm5] = 393; Y_us[ussegm5] = 38;
    X_us[ussegm6] = 413; Y_us[ussegm6] = 38;
    X_us[ussegm7] = 403; Y_us[ussegm7] = 49;
    X_us[usML1] = 574; Y_us[usML1] = 143;
    X_us[usML2] = 574; Y_us[usML2] = 156;
    X_us[usML3] = 572; Y_us[usML3] = 170;
    X_us[usML4] = 572; Y_us[usML4] = 185;
    X_us[usML5] = 573; Y_us[usML5] = 197;
    X_us[usincontrol] = NG; Y_us[usincontrol] = NG;
    X_us[usnocontrol] = NG; Y_us[usnocontrol] = NG;
    X_us[usFile68af] = 524; Y_us[usFile68af] = 101;
    X_us[usovtevroeg02karbus] = NG; Y_us[usovtevroeg02karbus] = NG;
    X_us[usovoptijd02karbus] = NG; Y_us[usovoptijd02karbus] = NG;
    X_us[usovtelaat02karbus] = NG; Y_us[usovtelaat02karbus] = NG;
    X_us[usovtevroeg03karbus] = NG; Y_us[usovtevroeg03karbus] = NG;
    X_us[usovoptijd03karbus] = NG; Y_us[usovoptijd03karbus] = NG;
    X_us[usovtelaat03karbus] = NG; Y_us[usovtelaat03karbus] = NG;
    X_us[usovtevroeg05karbus] = NG; Y_us[usovtevroeg05karbus] = NG;
    X_us[usovoptijd05karbus] = NG; Y_us[usovoptijd05karbus] = NG;
    X_us[usovtelaat05karbus] = NG; Y_us[usovtelaat05karbus] = NG;
    X_us[usovtevroeg08karbus] = NG; Y_us[usovtevroeg08karbus] = NG;
    X_us[usovoptijd08karbus] = NG; Y_us[usovoptijd08karbus] = NG;
    X_us[usovtelaat08karbus] = NG; Y_us[usovtelaat08karbus] = NG;
    X_us[usovtevroeg09karbus] = NG; Y_us[usovtevroeg09karbus] = NG;
    X_us[usovoptijd09karbus] = NG; Y_us[usovoptijd09karbus] = NG;
    X_us[usovtelaat09karbus] = NG; Y_us[usovtelaat09karbus] = NG;
    X_us[usovtevroeg11karbus] = NG; Y_us[usovtevroeg11karbus] = NG;
    X_us[usovoptijd11karbus] = NG; Y_us[usovoptijd11karbus] = NG;
    X_us[usovtelaat11karbus] = NG; Y_us[usovtelaat11karbus] = NG;
    X_us[usovtevroeg61karbus] = NG; Y_us[usovtevroeg61karbus] = NG;
    X_us[usovoptijd61karbus] = NG; Y_us[usovoptijd61karbus] = NG;
    X_us[usovtelaat61karbus] = NG; Y_us[usovtelaat61karbus] = NG;
    X_us[usovtevroeg62karbus] = NG; Y_us[usovtevroeg62karbus] = NG;
    X_us[usovoptijd62karbus] = NG; Y_us[usovoptijd62karbus] = NG;
    X_us[usovtelaat62karbus] = NG; Y_us[usovtelaat62karbus] = NG;
    X_us[usovtevroeg67karbus] = NG; Y_us[usovtevroeg67karbus] = NG;
    X_us[usovoptijd67karbus] = NG; Y_us[usovoptijd67karbus] = NG;
    X_us[usovtelaat67karbus] = NG; Y_us[usovtelaat67karbus] = NG;
    X_us[usovtevroeg68karbus] = NG; Y_us[usovtevroeg68karbus] = NG;
    X_us[usovoptijd68karbus] = NG; Y_us[usovoptijd68karbus] = NG;
    X_us[usovtelaat68karbus] = NG; Y_us[usovtelaat68karbus] = NG;
    X_us[usmaxwt] = 275; Y_us[usmaxwt] = 36;
    X_us[uskarmelding] = 276; Y_us[uskarmelding] = 11;
    X_us[uskarog] = 277; Y_us[uskarog] = 24;
    X_us[usovinm02karbus] = 151; Y_us[usovinm02karbus] = 34;
    X_us[usovinm03karbus] = 152; Y_us[usovinm03karbus] = 45;
    X_us[usovinm05karbus] = 154; Y_us[usovinm05karbus] = 59;
    X_us[usovinm08karbus] = 154; Y_us[usovinm08karbus] = 70;
    X_us[usovinm09karbus] = 151; Y_us[usovinm09karbus] = 84;
    X_us[usovinm11karbus] = 151; Y_us[usovinm11karbus] = 99;
    X_us[usovinm22fiets] = 276; Y_us[usovinm22fiets] = 144;
    X_us[usovinm28fiets] = 279; Y_us[usovinm28fiets] = 157;
    X_us[usovinm61karbus] = 153; Y_us[usovinm61karbus] = 111;
    X_us[usovinm62karbus] = 151; Y_us[usovinm62karbus] = 124;
    X_us[usovinm67karbus] = 151; Y_us[usovinm67karbus] = 135;
    X_us[usovinm68karbus] = 150; Y_us[usovinm68karbus] = 150;
    X_us[ushdinm02] = 57; Y_us[ushdinm02] = 32;
    X_us[ushdinm02_1] = 167; Y_us[ushdinm02_1] = 31; NR_us[ushdinm02_1] = ushdinm02;
    X_us[ushdinm03] = 58; Y_us[ushdinm03] = 42;
    X_us[ushdinm03_1] = 170; Y_us[ushdinm03_1] = 45; NR_us[ushdinm03_1] = ushdinm03;
    X_us[ushdinm05] = 59; Y_us[ushdinm05] = 59;
    X_us[ushdinm05_1] = 170; Y_us[ushdinm05_1] = 60; NR_us[ushdinm05_1] = ushdinm05;
    X_us[ushdinm08] = 59; Y_us[ushdinm08] = 71;
    X_us[ushdinm08_1] = 169; Y_us[ushdinm08_1] = 72; NR_us[ushdinm08_1] = ushdinm08;
    X_us[ushdinm09] = 58; Y_us[ushdinm09] = 84;
    X_us[ushdinm09_1] = 168; Y_us[ushdinm09_1] = 85; NR_us[ushdinm09_1] = ushdinm09;
    X_us[ushdinm11] = 61; Y_us[ushdinm11] = 98;
    X_us[ushdinm11_1] = 169; Y_us[ushdinm11_1] = 97; NR_us[ushdinm11_1] = ushdinm11;
    X_us[ushdinm61] = 60; Y_us[ushdinm61] = 113;
    X_us[ushdinm61_1] = 170; Y_us[ushdinm61_1] = 109; NR_us[ushdinm61_1] = ushdinm61;
    X_us[ushdinm62] = 60; Y_us[ushdinm62] = 121;
    X_us[ushdinm62_1] = 168; Y_us[ushdinm62_1] = 121; NR_us[ushdinm62_1] = ushdinm62;
    X_us[ushdinm67] = 59; Y_us[ushdinm67] = 136;
    X_us[ushdinm67_1] = 169; Y_us[ushdinm67_1] = 135; NR_us[ushdinm67_1] = ushdinm67;
    X_us[ushdinm68] = 57; Y_us[ushdinm68] = 150;
    X_us[ushdinm68_1] = 170; Y_us[ushdinm68_1] = 148; NR_us[ushdinm68_1] = ushdinm68;
    X_us[uspelinKOP02] = 15; Y_us[uspelinKOP02] = 433;
    X_us[usper1] = 625; Y_us[usper1] = 14;
    X_us[usperoFietsprio1] = NG; Y_us[usperoFietsprio1] = NG;
    X_us[usperoFietsprio2] = NG; Y_us[usperoFietsprio2] = NG;
    X_us[usper2] = 625; Y_us[usper2] = 28;
    X_us[usper3] = 625; Y_us[usper3] = 42;
    X_us[usper4] = 625; Y_us[usper4] = 55;
    X_us[usper5] = 624; Y_us[usper5] = 69;
    X_us[usper6] = 624; Y_us[usper6] = 84;
    X_us[usper7] = 625; Y_us[usper7] = 98;
    X_us[usptp_ptp123456oke] = 43; Y_us[usptp_ptp123456oke] = 379;
    X_us[usptp_ptp123456err] = 43; Y_us[usptp_ptp123456err] = 392;
    X_us[usrgv] = 275; Y_us[usrgv] = 107;
    X_us[uswtv24] = NG; Y_us[uswtv24] = NG;
    X_us[uswtk21] = 376; Y_us[uswtk21] = 219;
    X_us[uswtk22] = 434; Y_us[uswtk22] = 214;
    X_us[uswtk24] = 504; Y_us[uswtk24] = 301;
    X_us[uswtk26] = 301; Y_us[uswtk26] = 515;
    X_us[uswtk28] = 261; Y_us[uswtk28] = 408;
    X_us[uswtk31a] = 306; Y_us[uswtk31a] = 200;
    X_us[uswtk31b] = 372; Y_us[uswtk31b] = 200;
    X_us[uswtk32a] = 428; Y_us[uswtk32a] = 200;
    X_us[uswtk32b] = 383; Y_us[uswtk32b] = 200;
    X_us[uswtk33a] = 521; Y_us[uswtk33a] = 242;
    X_us[uswtk33b] = 522; Y_us[uswtk33b] = 264;
    X_us[uswtk34a] = 521; Y_us[uswtk34a] = 302;
    X_us[uswtk34b] = 521; Y_us[uswtk34b] = 274;
    X_us[uswtk38a] = 249; Y_us[uswtk38a] = 441;
    X_us[uswtk38b] = 246; Y_us[uswtk38b] = 481;
    X_us[uswtk81] = 381; Y_us[uswtk81] = 330;
    X_us[uswtk82] = 287; Y_us[uswtk82] = 331;
    X_us[uswtk84] = 454; Y_us[uswtk84] = 237;
    X_us[usisgtijd02] = NG; Y_us[usisgtijd02] = NG;
    X_us[usisgtijd03] = NG; Y_us[usisgtijd03] = NG;
    X_us[usisgtijd05] = NG; Y_us[usisgtijd05] = NG;
    X_us[usisgtijd08] = NG; Y_us[usisgtijd08] = NG;
    X_us[usisgtijd09] = NG; Y_us[usisgtijd09] = NG;
    X_us[usisgtijd11] = NG; Y_us[usisgtijd11] = NG;
    X_us[usisgtijd21] = NG; Y_us[usisgtijd21] = NG;
    X_us[usisgtijd22] = NG; Y_us[usisgtijd22] = NG;
    X_us[usisgtijd24] = NG; Y_us[usisgtijd24] = NG;
    X_us[usisgtijd26] = NG; Y_us[usisgtijd26] = NG;
    X_us[usisgtijd28] = NG; Y_us[usisgtijd28] = NG;
    X_us[usisgtijd31] = NG; Y_us[usisgtijd31] = NG;
    X_us[usisgtijd32] = NG; Y_us[usisgtijd32] = NG;
    X_us[usisgtijd33] = NG; Y_us[usisgtijd33] = NG;
    X_us[usisgtijd34] = NG; Y_us[usisgtijd34] = NG;
    X_us[usisgtijd38] = NG; Y_us[usisgtijd38] = NG;
    X_us[usisgtijd61] = NG; Y_us[usisgtijd61] = NG;
    X_us[usisgtijd62] = NG; Y_us[usisgtijd62] = NG;
    X_us[usisgtijd67] = NG; Y_us[usisgtijd67] = NG;
    X_us[usisgtijd68] = NG; Y_us[usisgtijd68] = NG;
    X_us[usisgtijd81] = NG; Y_us[usisgtijd81] = NG;
    X_us[usisgtijd82] = NG; Y_us[usisgtijd82] = NG;
    X_us[usisgtijd84] = NG; Y_us[usisgtijd84] = NG;

    /* overige ingangen */
    /* ---------------- */
    X_is[isfix] = 625; Y_is[isfix] = 121;

    /* Gebruikers toevoegingen file includen */
    /* ------------------------------------- */
    #include "123456dpl.add"

}
