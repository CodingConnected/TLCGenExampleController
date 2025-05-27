/* DISPLAY APPLICATIE */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456dpl.c
      CCOL:   12.0
    TLCGEN:   12.4.0.16
   CCOLGEN:   12.4.0.16
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
    X_is[ddummykarin02karbus] = 785; Y_is[ddummykarin02karbus] = 30;
    X_is[ddummykarin03bus] = 781; Y_is[ddummykarin03bus] = 46;
    X_is[ddummykarin05bus] = 784; Y_is[ddummykarin05bus] = 59;
    X_is[ddummykarin08bus] = 779; Y_is[ddummykarin08bus] = 72;
    X_is[ddummykarin09bus] = 782; Y_is[ddummykarin09bus] = 84;
    X_is[ddummykarin11bus] = 782; Y_is[ddummykarin11bus] = 99;
    X_is[ddummykarin61bus] = 782; Y_is[ddummykarin61bus] = 112;
    X_is[ddummykarin62bus] = 778; Y_is[ddummykarin62bus] = 123;
    X_is[ddummykarin67bus] = 779; Y_is[ddummykarin67bus] = 136;
    X_is[ddummykarin68bus] = 784; Y_is[ddummykarin68bus] = 152;
    X_is[ddummykaruit02karbus] = 797; Y_is[ddummykaruit02karbus] = 33;
    X_is[ddummykaruit03bus] = 796; Y_is[ddummykaruit03bus] = 45;
    X_is[ddummykaruit05bus] = 793; Y_is[ddummykaruit05bus] = 60;
    X_is[ddummykaruit08bus] = 799; Y_is[ddummykaruit08bus] = 72;
    X_is[ddummykaruit09bus] = 794; Y_is[ddummykaruit09bus] = 85;
    X_is[ddummykaruit11bus] = 799; Y_is[ddummykaruit11bus] = 100;
    X_is[ddummykaruit61bus] = 801; Y_is[ddummykaruit61bus] = 114;
    X_is[ddummykaruit62bus] = 798; Y_is[ddummykaruit62bus] = 125;
    X_is[ddummykaruit67bus] = 796; Y_is[ddummykaruit67bus] = 137;
    X_is[ddummykaruit68bus] = 796; Y_is[ddummykaruit68bus] = 149;
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
    X_us[usplact] = 167; Y_us[usplact] = 205;
    X_us[uskpact] = NG; Y_us[uskpact] = NG;
    X_us[usmlact] = 167; Y_us[usmlact] = 191;
    X_us[usmlpl] = NG; Y_us[usmlpl] = NG;
    X_us[ustxtimer] = NG; Y_us[ustxtimer] = NG;
    X_us[usklok] = NG; Y_us[usklok] = NG;
    X_us[ushand] = NG; Y_us[ushand] = NG;
    X_us[usPL1] = 167; Y_us[usPL1] = 220;
    X_us[usPL2] = 168; Y_us[usPL2] = 232;
    X_us[usPL3] = 171; Y_us[usPL3] = 243;
    X_us[usmaster] = NG; Y_us[usmaster] = NG;
    X_us[usslave] = NG; Y_us[usslave] = NG;
    X_us[usin654321leven] = NG; Y_us[usin654321leven] = NG;
    X_us[usin654321kpuls] = NG; Y_us[usin654321kpuls] = NG;
    X_us[usin654321pervar] = NG; Y_us[usin654321pervar] = NG;
    X_us[usin654321perarh] = NG; Y_us[usin654321perarh] = NG;
    X_us[usin654321PL1] = NG; Y_us[usin654321PL1] = NG;
    X_us[usin654321PL2] = NG; Y_us[usin654321PL2] = NG;
    X_us[usin654321PL3] = NG; Y_us[usin654321PL3] = NG;
    X_us[usuit654321leven] = NG; Y_us[usuit654321leven] = NG;
    X_us[usuit654321syncok] = NG; Y_us[usuit654321syncok] = NG;
    X_us[usuit654321txsok] = NG; Y_us[usuit654321txsok] = NG;
    X_us[usovtevroeg03bus] = NG; Y_us[usovtevroeg03bus] = NG;
    X_us[usovoptijd03bus] = NG; Y_us[usovoptijd03bus] = NG;
    X_us[usovtelaat03bus] = NG; Y_us[usovtelaat03bus] = NG;
    X_us[usovtevroeg05bus] = NG; Y_us[usovtevroeg05bus] = NG;
    X_us[usovoptijd05bus] = NG; Y_us[usovoptijd05bus] = NG;
    X_us[usovtelaat05bus] = NG; Y_us[usovtelaat05bus] = NG;
    X_us[usovtevroeg08bus] = NG; Y_us[usovtevroeg08bus] = NG;
    X_us[usovoptijd08bus] = NG; Y_us[usovoptijd08bus] = NG;
    X_us[usovtelaat08bus] = NG; Y_us[usovtelaat08bus] = NG;
    X_us[usovtevroeg09bus] = NG; Y_us[usovtevroeg09bus] = NG;
    X_us[usovoptijd09bus] = NG; Y_us[usovoptijd09bus] = NG;
    X_us[usovtelaat09bus] = NG; Y_us[usovtelaat09bus] = NG;
    X_us[usovtevroeg11bus] = NG; Y_us[usovtevroeg11bus] = NG;
    X_us[usovoptijd11bus] = NG; Y_us[usovoptijd11bus] = NG;
    X_us[usovtelaat11bus] = NG; Y_us[usovtelaat11bus] = NG;
    X_us[usovtevroeg61bus] = NG; Y_us[usovtevroeg61bus] = NG;
    X_us[usovoptijd61bus] = NG; Y_us[usovoptijd61bus] = NG;
    X_us[usovtelaat61bus] = NG; Y_us[usovtelaat61bus] = NG;
    X_us[usovtevroeg62bus] = NG; Y_us[usovtevroeg62bus] = NG;
    X_us[usovoptijd62bus] = NG; Y_us[usovoptijd62bus] = NG;
    X_us[usovtelaat62bus] = NG; Y_us[usovtelaat62bus] = NG;
    X_us[usovtevroeg67bus] = NG; Y_us[usovtevroeg67bus] = NG;
    X_us[usovoptijd67bus] = NG; Y_us[usovoptijd67bus] = NG;
    X_us[usovtelaat67bus] = NG; Y_us[usovtelaat67bus] = NG;
    X_us[usovtevroeg68bus] = NG; Y_us[usovtevroeg68bus] = NG;
    X_us[usovoptijd68bus] = NG; Y_us[usovoptijd68bus] = NG;
    X_us[usovtelaat68bus] = NG; Y_us[usovtelaat68bus] = NG;
    X_us[usmaxwt] = 275; Y_us[usmaxwt] = 36;
    X_us[uskarmelding] = 276; Y_us[uskarmelding] = 11;
    X_us[uskarog] = 277; Y_us[uskarog] = 24;
    X_us[usovinm02karbus] = 152; Y_us[usovinm02karbus] = 33;
    X_us[usovinm02risov] = 51; Y_us[usovinm02risov] = 35;
    X_us[usovinm02risvrw] = 85; Y_us[usovinm02risvrw] = 34;
    X_us[usovinm03bus] = 149; Y_us[usovinm03bus] = 44;
    X_us[usovinm03risov] = 52; Y_us[usovinm03risov] = 45;
    X_us[usovinm03risvrw] = 83; Y_us[usovinm03risvrw] = 45;
    X_us[usovinm05bus] = 152; Y_us[usovinm05bus] = 59;
    X_us[usovinm05risov] = 52; Y_us[usovinm05risov] = 59;
    X_us[usovinm05risvrw] = 82; Y_us[usovinm05risvrw] = 60;
    X_us[usovinm08bus] = 152; Y_us[usovinm08bus] = 72;
    X_us[usovinm08risov] = 54; Y_us[usovinm08risov] = 72;
    X_us[usovinm08risvrw] = 83; Y_us[usovinm08risvrw] = 72;
    X_us[usovinm09bus] = 149; Y_us[usovinm09bus] = 84;
    X_us[usovinm09risov] = 53; Y_us[usovinm09risov] = 87;
    X_us[usovinm09risvrw] = 85; Y_us[usovinm09risvrw] = 84;
    X_us[usovinm11bus] = 151; Y_us[usovinm11bus] = 98;
    X_us[usovinm11risov] = 52; Y_us[usovinm11risov] = 98;
    X_us[usovinm11risvrw] = 86; Y_us[usovinm11risvrw] = 96;
    X_us[usovinm22fiets] = 277; Y_us[usovinm22fiets] = 144;
    X_us[usovinm28fiets] = 277; Y_us[usovinm28fiets] = 157;
    X_us[usovinm61bus] = 153; Y_us[usovinm61bus] = 108;
    X_us[usovinm61risov] = 50; Y_us[usovinm61risov] = 110;
    X_us[usovinm61risvrw] = 85; Y_us[usovinm61risvrw] = 108;
    X_us[usovinm62bus] = 153; Y_us[usovinm62bus] = 122;
    X_us[usovinm62risov] = 49; Y_us[usovinm62risov] = 123;
    X_us[usovinm62risvrw] = 85; Y_us[usovinm62risvrw] = 123;
    X_us[usovinm67bus] = 152; Y_us[usovinm67bus] = 137;
    X_us[usovinm67risov] = 51; Y_us[usovinm67risov] = 137;
    X_us[usovinm67risvrw] = 84; Y_us[usovinm67risvrw] = 136;
    X_us[usovinm68bus] = 154; Y_us[usovinm68bus] = 152;
    X_us[usovinm68risov] = 52; Y_us[usovinm68risov] = 149;
    X_us[usovinm68risvrw] = 85; Y_us[usovinm68risvrw] = 150;
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
    X_us[ushdinm62] = 65; Y_us[ushdinm62] = 124;
    X_us[ushdinm62_1] = 166; Y_us[ushdinm62_1] = 122; NR_us[ushdinm62_1] = ushdinm62;
    X_us[ushdinm67] = 68; Y_us[ushdinm67] = 134;
    X_us[ushdinm67_1] = 167; Y_us[ushdinm67_1] = 136; NR_us[ushdinm67_1] = ushdinm67;
    X_us[ushdinm68] = 66; Y_us[ushdinm68] = 148;
    X_us[ushdinm68_1] = 168; Y_us[ushdinm68_1] = 147; NR_us[ushdinm68_1] = ushdinm68;
    X_us[uspelinKOP02] = 15; Y_us[uspelinKOP02] = 433;
    X_us[usper1] = 625; Y_us[usper1] = 14;
    X_us[usperoFietsprio1] = NG; Y_us[usperoFietsprio1] = NG;
    X_us[usperoFietsprio2] = NG; Y_us[usperoFietsprio2] = NG;
    X_us[usperDaluren_werkdag] = NG; Y_us[usperDaluren_werkdag] = NG;
    X_us[usperDaluren_weekend] = NG; Y_us[usperDaluren_weekend] = NG;
    X_us[usperOerdag_werkdag] = NG; Y_us[usperOerdag_werkdag] = NG;
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
    X_us[usstarprogwissel] = NG; Y_us[usstarprogwissel] = NG;
    X_us[usstar01] = 168; Y_us[usstar01] = 255;
    X_us[usstar02] = NG; Y_us[usstar02] = NG;

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
