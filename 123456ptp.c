/* APPLICATIE PTP-KOPPELINGEN */
/* ========================== */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456ptp.c
      CCOL:   12.0
    TLCGEN:   0.12.0.0
   CCOLGEN:   0.12.0.0
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie   Datum        Ontwerper   Commentaar
 * 11.1.b   01-07-2022   Cyril       Nieuwe versie TLCGen (development)
 *
 ************************************************************************************/

#define AUTSTATUS    5 /* status automaat */
#define CIFA_COMF 2048 /* communicatiefout PTP-protocol */

/* koppelingen via PTP */
/* ------------------- */
/*
    --------------------------------------------------
    VRI             PTP
    --------------------------------------------------
    ptpkruising02   (4)*/

/* macrodefinitie voor gebruik PTP-poorten */
/* ======================================= */
#define PTP_ptpkruising02PORT /* @ define van de te koppelen VRI */

/* include files */
/* ============= */
#include "ptpvar.c"     /* definitie structuur ptp-berichten    */
#include "ptpksvar.c"   /* definitie structuur koppelsignalen   */

#ifdef FABRIKANT_DRIVER
/* declaraties t.b.v. aanroep fabrikant-driver */
/* ------------------------------------------- */
    #define INIT       1
    #define GEEN_INIT  0
    #define EINDE     -1
    extern int communicatieprogramma(int x);
#endif

/* definitie structuren t.b.v. PTP-koppeling(en) */
/* --------------------------------------------- */
#ifdef PTP_ptpkruising02PORT
    struct ptpstruct   PTP_ptpkruising02;
    struct ptpksstruct PTP_ptpkruising02KS;
#endif

/* PTP CONTROL PARAMETERS */
/* ====================== */

/* ptp_control_parameters() wordt gebruikt voor de specificatie van de parameters van
 * de PTP-verbinding.
 * ptp_control_parameters() wordt aangeroepen door de functie ptp_system_application().
 */

void ptp_control_parameters (void)
{

    #ifdef PTP_ptpkruising02PORT
        /* ptp-parameters t.b.v. koppeling met PTP_ptpkruising02 */
        /* ----------------------------------------- */
    #if (defined AUTOMAAT)
        PTP_ptpkruising02.PORTNR = 2;        /* poortnummer in het regeltoestel     */  /* @ door fabrikant aanpassen */
    #else
        PTP_ptpkruising02.PORTNR = 1;        /* poortnr. testomgeving (schrijvend) */ /* @ nummer van KS-buffer */
    #endif
        PTP_ptpkruising02.SRC  = 3;       /* nummer van source                   */ /* @ maximaal 255 */
        PTP_ptpkruising02.DEST = 4;       /* nummer van destination              */ /* @ maximaal 255 */

        PTP_ptpkruising02.TMSGW_max= 200;   /* wait  time-out             */
        PTP_ptpkruising02.TMSGS_max=  10;   /* send  time-out             */
        PTP_ptpkruising02.TMSGA_max=  10;   /* alive time-out             */
        PTP_ptpkruising02.CMSG_max=    3;   /* max. berichtenteller tbv. herhaling */

        PTP_ptpkruising02KS.IKS_MAX = 16;   /* aantal inkomende koppelsignalen    */ /* @ verhogen in stappen van 8 */
        PTP_ptpkruising02KS.UKS_MAX = 16;   /* aantal uitgaande koppelsignalen    */ /* @ verhogen in stappen van 8 */
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
        PTP_ptpkruising02KS.IKSM_MAX = 16;
        PTP_ptpkruising02KS.UKSM_MAX = 16;
    #endif
    #endif

}
/* PTP PRE SYSTEM APPLICATION */
/* -------------------------- */
/* ptp_pre_system_app() wordt gebruikt voor de specificatie van de afwikkeling van
 * de PTP-verbindingen.
 *
 * ptp_pre_system_app() moet worden aangeroepen vanuit de functie pre_system_application().
 */

