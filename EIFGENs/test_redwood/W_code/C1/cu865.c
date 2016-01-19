/*
 * Code for class CURL_GLOBAL_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F865_7212(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7213(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7214(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7215(EIF_REFERENCE);
extern EIF_TYPED_VALUE F865_7216(EIF_REFERENCE);
extern void EIF_Minit865(void);

#ifdef __cplusplus
}
#endif

#include <curl/curl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef INLINE_F865_7212
static EIF_NATURAL_64 inline_F865_7212 (void)
{
	return CURL_GLOBAL_SSL;
	;
}
#define INLINE_F865_7212
#endif
#ifndef INLINE_F865_7213
static EIF_NATURAL_64 inline_F865_7213 (void)
{
	return CURL_GLOBAL_WIN32;
	;
}
#define INLINE_F865_7213
#endif
#ifndef INLINE_F865_7214
static EIF_NATURAL_64 inline_F865_7214 (void)
{
	return CURL_GLOBAL_ALL;
	;
}
#define INLINE_F865_7214
#endif
#ifndef INLINE_F865_7215
static EIF_NATURAL_64 inline_F865_7215 (void)
{
	return CURL_GLOBAL_NOTHING;
	;
}
#define INLINE_F865_7215
#endif
#ifndef INLINE_F865_7216
static EIF_NATURAL_64 inline_F865_7216 (void)
{
	return CURL_GLOBAL_DEFAULT;
	;
}
#define INLINE_F865_7216
#endif

#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {CURL_GLOBAL_CONSTANTS}.curl_global_ssl */
EIF_TYPED_VALUE F865_7212 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curl_global_ssl";
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12893);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12893);
	RTIV(Current, RTAL);
	Result = inline_F865_7212 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {CURL_GLOBAL_CONSTANTS}.curl_global_win32 */
EIF_TYPED_VALUE F865_7213 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curl_global_win32";
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12894);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12894);
	RTIV(Current, RTAL);
	Result = inline_F865_7213 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {CURL_GLOBAL_CONSTANTS}.curl_global_all */
EIF_TYPED_VALUE F865_7214 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curl_global_all";
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12895);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12895);
	RTIV(Current, RTAL);
	Result = inline_F865_7214 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {CURL_GLOBAL_CONSTANTS}.curl_global_nothing */
EIF_TYPED_VALUE F865_7215 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curl_global_nothing";
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12896);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12896);
	RTIV(Current, RTAL);
	Result = inline_F865_7215 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

/* {CURL_GLOBAL_CONSTANTS}.curl_global_default */
EIF_TYPED_VALUE F865_7216 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "curl_global_default";
	RTEX;
	EIF_NATURAL_64 Result = ((EIF_NATURAL_64) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_UINT64, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 864, Current, 0, 0, 12897);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 1);
	RTDBGEAA(864, Current, 12897);
	RTIV(Current, RTAL);
	Result = inline_F865_7216 ();
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(1);
	RTDBGLE;
	RTMD(1);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT64; r.it_n8 = Result; return r; }
}

void EIF_Minit865 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
