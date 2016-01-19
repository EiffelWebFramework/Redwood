/*
 * Code for class URI_PERCENT_ENCODER
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F892_7772(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F892_7773(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F892_7774(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F892_7775(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F892_7776(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7777(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7778(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7779(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7780(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7781(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7782(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7783(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7784(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7785(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7786(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7787(EIF_REFERENCE);
extern EIF_TYPED_VALUE F892_7788(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7789(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F892_7790(EIF_REFERENCE);
extern void EIF_Minit892(void);

#ifdef __cplusplus
}
#endif

#include "eif_misc.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {URI_PERCENT_ENCODER}.append_percent_encoded_string_to */
void F892_7772 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_string_to";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 891, Current, 3, 2, 13440);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13440);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTCC(arg2, 891, l_feature_name, 2, eif_new_type(219, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	loc2 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(2);
	RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
	loc3 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(3);
		if ((EIF_BOOLEAN) (loc2 > loc3)) break;
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
		ui4_1 = loc2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc1 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(5);
		tb1 = '\01';
		tb2 = '\01';
		tb3 = '\0';
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
		if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
			tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
		}
		if (!(tb3)) {
			tb3 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 90L);
				tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb2 = tb3;
		}
		if (!tb2) {
			tb2 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 122L);
				tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			tb1 = tb2;
		}
		if (tb1) {
			RTHOOK(6);
			uu4_1 = loc1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
		} else {
			RTHOOK(7);
			switch (loc1) {
				case 45U:
				case 46U:
				case 95U:
				case 126U:
					RTHOOK(8);
					uu4_1 = loc1;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
					break;
				case 33U:
				case 36U:
				case 37U:
				case 38U:
				case 39U:
				case 40U:
				case 41U:
				case 42U:
				case 43U:
				case 44U:
				case 58U:
				case 59U:
				case 61U:
				case 64U:
					RTHOOK(9);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5699, dtype))(Current, uu4_1x, ur1x);
					break;
				default:
					RTHOOK(10);
					uu4_1 = loc1;
					ur1 = RTCCL(arg2);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5699, dtype))(Current, uu4_1x, ur1x);
					break;
			}
		}
		RTHOOK(11);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(12);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.append_percent_encoded_character_code_to */
void F892_7773 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 2, 13441);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13441);
	RTCC(arg2, 891, l_feature_name, 2, eif_new_type(219, 0x01), 0x01);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5701, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
		if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
			RTHOOK(4);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5701, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(5);
			uu4_1 = arg1;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(6);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.append_percent_encoded_ascii_character_code_to */
void F892_7774 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_ascii_character_code_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(5);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLR(4,tr2);
	RTLIU(5);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	
	RTEAA(l_feature_name, 891, Current, 1, 2, 13442);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13442);
	RTCC(arg2, 891, l_feature_name, 2, eif_new_type(219, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_extended_ascii", EX_PRE);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
		RTTE((EIF_BOOLEAN) (arg1 <= tu4_1), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(2);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 255L);
	if ((EIF_BOOLEAN) (arg1 > tu4_1)) {
		RTHOOK(3);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5701, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(4);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		ti4_2 = (EIF_INTEGER_32) arg1;
		loc1 = (EIF_INTEGER_32) ti4_2;
		RTHOOK(5);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(6);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5713, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 4L);
		ti4_2 = eif_bit_shift_right(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
		RTHOOK(7);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5713, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ui4_1 = ((EIF_INTEGER_32) 15L);
		ti4_2 = eif_bit_and(loc1,ui4_1);
		ui4_1 = ti4_2;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2392, "item", tr2))(tr2, ui4_1x)).it_n4);
		uu4_1 = tu4_1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(8);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(9);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(5);
	RTEE;
#undef up1
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.append_percent_encoded_unicode_character_code_to */
void F892_7775 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_encoded_unicode_character_code_to";
	RTEX;
