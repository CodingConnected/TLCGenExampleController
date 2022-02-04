/* extra_func_prio.h - gegenereerd met TLCGen 0.10.5.0 */

#ifndef EXTRA_FUNC_OV
#define EXTRA_FUNC_OV

#define MAX_AANTAL_INMELDINGEN 10

extern mulv C_counter_old[CTMAX];
extern boolv vertraag_kar_uitm[prioFCMAX];

boolv DSIMeldingPRIO_V1(count dslus, count vtgtype, boolv checkfcnmr, count fcnmr, boolv checktype, count meldingtype, boolv extra);
boolv DSIMeldingPRIO_V2(count fc, count prio_fc, count dslus, count vtgtype, boolv checkfcnmr, count fcnmr, boolv checktype, count meldingtype, boolv extra);
boolv DSIMeldingPRIO_LijnNummer_V1(count lijnparm, count lijnmax);
boolv DSIMeldingPRIO_LijnNummerEnRitCategorie_V1(count lijnparm, count lijnmax);
boolv DSIMelding_HD_V1(count dir, count meldingtype, boolv check_sirene);
void TrackStiptObvTSTP(count hin, count huit, int * iAantInm, int iKARInSTP[], count cvc, int grensvroeg, int grenslaat);
void PRIO_teller(count cov, count scov);

#if !defined (CCOLFUNC)
boolv kg(count i);
#endif

#ifdef CCOL_IS_SPECIAL
void reset_DSI_message(void);
void set_DSI_message(mulv ds, s_int16 vtg, s_int16 dir, count type, s_int16 stiptheid, s_int16 aantalsecvertr, s_int16 PRM_lijnnr, s_int16 PRM_ritcat, s_int16 prio);
#endif

#ifdef PRIO_CHECK_WAGENNMR
void WDNST_cleanup(void);
boolv WDNST_check_in(count fc);
boolv WDNST_check_uit(count fc);
#endif
#endif

void NevenMelding(count ov1, count ov2, count ov3, count d, count prmrtbl, count prmrtbh, count hovss1, count hovss2, count hovss3, count hneven1, count hneven2, count hneven3);
boolv fietsprio_inmelding(count fc, count dvw, count c_priocount, count c_priocyc, count prm_prioblok, count prm_priocyc, count prm_priocount, count prm_priowt, boolv prioin, count ml);
void fietsprio_update(count fc, count dvw, count c_priocount, count c_priocyc, boolv prioin, count ml);  
