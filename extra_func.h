/* extra_func.h - gegenereerd met TLCGen 12.4.0.17 */

#ifndef EXTRA_FUNC
#define EXTRA_FUNC

#include <stdio.h>
#include <stdlib.h>

#ifdef NALOPEN
	#include "gkvar.h"
	#include "nlvar.h"
#endif

#if !defined (AUTOMAAT)
    #include "keysdef.c"   /* Definitie toetsenbord t.b.v. stuffkey  */
    #include "xyprintf.h" /* Printen debuginfo                      */
#endif 

boolv ym_maxV1(count i, mulv to_verschil);
boolv ym_maxV2(count i, mulv to_verschil);
boolv ym_max_prmV1(count i, count prm, mulv to_verschil);
boolv ym_max_toV1(count i, mulv to_verschil);
boolv ym_max_toV2(count i, mulv to_verschil);
boolv ym_max_vtgV1(count i);
boolv ym_max_vtgV2(count i);
void AanvraagSnelV2(count fc1, count dp);
boolv Rateltikkers(count fc,       /* fase */
	count has,      /* hulpelement rateltikkers voor deze fase */
	count has_aan_, /* hulpelement tikkers werking */
	count has_cont_,/* hulpelement tikkers continu */
	count tnlrt,    /* tijd na EG dat de tikkers nog moeten worden aangestuurd indien niet continu */
	boolv bewaakt,  /* rateltikker van nieuwe (bewaakte) type?  */
	...);           /* drukknoppen */
boolv Rateltikkers_Accross(count fc,       /* fase */
	count has,      /* hulpelement rateltikkers voor deze fase */
	count has_aan_, /* hulpelement tikkers werking */
	count has_cont_,/* hulpelement tikkers continu */
	...);           /* drukknoppen */
boolv Rateltikkers_HoeflakeDimming(
                         count hperasdim,  /* hulpelement klokperiode gedimde uitsturing     */
                         count prmasndim,  /* dimnivo periode niet dimmen (0-10, 10 = tikker uit) of NG  */ 
                         count prmasdim);  /* dimnivo periode dimmen (0-10, 10 = tikker uit) of NG  */
void Eerlijk_doseren_V1(count hfile,            /* hulpelement wel/geen file */
	count _prmperc,         /* indexnummer parameter % doseren */
	count aantalfc,         /* aantal te doseren fasen */
	count fc[],             /* pointer naar array met fasenummers */
	count fcmg[][MPERIODMAX],        /* pointer naar array met mg parameter index nummers */
	int nogtedoseren[],     /* pointer naar array met nog te doseren waarden */
	boolv *prml[],
	count ml,
	count _mperiod);
void Eerlijk_doseren_VerlengGroenTijden_V1(count hfile,            /* hulpelement wel/geen file */
    count _prmperc,         /* indexnummer parameter % doseren */
    count aantalfc,         /* aantal te doseren fasen */
    count fc[],             /* pointer naar array met fasenummers */
    count fcvg[][MPERIODMAX],        /* pointer naar array met mg parameter index nummers */
    int nogtedoseren[],     /* pointer naar array met nog te doseren waarden */
	boolv *prml[], 
	count ml,
	count _mperiod);
void FileMeldingV2(count det,     /* filelus                                */
    count tbez,    /* bezettijd  als D langer bezet -> file  */
    count trij,    /* rijtijd    als D korter bezet -> !file */
    count tafval,  /* afvalvertraging filemelding            */
    count hfile);   /* hulpelement filemelding                */
void mee_aanvraag_prm(count i, count j, count prm, boolv extra_condition);
void UpdateKnipperSignalen();
boolv hf_wsg_nl(void);
boolv hf_wsg_nl_fcfc(count fc1, count fc2);
void wachttijd_leds_knip(count mmwtv, count mmwtm, count RR_T_wacht, count fix);
boolv set_FPRML_fk_gkl(count i, boolv *prml[], count ml, count ml_max, boolv period);
boolv kcv_primair_fk_gkl(count i);
void veiligheidsgroen_V1(count fc, count tmaxvag4, ...);
boolv proc_pel_in_V1(                       /* Dh20130124                                                    */
	count hfc,                            /* fasecyclus                                                   */
	count tmeet,                          /* T meetperiode                                                 */
	count tmaxth,                         /* T max.hiaat                                                   */
	count grens,                          /* PRM grenswaarde                                               */
	count mvtg,                           /* MM aantal vtg                                                 */
	count muit,                           /* MM uitsturing aktief                                          */
	...);                                 /* va arg list: inkomende signalen koplussen                     */
boolv IsConflict(count fc1, count fc2);
void ModuleStructuurPRM(count prmfcml, count fcfirst, count fclast, count ml_max, boolv *prml[], boolv yml[], count *mlx, boolv *sml);
void SeniorenGroen(count fc, count drk1, count drk1timer, count drk2, count drk2timer,
	count exgperc, count verlengen, count meergroen, ...);
void CyclustijdMeting(count tcyclus, count scyclus, count cond, count sreset, count mlcyclus);
void maximumgroentijden_va_arg(count fc, ...);
void set_parm1wijzap(mulv *parm);
boolv set_parm1wijzpb_tvgmax(mulv periode, count startprm, mulv *ifc_prm, count ifc_prm_max); /* argumenten: actuele periode, index eerste verlenggroen parameter, array van fc met prmvg#_$$, max aantal fasen met prmvg */
#if CCOL_V >= 110
boolv kp(count i);
#endif

#if defined(REALFUNC)
	boolv Maatgevend_Groen(count fc);
#endif

extern mulv FC_type[];
extern mulv DVG[];
extern mulv Knipper_1Hz;
extern mulv Knipper_2Hz;

#if !defined (AUTOMAAT) 
#if CCOL_V >= 110
   boolv ControleerGS(count fc1, count fc2, boolv cond, boolv halt);
   boolv ControleerVS(count fc1, count fc2, boolv cond, boolv halt);
   boolv ControleerNaloopEG(count voedend, count volg, count tnlfg, count tnleg, count tnldet, boolv halt);
   boolv ControleerInrijden(count voedend, count volg, boolv tinr, boolv halt);
#endif 
#endif 

boolv set_MRLW_nl(count i, count j, boolv period);

#if !defined (CCOLFUNC)
boolv kg(count i);
#endif

#endif // #define EXTRA_FUNC