void ptp_pre_system_app(void)
{
    register int i;

    if (SAPPLPROG) /* initialisatie bij start regelprogramma */
    {
        #ifdef FABRIKANT_DRIVER
            communicatieprogramma(INIT);
        #endif

        /* opzetten PTP control parameters */
        /* ------------------------------- */
        ptp_control_parameters();
        
        /* initialisatie van PTP-koppelingen */
        /* --------------------------------- */
        #ifdef PTP_ptpkruising02PORT
            ptp_init(&PTP_ptpkruising02);
        #endif

    }
    else
    {
        #ifdef FABRIKANT_DRIVER
            communicatieprogramma(GEEN_INIT);
        #endif

    /* afzetten van statusbit in CIF_GPS[5] */
    /* ------------------------------------ */
    CIF_GPS[AUTSTATUS] &= ~CIFA_COMF;

        /* opzetten signalen van en naar ptpkruising02 */
#ifdef PTP_ptpkruising02PORT

        /* nalopen in en uitgangssignalen */
        
        /* opzetten van uitgaande koppelsignalen PTP_ptpkruising02 */
        /* ------------------------------------------------- */      
        if (CIF_WPS[CIF_PROG_STATUS] == CIF_STAT_REG) /* status regelen - set uitgaande koppelsignalen  */
        {
            for (i = 0; i < PTP_ptpkruising02KS.UKS_MAX; ++i) {
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                if (i < (PTP_ptpkruising02KS.UKS_MAX - PTP_ptpkruising02KS.UKSM_MAX)) {
    #endif
                    PTP_ptpkruising02KS.UKS[i] = IH[hptpkruising02uks01 + i] && PRM[prmptpkruising02uks01 + i] >= 2 || PRM[prmptpkruising02uks01 + i] == 1;
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                }
                else {
                    PTP_ptpkruising02KS.UKS[i] = (PRM[prmptpkruising02uks01 + i] >= 2) ? IH[hptpkruising02uks01 + i] : 0;
                }
    #endif
            }
        }
        else /* niet regelen - reset uitgaande koppelsignalen */
        {
            for(i = 0; i < PTP_ptpkruising02KS.UKS_MAX; ++i) PTP_ptpkruising02KS.UKS[i] = FALSE;
        }

        /* opzetten van inkomende koppelsignalen PTP_ptpkruising02 */
        /* ---------------------------------------------- */
        if (PTP_ptpkruising02KS.OKE) /* goede verbinding - set inkomende koppelsignalen */
        {
            for(i = 0; i < PTP_ptpkruising02KS.IKS_MAX; ++i) {
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                if (i < (PTP_ptpkruising02KS.IKS_MAX - PTP_ptpkruising02KS.IKSM_MAX)) {
    #endif
                    IH[hptpkruising02iks01 + i] = PTP_ptpkruising02KS.IKS[i] && PRM[prmptpkruising02iks01 + i] >= 2 || PRM[prmptpkruising02iks01 + i] == 1;
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                }
                else {
                    IH[hptpkruising02iks01 + i] = (PRM[prmptpkruising02iks01 + i] >= 2) ? PTP_ptpkruising02KS.IKS[i] : 0;
                }
    #endif
            }
        }
        else /* geen goede verbinding - reset inkomende koppelsignalen */
        {
            for(i = 0; i < PTP_ptpkruising02KS.IKS_MAX; ++i)
            {
                if (PRM[prmptpkruising02iks01 + i] == 1)
                {
                    IH[hptpkruising02iks01 + i] = TRUE;
                }
                else
                {
                    IH[hptpkruising02iks01 + i] = FALSE;
                }
            }
        }

        /* aanroep ptp-functies */
        /* -------------------- */
        ptp_application_ks(&PTP_ptpkruising02, &PTP_ptpkruising02KS);
        ptp_control(&PTP_ptpkruising02);

        /* opzetten hulpelementen */
        /* ---------------------- */
        IH[hptp_ptpkruising02oke]  = PTP_ptpkruising02KS.OKE;
        IH[hptp_ptpkruising02err]  = PTP_ptpkruising02.COMERROR;
        IH[hptp_ptpkruising02err0] = PTP_ptpkruising02.COMERROR & BIT0;
        IH[hptp_ptpkruising02err1] = PTP_ptpkruising02.COMERROR & BIT1;
        IH[hptp_ptpkruising02err2] = PTP_ptpkruising02.COMERROR & BIT2;

        /* Bijhouden ptp errors   */
        /* ---------------------- */
        if (SH[hptp_ptpkruising02oke])
        {
            if((PRM[prmptp_ptpkruising02oke] + 1) >= 32767)
            {
                PRM[prmptp_ptpkruising02oke] = 0;
            }
            PRM[prmptp_ptpkruising02oke]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptpkruising02err])
        {
            if((PRM[prmptp_ptpkruising02err] + 1) >= 32767)
            {
                PRM[prmptp_ptpkruising02err] = 0;
            }
            PRM[prmptp_ptpkruising02err]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptpkruising02err0])
        {
            if((PRM[prmptp_ptpkruising02err0] + 1) >= 32767)
            {
                PRM[prmptp_ptpkruising02err0] = 0;
            }
            PRM[prmptp_ptpkruising02err0]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptpkruising02err1])
        {
            if((PRM[prmptp_ptpkruising02err1] + 1) >= 32767)
            {
                PRM[prmptp_ptpkruising02err1] = 0;
            }
            PRM[prmptp_ptpkruising02err1]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptpkruising02err2])
        {
            if((PRM[prmptp_ptpkruising02err2] + 1) >= 32767)
            {
                PRM[prmptp_ptpkruising02err2] = 0;
            }
            PRM[prmptp_ptpkruising02err2]++; 
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }

        /* aansturing led op handbedieningspaneel en via IVERA op krspnt plaatje */
        /* --------------------------------------------------------------------- */
        CIF_GUS[usptp_ptpkruising02oke] = PTP_ptpkruising02KS.OKE;  
        CIF_GUS[usptp_ptpkruising02err] = PTP_ptpkruising02.COMERROR;

    /* opzetten van statusbit in CIF_GPS[5] */
    /* ------------------------------------ */
    if (!PTP_ptpkruising02KS.OKE)
    {
        CIF_GPS[AUTSTATUS] |= CIFA_COMF;
    }
#endif

    }
}
/* PTP POST SYSTEM APPLICATION */
/* --------------------------- */
/* ptp_post_system_app() wordt gebruikt voor op en afzetten van hulpelementen voor de PTP koppeling
 *
 * ptp_post_system_app() moet worden aangeroepen vanuit de functie post_system_application().
 */

void ptp_post_system_app(void)
{

}

#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST) && defined (CCOL_EXIT)

/* resetten koppelsignalen in testomgeving op einde programma */
/* ---------------------------------------------------------- */

/* geen VISSIM mee opgenomen, daar in VISSM alle regelingen tegelijk starten en eindingen.
*/

void CCOL_exit(void)
{

    void ptp_application_reset(struct ptpstruct *PTP, struct ptpksstruct *PTPKS); /* PTPWIN.C */

    #ifdef PTP_ptpkruising02PORT
        ptp_application_reset(&PTP_ptpkruising02, &PTP_ptpkruising02KS);
    #endif

}

#endif