#define arg1 arg1x.it_n4
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_n4 = * (EIF_NATURAL_32 *) arg1x.it_r;
	
	RTLI(4);
	RTLR(0,arg2);
	RTLR(1,tr1);
	RTLR(2,ur1);
	RTLR(3,Current);
	RTLIU(4);
	RTLU (SK_VOID, NULL);
	RTLU(SK_UINT32,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 2, 13443);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13443);
	RTCC(arg2, 891, l_feature_name, 2, eif_new_type(219, 0x01), 0x01);
	RTIV(Current, RTAL);
	if (RTAL & CK_ENSURE) {
		in_assertion = ~0;
		RTE_OT
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		ti4_1 = ti4_2;
		tr1 = NULL;
		RTE_O
		tr1 = RTLA;
		RTE_OE
		in_assertion = 0;
	}
	RTHOOK(1);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
		RTHOOK(2);
		uu4_1 = arg1;
		ur1 = RTCCL(arg2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
	} else {
		RTHOOK(3);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 2047L);
		if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
			RTHOOK(4);
			ui4_1 = ((EIF_INTEGER_32) 6L);
			tu4_1 = eif_bit_shift_right(arg1,ui4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 192L);
			uu4_1 = tu4_2;
			tu4_2 = eif_bit_or((tu4_1),uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
			RTHOOK(5);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
			uu4_1 = tu4_1;
			tu4_1 = eif_bit_and(arg1,uu4_1);
			tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
			uu4_1 = tu4_2;
			tu4_2 = eif_bit_or((tu4_1),uu4_1);
			uu4_1 = tu4_2;
			ur1 = RTCCL(arg2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
		} else {
			RTHOOK(6);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65535L);
			if ((EIF_BOOLEAN) (arg1 <= tu4_1)) {
				RTHOOK(7);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 224L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(8);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(9);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(arg1,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
			} else {
				RTHOOK(10);
				ui4_1 = ((EIF_INTEGER_32) 18L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 240L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(11);
				ui4_1 = ((EIF_INTEGER_32) 12L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(12);
				ui4_1 = ((EIF_INTEGER_32) 6L);
				tu4_1 = eif_bit_shift_right(arg1,ui4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_and((tu4_1),uu4_1);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_or((tu4_2),uu4_1);
				uu4_1 = tu4_1;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
				RTHOOK(13);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
				uu4_1 = tu4_1;
				tu4_1 = eif_bit_and(arg1,uu4_1);
				tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 128L);
				uu4_1 = tu4_2;
				tu4_2 = eif_bit_or((tu4_1),uu4_1);
				uu4_1 = tu4_2;
				ur1 = RTCCL(arg2);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5700, dtype))(Current, uu4_1x, ur1x);
			}
		}
	}
	if (RTAL & CK_ENSURE) {
		RTHOOK(14);
		RTCT("appended", EX_POST);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg2))(arg2)).it_i4);
		RTCO(tr1);
		if ((EIF_BOOLEAN) (ti4_2 > ti4_1)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(15);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
#undef ur1
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.append_percent_decoded_string_to */
void F892_7776 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "append_percent_decoded_string_to";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc4 = (EIF_REFERENCE) 0;
	EIF_BOOLEAN loc5 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE loc6 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc6);
	RTLR(3,loc4);
	RTLR(4,Current);
	RTLR(5,tr1);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_BOOL, &loc5);
	RTLU(SK_REF, &loc6);
	
	RTEAA(l_feature_name, 891, Current, 6, 2, 13444);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13444);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTCC(arg2, 891, l_feature_name, 2, eif_new_type(219, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 5, 0x04000000, 1, 0); /* loc5 */
	loc6 = RTCCL(arg2);
	loc6 = RTRV(eif_new_type(226, 0x01),loc6);
	loc5 = (EIF_BOOLEAN) EIF_TEST(loc6);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	loc1 = (EIF_INTEGER_32) ((EIF_INTEGER_32) 1L);
	RTHOOK(3);
	RTDBGAL(Current, 4, 0xF8000331, 0, 0); /* loc4 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,817,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ui4_1 = loc1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1685, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc4 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	for (;;) {
		RTHOOK(5);
		if ((EIF_BOOLEAN) (loc1 > loc2)) break;
		RTHOOK(6);
		RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
		ui4_1 = loc1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
		loc3 = (EIF_NATURAL_32) tu4_1;
		RTHOOK(7);
		switch (loc3) {
			case 43U:
				RTHOOK(8);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 32L);
				uu4_1 = tu4_1;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
				break;
			case 37U:
				RTHOOK(9);
				if ((EIF_BOOLEAN)(loc1 == loc2)) {
					RTHOOK(10);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(11);
					if (loc5) {
						RTHOOK(12);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(13);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5704, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(14);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(15);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					} else {
						RTHOOK(16);
						ui4_1 = loc1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc4))(loc4, ui4_1x);
						RTHOOK(17);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc4);
						loc3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(18);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
						RTHOOK(19);
						RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc4))(loc4)).it_i4);
						loc1 = (EIF_INTEGER_32) ti4_1;
					}
				}
				break;
			default:
				RTHOOK(20);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
				if ((EIF_BOOLEAN) (loc3 <= tu4_1)) {
					RTHOOK(21);
					uu4_1 = loc3;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
				} else {
					RTHOOK(22);
					if (loc5) {
						RTHOOK(23);
						uu4_1 = loc3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4472, "append_code", arg2))(arg2, uu4_1x);
					} else {
						RTHOOK(24);
						uu4_1 = loc3;
						ur1 = RTCCL(arg2);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5699, dtype))(Current, uu4_1x, ur1x);
					}
				}
				break;
		}
		RTHOOK(25);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		loc1++;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(10);
	RTEE;
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.next_percent_decoded_character_code */
EIF_TYPED_VALUE F892_7777 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_character_code";
	RTEX;
	EIF_NATURAL_32 loc1 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc4 = (EIF_BOOLEAN) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_INTEGER_32 loc7 = (EIF_INTEGER_32) 0;
	EIF_BOOLEAN loc8 = (EIF_BOOLEAN) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(5);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,tr1);
	RTLR(3,ur1);
	RTLR(4,Current);
	RTLIU(5);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_UINT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_INT32, &loc3);
	RTLU(SK_BOOL, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_INT32, &loc7);
	RTLU(SK_BOOL, &loc8);
	
	RTEAA(l_feature_name, 891, Current, 8, 2, 13445);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13445);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,817,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 891, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		RTTE((EIF_BOOLEAN)(tu4_1 == tu4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 7, 0x10000000, 1, 0); /* loc7 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
	loc7 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(4);
	RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
	ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
	loc1 = (EIF_NATURAL_32) tu4_1;
	RTHOOK(5);
	tb1 = '\01';
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 85L);
	if (!(EIF_BOOLEAN)(loc1 == tu4_1)) {
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 117L);
		tb1 = (EIF_BOOLEAN)(loc1 == tu4_1);
	}
	if (tb1) {
		RTHOOK(6);
		RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
		loc2 = (EIF_INTEGER_32) (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		RTHOOK(7);
		RTDBGAL(Current, 3, 0x10000000, 1, 0); /* loc3 */
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
		loc3 = (EIF_INTEGER_32) ti4_1;
		for (;;) {
			RTHOOK(8);
			if ((EIF_BOOLEAN) ((EIF_BOOLEAN) (loc2 > loc3) || loc4)) break;
			RTHOOK(9);
			RTDBGAL(Current, 1, 0x38000000, 1, 0); /* loc1 */
			ui4_1 = loc2;
			tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
			loc1 = (EIF_NATURAL_32) tu4_1;
			RTHOOK(10);
			RTDBGAL(Current, 8, 0x04000000, 1, 0); /* loc8 */
			tb1 = '\0';
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
			if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 57L);
				tb1 = (EIF_BOOLEAN) (loc1 <= tu4_1);
			}
			loc8 = (EIF_BOOLEAN) tb1;
			RTHOOK(11);
			tb1 = '\01';
			tb2 = '\01';
			if (!loc8) {
				tb3 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 102L);
					tb3 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb2 = tb3;
			}
			if (!tb2) {
				tb2 = '\0';
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
				if ((EIF_BOOLEAN) (tu4_1 <= loc1)) {
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					tb2 = (EIF_BOOLEAN) (loc1 <= tu4_1);
				}
				tb1 = tb2;
			}
			if (tb1) {
				RTHOOK(12);
				RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 16L);
				loc6 *= tu4_1;
				RTHOOK(13);
				if (loc8) {
					RTHOOK(14);
					RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 48L);
					loc6 += (EIF_NATURAL_32) (loc1 - tu4_1);
				} else {
					RTHOOK(15);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 70L);
					if ((EIF_BOOLEAN) (loc1 > tu4_1)) {
						RTHOOK(16);
						RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 97L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					} else {
						RTHOOK(17);
						RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 65L);
						tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 10L);
						loc6 = (EIF_NATURAL_32) (EIF_NATURAL_32) ((EIF_NATURAL_32) (loc6 + (EIF_NATURAL_32) (loc1 - tu4_1)) + tu4_2);
					}
				}
				RTHOOK(18);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				loc2++;
			} else {
				RTHOOK(19);
				RTDBGAL(Current, 4, 0x04000000, 1, 0); /* loc4 */
				loc4 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				RTHOOK(20);
				RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
				loc2--;
			}
		}
		RTHOOK(21);
		ui4_1 = loc2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
		RTHOOK(22);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc6;
	} else {
		RTHOOK(23);
		RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 1L));
		ui4_2 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(4423, "substring", arg1))(arg1, ui4_1x, ui4_2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5715, dtype))(Current, ur1x)).it_n4);
		RTHOOK(24);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc5;
		RTHOOK(25);
		ui4_1 = (EIF_INTEGER_32) (loc7 + ((EIF_INTEGER_32) 2L));
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(26);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.next_percent_decoded_unicode_character_code */
EIF_TYPED_VALUE F892_7778 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "next_percent_decoded_unicode_character_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_INTEGER_32 loc2 = (EIF_INTEGER_32) 0;
	EIF_NATURAL_32 loc3 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc4 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc5 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc6 = (EIF_NATURAL_32) 0;
	EIF_NATURAL_32 loc7 = (EIF_NATURAL_32) 0;
	EIF_REFERENCE loc8 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_NATURAL_32 tu4_1;
	EIF_NATURAL_32 tu4_2;
	EIF_NATURAL_32 tu4_3;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,loc8);
	RTLR(3,Current);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,ur2);
	RTLIU(7);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_INT32, &loc2);
	RTLU(SK_UINT32, &loc3);
	RTLU(SK_UINT32, &loc4);
	RTLU(SK_UINT32, &loc5);
	RTLU(SK_UINT32, &loc6);
	RTLU(SK_UINT32, &loc7);
	RTLU(SK_REF, &loc8);
	
	RTEAA(l_feature_name, 891, Current, 8, 2, 13446);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13446);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,817,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg2, 891, l_feature_name, 2, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("valid_start", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
		RTTE((EIF_BOOLEAN) (ti4_1 <= ti4_2), label_1);
		RTCK;
		RTHOOK(2);
		RTCT("is_percent_char", EX_PRE);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
		ui4_1 = ti4_1;
		tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
		tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
		RTTE((EIF_BOOLEAN)(tu4_1 == tu4_2), label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(3);
	RTDBGAL(Current, 8, 0xF8000331, 0, 0); /* loc8 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,817,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg2))(arg2)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1685, Dtype(tr1)))(tr1, ui4_1x);
	RTNHOOK(3,1);
	loc8 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(4);
	RTDBGAL(Current, 4, 0x38000000, 1, 0); /* loc4 */
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(loc8);
	loc4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
	RTHOOK(5);
	RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
	loc2 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(6);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4382, "count", arg1))(arg1)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(7);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	Result = (EIF_NATURAL_32) loc4;
	RTHOOK(8);
	ui4_1 = loc2;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
	RTHOOK(9);
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 127L);
	if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
		RTHOOK(10);
		RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
		Result = (EIF_NATURAL_32) loc4;
	} else {
		RTHOOK(11);
		tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 223L);
		if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
			RTHOOK(12);
			if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
				RTHOOK(13);
				RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
				ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
				tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
				loc3 = (EIF_NATURAL_32) tu4_1;
				RTHOOK(14);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
				if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
					RTHOOK(15);
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
					RTHOOK(16);
					RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
					ur1 = RTCCL(arg1);
					ur2 = RTCCL(loc8);
					loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
					RTHOOK(17);
					RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
					loc2 = (EIF_INTEGER_32) ti4_1;
					RTHOOK(18);
					RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 31L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc4,uu4_1);
					ui4_1 = ((EIF_INTEGER_32) 6L);
					tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_and(loc5,uu4_1);
					uu4_1 = tu4_1;
					tu4_1 = eif_bit_or((tu4_2),uu4_1);
					Result = (EIF_NATURAL_32) tu4_1;
					RTHOOK(19);
					ui4_1 = loc2;
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
				}
			}
		} else {
			RTHOOK(20);
			tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 239L);
			if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
				RTHOOK(21);
				if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
					RTHOOK(22);
					RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
					ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
					tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
					loc3 = (EIF_NATURAL_32) tu4_1;
					RTHOOK(23);
					tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
					if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
						RTHOOK(24);
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
						RTHOOK(25);
						RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
						ur1 = RTCCL(arg1);
						ur2 = RTCCL(loc8);
						loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
						RTHOOK(26);
						RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
						loc2 = (EIF_INTEGER_32) ti4_1;
						RTHOOK(27);
						if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
							RTHOOK(28);
							RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
							loc3 = (EIF_NATURAL_32) tu4_1;
							RTHOOK(29);
							tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
							if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
								RTHOOK(30);
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
								RTHOOK(31);
								RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
								ur1 = RTCCL(arg1);
								ur2 = RTCCL(loc8);
								loc6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
								RTHOOK(32);
								RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
								ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
								loc2 = (EIF_INTEGER_32) ti4_1;
								RTHOOK(33);
								RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 15L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc4,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 12L);
								tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_1;
								tu4_1 = eif_bit_and(loc5,uu4_1);
								ui4_1 = ((EIF_INTEGER_32) 6L);
								tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
								uu4_1 = tu4_3;
								tu4_1 = eif_bit_or((tu4_2),uu4_1);
								tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_and(loc6,uu4_1);
								uu4_1 = tu4_2;
								tu4_2 = eif_bit_or(tu4_1,uu4_1);
								Result = (EIF_NATURAL_32) tu4_2;
								RTHOOK(34);
								ui4_1 = loc2;
								(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
							}
						}
					}
				}
			} else {
				RTHOOK(35);
				tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 247L);
				if ((EIF_BOOLEAN) (loc4 <= tu4_1)) {
					RTHOOK(36);
					if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
						RTHOOK(37);
						RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
						ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
						tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
						loc3 = (EIF_NATURAL_32) tu4_1;
						RTHOOK(38);
						tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
						if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
							RTHOOK(39);
							ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
							RTHOOK(40);
							RTDBGAL(Current, 5, 0x38000000, 1, 0); /* loc5 */
							ur1 = RTCCL(arg1);
							ur2 = RTCCL(loc8);
							loc5 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
							RTHOOK(41);
							RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
							loc2 = (EIF_INTEGER_32) ti4_1;
							RTHOOK(42);
							if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
								RTHOOK(43);
								RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
								ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
								tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
								loc3 = (EIF_NATURAL_32) tu4_1;
								RTHOOK(44);
								tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
								if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
									RTHOOK(45);
									ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
									(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
									RTHOOK(46);
									RTDBGAL(Current, 6, 0x38000000, 1, 0); /* loc6 */
									ur1 = RTCCL(arg1);
									ur2 = RTCCL(loc8);
									loc6 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
									RTHOOK(47);
									RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
									ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
									loc2 = (EIF_INTEGER_32) ti4_1;
									RTHOOK(48);
									if ((EIF_BOOLEAN) ((EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 2L)) <= loc1)) {
										RTHOOK(49);
										RTDBGAL(Current, 3, 0x38000000, 1, 0); /* loc3 */
										ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
										tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4345, "code", arg1))(arg1, ui4_1x)).it_n4);
										loc3 = (EIF_NATURAL_32) tu4_1;
										RTHOOK(50);
										tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 37L);
										if ((EIF_BOOLEAN)(loc3 == tu4_1)) {
											RTHOOK(51);
											ui4_1 = (EIF_INTEGER_32) (loc2 + ((EIF_INTEGER_32) 1L));
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", loc8))(loc8, ui4_1x);
											RTHOOK(52);
											RTDBGAL(Current, 7, 0x38000000, 1, 0); /* loc7 */
											ur1 = RTCCL(arg1);
											ur2 = RTCCL(loc8);
											loc7 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5703, dtype))(Current, ur1x, ur2x)).it_n4);
											RTHOOK(53);
											RTDBGAL(Current, 2, 0x10000000, 1, 0); /* loc2 */
											ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc8))(loc8)).it_i4);
											loc2 = (EIF_INTEGER_32) ti4_1;
											RTHOOK(54);
											ui4_1 = loc2;
											(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg2))(arg2, ui4_1x);
											RTHOOK(55);
											RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 7L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc4,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 18L);
											tu4_2 = eif_bit_shift_left((tu4_1),ui4_1);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc5,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 12L);
											tu4_3 = eif_bit_shift_left((tu4_1),ui4_1);
											uu4_1 = tu4_3;
											tu4_1 = eif_bit_or((tu4_2),uu4_1);
											tu4_2 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_2;
											tu4_2 = eif_bit_and(loc6,uu4_1);
											ui4_1 = ((EIF_INTEGER_32) 6L);
											tu4_3 = eif_bit_shift_left((tu4_2),ui4_1);
											uu4_1 = tu4_3;
											tu4_2 = eif_bit_or(tu4_1,uu4_1);
											tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 63L);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_and(loc7,uu4_1);
											uu4_1 = tu4_1;
											tu4_1 = eif_bit_or(tu4_2,uu4_1);
											Result = (EIF_NATURAL_32) tu4_1;
										}
									}
								}
							}
						}
					}
				} else {
					RTHOOK(56);
					RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
					Result = (EIF_NATURAL_32) loc4;
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(57);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(12);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef ur1
#undef ur2
#undef ui4_1
#undef uu4_1
#undef arg2
#undef arg1
}

