/*
 * Code for class HTTP_CLIENT_CONSTANTS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F881_7461(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F881_7462(EIF_REFERENCE);
extern EIF_TYPED_VALUE F881_7463(EIF_REFERENCE);
extern EIF_TYPED_VALUE F881_7464(EIF_REFERENCE);
extern EIF_TYPED_VALUE F881_7465(EIF_REFERENCE);
extern EIF_TYPED_VALUE F881_7466(EIF_REFERENCE);
extern void EIF_Minit881(void);

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

/* {HTTP_CLIENT_CONSTANTS}.auth_type_id */
EIF_TYPED_VALUE F881_7461 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "auth_type_id";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 880, Current, 1, 1, 13122);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(880, Current, 13122);
	RTCC(arg1, 880, l_feature_name, 1, eif_new_type(218, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF80000DC, 0, 0); /* loc1 */
	tr1 = RTLN(eif_new_type(220, 0x01).id);
	ur1 = RTCCL(arg1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(4439, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc1 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(4535, "to_lower", loc1))(loc1);
	RTHOOK(3);
	tr1 = RTMS_EX_H("basic",5,1635706211);
	ur1 = tr1;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4388, "same_string_general", loc1))(loc1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5387, dtype))(Current)).it_i4);
		Result = (EIF_INTEGER_32) Result;
	} else {
		RTHOOK(5);
		tr1 = RTMS_EX_H("digest",6,1932116340);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4388, "same_string_general", loc1))(loc1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(6);
			RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
			Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5388, dtype))(Current)).it_i4);
			Result = (EIF_INTEGER_32) Result;
		} else {
			RTHOOK(7);
			tr1 = RTMS_EX_H("any",3,6385273);
			ur1 = tr1;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4388, "same_string_general", loc1))(loc1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(8);
				RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
				Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5389, dtype))(Current)).it_i4);
				Result = (EIF_INTEGER_32) Result;
			} else {
				RTHOOK(9);
				tr1 = RTMS_EX_H("anysafe",7,1582624101);
				ur1 = tr1;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4388, "same_string_general", loc1))(loc1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(10);
					RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
					Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5390, dtype))(Current)).it_i4);
					Result = (EIF_INTEGER_32) Result;
				} else {
					RTHOOK(11);
					tr1 = RTMS_EX_H("none",4,1852796517);
					ur1 = tr1;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4388, "same_string_general", loc1))(loc1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(12);
						RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
						Result = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5386, dtype))(Current)).it_i4);
						Result = (EIF_INTEGER_32) Result;
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(13);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef ur1
#undef arg1
}

/* {HTTP_CLIENT_CONSTANTS}.auth_type_none */
EIF_TYPED_VALUE F881_7462 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	return r;
}

/* {HTTP_CLIENT_CONSTANTS}.auth_type_basic */
EIF_TYPED_VALUE F881_7463 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	return r;
}

/* {HTTP_CLIENT_CONSTANTS}.auth_type_digest */
EIF_TYPED_VALUE F881_7464 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	return r;
}

/* {HTTP_CLIENT_CONSTANTS}.auth_type_any */
EIF_TYPED_VALUE F881_7465 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 3L);
	return r;
}

/* {HTTP_CLIENT_CONSTANTS}.auth_type_anysafe */
EIF_TYPED_VALUE F881_7466 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_INT32;
	r.it_i4 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 4L);
	return r;
}

void EIF_Minit881 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
