/* halfstar.h - gegenereerd met TLCGen 12.4.0.16 */

#ifndef __HALFSTARH__
#define __HALFSTARH__

#define RR_VS_HALFSTAR      BIT10 /* voorstart tegenhouden                      */
#define RR_KOP_HALFSTAR     BIT12 /* RR tbv. harde koppeling                    */
#define YV_KOP_HALFSTAR     BIT8  /* YV tbv. VA koppeling                       */
#define YM_KOP_HALFSTAR     BIT9  /* tbv koppeling                              */
#define X_GELIJK_HALFSTAR   BIT8  /* gelijkstart                                */
#define X_DEELC_HALFSTAR    BIT9  /* deelconflict                               */
#define X_VOOR_HALFSTAR     BIT10 /* voorstart                                  */
#define RW_KOP_HALFSTAR     BIT8  /* koppeling                                  */
#define YW_VAR_TXC          BIT8  /* YW voor gegarandeerd groen na SAS          */
#define RW_VAR_TXC          BIT9  /* RW voor gegarandeerd groen na TA           */
#define RW_WG_HALFSTAR      BIT12 /* RW wachtgroen tijdens halfstar             */ 
#define YW_PL_HALFSTAR      BIT9  /* YW tbv. (half)star bedrijf                 */
#define YM_HALFSTAR         BIT8  /* meeverlengen tijdens halfstar              */
#define RR_ALTCOR_HALFSTAR  BIT9  /* alternatieve correctie                     */
#define RS_HALFSTAR         BIT4  /* voorstartgroen                             */
#define RTFB_PLVA_HALFSTAR  BIT1  /* RTFB tbv omschakelen VA <-> PL             */
#define A_WS_HALFSTAR       BIT9  /* wachtstand                                 */
#define RW_VGNAMG_HALFSTAR  BIT11 /* RW tbv. terug naar verlengen tijdens MG    */ 
#define YW_WS_HALFSTAR      BIT10 /* tbv wachtstand tijdens PL                  */
#define A_MR_HALFSTAR       BIT8  /* meerealisatie                              */
#define RR_INSCH_HALFSTAR   BIT11 /* uitstelling inschakelmoment bij lopende koppelingen */
#define Z_INSCH_HALFSTAR    BIT11 /* uitstelling inschakelmoment bij lopende koppelingen */

#define TIMER_ACTIVE(t)    ((boolv)(T[t] || RT[t] || IT[t]))
#define BIT_ACTIVE(v,t,m)  (v = ((t) ? ((v) |= (m)) : ((v) &= ~(m))))

mulv TVGA_timer[FCMAX];
extern char HalfstarOmschakelenToegestaan;

/* tbv harde koppelingen */
count geeltimer[FCMAX][FCMAX];
count groodtimer[FCMAX][FCMAX];

void altcor_kop_halfstar(count fc_aan, count fc_af, count t_nl);
void altcor_naloopSG_halfstar(count fc1, count fc2, boolv a_bui_fc1, count tnlsg12, boolv voorwaarde);
void altcor_parfts_pl_halfstar(count fc1, count fc2, boolv voorwaarde);
void altcor_parftsvtg_pl_halfstar(count fc1, count fc2, boolv voorwaarde);
void alternatief_halfstar(count fc, mulv altp, boolv condition);
void gelijkstart_va_arg_halfstar(count h_x, count h_rr, boolv  overslag, ...);
void getrapte_fietser_halfstar(count fc1, count fc2, boolv  a_bui_fc1, boolv  a_bui_fc2, count tkopfc1fc2, count tkopfc2fc1);
void mgcor_halfstar(count fcaan, count fcnal, count t_nal);
void mgcor_halfstar_deelc(count fc1, count fc2);
void naloopEG_CV_halfstar(boolv period, count fc1, count fc2, mulv tvs, count tnldet, count tnl);
void naloopSG_halfstar(count fc1, count fc2, count dk_bui_fc1, count hd_bui_fc1, count tkopfc1fc2);
void PercentageMaxGroenTijden_halfstar(count fc, count percentage, mulv bit);
void PercentageVerlengGroenTijden_halfstar(count fc, count percentage, mulv bit);
boolv pl_gebied(mulv tx, mulv s, mulv e);
void reset_altreal_halfstar(void);
void reset_fc_halfstar(void);
void reset_realisation_timers(void);
void set_2real(count fc, count prm_eerste_txa, count prm_tweede_txa, mulv pl, boolv condition);
void set_special_MR(count i, count j, boolv condition);
void SetPlanTijden(count fc, mulv plan, mulv ta, mulv tb, mulv tc, mulv td, mulv te);
void set_pp_halfstar(count fc, boolv condition, count value);
void set_ym_pl_halfstar(count fc, boolv condition);
void set_ym_pl_halfstar_fcfc(count fc, boolv condition, count fc_from, count fc_until);
void set_yspl(count fc);
void SetPlanTijden2R(count fc, mulv plan, mulv ta  , mulv tb  , mulv tc  , mulv td  , mulv te  , 
                     count fc_2,          mulv ta_2, mulv tb_2, mulv tc_2, mulv td_2, mulv te_2);
void sync_pg(void);
boolv tussen_txa_en_txb(count fc);
boolv tussen_txb_en_txc(count fc);
boolv tussen_txb_en_txd(count fc);
void tvga_timer_halfstar(void);
void tweederealisatie_halfstar(count fc_1, count fc_2);
boolv TX_between(int tx_value, int tx_first, int tx_second, int tx_max);
void set_tx_change(count fc, count pl,
	                 count ptxa1, count ptxb1, count ptxc1, count ptxd1, count ptxe1, 
	                 count ptxa2, count ptxb2, count ptxc2, count ptxd2, count ptxe2, boolv condition);
boolv txb_gemist(count i, int marge);
void var_txc(count fc, boolv condition);
void Verlengroen_na_Meeverlenggroen_PL(count fc, count prmvgmg);
void vs_ple(count fc, boolv condition);
void wachtstand_halfstar(count fc, boolv condition_hs, boolv condition_a, boolv condition_ws);
void wg_ple(count fc, boolv condition);
boolv ym_max_halfstar(count i, mulv koppeltijd);
boolv yv_ar_max_halfstar(count i, mulv koppeltijd);
void yv_PRIO_pl_halfstar(count fc, boolv bit, boolv condition);
boolv yws_groen_fk(count i);
void zachtekoppeling_halfstar(boolv period, count fc1, count fc2, count tvs, count tnldet, count tnl);

void SignalplanPrmsToTx(count pl, count txa1);
boolv CheckSignalplanPrms(count pl, mulv txmax, count txa1);
void inloopSG_halfstar(count fc1, count fc2, count dk_bui_fc1);


#if (!defined AUTOMAAT && !defined AUTOMAAT_TEST)
  boolv txboverslag(count fc, boolv  condition);
  #ifdef PRINTTIG
    void print_tig(void);
  #endif
#endif

#endif /* __HALFSTARH__ */