/* {URI_PERCENT_ENCODER}.is_hexa_decimal_character */
EIF_TYPED_VALUE F892_7779 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13447);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13447);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'f';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'F';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
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

/* {URI_PERCENT_ENCODER}.is_alpha_or_digit_character */
EIF_TYPED_VALUE F892_7780 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_or_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13448);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13448);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
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

/* {URI_PERCENT_ENCODER}.is_alpha_character */
EIF_TYPED_VALUE F892_7781 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_alpha_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13430);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13430);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tb2 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb2)) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
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

/* {URI_PERCENT_ENCODER}.is_digit_character */
EIF_TYPED_VALUE F892_7782 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_digit_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13431);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13431);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
		tb1 = (EIF_BOOLEAN) (arg1 <= tw1);
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

/* {URI_PERCENT_ENCODER}.is_unreserved_character */
EIF_TYPED_VALUE F892_7783 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_unreserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_CHARACTER_32 tw1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN tb3;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13432);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13432);
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = '\01';
	tb2 = '\01';
	tb3 = '\0';
	tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'a';
	if ((EIF_BOOLEAN) (tw1 <= arg1)) {
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'z';
		tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
	}
	if (!(tb3)) {
		tb3 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'A';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) 'Z';
			tb3 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb2 = tb3;
	}
	if (!tb2) {
		tb2 = '\0';
		tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '0';
		if ((EIF_BOOLEAN) (tw1 <= arg1)) {
			tw1 = (EIF_CHARACTER_32) (EIF_CHARACTER_8) '9';
			tb2 = (EIF_BOOLEAN) (arg1 <= tw1);
		}
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(2);
		RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
		Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	} else {
		RTHOOK(3);
		switch (arg1) {
			case (EIF_CHARACTER_8) '-':
			case (EIF_CHARACTER_8) '.':
			case (EIF_CHARACTER_8) '_':
			case (EIF_CHARACTER_8) '~':
				RTHOOK(4);
				RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
				Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
				break;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {URI_PERCENT_ENCODER}.is_reserved_character */
EIF_TYPED_VALUE F892_7784 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_reserved_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_TYPED_VALUE uw1x = {{0}, SK_CHAR32};
#define uw1 uw1x.it_c4
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13433);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13433);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	uw1 = arg1;
	tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5711, dtype))(Current, uw1x)).it_b);
	if (!tb2) {
		uw1 = arg1;
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5712, dtype))(Current, uw1x)).it_b);
		tb1 = tb2;
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
#undef uw1
#undef arg1
}

