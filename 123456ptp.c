/* APPLICATIE PTP-KOPPELINGEN */
/* ========================== */

/* KRUISPUNT: 123456
              123456
              123456
              123456

   BESTAND:   123456ptp.c
      CCOL:   12.0
    TLCGEN:   12.4.0.6
   CCOLGEN:   12.4.0.6
*/

/****************************** Versie commentaar ***********************************
 *
 * Versie     Datum        Ontwerper   Commentaar
 * 12.4.0.6   24-05-2024   TLCGen      Release versie TLCGen 
 *
 ************************************************************************************/

#define AUTSTATUS    5 /* status automaat */
#define CIFA_COMF 2048 /* communicatiefout PTP-protocol */

/* koppelingen via PTP */
/* ------------------- */
/*
    --------------------------------------------------
    VRI         PTP
    --------------------------------------------------
    ptp123456   (12)*/

/* macrodefinitie voor gebruik PTP-poorten */
/* ======================================= */
#define PTP_ptp123456PORT /* @ define van de te koppelen VRI */

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
#ifdef PTP_ptp123456PORT
    struct ptpstruct   PTP_ptp123456;
    struct ptpksstruct PTP_ptp123456KS;
#endif

/* PTP CONTROL PARAMETERS */
/* ====================== */

/* ptp_control_parameters() wordt gebruikt voor de specificatie van de parameters van
 * de PTP-verbinding.
 * ptp_control_parameters() wordt aangeroepen door de functie ptp_system_application().
 */

