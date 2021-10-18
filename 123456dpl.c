/* DISPLAY APPLICATIE */
/* ------------------ */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456dpl.c
      CCOL:   11.0
    TLCGEN:   0.10.2.0
   CCOLGEN:   0.10.2.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 1.0.0    06-07-2021   Cyril       basisversie
 * 1.1.0    27-07-2021   Peter       TISG-matrix toegevoegd
 * 1.4.0    19-08-2021   Cyril       TLCGen0.9.10.0; fc21+fc67 toegeveogd
 * 1.5.0    14-09-2021   Peter       Kleine aanpassingen m.b.t. TISG-matrix
 * 1.6.0    20-09-2021   Cyril       Nieuwe versie TLCGen (20092021 beta); handmatig Real_los + F11
 *
 ************************************************************************************/

/* aantal ingangs-/uitgangs signalen */
/* --------------------------------- */

    #define USDPLMAX (USMAX + 0)
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
    X_us[fc67] = 432; Y_us[fc67] = 403;
    X_us[fc68] = 393; Y_us[fc68] = 348;
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
    X_is[d09_1] = 370; Y_is[d09_1] = 534;
    X_is[d09_2] = 376; Y_is[d09_2] = 573;
    X_is[d09_3] = 374; Y_is[d09_3] = 636;
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
    X_is[d67_1] = 439; Y_is[d67_1] = 332;
    X_is[d67_2] = 438; Y_is[d67_2] = 362;
    X_is[d68_1a] = 415; Y_is[d68_1a] = 316;
    X_is[d68_1b] = 395; Y_is[d68_1b] = 318;
    X_is[d68_2a] = 415; Y_is[d68_2a] = 372;
    X_is[d68_2b] = 395; Y_is[d68_2b] = 377;
    X_is[d84_1] = 468; Y_is[d84_1] = 240;
    X_is[dk84] = 453; Y_is[dk84] = 239;