/* {URI_PERCENT_ENCODER}.is_gen_delims_character */
EIF_TYPED_VALUE F892_7785 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_gen_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13434);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13434);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '#':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) ':':
		case (EIF_CHARACTER_8) '\?':
		case (EIF_CHARACTER_8) '@':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) ']':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {URI_PERCENT_ENCODER}.is_sub_delims_character */
EIF_TYPED_VALUE F892_7786 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_sub_delims_character";
	RTEX;
#define arg1 arg1x.it_c4
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c4 = * (EIF_CHARACTER_32 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR32,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 1, 13435);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13435);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '!':
		case (EIF_CHARACTER_8) '$':
		case (EIF_CHARACTER_8) '&':
		case (EIF_CHARACTER_8) '\'':
		case (EIF_CHARACTER_8) '(':
		case (EIF_CHARACTER_8) ')':
		case (EIF_CHARACTER_8) '*':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) ',':
		case (EIF_CHARACTER_8) ';':
		case (EIF_CHARACTER_8) '=':
			RTHOOK(2);
			RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
			Result = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
			break;
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(3);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(3);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef arg1
}

/* {URI_PERCENT_ENCODER}.hex_digit */
RTOID (F892_7787)
EIF_TYPED_VALUE F892_7787 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "hex_digit";
	RTEX;
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE uu4_1x = {{0}, SK_UINT32};
#define uu4_1 uu4_1x.it_n4
	EIF_REFERENCE tr1 = NULL;
	EIF_NATURAL_32 tu4_1;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F892_7787);

	RTLI(2);
	RTLR(0,Current);
	RTLR(1,tr1);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 0, 13436);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(891, Current, 13436);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80001A1, 0,0); /* Result */
	tu4_1 = (EIF_NATURAL_32) ((EIF_INTEGER_32) 0L);
	uu4_1 = tu4_1;
	ui4_1 = ((EIF_INTEGER_32) 16L);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,417,200,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		if (ui4_1< 0) {
			eraise ("non_negative_argument", EN_RT_CHECK);
		}
		tr1 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_NATURAL_32), EIF_TRUE);
	}
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWC(2396, Dtype(tr1)))(tr1, uu4_1x, ui4_1x);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	uu4_1 = ((EIF_NATURAL_32) 48U);
	ui4_1 = ((EIF_INTEGER_32) 0L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(3);
	uu4_1 = ((EIF_NATURAL_32) 49U);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(4);
	uu4_1 = ((EIF_NATURAL_32) 50U);
	ui4_1 = ((EIF_INTEGER_32) 2L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(5);
	uu4_1 = ((EIF_NATURAL_32) 51U);
	ui4_1 = ((EIF_INTEGER_32) 3L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(6);
	uu4_1 = ((EIF_NATURAL_32) 52U);
	ui4_1 = ((EIF_INTEGER_32) 4L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(7);
	uu4_1 = ((EIF_NATURAL_32) 53U);
	ui4_1 = ((EIF_INTEGER_32) 5L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(8);
	uu4_1 = ((EIF_NATURAL_32) 54U);
	ui4_1 = ((EIF_INTEGER_32) 6L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(9);
	uu4_1 = ((EIF_NATURAL_32) 55U);
	ui4_1 = ((EIF_INTEGER_32) 7L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(10);
	uu4_1 = ((EIF_NATURAL_32) 56U);
	ui4_1 = ((EIF_INTEGER_32) 8L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(11);
	uu4_1 = ((EIF_NATURAL_32) 57U);
	ui4_1 = ((EIF_INTEGER_32) 9L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(12);
	uu4_1 = ((EIF_NATURAL_32) 65U);
	ui4_1 = ((EIF_INTEGER_32) 10L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(13);
	uu4_1 = ((EIF_NATURAL_32) 66U);
	ui4_1 = ((EIF_INTEGER_32) 11L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(14);
	uu4_1 = ((EIF_NATURAL_32) 67U);
	ui4_1 = ((EIF_INTEGER_32) 12L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(15);
	uu4_1 = ((EIF_NATURAL_32) 68U);
	ui4_1 = ((EIF_INTEGER_32) 13L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(16);
	uu4_1 = ((EIF_NATURAL_32) 69U);
	ui4_1 = ((EIF_INTEGER_32) 14L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTHOOK(17);
	uu4_1 = ((EIF_NATURAL_32) 70U);
	ui4_1 = ((EIF_INTEGER_32) 15L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(2408, "put", Result))(Result, uu4_1x, ui4_1x);
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(18);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef uu4_1
#undef Result
}

/* {URI_PERCENT_ENCODER}.is_hexa_decimal */
EIF_TYPED_VALUE F892_7788 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_hexa_decimal";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,loc1);
	RTLR(2,Current);
	RTLR(3,ur1);
	RTLIU(4);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 891, Current, 1, 1, 13437);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13437);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 1, 0xF8000039, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5716, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(2);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1145, 54))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1176, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(3);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1182, "is_integral_integer", loc1))(loc1)).it_b);
	Result = (EIF_BOOLEAN) tb1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_BOOL; r.it_b = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {URI_PERCENT_ENCODER}.hexadecimal_string_to_natural_32 */
EIF_TYPED_VALUE F892_7789 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "hexadecimal_string_to_natural_32";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_INTEGER_32 ti4_1;
	EIF_NATURAL_32 tu4_1;
	EIF_BOOLEAN tb1;
	EIF_NATURAL_32 Result = ((EIF_NATURAL_32) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(4);
	RTLR(0,arg1);
	RTLR(1,ur1);
	RTLR(2,Current);
	RTLR(3,loc1);
	RTLIU(4);
	RTLU (SK_UINT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 891, Current, 1, 1, 13438);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13438);
	RTCC(arg1, 891, l_feature_name, 1, eif_new_type(217, 0x01), 0x01);
	RTIV(Current, RTAL);
	if ((RTAL & CK_REQUIRE) || RTAC) {
		RTHOOK(1);
		RTCT("is_hexa", EX_PRE);
		ur1 = RTCCL(arg1);
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWF(5714, dtype))(Current, ur1x)).it_b);
		RTTE(tb1, label_1);
		RTCK;
		RTJB;
label_1:
		RTCF;
	}
body:;
	RTHOOK(2);
	RTDBGAL(Current, 1, 0xF8000039, 0, 0); /* loc1 */
	loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5716, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTHOOK(3);
	ur1 = RTCCL(arg1);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(1135, 54))(Current)).it_i4);
	ui4_1 = ti4_1;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(1176, "parse_string_with_type", loc1))(loc1, ur1x, ui4_1x);
	RTHOOK(4);
	RTDBGAL(Current, 0, 0x38000000, 1,0); /* Result */
	tu4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1190, "parsed_natural_32", loc1))(loc1)).it_n4);
	Result = (EIF_NATURAL_32) tu4_1;
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_UINT32; r.it_n4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg1
}