void ptp_control_parameters (void)
{

    #ifdef PTP_ptp123456PORT
        /* ptp-parameters t.b.v. koppeling met PTP_ptp123456 */
        /* ----------------------------------------- */
    #if (defined AUTOMAAT)
        PTP_ptp123456.PORTNR = 1;        /* poortnummer in het regeltoestel     */  /* @ door fabrikant aanpassen */
    #else
        PTP_ptp123456.PORTNR = 3;        /* poortnr. testomgeving (schrijvend) */ /* @ nummer van KS-buffer */
    #endif
        PTP_ptp123456.SRC  = 11;       /* nummer van source                   */ /* @ maximaal 255 */
        PTP_ptp123456.DEST = 12;       /* nummer van destination              */ /* @ maximaal 255 */

        PTP_ptp123456.TMSGW_max= 200;   /* wait  time-out             */
        PTP_ptp123456.TMSGS_max=  10;   /* send  time-out             */
        PTP_ptp123456.TMSGA_max=  10;   /* alive time-out             */
        PTP_ptp123456.CMSG_max=    3;   /* max. berichtenteller tbv. herhaling */

        PTP_ptp123456KS.IKS_MAX = 16;   /* aantal inkomende koppelsignalen    */ /* @ verhogen in stappen van 8 */
        PTP_ptp123456KS.UKS_MAX = 16;   /* aantal uitgaande koppelsignalen    */ /* @ verhogen in stappen van 8 */
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
        PTP_ptp123456KS.IKSM_MAX = 0;
        PTP_ptp123456KS.UKSM_MAX = 0;
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
        #ifdef PTP_ptp123456PORT
            ptp_init(&PTP_ptp123456);
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

        /* opzetten signalen van en naar ptp123456 */
#ifdef PTP_ptp123456PORT

        /* nalopen in en uitgangssignalen */
        
        /* opzetten van uitgaande koppelsignalen PTP_ptp123456 */
        /* ------------------------------------------------- */      
        if (CIF_WPS[CIF_PROG_STATUS] == CIF_STAT_REG) /* status regelen - set uitgaande koppelsignalen  */
        {
            for (i = 0; i < PTP_ptp123456KS.UKS_MAX; ++i) {
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                if (i < (PTP_ptp123456KS.UKS_MAX - PTP_ptp123456KS.UKSM_MAX)) {
    #endif
                    PTP_ptp123456KS.UKS[i] = IH[hptp123456uks01 + i] && PRM[prmptp123456uks01 + i] >= 2 || PRM[prmptp123456uks01 + i] == 1;
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                }
                else {
                    PTP_ptp123456KS.UKS[i] = (PRM[prmptp123456uks01 + i] >= 2) ? IH[hptp123456uks01 + i] : 0;
                }
    #endif
            }
        }
        else /* niet regelen - reset uitgaande koppelsignalen */
        {
            for(i = 0; i < PTP_ptp123456KS.UKS_MAX; ++i) PTP_ptp123456KS.UKS[i] = FALSE;
        }

        /* opzetten van inkomende koppelsignalen PTP_ptp123456 */
        /* ---------------------------------------------- */
        if (PTP_ptp123456KS.OKE) /* goede verbinding - set inkomende koppelsignalen */
        {
            for(i = 0; i < PTP_ptp123456KS.IKS_MAX; ++i) {
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                if (i < (PTP_ptp123456KS.IKS_MAX - PTP_ptp123456KS.IKSM_MAX)) {
    #endif
                    IH[hptp123456iks01 + i] = PTP_ptp123456KS.IKS[i] && PRM[prmptp123456iks01 + i] >= 2 || PRM[prmptp123456iks01 + i] == 1;
    #if (CCOL_V >= 110) && !defined NO_PTP_MULTIVALENT
                }
                else {
                    IH[hptp123456iks01 + i] = (PRM[prmptp123456iks01 + i] >= 2) ? PTP_ptp123456KS.IKS[i] : 0;
                }
    #endif
            }
        }
        else /* geen goede verbinding - reset inkomende koppelsignalen */
        {
            for(i = 0; i < PTP_ptp123456KS.IKS_MAX; ++i)
            {
                if (PRM[prmptp123456iks01 + i] == 1)
                {
                    IH[hptp123456iks01 + i] = TRUE;
                }
                else
                {
                    IH[hptp123456iks01 + i] = FALSE;
                }
            }
        }

        /* aanroep ptp-functies */
        /* -------------------- */
        ptp_application_ks(&PTP_ptp123456, &PTP_ptp123456KS);
        ptp_control(&PTP_ptp123456);

        /* opzetten hulpelementen */
        /* ---------------------- */
        IH[hptp_ptp123456oke]  = PTP_ptp123456KS.OKE;
        IH[hptp_ptp123456err]  = PTP_ptp123456.COMERROR;
        IH[hptp_ptp123456err0] = PTP_ptp123456.COMERROR & BIT0;
        IH[hptp_ptp123456err1] = PTP_ptp123456.COMERROR & BIT1;
        IH[hptp_ptp123456err2] = PTP_ptp123456.COMERROR & BIT2;

        /* Bijhouden ptp errors   */
        /* ---------------------- */
        if (SH[hptp_ptp123456oke])
        {
            if((PRM[prmptp_ptp123456oke] + 1) >= 32767)
            {
                PRM[prmptp_ptp123456oke] = 0;
            }
            PRM[prmptp_ptp123456oke]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptp123456err])
        {
            if((PRM[prmptp_ptp123456err] + 1) >= 32767)
            {
                PRM[prmptp_ptp123456err] = 0;
            }
            PRM[prmptp_ptp123456err]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptp123456err0])
        {
            if((PRM[prmptp_ptp123456err0] + 1) >= 32767)
            {
                PRM[prmptp_ptp123456err0] = 0;
            }
            PRM[prmptp_ptp123456err0]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptp123456err1])
        {
            if((PRM[prmptp_ptp123456err1] + 1) >= 32767)
            {
                PRM[prmptp_ptp123456err1] = 0;
            }
            PRM[prmptp_ptp123456err1]++;
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }
        if (SH[hptp_ptp123456err2])
        {
            if((PRM[prmptp_ptp123456err2] + 1) >= 32767)
            {
                PRM[prmptp_ptp123456err2] = 0;
            }
            PRM[prmptp_ptp123456err2]++; 
            CIF_PARM1WIJZAP = CIF_MEER_PARMWIJZ;
        }

        /* aansturing led op handbedieningspaneel en via IVERA op krspnt plaatje */
        /* --------------------------------------------------------------------- */
        CIF_GUS[usptp_ptp123456oke] = PTP_ptp123456KS.OKE;  
        CIF_GUS[usptp_ptp123456err] = PTP_ptp123456.COMERROR;

    /* opzetten van statusbit in CIF_GPS[5] */
    /* ------------------------------------ */
    if (!PTP_ptp123456KS.OKE)
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

    #ifdef PTP_ptp123456PORT
        ptp_application_reset(&PTP_ptp123456, &PTP_ptp123456KS);
    #endif

}

#endif
