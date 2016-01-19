/*
 * Code for class CURL_FORM_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F866_7217(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7218(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7219(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7220(EIF_REFERENCE);
extern EIF_TYPED_VALUE F866_7221(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit866(void);

#ifdef __cplusplus
}
#endif

#include <curl/curl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F866_7217
static EIF_INTEGER_32 inline_F866_7217 (void)
{
	return (EIF_INTEGER_32) (CURLFORM_COPYNAME)
	;
}
#define INLINE_F866_7217
#endif
#ifndef INLINE_F866_7218
static EIF_INTEGER_32 inline_F866_7218 (void)
{
	return (EIF_INTEGER_32) (CURLFORM_COPYCONTENTS)
	;
}
#define INLINE_F866_7218
#endif
#ifndef INLINE_F866_7219
static EIF_INTEGER_32 inline_F866_7219 (void)
{
	return (EIF_INTEGER_32) (CURLFORM_END)
	;
}
#define INLINE_F866_7219
#endif
#ifndef INLINE_F866_7220
static EIF_INTEGER_32 inline_F866_7220 (void)
{
	return (EIF_INTEGER_32) (CURLFORM_FILE)
	;
}
#define INLINE_F866_7220
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CURL_FORM_CONSTANTS}.curlform_copyname */
EIF_TYPED_VALUE F866_7217 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curlform_copyname";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 0, 12898);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(865, Current, 12898);
	RTIV(Current, RTAL);
	Result = inline_F866_7217 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CURL_FORM_CONSTANTS}.curlform_copycontents */
EIF_TYPED_VALUE F866_7218 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curlform_copycontents";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 0, 12899);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(865, Current, 12899);
	RTIV(Current, RTAL);
	Result = inline_F866_7218 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CURL_FORM_CONSTANTS}.curlform_end */
EIF_TYPED_VALUE F866_7219 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curlform_end";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 0, 12900);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(865, Current, 12900);
	RTIV(Current, RTAL);
	Result = inline_F866_7219 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CURL_FORM_CONSTANTS}.curlform_file */
EIF_TYPED_VALUE F866_7220 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curlform_file";
	RTEX;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_INT32, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 0, 12901);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(865, Current, 12901);
	RTIV(Current, RTAL);
	Result = inline_F866_7220 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
}

/* {CURL_FORM_CONSTANTS}.is_valid */
EIF_TYPED_VALUE F866_7221 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_valid";
	RTEX;
#define arg1 arg1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_i4 = * (EIF_INTEGER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_INT32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 865, Current, 0, 1, 12902);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(865, Current, 12902);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\01';
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5148, dtype))(Current)).it_i4);
	if (!(EIF_BOOLEAN)(arg1 == ti4_1)) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5147, dtype))(Current)).it_i4);
		tb3 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb3) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5149, dtype))(Current)).it_i4);
		tb2 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	if (!tb2) {
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5150, dtype))(Current)).it_i4);
		tb1 = (EIF_BOOLEAN)(arg1 == ti4_1);
	}
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

void EIF_Minit866 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