/* {URI_PERCENT_ENCODER}.ctoi_convertor */
RTOID (F892_7790)
EIF_TYPED_VALUE F892_7790 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "ctoi_convertor";
	RTEX;
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	RTCDD;
	RTSN;
	RTDA;
	RTLD;
	
#define Result RTOTRR
	RTOTDR(F892_7790);
	dtype = Dtype(Current);

	RTLI(2);
	RTLR(0,tr1);
	RTLR(1,Current);
	RTLIU(2);
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 891, Current, 0, 0, 13439);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(891, Current, 13439);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF8000039, 0,0); /* Result */
	tr1 = RTLN(eif_new_type(57, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(1180, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	Result = (EIF_REFERENCE) tr1;
	RTHOOK(2);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1173, "set_leading_separators_acceptable", Result))(Result, ub1x);
	RTHOOK(3);
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1172, "set_trailing_separators_acceptable", Result))(Result, ub1x);
	if (RTAL & CK_ENSURE) {
		RTHOOK(4);
		RTCT("ctoi_convertor_not_void", EX_POST);
		if ((EIF_BOOLEAN)(Result != NULL)) {
			RTCK;
		} else {
			RTCF;
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(5);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ub1
#undef Result
}

void EIF_Minit892 (void)
{
	GTCX
	RTOTS (7787,F892_7787)
	RTOTS (7790,F892_7790)
}


#ifdef __cplusplus
}
#endif
