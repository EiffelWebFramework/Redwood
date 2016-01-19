/*
 * Code for class SHARED_EJSON
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F903_7908(EIF_REFERENCE);
extern void EIF_Minit903(void);

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {SHARED_EJSON}.json */
RTOID (F903_7908)
EIF_TYPED_VALUE F903_7908 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "json";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE loc3 = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F903_7908);

	RTLI(6);
	RTLR(0,tr1);
	RTLR(1,loc1);
	RTLR(2,ur1);
	RTLR(3,loc2);
	RTLR(4,loc3);
	RTLR(5,Current);
	RTLIU(6);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	
	RTEAA(l_feature_name, 902, Current, 3, 0, 13552);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(902, Current, 13552);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF800038D, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(909, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF800038C, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(908, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5822, Dtype(tr1)))(tr1);
	RTNHOOK(2,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(3);
	ur1 = RTCCL(loc1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5831, "add_converter", Result))(Result, ur1x);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0xF800038B, 0, 0); /* loc2 */
	tr1 = RTLN(eif_new_type(907, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5822, Dtype(tr1)))(tr1);
	RTNHOOK(4,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(5);
	ur1 = RTCCL(loc2);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5831, "add_converter", Result))(Result, ur1x);
	RTHOOK(6);
	RTDBGAL(Current, 3, 0xF8000389, 0, 0); /* loc3 */
	tr1 = RTLN(eif_new_type(905, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5820, Dtype(tr1)))(tr1);
	RTNHOOK(6,1);
	loc3 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(7);
	ur1 = RTCCL(loc3);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5831, "add_converter", Result))(Result, ur1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(8);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ur1
#undef Result
}

void EIF_Minit903 (void)
{
	GTCX
	RTOTS (7908,F903_7908)
}


#ifdef __cplusplus
}
#endif
