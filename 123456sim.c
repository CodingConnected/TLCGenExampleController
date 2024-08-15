/* SIMULATIE APPLICATIE */
/* -------------------- */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456sim.c
      CCOL:   12.0
    TLCGEN:   12.4.0.7
   CCOLGEN:   12.4.0.7
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.7   15-08-2024   TLCGen      Release versie TLCGen
 *
 ************************************************************************************/

#define LNKMAX1 189 /* aantal links */

/* include files */
/* ------------- */
    #include "123456sys.h"
    #include "simvar.c" /* simulatie variabelen */

/* Default waarden */
/* --------------- */
void simulation_defaults(void)
{
    S_defgenerator = NG;
    S_defstopline  = 1800;
    Q1_def         = 25;
    Q2_def         = 50;
    Q3_def         = 100;
    Q4_def         = 200;
}

void simulation_parameters(void)
{
 T_subrun_max  = 3600; /* subrun tijd                 */
 RANDGEN_start = 123;  /* startwaarde randomgenerator */

    /* Link parameters */
    /* --------------- */
    LNK_code[0] = "02_1a";
    IS_nr[0] = d02_1a;
    FC_nr[0] = fc02;
    S_generator[0] = NG;
    S_stopline[0] = 1800;
    Q1[0] = 200;
    Q2[0] = 50;
    Q3[0] = 100;
    Q4[0] = 4;

    LNK_code[1] = "02_1b";
    IS_nr[1] = d02_1b;
    FC_nr[1] = fc02;
    S_generator[1] = NG;
    S_stopline[1] = 1800;
    Q1[1] = 200;
    Q2[1] = 50;
    Q3[1] = 100;
    Q4[1] = 4;

    LNK_code[2] = "02_2a";
    IS_nr[2] = d02_2a;
    FC_nr[2] = fc02;
    S_generator[2] = NG;
    S_stopline[2] = 1800;
    Q1[2] = 200;
    Q2[2] = 50;
    Q3[2] = 100;
    Q4[2] = 4;

    LNK_code[3] = "02_2b";
    IS_nr[3] = d02_2b;
    FC_nr[3] = fc02;
    S_generator[3] = NG;
    S_stopline[3] = 1800;
    Q1[3] = 200;
    Q2[3] = 50;
    Q3[3] = 100;
    Q4[3] = 4;

    LNK_code[4] = "02_3a";
    IS_nr[4] = d02_3a;
    FC_nr[4] = fc02;
    S_generator[4] = NG;
    S_stopline[4] = 1800;
    Q1[4] = 200;
    Q2[4] = 50;
    Q3[4] = 100;
    Q4[4] = 4;

    LNK_code[5] = "02_3b";
    IS_nr[5] = d02_3b;
    FC_nr[5] = fc02;
    S_generator[5] = NG;
    S_stopline[5] = 1800;
    Q1[5] = 200;
    Q2[5] = 50;
    Q3[5] = 100;
    Q4[5] = 4;

    LNK_code[6] = "02_4a";
    IS_nr[6] = d02_4a;
    FC_nr[6] = fc02;
    S_generator[6] = NG;
    S_stopline[6] = 1800;
    Q1[6] = 200;
    Q2[6] = 50;
    Q3[6] = 100;
    Q4[6] = 4;

    LNK_code[7] = "02_4b";
    IS_nr[7] = d02_4b;
    FC_nr[7] = fc02;
    S_generator[7] = NG;
    S_stopline[7] = 1800;
    Q1[7] = 200;
    Q2[7] = 50;
    Q3[7] = 100;
    Q4[7] = 4;

    LNK_code[8] = "03_1";
    IS_nr[8] = d03_1;
    FC_nr[8] = fc03;
    S_generator[8] = NG;
    S_stopline[8] = 1800;
    Q1[8] = 50;
    Q2[8] = 200;
    Q3[8] = 100;
    Q4[8] = 2;

    LNK_code[9] = "03_2";
    IS_nr[9] = d03_2;
    FC_nr[9] = fc03;
    S_generator[9] = NG;
    S_stopline[9] = 1800;
    Q1[9] = 50;
    Q2[9] = 200;
    Q3[9] = 100;
    Q4[9] = 2;

    LNK_code[10] = "05_1";
    IS_nr[10] = d05_1;
    FC_nr[10] = fc05;
    S_generator[10] = NG;
    S_stopline[10] = 1800;
    Q1[10] = 200;
    Q2[10] = 100;
    Q3[10] = 50;
    Q4[10] = 4;

    LNK_code[11] = "05_2";
    IS_nr[11] = d05_2;
    FC_nr[11] = fc05;
    S_generator[11] = NG;
    S_stopline[11] = 1800;
    Q1[11] = 200;
    Q2[11] = 100;
    Q3[11] = 50;
    Q4[11] = 4;

    LNK_code[12] = "08_1a";
    IS_nr[12] = d08_1a;
    FC_nr[12] = fc08;
    S_generator[12] = NG;
    S_stopline[12] = 1800;
    Q1[12] = 200;
    Q2[12] = 50;
    Q3[12] = 100;
    Q4[12] = 4;

    LNK_code[13] = "08_1b";
    IS_nr[13] = d08_1b;
    FC_nr[13] = fc08;
    S_generator[13] = NG;
    S_stopline[13] = 1800;
    Q1[13] = 200;
    Q2[13] = 50;
    Q3[13] = 100;
    Q4[13] = 4;

    LNK_code[14] = "08_2a";
    IS_nr[14] = d08_2a;
    FC_nr[14] = fc08;
    S_generator[14] = NG;
    S_stopline[14] = 1800;
    Q1[14] = 200;
    Q2[14] = 50;
    Q3[14] = 100;
    Q4[14] = 4;

    LNK_code[15] = "08_2b";
    IS_nr[15] = d08_2b;
    FC_nr[15] = fc08;
    S_generator[15] = NG;
    S_stopline[15] = 1800;
    Q1[15] = 200;
    Q2[15] = 50;
    Q3[15] = 100;
    Q4[15] = 4;

    LNK_code[16] = "08_3a";
    IS_nr[16] = d08_3a;
    FC_nr[16] = fc08;
    S_generator[16] = NG;
    S_stopline[16] = 1800;
    Q1[16] = 200;
    Q2[16] = 50;
    Q3[16] = 100;
    Q4[16] = 4;

    LNK_code[17] = "08_3b";
    IS_nr[17] = d08_3b;
    FC_nr[17] = fc08;
    S_generator[17] = NG;
    S_stopline[17] = 1800;
    Q1[17] = 200;
    Q2[17] = 50;
    Q3[17] = 100;
    Q4[17] = 4;

    LNK_code[18] = "08_4a";
    IS_nr[18] = d08_4a;
    FC_nr[18] = fc08;
    S_generator[18] = NG;
    S_stopline[18] = 1800;
    Q1[18] = 200;
    Q2[18] = 50;
    Q3[18] = 100;
    Q4[18] = 4;

    LNK_code[19] = "08_4b";
    IS_nr[19] = d08_4b;
    FC_nr[19] = fc08;
    S_generator[19] = NG;
    S_stopline[19] = 1800;
    Q1[19] = 200;
    Q2[19] = 50;
    Q3[19] = 100;
    Q4[19] = 4;

    LNK_code[20] = "09_1";
    IS_nr[20] = d09_1;
    FC_nr[20] = fc09;
    S_generator[20] = NG;
    S_stopline[20] = 0;
    Q1[20] = 0;
    Q2[20] = 0;
    Q3[20] = 0;
    Q4[20] = 0;

    LNK_code[21] = "09_2";
    IS_nr[21] = d09_2;
    FC_nr[21] = fc09;
    S_generator[21] = NG;
    S_stopline[21] = 0;
    Q1[21] = 0;
    Q2[21] = 0;
    Q3[21] = 0;
    Q4[21] = 0;

    LNK_code[22] = "09_3";
    IS_nr[22] = d09_3;
    FC_nr[22] = fc09;
    S_generator[22] = NG;
    S_stopline[22] = 0;
    Q1[22] = 0;
    Q2[22] = 0;
    Q3[22] = 0;
    Q4[22] = 0;

    LNK_code[23] = "11_1";
    IS_nr[23] = d11_1;
    FC_nr[23] = fc11;
    S_generator[23] = NG;
    S_stopline[23] = 1800;
    Q1[23] = 50;
    Q2[23] = 200;
    Q3[23] = 100;
    Q4[23] = 4;

    LNK_code[24] = "11_2";
    IS_nr[24] = d11_2;
    FC_nr[24] = fc11;
    S_generator[24] = NG;
    S_stopline[24] = 1800;
    Q1[24] = 50;
    Q2[24] = 200;
    Q3[24] = 100;
    Q4[24] = 4;

    LNK_code[25] = "11_3";
    IS_nr[25] = d11_3;
    FC_nr[25] = fc11;
    S_generator[25] = NG;
    S_stopline[25] = 1800;
    Q1[25] = 50;
    Q2[25] = 200;
    Q3[25] = 100;
    Q4[25] = 4;

    LNK_code[26] = "11_4";
    IS_nr[26] = d11_4;
    FC_nr[26] = fc11;
    S_generator[26] = NG;
    S_stopline[26] = 1800;
    Q1[26] = 50;
    Q2[26] = 200;
    Q3[26] = 100;
    Q4[26] = 4;

    LNK_code[27] = "211";
    IS_nr[27] = d211;
    FC_nr[27] = fc21;
    S_generator[27] = NG;
    S_stopline[27] = 5000;
    Q1[27] = 100;
    Q2[27] = 200;
    Q3[27] = 50;
    Q4[27] = 2;

    LNK_code[28] = "k21";
    IS_nr[28] = dk21;
    FC_nr[28] = fc21;
    S_generator[28] = NG;
    S_stopline[28] = 5000;
    Q1[28] = 100;
    Q2[28] = 200;
    Q3[28] = 50;
    Q4[28] = 2;

    LNK_code[29] = "22_1";
    IS_nr[29] = d22_1;
    FC_nr[29] = fc22;
    S_generator[29] = NG;
    S_stopline[29] = 5000;
    Q1[29] = 100;
    Q2[29] = 200;
    Q3[29] = 50;
    Q4[29] = 4;

    LNK_code[30] = "k22";
    IS_nr[30] = dk22;
    FC_nr[30] = fc22;
    S_generator[30] = NG;
    S_stopline[30] = 5000;
    Q1[30] = 100;
    Q2[30] = 200;
    Q3[30] = 50;
    Q4[30] = 4;

    LNK_code[31] = "24_1";
    IS_nr[31] = d24_1;
    FC_nr[31] = fc24;
    S_generator[31] = NG;
    S_stopline[31] = 5000;
    Q1[31] = 50;
    Q2[31] = 100;
    Q3[31] = 200;
    Q4[31] = 4;

    LNK_code[32] = "24_2";
    IS_nr[32] = d24_2;
    FC_nr[32] = fc24;
    S_generator[32] = NG;
    S_stopline[32] = 5000;
    Q1[32] = 50;
    Q2[32] = 100;
    Q3[32] = 200;
    Q4[32] = 4;

    LNK_code[33] = "24_3";
    IS_nr[33] = d24_3;
    FC_nr[33] = fc24;
    S_generator[33] = NG;
    S_stopline[33] = 5000;
    Q1[33] = 50;
    Q2[33] = 100;
    Q3[33] = 200;
    Q4[33] = 4;

    LNK_code[34] = "k24";
    IS_nr[34] = dk24;
    FC_nr[34] = fc24;
    S_generator[34] = NG;
    S_stopline[34] = 5000;
    Q1[34] = 50;
    Q2[34] = 100;
    Q3[34] = 200;
    Q4[34] = 4;

    LNK_code[35] = "261";
    IS_nr[35] = d261;
    FC_nr[35] = fc26;
    S_generator[35] = NG;
    S_stopline[35] = 5000;
    Q1[35] = 50;
    Q2[35] = 200;
    Q3[35] = 100;
    Q4[35] = 2;

    LNK_code[36] = "k26";
    IS_nr[36] = dk26;
    FC_nr[36] = fc26;
    S_generator[36] = NG;
    S_stopline[36] = 5000;
    Q1[36] = 50;
    Q2[36] = 200;
    Q3[36] = 100;
    Q4[36] = 2;

    LNK_code[37] = "28_1";
    IS_nr[37] = d28_1;
    FC_nr[37] = fc28;
    S_generator[37] = NG;
    S_stopline[37] = 5000;
    Q1[37] = 50;
    Q2[37] = 100;
    Q3[37] = 200;
    Q4[37] = 2;

    LNK_code[38] = "28_2";
    IS_nr[38] = d28_2;
    FC_nr[38] = fc28;
    S_generator[38] = NG;
    S_stopline[38] = 5000;
    Q1[38] = 50;
    Q2[38] = 100;
    Q3[38] = 200;
    Q4[38] = 2;

    LNK_code[39] = "k28";
    IS_nr[39] = dk28;
    FC_nr[39] = fc28;
    S_generator[39] = NG;
    S_stopline[39] = 5000;
    Q1[39] = 50;
    Q2[39] = 100;
    Q3[39] = 200;
    Q4[39] = 2;

    LNK_code[40] = "k31a";
    IS_nr[40] = dk31a;
    FC_nr[40] = fc31;
    S_generator[40] = NG;
    S_stopline[40] = 10000;
    Q1[40] = 50;
    Q2[40] = 200;
    Q3[40] = 100;
    Q4[40] = 4;

    LNK_code[41] = "k31b";
    IS_nr[41] = dk31b;
    FC_nr[41] = fc31;
    S_generator[41] = NG;
    S_stopline[41] = 10000;
    Q1[41] = 50;
    Q2[41] = 200;
    Q3[41] = 100;
    Q4[41] = 4;

    LNK_code[42] = "k32a";
    IS_nr[42] = dk32a;
    FC_nr[42] = fc32;
    S_generator[42] = NG;
    S_stopline[42] = 10000;
    Q1[42] = 200;
    Q2[42] = 50;
    Q3[42] = 100;
    Q4[42] = 4;

    LNK_code[43] = "k32b";
    IS_nr[43] = dk32b;
    FC_nr[43] = fc32;
    S_generator[43] = NG;
    S_stopline[43] = 10000;
    Q1[43] = 200;
    Q2[43] = 50;
    Q3[43] = 100;
    Q4[43] = 4;

    LNK_code[44] = "k33a";
    IS_nr[44] = dk33a;
    FC_nr[44] = fc33;
    S_generator[44] = NG;
    S_stopline[44] = 10000;
    Q1[44] = 100;
    Q2[44] = 50;
    Q3[44] = 200;
    Q4[44] = 4;

    LNK_code[45] = "k33b";
    IS_nr[45] = dk33b;
    FC_nr[45] = fc33;
    S_generator[45] = NG;
    S_stopline[45] = 10000;
    Q1[45] = 100;
    Q2[45] = 50;
    Q3[45] = 200;
    Q4[45] = 4;

    LNK_code[46] = "k34a";
    IS_nr[46] = dk34a;
    FC_nr[46] = fc34;
    S_generator[46] = NG;
    S_stopline[46] = 10000;
    Q1[46] = 50;
    Q2[46] = 100;
    Q3[46] = 200;
    Q4[46] = 2;

    LNK_code[47] = "k34b";
    IS_nr[47] = dk34b;
    FC_nr[47] = fc34;
    S_generator[47] = NG;
    S_stopline[47] = 10000;
    Q1[47] = 50;
    Q2[47] = 100;
    Q3[47] = 200;
    Q4[47] = 2;

    LNK_code[48] = "k38a";
    IS_nr[48] = dk38a;
    FC_nr[48] = fc38;
    S_generator[48] = NG;
    S_stopline[48] = 10000;
    Q1[48] = 200;
    Q2[48] = 50;
    Q3[48] = 100;
    Q4[48] = 2;

    LNK_code[49] = "k38b";
    IS_nr[49] = dk38b;
    FC_nr[49] = fc38;
    S_generator[49] = NG;
    S_stopline[49] = 10000;
    Q1[49] = 200;
    Q2[49] = 50;
    Q3[49] = 100;
    Q4[49] = 2;

    LNK_code[50] = "61_1";
    IS_nr[50] = d61_1;
    FC_nr[50] = fc61;
    S_generator[50] = NG;
    S_stopline[50] = 1800;
    Q1[50] = 100;
    Q2[50] = 200;
    Q3[50] = 50;
    Q4[50] = 4;

    LNK_code[51] = "61_2";
    IS_nr[51] = d61_2;
    FC_nr[51] = fc61;
    S_generator[51] = NG;
    S_stopline[51] = 1800;
    Q1[51] = 100;
    Q2[51] = 200;
    Q3[51] = 50;
    Q4[51] = 4;

    LNK_code[52] = "62_1a";
    IS_nr[52] = d62_1a;
    FC_nr[52] = fc62;
    S_generator[52] = NG;
    S_stopline[52] = 1800;
    Q1[52] = 100;
    Q2[52] = 200;
    Q3[52] = 50;
    Q4[52] = 2;

    LNK_code[53] = "62_1b";
    IS_nr[53] = d62_1b;
    FC_nr[53] = fc62;
    S_generator[53] = NG;
    S_stopline[53] = 1800;
    Q1[53] = 100;
    Q2[53] = 200;
    Q3[53] = 50;
    Q4[53] = 2;

    LNK_code[54] = "62_2a";
    IS_nr[54] = d62_2a;
    FC_nr[54] = fc62;
    S_generator[54] = NG;
    S_stopline[54] = 1800;
    Q1[54] = 100;
    Q2[54] = 200;
    Q3[54] = 50;
    Q4[54] = 2;

    LNK_code[55] = "62_2b";
    IS_nr[55] = d62_2b;
    FC_nr[55] = fc62;
    S_generator[55] = NG;
    S_stopline[55] = 1800;
    Q1[55] = 100;
    Q2[55] = 200;
    Q3[55] = 50;
    Q4[55] = 2;

    LNK_code[56] = "67_1";
    IS_nr[56] = d67_1;
    FC_nr[56] = fc67;
    S_generator[56] = NG;
    S_stopline[56] = 1800;
    Q1[56] = 100;
    Q2[56] = 50;
    Q3[56] = 200;
    Q4[56] = 4;

    LNK_code[57] = "67_2";
    IS_nr[57] = d67_2;
    FC_nr[57] = fc67;
    S_generator[57] = NG;
    S_stopline[57] = 1800;
    Q1[57] = 100;
    Q2[57] = 50;
    Q3[57] = 200;
    Q4[57] = 4;

    LNK_code[58] = "68_1a";
    IS_nr[58] = d68_1a;
    FC_nr[58] = fc68;
    S_generator[58] = NG;
    S_stopline[58] = 1800;
    Q1[58] = 50;
    Q2[58] = 100;
    Q3[58] = 200;
    Q4[58] = 2;

    LNK_code[59] = "68_1b";
    IS_nr[59] = d68_1b;
    FC_nr[59] = fc68;
    S_generator[59] = NG;
    S_stopline[59] = 1800;
    Q1[59] = 50;
    Q2[59] = 100;
    Q3[59] = 200;
    Q4[59] = 2;

    LNK_code[60] = "68_2a";
    IS_nr[60] = d68_2a;
    FC_nr[60] = fc68;
    S_generator[60] = NG;
    S_stopline[60] = 1800;
    Q1[60] = 50;
    Q2[60] = 100;
    Q3[60] = 200;
    Q4[60] = 2;

    LNK_code[61] = "68_2b";
    IS_nr[61] = d68_2b;
    FC_nr[61] = fc68;
    S_generator[61] = NG;
    S_stopline[61] = 1800;
    Q1[61] = 50;
    Q2[61] = 100;
    Q3[61] = 200;
    Q4[61] = 2;

    LNK_code[62] = "68_9a";
    IS_nr[62] = d68_9a;
    FC_nr[62] = fc68;
    S_generator[62] = NG;
    S_stopline[62] = 1800;
    Q1[62] = 50;
    Q2[62] = 100;
    Q3[62] = 200;
    Q4[62] = 2;

    LNK_code[63] = "68_9b";
    IS_nr[63] = d68_9b;
    FC_nr[63] = fc68;
    S_generator[63] = NG;
    S_stopline[63] = 1800;
    Q1[63] = 50;
    Q2[63] = 100;
    Q3[63] = 200;
    Q4[63] = 2;

    LNK_code[64] = "81_1";
    IS_nr[64] = d81_1;
    FC_nr[64] = fc81;
    S_generator[64] = NG;
    S_stopline[64] = 5000;
    Q1[64] = 200;
    Q2[64] = 50;
    Q3[64] = 100;
    Q4[64] = 4;

    LNK_code[65] = "k81";
    IS_nr[65] = dk81;
    FC_nr[65] = fc81;
    S_generator[65] = NG;
    S_stopline[65] = 5000;
    Q1[65] = 200;
    Q2[65] = 50;
    Q3[65] = 100;
    Q4[65] = 4;

    LNK_code[66] = "82_1";
    IS_nr[66] = d82_1;
    FC_nr[66] = fc82;
    S_generator[66] = NG;
    S_stopline[66] = 5000;
    Q1[66] = 50;
    Q2[66] = 200;
    Q3[66] = 100;
    Q4[66] = 2;

    LNK_code[67] = "k82";
    IS_nr[67] = dk82;
    FC_nr[67] = fc82;
    S_generator[67] = NG;
    S_stopline[67] = 5000;
    Q1[67] = 50;
    Q2[67] = 200;
    Q3[67] = 100;
    Q4[67] = 2;

    LNK_code[68] = "84_1";
    IS_nr[68] = d84_1;
    FC_nr[68] = fc84;
    S_generator[68] = NG;
    S_stopline[68] = 5000;
    Q1[68] = 100;
    Q2[68] = 200;
    Q3[68] = 50;
    Q4[68] = 4;

    LNK_code[69] = "k84";
    IS_nr[69] = dk84;
    FC_nr[69] = fc84;
    S_generator[69] = NG;
    S_stopline[69] = 5000;
    Q1[69] = 100;
    Q2[69] = 200;
    Q3[69] = 50;
    Q4[69] = 4;

    LNK_code[70] = "opt02";
    IS_nr[70] = dopt02;
    FC_nr[70] = NG;
    S_generator[70] = NG;
    S_stopline[70] = 0;
    Q1[70] = 0;
    Q2[70] = 0;
    Q3[70] = 0;
    Q4[70] = 0;

    LNK_code[71] = "opt05";
    IS_nr[71] = dopt05;
    FC_nr[71] = NG;
    S_generator[71] = NG;
    S_stopline[71] = 0;
    Q1[71] = 0;
    Q2[71] = 0;
    Q3[71] = 0;
    Q4[71] = 0;

    LNK_code[72] = "opt08";
    IS_nr[72] = dopt08;
    FC_nr[72] = NG;
    S_generator[72] = NG;
    S_stopline[72] = 0;
    Q1[72] = 0;
    Q2[72] = 0;
    Q3[72] = 0;
    Q4[72] = 0;

    LNK_code[73] = "opt11";
    IS_nr[73] = dopt11;
    FC_nr[73] = NG;
    S_generator[73] = NG;
    S_stopline[73] = 0;
    Q1[73] = 0;
    Q2[73] = 0;
    Q3[73] = 0;
    Q4[73] = 0;

#if (!defined AUTOMAAT_TEST)
    LNK_code[74] = "dummykarin02karbus";
    IS_nr[74] = ddummykarin02karbus;
    FC_nr[74] = NG;
    S_generator[74] = NG;
    S_stopline[74] = 0;
    Q1[74] = 0;
    Q2[74] = 0;
    Q3[74] = 0;
    Q4[74] = 0;

    LNK_code[75] = "dummykarin03bus";
    IS_nr[75] = ddummykarin03bus;
    FC_nr[75] = NG;
    S_generator[75] = NG;
    S_stopline[75] = 1800;
    Q1[75] = 2;
    Q2[75] = 1;
    Q3[75] = 1;
    Q4[75] = 2;

    LNK_code[76] = "dummykarin05bus";
    IS_nr[76] = ddummykarin05bus;
    FC_nr[76] = NG;
    S_generator[76] = NG;
    S_stopline[76] = 1800;
    Q1[76] = 3;
    Q2[76] = 5;
    Q3[76] = 2;
    Q4[76] = 1;

    LNK_code[77] = "dummykarin08bus";
    IS_nr[77] = ddummykarin08bus;
    FC_nr[77] = NG;
    S_generator[77] = NG;
    S_stopline[77] = 1800;
    Q1[77] = 3;
    Q2[77] = 5;
    Q3[77] = 2;
    Q4[77] = 1;

    LNK_code[78] = "dummykarin09bus";
    IS_nr[78] = ddummykarin09bus;
    FC_nr[78] = NG;
    S_generator[78] = NG;
    S_stopline[78] = 1800;
    Q1[78] = 3;
    Q2[78] = 5;
    Q3[78] = 2;
    Q4[78] = 1;

    LNK_code[79] = "dummykarin11bus";
    IS_nr[79] = ddummykarin11bus;
    FC_nr[79] = NG;
    S_generator[79] = NG;
    S_stopline[79] = 1800;
    Q1[79] = 3;
    Q2[79] = 5;
    Q3[79] = 2;
    Q4[79] = 1;

    LNK_code[80] = "dummykarin61bus";
    IS_nr[80] = ddummykarin61bus;
    FC_nr[80] = NG;
    S_generator[80] = NG;
    S_stopline[80] = 1800;
    Q1[80] = 3;
    Q2[80] = 5;
    Q3[80] = 2;
    Q4[80] = 1;

    LNK_code[81] = "dummykarin62bus";
    IS_nr[81] = ddummykarin62bus;
    FC_nr[81] = NG;
    S_generator[81] = NG;
    S_stopline[81] = 1800;
    Q1[81] = 3;
    Q2[81] = 5;
    Q3[81] = 2;
    Q4[81] = 1;

    LNK_code[82] = "dummykarin67bus";
    IS_nr[82] = ddummykarin67bus;
    FC_nr[82] = NG;
    S_generator[82] = NG;
    S_stopline[82] = 1800;
    Q1[82] = 3;
    Q2[82] = 5;
    Q3[82] = 2;
    Q4[82] = 1;

    LNK_code[83] = "dummykarin68bus";
    IS_nr[83] = ddummykarin68bus;
    FC_nr[83] = NG;
    S_generator[83] = NG;
    S_stopline[83] = 1800;
    Q1[83] = 3;
    Q2[83] = 5;
    Q3[83] = 2;
    Q4[83] = 1;

    LNK_code[84] = "dummykaruit02karbus";
    IS_nr[84] = ddummykaruit02karbus;
    FC_nr[84] = NG;
    S_generator[84] = NG;
    S_stopline[84] = 0;
    Q1[84] = 0;
    Q2[84] = 0;
    Q3[84] = 0;
    Q4[84] = 0;

    LNK_code[85] = "dummykaruit03bus";
    IS_nr[85] = ddummykaruit03bus;
    FC_nr[85] = NG;
    S_generator[85] = NG;
    S_stopline[85] = 1800;
    Q1[85] = 300;
    Q2[85] = 300;
    Q3[85] = 300;
    Q4[85] = 300;

    LNK_code[86] = "dummykaruit05bus";
    IS_nr[86] = ddummykaruit05bus;
    FC_nr[86] = NG;
    S_generator[86] = NG;
    S_stopline[86] = 1800;
    Q1[86] = 300;
    Q2[86] = 300;
    Q3[86] = 300;
    Q4[86] = 300;

    LNK_code[87] = "dummykaruit08bus";
    IS_nr[87] = ddummykaruit08bus;
    FC_nr[87] = NG;
    S_generator[87] = NG;
    S_stopline[87] = 1800;
    Q1[87] = 300;
    Q2[87] = 300;
    Q3[87] = 300;
    Q4[87] = 300;

    LNK_code[88] = "dummykaruit09bus";
    IS_nr[88] = ddummykaruit09bus;
    FC_nr[88] = NG;
    S_generator[88] = NG;
    S_stopline[88] = 1800;
    Q1[88] = 300;
    Q2[88] = 300;
    Q3[88] = 300;
    Q4[88] = 300;

    LNK_code[89] = "dummykaruit11bus";
    IS_nr[89] = ddummykaruit11bus;
    FC_nr[89] = NG;
    S_generator[89] = NG;
    S_stopline[89] = 1800;
    Q1[89] = 300;
    Q2[89] = 300;
    Q3[89] = 300;
    Q4[89] = 300;

    LNK_code[90] = "dummykaruit61bus";
    IS_nr[90] = ddummykaruit61bus;
    FC_nr[90] = NG;
    S_generator[90] = NG;
    S_stopline[90] = 1800;
    Q1[90] = 300;
    Q2[90] = 300;
    Q3[90] = 300;
    Q4[90] = 300;

    LNK_code[91] = "dummykaruit62bus";
    IS_nr[91] = ddummykaruit62bus;
    FC_nr[91] = NG;
    S_generator[91] = NG;
    S_stopline[91] = 1800;
    Q1[91] = 300;
    Q2[91] = 300;
    Q3[91] = 300;
    Q4[91] = 300;

    LNK_code[92] = "dummykaruit67bus";
    IS_nr[92] = ddummykaruit67bus;
    FC_nr[92] = NG;
    S_generator[92] = NG;
    S_stopline[92] = 1800;
    Q1[92] = 300;
    Q2[92] = 300;
    Q3[92] = 300;
    Q4[92] = 300;

    LNK_code[93] = "dummykaruit68bus";
    IS_nr[93] = ddummykaruit68bus;
    FC_nr[93] = NG;
    S_generator[93] = NG;
    S_stopline[93] = 1800;
    Q1[93] = 300;
    Q2[93] = 300;
    Q3[93] = 300;
    Q4[93] = 300;

    LNK_code[94] = "dummyhdkarin02";
    IS_nr[94] = ddummyhdkarin02;
    FC_nr[94] = NG;
    S_generator[94] = NG;
    S_stopline[94] = 1800;
    Q1[94] = 1;
    Q2[94] = 2;
    Q3[94] = 1;
    Q4[94] = 2;

    LNK_code[95] = "dummyhdkaruit02";
    IS_nr[95] = ddummyhdkaruit02;
    FC_nr[95] = NG;
    S_generator[95] = NG;
    S_stopline[95] = 1800;
    Q1[95] = 300;
    Q2[95] = 300;
    Q3[95] = 300;
    Q4[95] = 300;

    LNK_code[96] = "dummyhdkarin03";
    IS_nr[96] = ddummyhdkarin03;
    FC_nr[96] = NG;
    S_generator[96] = NG;
    S_stopline[96] = 1800;
    Q1[96] = 1;
    Q2[96] = 1;
    Q3[96] = 2;
    Q4[96] = 1;

    LNK_code[97] = "dummyhdkaruit03";
    IS_nr[97] = ddummyhdkaruit03;
    FC_nr[97] = NG;
    S_generator[97] = NG;
    S_stopline[97] = 1800;
    Q1[97] = 300;
    Q2[97] = 300;
    Q3[97] = 300;
    Q4[97] = 300;

    LNK_code[98] = "dummyhdkarin05";
    IS_nr[98] = ddummyhdkarin05;
    FC_nr[98] = NG;
    S_generator[98] = NG;
    S_stopline[98] = 1800;
    Q1[98] = 1;
    Q2[98] = 1;
    Q3[98] = 2;
    Q4[98] = 1;

    LNK_code[99] = "dummyhdkaruit05";
    IS_nr[99] = ddummyhdkaruit05;
    FC_nr[99] = NG;
    S_generator[99] = NG;
    S_stopline[99] = 1800;
    Q1[99] = 300;
    Q2[99] = 300;
    Q3[99] = 300;
    Q4[99] = 300;

    LNK_code[100] = "dummyhdkarin08";
    IS_nr[100] = ddummyhdkarin08;
    FC_nr[100] = NG;
    S_generator[100] = NG;
    S_stopline[100] = 1800;
    Q1[100] = 1;
    Q2[100] = 1;
    Q3[100] = 2;
    Q4[100] = 1;

    LNK_code[101] = "dummyhdkaruit08";
    IS_nr[101] = ddummyhdkaruit08;
    FC_nr[101] = NG;
    S_generator[101] = NG;
    S_stopline[101] = 1800;
    Q1[101] = 300;
    Q2[101] = 300;
    Q3[101] = 300;
    Q4[101] = 300;

    LNK_code[102] = "dummyhdkarin09";
    IS_nr[102] = ddummyhdkarin09;
    FC_nr[102] = NG;
    S_generator[102] = NG;
    S_stopline[102] = 1800;
    Q1[102] = 1;
    Q2[102] = 1;
    Q3[102] = 2;
    Q4[102] = 1;

    LNK_code[103] = "dummyhdkaruit09";
    IS_nr[103] = ddummyhdkaruit09;
    FC_nr[103] = NG;
    S_generator[103] = NG;
    S_stopline[103] = 1800;
    Q1[103] = 300;
    Q2[103] = 300;
    Q3[103] = 300;
    Q4[103] = 300;

    LNK_code[104] = "dummyhdkarin11";
    IS_nr[104] = ddummyhdkarin11;
    FC_nr[104] = NG;
    S_generator[104] = NG;
    S_stopline[104] = 1800;
    Q1[104] = 1;
    Q2[104] = 1;
    Q3[104] = 2;
    Q4[104] = 1;

    LNK_code[105] = "dummyhdkaruit11";
    IS_nr[105] = ddummyhdkaruit11;
    FC_nr[105] = NG;
    S_generator[105] = NG;
    S_stopline[105] = 1800;
    Q1[105] = 300;
    Q2[105] = 300;
    Q3[105] = 300;
    Q4[105] = 300;

    LNK_code[106] = "dummyhdkarin61";
    IS_nr[106] = ddummyhdkarin61;
    FC_nr[106] = NG;
    S_generator[106] = NG;
    S_stopline[106] = 1800;
    Q1[106] = 1;
    Q2[106] = 1;
    Q3[106] = 2;
    Q4[106] = 1;

    LNK_code[107] = "dummyhdkaruit61";
    IS_nr[107] = ddummyhdkaruit61;
    FC_nr[107] = NG;
    S_generator[107] = NG;
    S_stopline[107] = 1800;
    Q1[107] = 300;
    Q2[107] = 300;
    Q3[107] = 300;
    Q4[107] = 300;

    LNK_code[108] = "dummyhdkarin62";
    IS_nr[108] = ddummyhdkarin62;
    FC_nr[108] = NG;
    S_generator[108] = NG;
    S_stopline[108] = 1800;
    Q1[108] = 1;
    Q2[108] = 1;
    Q3[108] = 2;
    Q4[108] = 1;

    LNK_code[109] = "dummyhdkaruit62";
    IS_nr[109] = ddummyhdkaruit62;
    FC_nr[109] = NG;
    S_generator[109] = NG;
    S_stopline[109] = 1800;
    Q1[109] = 300;
    Q2[109] = 300;
    Q3[109] = 300;
    Q4[109] = 300;

    LNK_code[110] = "dummyhdkarin67";
    IS_nr[110] = ddummyhdkarin67;
    FC_nr[110] = NG;
    S_generator[110] = NG;
    S_stopline[110] = 1800;
    Q1[110] = 1;
    Q2[110] = 1;
    Q3[110] = 2;
    Q4[110] = 1;

    LNK_code[111] = "dummyhdkaruit67";
    IS_nr[111] = ddummyhdkaruit67;
    FC_nr[111] = NG;
    S_generator[111] = NG;
    S_stopline[111] = 1800;
    Q1[111] = 300;
    Q2[111] = 300;
    Q3[111] = 300;
    Q4[111] = 300;

    LNK_code[112] = "dummyhdkarin68";
    IS_nr[112] = ddummyhdkarin68;
    FC_nr[112] = NG;
    S_generator[112] = NG;
    S_stopline[112] = 1800;
    Q1[112] = 1;
    Q2[112] = 1;
    Q3[112] = 2;
    Q4[112] = 1;

    LNK_code[113] = "dummyhdkaruit68";
    IS_nr[113] = ddummyhdkaruit68;
    FC_nr[113] = NG;
    S_generator[113] = NG;
    S_stopline[113] = 1800;
    Q1[113] = 300;
    Q2[113] = 300;
    Q3[113] = 300;
    Q4[113] = 300;

    LNK_code[114] = "ris021car";
    IS_nr[114] = isris021car;
    FC_nr[114] = fc02;
    S_generator[114] = NG;
    S_stopline[114] = 0;
    Q1[114] = 0;
    Q2[114] = 0;
    Q3[114] = 0;
    Q4[114] = 0;

    LNK_code[115] = "ris021bus";
    IS_nr[115] = isris021bus;
    FC_nr[115] = fc02;
    S_generator[115] = NG;
    S_stopline[115] = 0;
    Q1[115] = 0;
    Q2[115] = 0;
    Q3[115] = 0;
    Q4[115] = 0;

    LNK_code[116] = "ris021special";
    IS_nr[116] = isris021special;
    FC_nr[116] = NG;
    S_generator[116] = NG;
    S_stopline[116] = 0;
    Q1[116] = 0;
    Q2[116] = 0;
    Q3[116] = 0;
    Q4[116] = 0;

    LNK_code[117] = "ris021heavytruck";
    IS_nr[117] = isris021heavytruck;
    FC_nr[117] = fc02;
    S_generator[117] = NG;
    S_stopline[117] = 0;
    Q1[117] = 0;
    Q2[117] = 0;
    Q3[117] = 0;
    Q4[117] = 0;

    LNK_code[118] = "ris022car";
    IS_nr[118] = isris022car;
    FC_nr[118] = fc02;
    S_generator[118] = NG;
    S_stopline[118] = 0;
    Q1[118] = 0;
    Q2[118] = 0;
    Q3[118] = 0;
    Q4[118] = 0;

    LNK_code[119] = "ris022bus";
    IS_nr[119] = isris022bus;
    FC_nr[119] = fc02;
    S_generator[119] = NG;
    S_stopline[119] = 0;
    Q1[119] = 0;
    Q2[119] = 0;
    Q3[119] = 0;
    Q4[119] = 0;

    LNK_code[120] = "ris022special";
    IS_nr[120] = isris022special;
    FC_nr[120] = NG;
    S_generator[120] = NG;
    S_stopline[120] = 0;
    Q1[120] = 0;
    Q2[120] = 0;
    Q3[120] = 0;
    Q4[120] = 0;

    LNK_code[121] = "ris022heavytruck";
    IS_nr[121] = isris022heavytruck;
    FC_nr[121] = fc02;
    S_generator[121] = NG;
    S_stopline[121] = 0;
    Q1[121] = 0;
    Q2[121] = 0;
    Q3[121] = 0;
    Q4[121] = 0;

    LNK_code[122] = "ris031car";
    IS_nr[122] = isris031car;
    FC_nr[122] = fc03;
    S_generator[122] = NG;
    S_stopline[122] = 0;
    Q1[122] = 0;
    Q2[122] = 0;
    Q3[122] = 0;
    Q4[122] = 0;

    LNK_code[123] = "ris031bus";
    IS_nr[123] = isris031bus;
    FC_nr[123] = fc03;
    S_generator[123] = NG;
    S_stopline[123] = 0;
    Q1[123] = 0;
    Q2[123] = 0;
    Q3[123] = 0;
    Q4[123] = 0;

    LNK_code[124] = "ris031special";
    IS_nr[124] = isris031special;
    FC_nr[124] = NG;
    S_generator[124] = NG;
    S_stopline[124] = 0;
    Q1[124] = 0;
    Q2[124] = 0;
    Q3[124] = 0;
    Q4[124] = 0;

    LNK_code[125] = "ris031heavytruck";
    IS_nr[125] = isris031heavytruck;
    FC_nr[125] = fc03;
    S_generator[125] = NG;
    S_stopline[125] = 0;
    Q1[125] = 0;
    Q2[125] = 0;
    Q3[125] = 0;
    Q4[125] = 0;

    LNK_code[126] = "ris051car";
    IS_nr[126] = isris051car;
    FC_nr[126] = fc05;
    S_generator[126] = NG;
    S_stopline[126] = 0;
    Q1[126] = 0;
    Q2[126] = 0;
    Q3[126] = 0;
    Q4[126] = 0;

    LNK_code[127] = "ris051bus";
    IS_nr[127] = isris051bus;
    FC_nr[127] = fc05;
    S_generator[127] = NG;
    S_stopline[127] = 0;
    Q1[127] = 0;
    Q2[127] = 0;
    Q3[127] = 0;
    Q4[127] = 0;

    LNK_code[128] = "ris051special";
    IS_nr[128] = isris051special;
    FC_nr[128] = NG;
    S_generator[128] = NG;
    S_stopline[128] = 0;
    Q1[128] = 0;
    Q2[128] = 0;
    Q3[128] = 0;
    Q4[128] = 0;

    LNK_code[129] = "ris051heavytruck";
    IS_nr[129] = isris051heavytruck;
    FC_nr[129] = fc05;
    S_generator[129] = NG;
    S_stopline[129] = 0;
    Q1[129] = 0;
    Q2[129] = 0;
    Q3[129] = 0;
    Q4[129] = 0;

    LNK_code[130] = "ris081car";
    IS_nr[130] = isris081car;
    FC_nr[130] = fc08;
    S_generator[130] = NG;
    S_stopline[130] = 0;
    Q1[130] = 0;
    Q2[130] = 0;
    Q3[130] = 0;
    Q4[130] = 0;

    LNK_code[131] = "ris081bus";
    IS_nr[131] = isris081bus;
    FC_nr[131] = fc08;
    S_generator[131] = NG;
    S_stopline[131] = 0;
    Q1[131] = 0;
    Q2[131] = 0;
    Q3[131] = 0;
    Q4[131] = 0;

    LNK_code[132] = "ris081special";
    IS_nr[132] = isris081special;
    FC_nr[132] = NG;
    S_generator[132] = NG;
    S_stopline[132] = 0;
    Q1[132] = 0;
    Q2[132] = 0;
    Q3[132] = 0;
    Q4[132] = 0;

    LNK_code[133] = "ris081heavytruck";
    IS_nr[133] = isris081heavytruck;
    FC_nr[133] = fc08;
    S_generator[133] = NG;
    S_stopline[133] = 0;
    Q1[133] = 0;
    Q2[133] = 0;
    Q3[133] = 0;
    Q4[133] = 0;

    LNK_code[134] = "ris082car";
    IS_nr[134] = isris082car;
    FC_nr[134] = fc08;
    S_generator[134] = NG;
    S_stopline[134] = 0;
    Q1[134] = 0;
    Q2[134] = 0;
    Q3[134] = 0;
    Q4[134] = 0;

    LNK_code[135] = "ris082bus";
    IS_nr[135] = isris082bus;
    FC_nr[135] = fc08;
    S_generator[135] = NG;
    S_stopline[135] = 0;
    Q1[135] = 0;
    Q2[135] = 0;
    Q3[135] = 0;
    Q4[135] = 0;

    LNK_code[136] = "ris082special";
    IS_nr[136] = isris082special;
    FC_nr[136] = NG;
    S_generator[136] = NG;
    S_stopline[136] = 0;
    Q1[136] = 0;
    Q2[136] = 0;
    Q3[136] = 0;
    Q4[136] = 0;

    LNK_code[137] = "ris082heavytruck";
    IS_nr[137] = isris082heavytruck;
    FC_nr[137] = fc08;
    S_generator[137] = NG;
    S_stopline[137] = 0;
    Q1[137] = 0;
    Q2[137] = 0;
    Q3[137] = 0;
    Q4[137] = 0;

    LNK_code[138] = "ris091car";
    IS_nr[138] = isris091car;
    FC_nr[138] = fc09;
    S_generator[138] = NG;
    S_stopline[138] = 0;
    Q1[138] = 0;
    Q2[138] = 0;
    Q3[138] = 0;
    Q4[138] = 0;

    LNK_code[139] = "ris091bus";
    IS_nr[139] = isris091bus;
    FC_nr[139] = fc09;
    S_generator[139] = NG;
    S_stopline[139] = 0;
    Q1[139] = 0;
    Q2[139] = 0;
    Q3[139] = 0;
    Q4[139] = 0;

    LNK_code[140] = "ris091special";
    IS_nr[140] = isris091special;
    FC_nr[140] = NG;
    S_generator[140] = NG;
    S_stopline[140] = 0;
    Q1[140] = 0;
    Q2[140] = 0;
    Q3[140] = 0;
    Q4[140] = 0;

    LNK_code[141] = "ris091heavytruck";
    IS_nr[141] = isris091heavytruck;
    FC_nr[141] = fc09;
    S_generator[141] = NG;
    S_stopline[141] = 0;
    Q1[141] = 0;
    Q2[141] = 0;
    Q3[141] = 0;
    Q4[141] = 0;

    LNK_code[142] = "ris111car";
    IS_nr[142] = isris111car;
    FC_nr[142] = fc11;
    S_generator[142] = NG;
    S_stopline[142] = 0;
    Q1[142] = 0;
    Q2[142] = 0;
    Q3[142] = 0;
    Q4[142] = 0;

    LNK_code[143] = "ris111bus";
    IS_nr[143] = isris111bus;
    FC_nr[143] = fc11;
    S_generator[143] = NG;
    S_stopline[143] = 0;
    Q1[143] = 0;
    Q2[143] = 0;
    Q3[143] = 0;
    Q4[143] = 0;

    LNK_code[144] = "ris111special";
    IS_nr[144] = isris111special;
    FC_nr[144] = NG;
    S_generator[144] = NG;
    S_stopline[144] = 0;
    Q1[144] = 0;
    Q2[144] = 0;
    Q3[144] = 0;
    Q4[144] = 0;

    LNK_code[145] = "ris111heavytruck";
    IS_nr[145] = isris111heavytruck;
    FC_nr[145] = fc11;
    S_generator[145] = NG;
    S_stopline[145] = 0;
    Q1[145] = 0;
    Q2[145] = 0;
    Q3[145] = 0;
    Q4[145] = 0;

    LNK_code[146] = "ris211cyclist";
    IS_nr[146] = isris211cyclist;
    FC_nr[146] = fc21;
    S_generator[146] = NG;
    S_stopline[146] = 0;
    Q1[146] = 0;
    Q2[146] = 0;
    Q3[146] = 0;
    Q4[146] = 0;

    LNK_code[147] = "ris221cyclist";
    IS_nr[147] = isris221cyclist;
    FC_nr[147] = fc22;
    S_generator[147] = NG;
    S_stopline[147] = 0;
    Q1[147] = 0;
    Q2[147] = 0;
    Q3[147] = 0;
    Q4[147] = 0;

    LNK_code[148] = "ris222cyclist";
    IS_nr[148] = isris222cyclist;
    FC_nr[148] = fc22;
    S_generator[148] = NG;
    S_stopline[148] = 0;
    Q1[148] = 0;
    Q2[148] = 0;
    Q3[148] = 0;
    Q4[148] = 0;

    LNK_code[149] = "ris241cyclist";
    IS_nr[149] = isris241cyclist;
    FC_nr[149] = fc24;
    S_generator[149] = NG;
    S_stopline[149] = 0;
    Q1[149] = 0;
    Q2[149] = 0;
    Q3[149] = 0;
    Q4[149] = 0;

    LNK_code[150] = "ris261cyclist";
    IS_nr[150] = isris261cyclist;
    FC_nr[150] = fc26;
    S_generator[150] = NG;
    S_stopline[150] = 0;
    Q1[150] = 0;
    Q2[150] = 0;
    Q3[150] = 0;
    Q4[150] = 0;

    LNK_code[151] = "ris281cyclist";
    IS_nr[151] = isris281cyclist;
    FC_nr[151] = fc28;
    S_generator[151] = NG;
    S_stopline[151] = 0;
    Q1[151] = 0;
    Q2[151] = 0;
    Q3[151] = 0;
    Q4[151] = 0;

    LNK_code[152] = "ris311pedestrian";
    IS_nr[152] = isris311pedestrian;
    FC_nr[152] = fc31;
    S_generator[152] = NG;
    S_stopline[152] = 0;
    Q1[152] = 0;
    Q2[152] = 0;
    Q3[152] = 0;
    Q4[152] = 0;

    LNK_code[153] = "ris312pedestrian";
    IS_nr[153] = isris312pedestrian;
    FC_nr[153] = fc31;
    S_generator[153] = NG;
    S_stopline[153] = 0;
    Q1[153] = 0;
    Q2[153] = 0;
    Q3[153] = 0;
    Q4[153] = 0;

    LNK_code[154] = "ris321pedestrian";
    IS_nr[154] = isris321pedestrian;
    FC_nr[154] = fc32;
    S_generator[154] = NG;
    S_stopline[154] = 0;
    Q1[154] = 0;
    Q2[154] = 0;
    Q3[154] = 0;
    Q4[154] = 0;

    LNK_code[155] = "ris322pedestrian";
    IS_nr[155] = isris322pedestrian;
    FC_nr[155] = fc32;
    S_generator[155] = NG;
    S_stopline[155] = 0;
    Q1[155] = 0;
    Q2[155] = 0;
    Q3[155] = 0;
    Q4[155] = 0;

    LNK_code[156] = "ris331pedestrian";
    IS_nr[156] = isris331pedestrian;
    FC_nr[156] = fc33;
    S_generator[156] = NG;
    S_stopline[156] = 0;
    Q1[156] = 0;
    Q2[156] = 0;
    Q3[156] = 0;
    Q4[156] = 0;

    LNK_code[157] = "ris332pedestrian";
    IS_nr[157] = isris332pedestrian;
    FC_nr[157] = fc33;
    S_generator[157] = NG;
    S_stopline[157] = 0;
    Q1[157] = 0;
    Q2[157] = 0;
    Q3[157] = 0;
    Q4[157] = 0;

    LNK_code[158] = "ris341pedestrian";
    IS_nr[158] = isris341pedestrian;
    FC_nr[158] = fc34;
    S_generator[158] = NG;
    S_stopline[158] = 0;
    Q1[158] = 0;
    Q2[158] = 0;
    Q3[158] = 0;
    Q4[158] = 0;

    LNK_code[159] = "ris342pedestrian";
    IS_nr[159] = isris342pedestrian;
    FC_nr[159] = fc34;
    S_generator[159] = NG;
    S_stopline[159] = 0;
    Q1[159] = 0;
    Q2[159] = 0;
    Q3[159] = 0;
    Q4[159] = 0;

    LNK_code[160] = "ris381pedestrian";
    IS_nr[160] = isris381pedestrian;
    FC_nr[160] = fc38;
    S_generator[160] = NG;
    S_stopline[160] = 0;
    Q1[160] = 0;
    Q2[160] = 0;
    Q3[160] = 0;
    Q4[160] = 0;

    LNK_code[161] = "ris382pedestrian";
    IS_nr[161] = isris382pedestrian;
    FC_nr[161] = fc38;
    S_generator[161] = NG;
    S_stopline[161] = 0;
    Q1[161] = 0;
    Q2[161] = 0;
    Q3[161] = 0;
    Q4[161] = 0;

    LNK_code[162] = "ris611car";
    IS_nr[162] = isris611car;
    FC_nr[162] = fc61;
    S_generator[162] = NG;
    S_stopline[162] = 0;
    Q1[162] = 0;
    Q2[162] = 0;
    Q3[162] = 0;
    Q4[162] = 0;

    LNK_code[163] = "ris611bus";
    IS_nr[163] = isris611bus;
    FC_nr[163] = fc61;
    S_generator[163] = NG;
    S_stopline[163] = 0;
    Q1[163] = 0;
    Q2[163] = 0;
    Q3[163] = 0;
    Q4[163] = 0;

    LNK_code[164] = "ris611special";
    IS_nr[164] = isris611special;
    FC_nr[164] = NG;
    S_generator[164] = NG;
    S_stopline[164] = 0;
    Q1[164] = 0;
    Q2[164] = 0;
    Q3[164] = 0;
    Q4[164] = 0;

    LNK_code[165] = "ris611heavytruck";
    IS_nr[165] = isris611heavytruck;
    FC_nr[165] = fc61;
    S_generator[165] = NG;
    S_stopline[165] = 0;
    Q1[165] = 0;
    Q2[165] = 0;
    Q3[165] = 0;
    Q4[165] = 0;

    LNK_code[166] = "ris621car";
    IS_nr[166] = isris621car;
    FC_nr[166] = fc62;
    S_generator[166] = NG;
    S_stopline[166] = 0;
    Q1[166] = 0;
    Q2[166] = 0;
    Q3[166] = 0;
    Q4[166] = 0;

    LNK_code[167] = "ris621bus";
    IS_nr[167] = isris621bus;
    FC_nr[167] = fc62;
    S_generator[167] = NG;
    S_stopline[167] = 0;
    Q1[167] = 0;
    Q2[167] = 0;
    Q3[167] = 0;
    Q4[167] = 0;

    LNK_code[168] = "ris621special";
    IS_nr[168] = isris621special;
    FC_nr[168] = NG;
    S_generator[168] = NG;
    S_stopline[168] = 0;
    Q1[168] = 0;
    Q2[168] = 0;
    Q3[168] = 0;
    Q4[168] = 0;

    LNK_code[169] = "ris621heavytruck";
    IS_nr[169] = isris621heavytruck;
    FC_nr[169] = fc62;
    S_generator[169] = NG;
    S_stopline[169] = 0;
    Q1[169] = 0;
    Q2[169] = 0;
    Q3[169] = 0;
    Q4[169] = 0;

    LNK_code[170] = "ris622car";
    IS_nr[170] = isris622car;
    FC_nr[170] = fc62;
    S_generator[170] = NG;
    S_stopline[170] = 0;
    Q1[170] = 0;
    Q2[170] = 0;
    Q3[170] = 0;
    Q4[170] = 0;

    LNK_code[171] = "ris622bus";
    IS_nr[171] = isris622bus;
    FC_nr[171] = fc62;
    S_generator[171] = NG;
    S_stopline[171] = 0;
    Q1[171] = 0;
    Q2[171] = 0;
    Q3[171] = 0;
    Q4[171] = 0;

    LNK_code[172] = "ris622special";
    IS_nr[172] = isris622special;
    FC_nr[172] = NG;
    S_generator[172] = NG;
    S_stopline[172] = 0;
    Q1[172] = 0;
    Q2[172] = 0;
    Q3[172] = 0;
    Q4[172] = 0;

    LNK_code[173] = "ris622heavytruck";
    IS_nr[173] = isris622heavytruck;
    FC_nr[173] = fc62;
    S_generator[173] = NG;
    S_stopline[173] = 0;
    Q1[173] = 0;
    Q2[173] = 0;
    Q3[173] = 0;
    Q4[173] = 0;

    LNK_code[174] = "ris671car";
    IS_nr[174] = isris671car;
    FC_nr[174] = fc67;
    S_generator[174] = NG;
    S_stopline[174] = 0;
    Q1[174] = 0;
    Q2[174] = 0;
    Q3[174] = 0;
    Q4[174] = 0;

    LNK_code[175] = "ris671bus";
    IS_nr[175] = isris671bus;
    FC_nr[175] = fc67;
    S_generator[175] = NG;
    S_stopline[175] = 0;
    Q1[175] = 0;
    Q2[175] = 0;
    Q3[175] = 0;
    Q4[175] = 0;

    LNK_code[176] = "ris671special";
    IS_nr[176] = isris671special;
    FC_nr[176] = NG;
    S_generator[176] = NG;
    S_stopline[176] = 0;
    Q1[176] = 0;
    Q2[176] = 0;
    Q3[176] = 0;
    Q4[176] = 0;

    LNK_code[177] = "ris671heavytruck";
    IS_nr[177] = isris671heavytruck;
    FC_nr[177] = fc67;
    S_generator[177] = NG;
    S_stopline[177] = 0;
    Q1[177] = 0;
    Q2[177] = 0;
    Q3[177] = 0;
    Q4[177] = 0;

    LNK_code[178] = "ris681car";
    IS_nr[178] = isris681car;
    FC_nr[178] = fc68;
    S_generator[178] = NG;
    S_stopline[178] = 0;
    Q1[178] = 0;
    Q2[178] = 0;
    Q3[178] = 0;
    Q4[178] = 0;

    LNK_code[179] = "ris681bus";
    IS_nr[179] = isris681bus;
    FC_nr[179] = fc68;
    S_generator[179] = NG;
    S_stopline[179] = 0;
    Q1[179] = 0;
    Q2[179] = 0;
    Q3[179] = 0;
    Q4[179] = 0;

    LNK_code[180] = "ris681special";
    IS_nr[180] = isris681special;
    FC_nr[180] = NG;
    S_generator[180] = NG;
    S_stopline[180] = 0;
    Q1[180] = 0;
    Q2[180] = 0;
    Q3[180] = 0;
    Q4[180] = 0;

    LNK_code[181] = "ris681heavytruck";
    IS_nr[181] = isris681heavytruck;
    FC_nr[181] = fc68;
    S_generator[181] = NG;
    S_stopline[181] = 0;
    Q1[181] = 0;
    Q2[181] = 0;
    Q3[181] = 0;
    Q4[181] = 0;

    LNK_code[182] = "ris682car";
    IS_nr[182] = isris682car;
    FC_nr[182] = fc68;
    S_generator[182] = NG;
    S_stopline[182] = 0;
    Q1[182] = 0;
    Q2[182] = 0;
    Q3[182] = 0;
    Q4[182] = 0;

    LNK_code[183] = "ris682bus";
    IS_nr[183] = isris682bus;
    FC_nr[183] = fc68;
    S_generator[183] = NG;
    S_stopline[183] = 0;
    Q1[183] = 0;
    Q2[183] = 0;
    Q3[183] = 0;
    Q4[183] = 0;

    LNK_code[184] = "ris682special";
    IS_nr[184] = isris682special;
    FC_nr[184] = NG;
    S_generator[184] = NG;
    S_stopline[184] = 0;
    Q1[184] = 0;
    Q2[184] = 0;
    Q3[184] = 0;
    Q4[184] = 0;

    LNK_code[185] = "ris682heavytruck";
    IS_nr[185] = isris682heavytruck;
    FC_nr[185] = fc68;
    S_generator[185] = NG;
    S_stopline[185] = 0;
    Q1[185] = 0;
    Q2[185] = 0;
    Q3[185] = 0;
    Q4[185] = 0;

    LNK_code[186] = "ris811cyclist";
    IS_nr[186] = isris811cyclist;
    FC_nr[186] = fc81;
    S_generator[186] = NG;
    S_stopline[186] = 0;
    Q1[186] = 0;
    Q2[186] = 0;
    Q3[186] = 0;
    Q4[186] = 0;

    LNK_code[187] = "ris821cyclist";
    IS_nr[187] = isris821cyclist;
    FC_nr[187] = fc82;
    S_generator[187] = NG;
    S_stopline[187] = 0;
    Q1[187] = 0;
    Q2[187] = 0;
    Q3[187] = 0;
    Q4[187] = 0;

    LNK_code[188] = "ris841cyclist";
    IS_nr[188] = isris841cyclist;
    FC_nr[188] = fc84;
    S_generator[188] = NG;
    S_stopline[188] = 0;
    Q1[188] = 0;
    Q2[188] = 0;
    Q3[188] = 0;
    Q4[188] = 0;

#endif

    /* Gebruikers toevoegingen file includen */
    /* ------------------------------------- */
    #include "123456sim.add"

}
