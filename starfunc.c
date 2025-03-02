/* starfunc.c - gegenereerd met TLCGen 12.4.0.12 */

#include "starfunc.h"

mulv star_cyclustimer;

void update_cyclustimer(count cyclustijd)
{	
	star_cyclustimer -= 1;
	star_cyclustimer += TS;
	star_cyclustimer = star_cyclustimer % cyclustijd + 1;
	DICG_TX_timer = star_cyclustimer;
}

boolv periode(count	cyclustijd, count cyclustimer, count begin_groen, count einde_groen)
{
	count einde = einde_groen;
	count ctk = cyclustimer;

	if (begin_groen > einde_groen)
	{
		einde += cyclustijd;
		if (cyclustimer < begin_groen)
		{
			ctk += cyclustijd;
		}
	}

	return ctk >= begin_groen && ctk < einde;
}

void commando_groen(count fc)
{
	B[fc] = (boolv)(R[fc] && A[fc]);
	YM[fc] |= BIT14;
	RR[fc] = FALSE;
}

void star_reset_bits(boolv star)
{
	int i;

	if (star)
	{
		for (i = 0; i < FCMAX; ++i)
		{
			X[i] = FALSE;
			RR[i] = FALSE;
			RS[i] = FALSE;
			RW[i] = FALSE;
			FW[i] = FALSE;
			FM[i] = FALSE;
			YW[i] = FALSE;
			YV[i] = FALSE;
			YM[i] = FALSE;
			B[i] = FALSE;
			MK[i] = FALSE;
			A[i] = TRUE;
			Z[i] = FALSE;
			BL[i] = FALSE;

			RR[i] |= BIT14;
		}

		for (i = 0; i < TMMAX; ++i)
		{
			RT[i] = FALSE;
			HT[i] = FALSE;
			AT[i] = FALSE;
		}
	}
	else
	{
		for (i = 0; i < FCMAX; ++i)
		{
			B[i] = FALSE;
			YM[i] &= ~BIT14;
			RR[i] &= ~BIT14;
			Z[i] &= ~BIT14;
		}
	}
}

void star_regelen()
{
	int fc;
	int p = star_programma - 1;

	if (p < 0 || p >= STARMAX) p = 0;

	update_cyclustimer(STAR_ctijd[p]);

	for (fc = 0; fc < FCMAX; ++fc)
	{
		if (periode(STAR_ctijd[p], star_cyclustimer, STAR_start1[p][fc], STAR_eind1[p][fc])) commando_groen(fc);
		if (STAR_start2[fc] != 0 && STAR_eind2[fc] != 0)
		{
			if (periode(STAR_ctijd[p], star_cyclustimer, STAR_start2[p][fc], STAR_eind2[p][fc])) commando_groen(fc);
		}
	}
}

boolv star_test_alles_rood()
{
	int fc = 0;
	for (; fc < FCMAX; ++fc)
	{
		if (!R[fc]) return FALSE;
	}
	return TRUE;
}

void star_bepaal_omschakelen(count mgewenst, count mwerkelijk, count mprogwissel)
{
    int fc = 0; /* tbv resette aanvraag op einde star programma  JDV*/

    /* omschakelen naar gewenste programma keuze */
    if (MM[mgewenst] != MM[mwerkelijk])
    {
        if (((MM[mwerkelijk] != 0 && star_cyclustimer == 1) ||
             MM[mgewenst] != 0 ||
             (MM[mprogwissel])))
        {
            MM[mprogwissel] = TRUE;
            if (star_test_alles_rood())
            {
                CIF_PARM1WIJZAP=CIF_MEER_PARMWIJZ;
                MM[mwerkelijk] = MM[mgewenst];
                MM[mprogwissel] = FALSE;
 
                for (; fc < FCMAX; ++fc)
                {
                    A[fc] = FALSE;
                }
            }
        }
    }
    else
    {
        MM[mprogwissel] = FALSE;
    }

    /* stuur alles rood tbv programmawisseling     */
    if (MM[mprogwissel])
    {
        /* stuur alle signaalgroepen naar rood */
        for (fc = 0; fc < FCMAX; fc++)
        {
#if defined YV_KOP_HALFSTAR
			RR[fc] = (RW[fc] & BIT2 || YV[fc] & BIT2 || YV[fc] & YV_KOP_HALFSTAR || YM[fc] & YM_KOP_HALFSTAR) ? FALSE : BIT14;
			Z[fc] = (RW[fc] & BIT2 || YV[fc] & BIT2 || YV[fc] & YV_KOP_HALFSTAR || YM[fc] & YM_KOP_HALFSTAR) ? FALSE : BIT14;
#else
            RR[fc] = (RW[fc]&BIT2 || YV[fc]&BIT2) ? FALSE : BIT14;
            Z[fc] = (RW[fc]&BIT2 || YV[fc]&BIT2) ? FALSE : BIT14;
#endif
        }
    }
}