#if (!defined AUTOMAAT_TEST)
    X_is[ddummykarin02bus] = 39; Y_is[ddummykarin02bus] = 150;
    X_is[ddummykarin03bus] = 39; Y_is[ddummykarin03bus] = 163;
    X_is[ddummykarin05bus] = 39; Y_is[ddummykarin05bus] = 178;
    X_is[ddummykarin08bus] = 38; Y_is[ddummykarin08bus] = 193;
    X_is[ddummykarin09bus] = 39; Y_is[ddummykarin09bus] = 205;
    X_is[ddummykarin11bus] = 39; Y_is[ddummykarin11bus] = 219;
    X_is[ddummykarin61bus] = 39; Y_is[ddummykarin61bus] = 233;
    X_is[ddummykarin62bus] = 38; Y_is[ddummykarin62bus] = 247;
    X_is[ddummykarin67bus] = 39; Y_is[ddummykarin67bus] = 261;
    X_is[ddummykarin68bus] = 39; Y_is[ddummykarin68bus] = 275;
    X_is[ddummykaruit02bus] = 51; Y_is[ddummykaruit02bus] = 150;
    X_is[ddummykaruit03bus] = 51; Y_is[ddummykaruit03bus] = 165;
    X_is[ddummykaruit05bus] = 53; Y_is[ddummykaruit05bus] = 179;
    X_is[ddummykaruit08bus] = 50; Y_is[ddummykaruit08bus] = 192;
    X_is[ddummykaruit09bus] = 51; Y_is[ddummykaruit09bus] = 205;
    X_is[ddummykaruit11bus] = 52; Y_is[ddummykaruit11bus] = 221;
    X_is[ddummykaruit61bus] = 51; Y_is[ddummykaruit61bus] = 233;
    X_is[ddummykaruit62bus] = 50; Y_is[ddummykaruit62bus] = 246;
    X_is[ddummykaruit67bus] = 53; Y_is[ddummykaruit67bus] = 262;
    X_is[ddummykaruit68bus] = 52; Y_is[ddummykaruit68bus] = 275;
    X_is[ddummyhdkarin02] = 87; Y_is[ddummyhdkarin02] = 151;
    X_is[ddummyhdkaruit02] = 100; Y_is[ddummyhdkaruit02] = 150;
    X_is[ddummyhdkarin03] = 86; Y_is[ddummyhdkarin03] = 164;
    X_is[ddummyhdkaruit03] = 101; Y_is[ddummyhdkaruit03] = 164;
    X_is[ddummyhdkarin05] = 87; Y_is[ddummyhdkarin05] = 179;
    X_is[ddummyhdkaruit05] = 102; Y_is[ddummyhdkaruit05] = 177;
    X_is[ddummyhdkarin08] = 86; Y_is[ddummyhdkarin08] = 193;
    X_is[ddummyhdkaruit08] = 99; Y_is[ddummyhdkaruit08] = 191;
    X_is[ddummyhdkarin09] = 89; Y_is[ddummyhdkarin09] = 206;
    X_is[ddummyhdkaruit09] = 102; Y_is[ddummyhdkaruit09] = 207;
    X_is[ddummyhdkarin11] = 86; Y_is[ddummyhdkarin11] = 220;
    X_is[ddummyhdkaruit11] = 101; Y_is[ddummyhdkaruit11] = 220;
    X_is[ddummyhdkarin61] = 86; Y_is[ddummyhdkarin61] = 234;
    X_is[ddummyhdkaruit61] = 99; Y_is[ddummyhdkaruit61] = 234;
    X_is[ddummyhdkarin62] = 89; Y_is[ddummyhdkarin62] = 248;
    X_is[ddummyhdkaruit62] = 100; Y_is[ddummyhdkaruit62] = 249;
    X_is[ddummyhdkarin67] = 88; Y_is[ddummyhdkarin67] = 263;
    X_is[ddummyhdkaruit67] = 100; Y_is[ddummyhdkaruit67] = 262;
    X_is[ddummyhdkarin68] = 87; Y_is[ddummyhdkarin68] = 276;
    X_is[ddummyhdkaruit68] = 100; Y_is[ddummyhdkaruit68] = 276;
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
    X_us[usML1] = 286; Y_us[usML1] = 12;
    X_us[usML2] = 286; Y_us[usML2] = 26;
    X_us[usML3] = 285; Y_us[usML3] = 41;
    X_us[usML4] = 286; Y_us[usML4] = 53;
    X_us[usovtevroeg02] = 209; Y_us[usovtevroeg02] = 170;
    X_us[usovoptijd02] = 208; Y_us[usovoptijd02] = 183;
    X_us[usovtelaat02] = 208; Y_us[usovtelaat02] = 198;
    X_us[usovtevroeg03] = 207; Y_us[usovtevroeg03] = 168;
    X_us[usovoptijd03] = 208; Y_us[usovoptijd03] = 183;
    X_us[usovtelaat03] = 209; Y_us[usovtelaat03] = 197;
    X_us[usovtevroeg05] = 207; Y_us[usovtevroeg05] = 169;
    X_us[usovoptijd05] = 208; Y_us[usovoptijd05] = 184;
    X_us[usovtelaat05] = 207; Y_us[usovtelaat05] = 197;
    X_us[usovtevroeg08] = 207; Y_us[usovtevroeg08] = 170;
    X_us[usovoptijd08] = 207; Y_us[usovoptijd08] = 183;
    X_us[usovtelaat08] = 209; Y_us[usovtelaat08] = 197;
    X_us[usovtevroeg09] = 207; Y_us[usovtevroeg09] = 169;
    X_us[usovoptijd09] = 208; Y_us[usovoptijd09] = 184;
    X_us[usovtelaat09] = 208; Y_us[usovtelaat09] = 197;
    X_us[usovtevroeg11] = 207; Y_us[usovtevroeg11] = 169;
    X_us[usovoptijd11] = 207; Y_us[usovoptijd11] = 183;
    X_us[usovtelaat11] = 207; Y_us[usovtelaat11] = 198;
    X_us[usovtevroeg61] = 207; Y_us[usovtevroeg61] = 170;
    X_us[usovoptijd61] = 208; Y_us[usovoptijd61] = 183;
    X_us[usovtelaat61] = 208; Y_us[usovtelaat61] = 198;
    X_us[usovtevroeg62] = 207; Y_us[usovtevroeg62] = 170;
    X_us[usovoptijd62] = 208; Y_us[usovoptijd62] = 184;
    X_us[usovtelaat62] = 208; Y_us[usovtelaat62] = 198;
    X_us[usovtevroeg67] = 208; Y_us[usovtevroeg67] = 170;
    X_us[usovoptijd67] = 209; Y_us[usovoptijd67] = 184;
    X_us[usovtelaat67] = 208; Y_us[usovtelaat67] = 198;
    X_us[usovtevroeg68] = 209; Y_us[usovtevroeg68] = 169;
    X_us[usovoptijd68] = 208; Y_us[usovoptijd68] = 183;
    X_us[usovtelaat68] = 208; Y_us[usovtelaat68] = 197;
    X_us[usmaxwt] = 209; Y_us[usmaxwt] = 149;
    X_us[uskarmelding] = 206; Y_us[uskarmelding] = 125;
    X_us[uskarog] = 207; Y_us[uskarog] = 138;
    X_us[usovinm02] = 62; Y_us[usovinm02] = 149;
    X_us[usovinm03] = 65; Y_us[usovinm03] = 164;
    X_us[usovinm05] = 64; Y_us[usovinm05] = 178;
    X_us[usovinm08] = 63; Y_us[usovinm08] = 191;
    X_us[usovinm09] = 65; Y_us[usovinm09] = 206;
    X_us[usovinm11] = 63; Y_us[usovinm11] = 220;
    X_us[usovinm61] = 63; Y_us[usovinm61] = 234;
    X_us[usovinm62] = 64; Y_us[usovinm62] = 248;
    X_us[usovinm67] = 64; Y_us[usovinm67] = 261;
    X_us[usovinm68] = 63; Y_us[usovinm68] = 275;
    X_us[ushdinm02] = 110; Y_us[ushdinm02] = 150;
    X_us[ushdinm03] = 112; Y_us[ushdinm03] = 163;
    X_us[ushdinm05] = 112; Y_us[ushdinm05] = 177;
    X_us[ushdinm08] = 112; Y_us[ushdinm08] = 190;
    X_us[ushdinm09] = 111; Y_us[ushdinm09] = 206;
    X_us[ushdinm11] = 112; Y_us[ushdinm11] = 218;
    X_us[ushdinm61] = 112; Y_us[ushdinm61] = 236;
    X_us[ushdinm62] = 112; Y_us[ushdinm62] = 247;
    X_us[ushdinm67] = 112; Y_us[ushdinm67] = 263;
    X_us[ushdinm68] = 111; Y_us[ushdinm68] = 275;
    X_us[usperdef] = 625; Y_us[usperdef] = 13;
    X_us[usper1] = 625; Y_us[usper1] = 28;
    X_us[usper2] = 625; Y_us[usper2] = 42;
    X_us[usper3] = 625; Y_us[usper3] = 55;
    X_us[usper4] = 624; Y_us[usper4] = 69;
    X_us[usper5] = 624; Y_us[usper5] = 84;
    X_us[usper6] = 625; Y_us[usper6] = 97;
    X_us[usrgv] = 207; Y_us[usrgv] = 223;
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
    X_us[uswtk84] = 454; Y_us[uswtk84] = 237;

    /* overige ingangen */
    /* ---------------- */
    X_is[isfix] = 625; Y_is[isfix] = 121;
