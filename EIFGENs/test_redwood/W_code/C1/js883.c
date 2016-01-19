/*
 * Code for class JSON_TOKENS
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern EIF_TYPED_VALUE F883_7498(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7499(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7500(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7501(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7502(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7503(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7504(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7505(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7506(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7507(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7508(EIF_REFERENCE);
extern EIF_TYPED_VALUE F883_7509(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F883_7510(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F883_7511(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F883_7512(EIF_REFERENCE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F883_7513(EIF_REFERENCE, EIF_TYPED_VALUE);
extern void EIF_Minit883(void);

#ifdef __cplusplus
}
#endif

#include <ctype.h>

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {JSON_TOKENS}.token_object_open */
EIF_TYPED_VALUE F883_7498 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '{';
	return r;
}

/* {JSON_TOKENS}.token_object_close */
EIF_TYPED_VALUE F883_7499 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '}';
	return r;
}

/* {JSON_TOKENS}.token_array_open */
EIF_TYPED_VALUE F883_7500 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '[';
	return r;
}

/* {JSON_TOKENS}.token_array_close */
EIF_TYPED_VALUE F883_7501 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ']';
	return r;
}

/* {JSON_TOKENS}.token_double_quote */
EIF_TYPED_VALUE F883_7502 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '\"';
	return r;
}

/* {JSON_TOKENS}.token_plus */
EIF_TYPED_VALUE F883_7503 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '+';
	return r;
}

/* {JSON_TOKENS}.token_minus */
EIF_TYPED_VALUE F883_7504 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '-';
	return r;
}

/* {JSON_TOKENS}.token_dot */
EIF_TYPED_VALUE F883_7505 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) '.';
	return r;
}

/* {JSON_TOKENS}.token_exp */
EIF_TYPED_VALUE F883_7506 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) 'e';
	return r;
}

/* {JSON_TOKENS}.token_comma */
EIF_TYPED_VALUE F883_7507 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ',';
	return r;
}

/* {JSON_TOKENS}.token_colon */
EIF_TYPED_VALUE F883_7508 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_CHAR8;
	r.it_c1 = (EIF_CHARACTER_8) (EIF_CHARACTER_8) ':';
	return r;
}

/* {JSON_TOKENS}.is_open_token */
EIF_TYPED_VALUE F883_7509 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_open_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 13162);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(882, Current, 13162);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '+':
		case (EIF_CHARACTER_8) '-':
		case (EIF_CHARACTER_8) '.':
		case (EIF_CHARACTER_8) '[':
		case (EIF_CHARACTER_8) '{':
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

/* {JSON_TOKENS}.is_close_token */
EIF_TYPED_VALUE F883_7510 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_close_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 13163);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(882, Current, 13163);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) ']':
		case (EIF_CHARACTER_8) '}':
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

/* {JSON_TOKENS}.is_special_character */
EIF_TYPED_VALUE F883_7511 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_character";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 13164);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(882, Current, 13164);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) '\010':
		case (EIF_CHARACTER_8) '\011':
		case (EIF_CHARACTER_8) '\012':
		case (EIF_CHARACTER_8) '\014':
		case (EIF_CHARACTER_8) '\015':
		case (EIF_CHARACTER_8) '\"':
		case (EIF_CHARACTER_8) '/':
		case (EIF_CHARACTER_8) '\\':
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

/* {JSON_TOKENS}.is_special_control */
EIF_TYPED_VALUE F883_7512 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_special_control";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 13165);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(882, Current, 13165);
	RTIV(Current, RTAL);
	RTHOOK(1);
	switch (arg1) {
		case (EIF_CHARACTER_8) 'b':
		case (EIF_CHARACTER_8) 'f':
		case (EIF_CHARACTER_8) 'n':
		case (EIF_CHARACTER_8) 'r':
		case (EIF_CHARACTER_8) 't':
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

/* {JSON_TOKENS}.is_exp_token */
EIF_TYPED_VALUE F883_7513 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x)
{
	GTCX
	char *l_feature_name = "is_exp_token";
	RTEX;
#define arg1 arg1x.it_c1
	EIF_BOOLEAN tb1;
	EIF_CHARACTER_8 tc1;
	EIF_CHARACTER_8 tc2;
	EIF_BOOLEAN Result = ((EIF_BOOLEAN) 0);
	
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg1x.type & SK_HEAD) == SK_REF) arg1x.it_c1 = * (EIF_CHARACTER_8 *) arg1x.it_r;
	
	RTLI(1);
	RTLR(0,Current);
	RTLIU(1);
	RTLU (SK_BOOL, &Result);
	RTLU(SK_CHAR8,&arg1);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 882, Current, 0, 1, 13166);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(882, Current, 13166);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0x04000000, 1,0); /* Result */
	tb1 = '\01';
	tc1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5432, dtype))(Current)).it_c1);
	if (!(EIF_BOOLEAN)(arg1 == tc1)) {
		tc1 = (EIF_CHARACTER_8) tolower(arg1);
		tc2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5432, dtype))(Current)).it_c1);
		tb1 = (EIF_BOOLEAN)(tc1 == tc2);
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

void EIF_Minit883 (void)
{
	GTCX
}


#ifdef __cplusplus
}
#endif