void Verstarringen(mulv verstarringsprogramma)
{
    count i;

    
    if(verstarringsprogramma >= 9 && verstarringsprogramma <=15) {
    	 for (i = 0; i < FCMAX; i++) {
          Z[i] |= BIT15;
          BL[i] |= BIT15;
       }
       switch (verstarringsprogramma) {
       case 9:
           #ifdef fc01 
           X[fc01] = 0;  RR[fc01] = 0;  BL[fc01] &= ~BIT15;  Z[fc01] &= ~BIT15; AA[fc01] |= 1; RW[fc01] |= BIT15;
           #endif
           #ifdef fc02 
           X[fc02] = 0;  RR[fc02] = 0;  BL[fc02] &= ~BIT15;  Z[fc02] &= ~BIT15; AA[fc02] |= 1; RW[fc02] |= BIT15;
           #endif
           #ifdef fc03 
           X[fc03] = 0;  RR[fc03] = 0;  BL[fc03] &= ~BIT15;  Z[fc03] &= ~BIT15; AA[fc03] |= 1; RW[fc03] |= BIT15;
           #endif
           #ifdef fc61 
           X[fc61] = 0;  RR[fc61] = 0;  BL[fc61] &= ~BIT15;  Z[fc61] &= ~BIT15; AA[fc61] |= 1; RW[fc61] |= BIT15;
           #endif
           #ifdef fc62 
           X[fc62] = 0;  RR[fc62] = 0;  BL[fc62] &= ~BIT15;  Z[fc62] &= ~BIT15; AA[fc62] |= 1; RW[fc62] |= BIT15;
           #endif
           #ifdef fc63 
           X[fc63] = 0;  RR[fc63] = 0;  BL[fc63] &= ~BIT15;  Z[fc63] &= ~BIT15; AA[fc63] |= 1; RW[fc63] |= BIT15;
           #endif
           break;
       
       case 10:
           #ifdef fc04
           X[fc04] = 0;  RR[fc04] = 0;  BL[fc04] &= ~BIT15;  Z[fc04] &= ~BIT15; AA[fc04] |= 1; RW[fc04] |= BIT15;
           #endif
           #ifdef fc05
           X[fc05] = 0;  RR[fc05] = 0;  BL[fc05] &= ~BIT15;  Z[fc05] &= ~BIT15; AA[fc05] |= 1; RW[fc05] |= BIT15;
           #endif
           #ifdef fc06
           X[fc06] = 0;  RR[fc06] = 0;  BL[fc06] &= ~BIT15;  Z[fc06] &= ~BIT15; AA[fc06] |= 1; RW[fc06] |= BIT5;
           #endif
           #ifdef fc64
           X[fc64] = 0;  RR[fc64] = 0;  BL[fc64] &= ~BIT15;  Z[fc64] &= ~BIT15; AA[fc64] |= 1; RW[fc64] |= BIT15;
           #endif
           #ifdef fc65
           X[fc65] = 0;  RR[fc65] = 0;  BL[fc65] &= ~BIT15;  Z[fc65] &= ~BIT15; AA[fc65] |= 1; RW[fc65] |= BIT15;
           #endif
           #ifdef fc66
           X[fc66] = 0;  RR[fc66] = 0;  BL[fc66] &= ~BIT15;  Z[fc66] &= ~BIT15; AA[fc66] |= 1; RW[fc66] |= BIT5;
           #endif
           break;
       case 11:
           #ifdef fc07 
           X[fc07] = 0;  RR[fc07] = 0;  BL[fc07] &= ~BIT15;  Z[fc07] &= ~BIT15; AA[fc07] |= 1; RW[fc07] |= BIT15;
           #endif
           #ifdef fc08 
           X[fc08] = 0;  RR[fc08] = 0;  BL[fc08] &= ~BIT15;  Z[fc08] &= ~BIT15; AA[fc08] |= 1; RW[fc08] |= BIT15;
           #endif
           #ifdef fc09 
           X[fc09] = 0;  RR[fc09] = 0;  BL[fc09] &= ~BIT15;  Z[fc09] &= ~BIT15; AA[fc09] |= 1; RW[fc09] |= BIT15;
           #endif
           #ifdef fc67 
           X[fc67] = 0;  RR[fc67] = 0;  BL[fc67] &= ~BIT15;  Z[fc67] &= ~BIT15; AA[fc67] |= 1; RW[fc67] |= BIT15;
           #endif
           #ifdef fc68 
           X[fc68] = 0;  RR[fc68] = 0;  BL[fc68] &= ~BIT15;  Z[fc68] &= ~BIT15; AA[fc68] |= 1; RW[fc68] |= BIT15;
           #endif
           #ifdef fc69 
           X[fc69] = 0;  RR[fc69] = 0;  BL[fc69] &= ~BIT15;  Z[fc69] &= ~BIT15; AA[fc69] |= 1; RW[fc69] |= BIT15;
           #endif
           break;
       
       case 12:
           #ifdef fc10 
           X[fc10] = 0;  RR[fc10] = 0;  BL[fc10] &= ~BIT15;  Z[fc10] &= ~BIT15; AA[fc10] |= 1; RW[fc10] |= BIT15;
           #endif
           #ifdef fc11 
           X[fc11] = 0;  RR[fc11] = 0;  BL[fc11] &= ~BIT15;  Z[fc11] &= ~BIT15; AA[fc11] |= 1; RW[fc11] |= BIT15;
           #endif
           #ifdef fc12 
           X[fc12] = 0;  RR[fc12] = 0;  BL[fc12] &= ~BIT15;  Z[fc12] &= ~BIT15; AA[fc12] |= 1; RW[fc12] |= BIT15;
           #endif
           #ifdef fc70 
           X[fc70] = 0;  RR[fc70] = 0;  BL[fc70] &= ~BIT15;  Z[fc70] &= ~BIT15; AA[fc70] |= 1; RW[fc70] |= BIT15;
           #endif
           #ifdef fc71 
           X[fc71] = 0;  RR[fc71] = 0;  BL[fc71] &= ~BIT15;  Z[fc71] &= ~BIT15; AA[fc71] |= 1; RW[fc71] |= BIT15;
           #endif
           #ifdef fc72 
           X[fc72] = 0;  RR[fc72] = 0;  BL[fc72] &= ~BIT15;  Z[fc72] &= ~BIT15; AA[fc72] |= 1; RW[fc72] |= BIT15;
           #endif
           break;
       case 13:
           #ifdef fc01 
           X[fc01] = 0;  RR[fc01] = 0;  BL[fc01] &= ~BIT15;  Z[fc01] &= ~BIT15; AA[fc01] |= 1; RW[fc01] |= BIT15;
           #endif
           #ifdef fc02 
           X[fc02] = 0;  RR[fc02] = 0;  BL[fc02] &= ~BIT15;  Z[fc02] &= ~BIT15; AA[fc02] |= 1; RW[fc02] |= BIT15;
           #endif
           #ifdef fc07 
           X[fc07] = 0;  RR[fc07] = 0;  BL[fc07] &= ~BIT15;  Z[fc07] &= ~BIT15; AA[fc07] |= 1; RW[fc07] |= BIT15;
           #endif
           #ifdef fc08 
           X[fc08] = 0;  RR[fc08] = 0;  BL[fc08] &= ~BIT15;  Z[fc08] &= ~BIT15; AA[fc08] |= 1; RW[fc08] |= BIT15;
           #endif
           #ifdef fc62 
           X[fc62] = 0;  RR[fc62] = 0;  BL[fc62] &= ~BIT15;  Z[fc62] &= ~BIT15; AA[fc62] |= 1; RW[fc62] |= BIT15;
           #endif
           #ifdef fc68 
           X[fc68] = 0;  RR[fc68] = 0;  BL[fc68] &= ~BIT15;  Z[fc68] &= ~BIT15; AA[fc68] |= 1; RW[fc68] |= BIT15;
           #endif
            break;
       case 14:
           #ifdef fc04 
           X[fc04] = 0;  RR[fc04] = 0;  BL[fc04] &= ~BIT15;  Z[fc04] &= ~BIT15; AA[fc04] |= 1; RW[fc04] |= BIT15;
           #endif
           #ifdef fc05 
           X[fc05] = 0;  RR[fc05] = 0;  BL[fc05] &= ~BIT15;  Z[fc05] &= ~BIT15; AA[fc05] |= 1; RW[fc05] |= BIT15;
           #endif
           #ifdef fc10 
           X[fc10] = 0;  RR[fc10] = 0;  BL[fc10] &= ~BIT15;  Z[fc10] &= ~BIT15; AA[fc10] |= 1; RW[fc10] |= BIT15;
           #endif
           #ifdef fc11 
           X[fc11] = 0;  RR[fc11] = 0;  BL[fc11] &= ~BIT15;  Z[fc11] &= ~BIT15; AA[fc11] |= 1; RW[fc11] |= BIT15;
           #endif
           #ifdef fc65 
           X[fc65] = 0;  RR[fc65] = 0;  BL[fc65] &= ~BIT15;  Z[fc65] &= ~BIT15; AA[fc65] |= 1; RW[fc65] |= BIT15;
           #endif
           #ifdef fc71 
           X[fc71] = 0;  RR[fc71] = 0;  BL[fc71] &= ~BIT15;  Z[fc71] &= ~BIT15; AA[fc71] |= 1; RW[fc71] |= BIT15;
           #endif
            break;
       default:
           break;
       }
    }
    else {
    	 for (i = 0; i < FCMAX; i++) {
          Z[i] &= ~BIT15;
          BL[i] &= ~BIT15;
       }
    }
    
    #if usLVS01
    CIF_GUS[usLVS01] = verstarringsprogramma ==  9;
    #endif
    #if usLVS02
    CIF_GUS[usLVS02] = verstarringsprogramma == 10;
    #endif
    #if usLVS03
    CIF_GUS[usLVS03] = verstarringsprogramma == 11;
    #endif
    #if usLVS04
    CIF_GUS[usLVS04] = verstarringsprogramma == 12;
    #endif
    #if usLVS05
    CIF_GUS[usLVS05] = verstarringsprogramma == 13;
    #endif
    #if usLVS06
    CIF_GUS[usLVS06] = verstarringsprogramma == 14;
    #endif
    #if usLVS15
    CIF_GUS[usLVS15] = verstarringsprogramma == 15;
    #endif
}