#if (!defined AUTOMAAT_TEST)
    X_is[isris021car] = NG; Y_is[isris021car] = NG;
    X_is[isris021bus] = NG; Y_is[isris021bus] = NG;
    X_is[isris021special] = NG; Y_is[isris021special] = NG;
    X_is[isris021heavytruck] = NG; Y_is[isris021heavytruck] = NG;
    X_is[isris022car] = NG; Y_is[isris022car] = NG;
    X_is[isris022bus] = NG; Y_is[isris022bus] = NG;
    X_is[isris022special] = NG; Y_is[isris022special] = NG;
    X_is[isris022heavytruck] = NG; Y_is[isris022heavytruck] = NG;
    X_is[isris031car] = NG; Y_is[isris031car] = NG;
    X_is[isris031bus] = NG; Y_is[isris031bus] = NG;
    X_is[isris031special] = NG; Y_is[isris031special] = NG;
    X_is[isris031heavytruck] = NG; Y_is[isris031heavytruck] = NG;
    X_is[isris051car] = NG; Y_is[isris051car] = NG;
    X_is[isris051bus] = NG; Y_is[isris051bus] = NG;
    X_is[isris051special] = NG; Y_is[isris051special] = NG;
    X_is[isris051heavytruck] = NG; Y_is[isris051heavytruck] = NG;
    X_is[isris081car] = NG; Y_is[isris081car] = NG;
    X_is[isris081bus] = NG; Y_is[isris081bus] = NG;
    X_is[isris081special] = NG; Y_is[isris081special] = NG;
    X_is[isris081heavytruck] = NG; Y_is[isris081heavytruck] = NG;
    X_is[isris082car] = NG; Y_is[isris082car] = NG;
    X_is[isris082bus] = NG; Y_is[isris082bus] = NG;
    X_is[isris082special] = NG; Y_is[isris082special] = NG;
    X_is[isris082heavytruck] = NG; Y_is[isris082heavytruck] = NG;
    X_is[isris091car] = NG; Y_is[isris091car] = NG;
    X_is[isris091bus] = NG; Y_is[isris091bus] = NG;
    X_is[isris091special] = NG; Y_is[isris091special] = NG;
    X_is[isris091heavytruck] = NG; Y_is[isris091heavytruck] = NG;
    X_is[isris111car] = NG; Y_is[isris111car] = NG;
    X_is[isris111bus] = NG; Y_is[isris111bus] = NG;
    X_is[isris111special] = NG; Y_is[isris111special] = NG;
    X_is[isris111heavytruck] = NG; Y_is[isris111heavytruck] = NG;
    X_is[isris211cyclist] = NG; Y_is[isris211cyclist] = NG;
    X_is[isris221cyclist] = NG; Y_is[isris221cyclist] = NG;
    X_is[isris241cyclist] = NG; Y_is[isris241cyclist] = NG;
    X_is[isris261cyclist] = NG; Y_is[isris261cyclist] = NG;
    X_is[isris281cyclist] = NG; Y_is[isris281cyclist] = NG;
    X_is[isris311pedestrian] = NG; Y_is[isris311pedestrian] = NG;
    X_is[isris312pedestrian] = NG; Y_is[isris312pedestrian] = NG;
    X_is[isris321pedestrian] = NG; Y_is[isris321pedestrian] = NG;
    X_is[isris322pedestrian] = NG; Y_is[isris322pedestrian] = NG;
    X_is[isris331pedestrian] = NG; Y_is[isris331pedestrian] = NG;
    X_is[isris332pedestrian] = NG; Y_is[isris332pedestrian] = NG;
    X_is[isris341pedestrian] = NG; Y_is[isris341pedestrian] = NG;
    X_is[isris342pedestrian] = NG; Y_is[isris342pedestrian] = NG;
    X_is[isris381pedestrian] = NG; Y_is[isris381pedestrian] = NG;
    X_is[isris382pedestrian] = NG; Y_is[isris382pedestrian] = NG;
    X_is[isris611car] = NG; Y_is[isris611car] = NG;
    X_is[isris611bus] = NG; Y_is[isris611bus] = NG;
    X_is[isris611special] = NG; Y_is[isris611special] = NG;
    X_is[isris611heavytruck] = NG; Y_is[isris611heavytruck] = NG;
    X_is[isris621car] = NG; Y_is[isris621car] = NG;
    X_is[isris621bus] = NG; Y_is[isris621bus] = NG;
    X_is[isris621special] = NG; Y_is[isris621special] = NG;
    X_is[isris621heavytruck] = NG; Y_is[isris621heavytruck] = NG;
    X_is[isris622car] = NG; Y_is[isris622car] = NG;
    X_is[isris622bus] = NG; Y_is[isris622bus] = NG;
    X_is[isris622special] = NG; Y_is[isris622special] = NG;
    X_is[isris622heavytruck] = NG; Y_is[isris622heavytruck] = NG;
    X_is[isris671car] = NG; Y_is[isris671car] = NG;
    X_is[isris671bus] = NG; Y_is[isris671bus] = NG;
    X_is[isris671special] = NG; Y_is[isris671special] = NG;
    X_is[isris671heavytruck] = NG; Y_is[isris671heavytruck] = NG;
    X_is[isris681car] = NG; Y_is[isris681car] = NG;
    X_is[isris681bus] = NG; Y_is[isris681bus] = NG;
    X_is[isris681special] = NG; Y_is[isris681special] = NG;
    X_is[isris681heavytruck] = NG; Y_is[isris681heavytruck] = NG;
    X_is[isris682car] = NG; Y_is[isris682car] = NG;
    X_is[isris682bus] = NG; Y_is[isris682bus] = NG;
    X_is[isris682special] = NG; Y_is[isris682special] = NG;
    X_is[isris682heavytruck] = NG; Y_is[isris682heavytruck] = NG;
    X_is[isris841cyclist] = NG; Y_is[isris841cyclist] = NG;
#endif

    /* Gebruikers toevoegingen file includen */
    /* ------------------------------------- */
    #include "123456dpl.add"

}
