/*
 * Code for class LIBCURL_HTTP_CLIENT_REQUEST
 */

#include "eif_eiffel.h"
#include "../E1/estructure.h"


#ifdef __cplusplus
extern "C" {
#endif

extern void F913_7979(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F913_7980(EIF_REFERENCE);
extern EIF_TYPED_VALUE F913_7981(EIF_REFERENCE);
extern EIF_TYPED_VALUE F913_7982(EIF_REFERENCE);
extern EIF_TYPED_VALUE F913_7983(EIF_REFERENCE);
extern void F913_7984(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F913_7985(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F913_7986(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern EIF_TYPED_VALUE F913_7987(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F913_8321(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void F913_8322(EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE);
extern void EIF_Minit913(void);
extern EIF_REFERENCE _A913_69_2();
extern EIF_REFERENCE _A913_68_2();

#ifdef __cplusplus
}
#endif

#include "eif_out.h"

#ifdef __cplusplus
extern "C" {
#endif


#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif

/* {LIBCURL_HTTP_CLIENT_REQUEST}.make */
void F913_7979 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "make";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,ur1);
	RTLR(5,ur2);
	RTLR(6,ur3);
	RTLR(7,Current);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 4, 13619);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(912, Current, 13619);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(218, 0x01), 0x01);
	RTCC(arg2, 912, l_feature_name, 2, RTWCT(5872, dtype, Dftype(Current)), 0x00);
	RTCC(arg3, 912, l_feature_name, 3, RTWCT(5840, dtype, Dftype(Current)), 0x00);
	RTCC(arg4, 912, l_feature_name, 4, RTWCT(5841, dtype, Dftype(Current)), 0x00);
	RTIV(Current, RTAL);
	RTHOOK(1);
	ur1 = RTCCL(arg1);
	ur2 = RTCCL(arg3);
	ur3 = RTCCL(arg4);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5839, dtype))(Current, ur1x, ur2x, ur3x);
	RTHOOK(2);
	RTDBGAA(Current, dtype, 5872, 0xF80000DA, 0); /* request_method */
	RTAR(Current, arg2);
	*(EIF_REFERENCE *)(Current + RTWA(5872, dtype)) = (EIF_REFERENCE) RTCCL(arg2);
	RTHOOK(3);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWF(5867, dtype))(Current);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(4);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef ur1
#undef ur2
#undef ur3
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.apply_workaround */
RTOID (F913_7980)
void F913_7980 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "apply_workaround";
	RTEX;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	RTSN;
	RTDA;
	RTLD;
	
	RTOTDV(F913_7980);

	RTLI(3);
	RTLR(0,tr1);
	RTLR(1,tr2);
	RTLR(2,Current);
	RTLIU(3);
	RTLU (SK_VOID, NULL);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 0, 13628);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13628);
	RTIV(Current, RTAL);
	RTOTP;
	RTHOOK(1);
	tr1 = RTLN(eif_new_type(895, 0x01).id);
	(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(32, Dtype(tr1)))(tr1);
	RTNHOOK(1,1);
	tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5737, "create_localhost", tr1))(tr1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	if ((EIF_BOOLEAN)(tr2 != NULL)) {
	}
	RTVI(Current, RTAL);
	RTRS;
	RTOTE;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(2);
	RTEE;
#undef up1
#undef Result
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.session */
EIF_TYPED_VALUE F913_7981 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5840,Dtype(Current)));
	return r;
}


/* {LIBCURL_HTTP_CLIENT_REQUEST}.request_method */
EIF_TYPED_VALUE F913_7982 (EIF_REFERENCE Current)
{
	EIF_TYPED_VALUE r;
	r.type = SK_REF;
	r.it_r = *(EIF_REFERENCE *)(Current + RTWA(5872,Dtype(Current)));
	return r;
}


/* {LIBCURL_HTTP_CLIENT_REQUEST}.execute */
#undef EIF_VOLATILE
#define EIF_VOLATILE volatile
EIF_TYPED_VALUE F913_7983 (EIF_REFERENCE Current)
{
	GTCX
	char *l_feature_name = "execute";
	RTEX;
	RTED;
	EIF_INTEGER_32 EIF_VOLATILE loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE EIF_VOLATILE loc2 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc3 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc4 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc5 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc6 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc7 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc8 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc9 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc10 = (EIF_POINTER) 0;
	EIF_REFERENCE EIF_VOLATILE loc11 = (EIF_REFERENCE) 0;
	EIF_POINTER EIF_VOLATILE loc12 = (EIF_POINTER) 0;
	EIF_BOOLEAN EIF_VOLATILE loc13 = (EIF_BOOLEAN) 0;
	EIF_REFERENCE EIF_VOLATILE loc14 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc15 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc16 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc17 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc18 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc19 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc20 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc21 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc22 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE loc23 = (EIF_REFERENCE) 0;
	EIF_REFERENCE EIF_VOLATILE saved_except = (EIF_REFERENCE) 0;
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ur2x = {{0}, SK_REF};
#define ur2 ur2x.it_r
	EIF_TYPED_VALUE ur3x = {{0}, SK_REF};
#define ur3 ur3x.it_r
	EIF_TYPED_VALUE ur4x = {{0}, SK_REF};
#define ur4 ur4x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_TYPED_VALUE ui4_3x = {{0}, SK_INT32};
#define ui4_3 ui4_3x.it_i4
	EIF_POINTER  EIF_VOLATILE tp1;
	EIF_REFERENCE  EIF_VOLATILE tr1 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr2 = NULL;
	EIF_REFERENCE  EIF_VOLATILE tr3 = NULL;
	EIF_INTEGER_32  EIF_VOLATILE ti4_1;
	EIF_INTEGER_32  EIF_VOLATILE ti4_2;
	EIF_INTEGER_32  EIF_VOLATILE ti4_3;
	EIF_BOOLEAN  EIF_VOLATILE tb1;
	EIF_BOOLEAN  EIF_VOLATILE tb2;
	EIF_BOOLEAN  EIF_VOLATILE tb3;
	EIF_BOOLEAN  EIF_VOLATILE tb4;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTCDT;
	RTSN;
	RTDA;
	RTDT;
	RTLD;
	RTXD;
	RTLXD;
	
	RTLI(29);
	RTLR(0,loc8);
	RTLR(1,Current);
	RTLR(2,tr1);
	RTLR(3,tr2);
	RTLR(4,loc9);
	RTLR(5,loc11);
	RTLR(6,ur1);
	RTLR(7,ur2);
	RTLR(8,ur3);
	RTLR(9,loc3);
	RTLR(10,tr3);
	RTLR(11,loc17);
	RTLR(12,loc18);
	RTLR(13,loc15);
	RTLR(14,loc16);
	RTLR(15,loc14);
	RTLR(16,loc19);
	RTLR(17,loc4);
	RTLR(18,loc5);
	RTLR(19,ur4);
	RTLR(20,loc6);
	RTLR(21,loc7);
	RTLR(22,loc20);
	RTLR(23,loc21);
	RTLR(24,loc22);
	RTLR(25,loc2);
	RTLR(26,loc23);
	RTLR(27,Result);
	RTLR(28,saved_except);
	RTLIU(29);
	RTXSLS;
	RTLU (SK_REF, &Result);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_REF, &loc3);
	RTLU(SK_REF, &loc4);
	RTLU(SK_REF, &loc5);
	RTLU(SK_REF, &loc6);
	RTLU(SK_REF, &loc7);
	RTLU(SK_REF, &loc8);
	RTLU(SK_REF, &loc9);
	RTLU(SK_POINTER, &loc10);
	RTLU(SK_REF, &loc11);
	RTLU(SK_POINTER, &loc12);
	RTLU(SK_BOOL, &loc13);
	RTLU(SK_REF, &loc14);
	RTLU(SK_REF, &loc15);
	RTLU(SK_REF, &loc16);
	RTLU(SK_REF, &loc17);
	RTLU(SK_REF, &loc18);
	RTLU(SK_REF, &loc19);
	RTLU(SK_REF, &loc20);
	RTLU(SK_REF, &loc21);
	RTLU(SK_REF, &loc22);
	RTLU(SK_REF, &loc23);
	RTLXL;
	
	RTEAA(l_feature_name, 912, Current, 23, 0, 13623);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(912, Current, 13623);
	RTIV(Current, RTAL);
	RTE_T
	RTHOOK(1);
	if ((EIF_BOOLEAN) !loc13) {
		RTHOOK(2);
		RTDBGAL(Current, 8, 0xF8000364, 0, 0); /* loc8 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5840, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(2,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6066, "curl", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc8 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(3);
		RTDBGAL(Current, 9, 0xF8000363, 0, 0); /* loc9 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5840, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(3,1);
		tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(6067, "curl_easy", tr1))(tr1)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		loc9 = (EIF_REFERENCE) RTCCL(tr2);
		RTHOOK(4);
		RTDBGAL(Current, 10, 0x40000000, 1, 0); /* loc10 */
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5160, "init", loc9))(loc9)).it_p);
		loc10 = (EIF_POINTER) tp1;
		RTHOOK(5);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5186, "global_init", loc8))(loc8);
		RTHOOK(6);
		RTDBGAL(Current, 11, 0xF8000366, 0, 0); /* loc11 */
		loc11 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5841, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(7);
		ur1 = RTCCL(loc11);
		ur2 = RTCCL(loc8);
		ur3 = RTCCL(loc9);
		up1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5868, dtype))(Current, ur1x, ur2x, ur3x, up1x);
		RTHOOK(8);
		RTDBGAL(Current, 3, 0xF80000DA, 0, 0); /* loc3 */
		loc3 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(9);
		if ((EIF_BOOLEAN)(loc11 != NULL)) {
			RTHOOK(10);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5212, "query_parameters", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur2 = RTCCL(tr2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5861, dtype))(Current, ur1x, ur2x);
		}
		if (
			WDBG(912,"service")
		) {
			RTHOOK(11);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(11,1);
			tr2 = RTMS_EX_H("SERVICE: ",9,237086240);
			ur1 = RTCCL(loc3);
			tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr3);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(153, "put_string", tr1))(tr1, ur1x);
			RTHOOK(12);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(27, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(12,1);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(172, "put_new_line", tr1))(tr1);
		}
		RTHOOK(13);
		up1 = loc10;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4996, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ur1 = RTCCL(loc3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", loc9))(loc9, up1x, ui4_1x, ur1x);
		RTHOOK(14);
		RTDBGAL(Current, 17, 0xF800013A, 0, 0); /* loc17 */
		loc17 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5845, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTHOOK(15);
		if ((EIF_BOOLEAN)(loc11 != NULL)) {
			RTHOOK(16);
			tb1 = *(EIF_BOOLEAN *)(loc11 + RTVA(5209, "credentials_required", loc11));
			if (tb1) {
				RTHOOK(17);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5852, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc18 = RTCCL(tr1);
				if (EIF_TEST(loc18)) {
					RTHOOK(18);
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5849, dtype))(Current)).it_i4);
					switch (ti4_1) {
						case 0L:
							RTHOOK(19);
							up1 = loc10;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, 861))(Current)).it_i4);
							ui4_1 = ti4_1;
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5011, 861))(Current)).it_i4);
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
							break;
						case 1L:
							RTHOOK(20);
							up1 = loc10;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, 861))(Current)).it_i4);
							ui4_1 = ti4_1;
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5012, 861))(Current)).it_i4);
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
							break;
						case 2L:
							RTHOOK(21);
							up1 = loc10;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, 861))(Current)).it_i4);
							ui4_1 = ti4_1;
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5013, 861))(Current)).it_i4);
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
							break;
						case 3L:
							RTHOOK(22);
							up1 = loc10;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, 861))(Current)).it_i4);
							ui4_1 = ti4_1;
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5014, 861))(Current)).it_i4);
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
							break;
						case 4L:
							RTHOOK(23);
							up1 = loc10;
							ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5010, 861))(Current)).it_i4);
							ui4_1 = ti4_1;
							ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5015, 861))(Current)).it_i4);
							ui4_2 = ti4_2;
							(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
							break;
					}
					RTHOOK(24);
					up1 = loc10;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5008, 861))(Current)).it_i4);
					ui4_1 = ti4_1;
					ur1 = RTCCL(loc18);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", loc9))(loc9, up1x, ui4_1x, ur1x);
				}
			}
			RTHOOK(25);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5220, "has_upload_data", loc11))(loc11)).it_b);
			if (tb1) {
				RTHOOK(26);
				RTDBGAL(Current, 15, 0xF80000DA, 0, 0); /* loc15 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5214, "upload_data", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc15 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(27);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5221, "has_upload_filename", loc11))(loc11)).it_b);
			if (tb1) {
				RTHOOK(28);
				RTDBGAL(Current, 16, 0xF80000D9, 0, 0); /* loc16 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5215, "upload_filename", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc16 = (EIF_REFERENCE) tr1;
			}
			RTHOOK(29);
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5219, "has_form_data", loc11))(loc11)).it_b);
			if (tb1) {
				RTHOOK(30);
				RTDBGAL(Current, 14, 0xF800013A, 0, 0); /* loc14 */
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5213, "form_parameters", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc14 = (EIF_REFERENCE) RTCCL(tr1);
				if (RTAL & CK_CHECK) {
					RTHOOK(31);
					RTCT("non_empty_form_data", EX_CHECK);
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1699, "is_empty", loc14))(loc14)).it_b);
					if ((EIF_BOOLEAN) !tb1) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(32);
				if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc15 == NULL) && (EIF_BOOLEAN)(loc16 == NULL))) {
					RTHOOK(33);
					tb1 = '\0';
					tr1 = RTMS_EX_H("Content-Type",12,1604261989);
					ur1 = tr1;
					tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(3318, "has_key", loc17))(loc17, ur1x)).it_b);
					if (tb2) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3316, "found_item", loc17))(loc17)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc19 = RTCCL(tr1);
						tb1 = EIF_TEST(loc19);
					}
					if (tb1) {
						RTHOOK(34);
						tr1 = RTMS_EX_H("application/x-www-form-urlencoded",33,632002404);
						ur1 = tr1;
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4457, "starts_with", loc19))(loc19, ur1x)).it_b);
						if (tb1) {
							RTHOOK(35);
							RTDBGAL(Current, 15, 0xF80000DA, 0, 0); /* loc15 */
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5236, "form_parameters_to_url_encoded_string", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							loc15 = (EIF_REFERENCE) RTCCL(tr1);
						}
					} else {
						RTHOOK(36);
						RTDBGAL(Current, 15, 0xF80000DA, 0, 0); /* loc15 */
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5236, "form_parameters_to_url_encoded_string", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						loc15 = (EIF_REFERENCE) RTCCL(tr1);
					}
				} else {
					RTHOOK(37);
					RTDBGAL(Current, 4, 0xF8000393, 0, 0); /* loc4 */
					tr1 = RTLN(eif_new_type(915, 0x01).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5875, Dtype(tr1)))(tr1);
					RTNHOOK(37,1);
					loc4 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(38);
					RTDBGAL(Current, 5, 0xF8000393, 0, 0); /* loc5 */
					tr1 = RTLN(eif_new_type(915, 0x01).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5875, Dtype(tr1)))(tr1);
					RTNHOOK(38,1);
					loc5 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(39);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3336, "start", loc14))(loc14);
					for (;;) {
						RTHOOK(40);
						tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3333, "after", loc14))(loc14)).it_b);
						if (tb1) break;
						RTHOOK(41);
						ur1 = RTCCL(loc4);
						ur2 = RTCCL(loc5);
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5147, 865))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3321, "key_for_iteration", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur3 = RTCCL(tr1);
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5148, 865))(Current)).it_i4);
						ui4_2 = ti4_2;
						tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(3320, "item_for_iteration", loc14))(loc14)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur4 = RTCCL(tr2);
						ti4_3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5149, 865))(Current)).it_i4);
						ui4_3 = ti4_3;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5188, "formadd_string_string", loc8))(loc8, ur1x, ur2x, ui4_1x, ur3x, ui4_2x, ur4x, ui4_3x);
						RTHOOK(42);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3337, "forth", loc14))(loc14);
					}
					RTHOOK(43);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5879, "release_item", loc5))(loc5);
					RTHOOK(44);
					up1 = loc10;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5027, 861))(Current)).it_i4);
					ui4_1 = ti4_1;
					ur1 = RTCCL(loc4);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5162, "setopt_form", loc9))(loc9, up1x, ui4_1x, ur1x);
				}
			}
			RTHOOK(45);
			if ((EIF_BOOLEAN)(loc15 != NULL)) {
				if (RTAL & CK_CHECK) {
					RTHOOK(46);
					RTCT("post_or_put_request_method", EX_CHECK);
					tb2 = '\01';
					tb3 = '\01';
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(46,1);
					tr2 = RTMS_EX_H("POST",4,1347375956);
					ur1 = tr2;
					tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
					if (!tb4) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(46,2);
						tr2 = RTMS_EX_H("PUT",3,5264724);
						ur1 = tr2;
						tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
						tb3 = tb4;
					}
					if (!tb3) {
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(46,3);
						tr2 = RTMS_EX_H("PATCH",5,1096655688);
						ur1 = tr2;
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
						tb2 = tb3;
					}
					if (tb2) {
						RTCK;
					} else {
						RTCF;
					}
				}
				RTHOOK(47);
				up1 = loc10;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5024, 861))(Current)).it_i4);
				ui4_1 = ti4_1;
				ur1 = RTCCL(loc15);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", loc9))(loc9, up1x, ui4_1x, ur1x);
				RTHOOK(48);
				up1 = loc10;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5025, 861))(Current)).it_i4);
				ui4_1 = ti4_1;
				ti4_2 = *(EIF_INTEGER_32 *)(loc15 + RTVA(4468, "count", loc15));
				ui4_2 = ti4_2;
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
			} else {
				RTHOOK(49);
				if ((EIF_BOOLEAN)(loc16 != NULL)) {
					if (RTAL & CK_CHECK) {
						RTHOOK(50);
						RTCT("post_or_put_request_method", EX_CHECK);
						tb2 = '\01';
						tb3 = '\01';
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						RTNHOOK(50,1);
						tr2 = RTMS_EX_H("POST",4,1347375956);
						ur1 = tr2;
						tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
						if (!tb4) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(50,2);
							tr2 = RTMS_EX_H("PUT",3,5264724);
							ur1 = tr2;
							tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
							tb3 = tb4;
						}
						if (!tb3) {
							tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
							RTNHOOK(50,3);
							tr2 = RTMS_EX_H("PATCH",5,1096655688);
							ur1 = tr2;
							tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
							tb2 = tb3;
						}
						if (tb2) {
							RTCK;
						} else {
							RTCF;
						}
					}
					RTHOOK(51);
					RTDBGAL(Current, 6, 0xF80000A5, 0, 0); /* loc6 */
					tr1 = RTLN(eif_new_type(165, 0x01).id);
					ur1 = RTCCL(loc16);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(3096, Dtype(tr1)))(tr1, ur1x);
					RTNHOOK(51,1);
					loc6 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(52);
					tb2 = '\0';
					tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2842, "exists", loc6))(loc6)).it_b);
					if (tb3) {
						tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2845, "is_readable", loc6))(loc6)).it_b);
						tb2 = tb3;
					}
					if (tb2) {
						RTHOOK(53);
						up1 = loc10;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5052, 861))(Current)).it_i4);
						ui4_1 = ti4_1;
						ui4_2 = ((EIF_INTEGER_32) 1L);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
						RTHOOK(54);
						up1 = loc10;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5050, 861))(Current)).it_i4);
						ui4_1 = ti4_1;
						ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1758, "count", loc6))(loc6)).it_i4);
						ui4_2 = ti4_2;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
						RTHOOK(55);
						if ((EIF_BOOLEAN)(loc7 == NULL)) {
							RTHOOK(56);
							RTDBGAL(Current, 7, 0xF800039D, 0, 0); /* loc7 */
							tr1 = RTLN(eif_new_type(925, 0x01).id);
							(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5923, Dtype(tr1)))(tr1);
							RTNHOOK(56,1);
							loc7 = (EIF_REFERENCE) RTCCL(tr1);
						}
						RTHOOK(57);
						ur1 = RTCCL(loc6);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5928, "set_file_to_read", loc7))(loc7, ur1x);
						RTHOOK(58);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(3142, "open_read", loc6))(loc6);
						RTHOOK(59);
						ur1 = RTCCL(loc7);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5171, "set_curl_function", loc9))(loc9, ur1x);
					}
				} else {
					if (RTAL & CK_CHECK) {
						RTHOOK(60);
						RTCT("no_upload_data", EX_CHECK);
						if ((EIF_BOOLEAN) ((EIF_BOOLEAN)(loc15 == NULL) && (EIF_BOOLEAN)(loc16 == NULL))) {
							RTCK;
						} else {
							RTCF;
						}
					}
				}
			}
		}
		RTHOOK(61);
		RTDBGAL(Current, 3, 0xF800013B, 0, 0); /* loc20 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2318, "new_cursor", loc17))(loc17)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc20 = (EIF_REFERENCE) RTCCL(tr1);
		for (;;) {
			tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1677, "after", loc20))(loc20)).it_b);
			if (tb2) break;
			RTHOOK(62);
			RTDBGAL(Current, 12, 0x40000000, 1, 0); /* loc12 */
			up1 = loc12;
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1682, "key", loc20))(loc20)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr2 = RTMS_EX_H(": ",2,14880);
			ur1 = tr2;
			tr2 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1676, "item", loc20))(loc20)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr1);
			tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
			ur1 = RTCCL(tr1);
			tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5189, "slist_append", loc8))(loc8, up1x, ur1x)).it_p);
			loc12 = (EIF_POINTER) tp1;
			RTHOOK(63);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(1678, "forth", loc20))(loc20);
		}
		RTHOOK(64);
		RTDBGAL(Current, 12, 0x40000000, 1, 0); /* loc12 */
		up1 = loc12;
		tr1 = RTMS_EX_H("Expect:",7,159486778);
		ur1 = tr1;
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5189, "slist_append", loc8))(loc8, up1x, ur1x)).it_p);
		loc12 = (EIF_POINTER) tp1;
		RTHOOK(65);
		up1 = loc10;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5030, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		up2 = loc12;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5163, "setopt_slist", loc9))(loc9, up1x, ui4_1x, up2x);
		RTHOOK(66);
		up1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5174, "set_read_function", loc9))(loc9, up1x);
		RTHOOK(67);
		up1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5173, "set_write_function", loc9))(loc9, up1x);
		RTHOOK(68);
		tb3 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5842, dtype))(Current)).it_b);
		if (tb3) {
			RTHOOK(69);
			up1 = loc10;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5176, "set_debug_function", loc9))(loc9, up1x);
			RTHOOK(70);
			up1 = loc10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4985, 861))(Current)).it_i4);
			ui4_1 = ti4_1;
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", loc9))(loc9, up1x, ui4_1x, ui4_2x);
		}
		RTHOOK(71);
		tb3 = '\0';
		if ((EIF_BOOLEAN)(loc11 != NULL)) {
			tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5222, "has_write_option", loc11))(loc11)).it_b);
			tb3 = tb4;
		}
		if (tb3) {
			RTHOOK(72);
			if ((EIF_BOOLEAN)(loc7 == NULL)) {
				RTHOOK(73);
				RTDBGAL(Current, 7, 0xF800039D, 0, 0); /* loc7 */
				tr1 = RTLN(eif_new_type(925, 0x01).id);
				(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(5923, Dtype(tr1)))(tr1);
				RTNHOOK(73,1);
				loc7 = (EIF_REFERENCE) RTCCL(tr1);
			}
			RTHOOK(74);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5216, "write_agent", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			loc21 = RTCCL(tr1);
			if (EIF_TEST(loc21)) {
				RTHOOK(75);
				ur1 = RTCCL(loc21);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5927, "set_write_procedure", loc7))(loc7, ur1x);
			} else {
				RTHOOK(76);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5218, "output_content_file", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				loc22 = RTCCL(tr1);
				if (EIF_TEST(loc22)) {
					RTHOOK(77);
					RTDBGAL(Current, 2, 0xF800039E, 0, 0); /* loc2 */
					tr1 = RTLN(eif_new_type(926, 0x01).id);
					(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4344, Dtype(tr1)))(tr1);
					RTNHOOK(77,1);
					loc2 = (EIF_REFERENCE) RTCCL(tr1);
					RTHOOK(78);
					ur1 = RTCCL(loc22);
					ur2 = RTCCL(loc2);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5871, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					ur1 = RTCCL(tr1);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5927, "set_write_procedure", loc7))(loc7, ur1x);
				} else {
					RTHOOK(79);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5217, "output_file", loc11))(loc11)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					loc23 = RTCCL(tr1);
					if (EIF_TEST(loc23)) {
						RTHOOK(80);
						RTDBGAL(Current, 2, 0xF800039E, 0, 0); /* loc2 */
						tr1 = RTLN(eif_new_type(926, 0x01).id);
						(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4344, Dtype(tr1)))(tr1);
						RTNHOOK(80,1);
						loc2 = (EIF_REFERENCE) RTCCL(tr1);
						RTHOOK(81);
						ur1 = RTCCL(loc23);
						ur2 = RTCCL(loc2);
						tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5870, dtype))(Current, ur1x, ur2x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5927, "set_write_procedure", loc7))(loc7, ur1x);
					}
				}
			}
			RTHOOK(82);
			ur1 = RTCCL(loc7);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5171, "set_curl_function", loc9))(loc9, ur1x);
		} else {
			RTHOOK(83);
			RTDBGAL(Current, 2, 0xF800039E, 0, 0); /* loc2 */
			tr1 = RTLN(eif_new_type(926, 0x01).id);
			(FUNCTION_CAST(void, (EIF_REFERENCE)) RTWC(4344, Dtype(tr1)))(tr1);
			RTNHOOK(83,1);
			loc2 = (EIF_REFERENCE) RTCCL(tr1);
			RTHOOK(84);
			up1 = loc10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4989, 861))(Current)).it_i4);
			ui4_1 = ti4_1;
			ur1 = RTCCL(loc2);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5164, "setopt_curl_string", loc9))(loc9, up1x, ui4_1x, ur1x);
		}
		RTHOOK(85);
		RTDBGAL(Current, 0, 0xF8000367, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(871, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", loc3))(loc3)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr2);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5239, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(85,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(86);
		RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
		up1 = loc10;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5167, "perform", loc9))(loc9, up1x)).it_i4);
		loc1 = (EIF_INTEGER_32) ti4_1;
		RTHOOK(87);
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4899, 860))(Current)).it_i4);
		if ((EIF_BOOLEAN)(loc1 == ti4_1)) {
			RTHOOK(88);
			ur1 = RTCCL(loc9);
			up1 = loc10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5869, dtype))(Current, ur1x, up1x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5253, "set_status", Result))(Result, ui4_1x);
			RTHOOK(89);
			if ((EIF_BOOLEAN)(loc2 != NULL)) {
				RTHOOK(90);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4449, "string", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				ur1 = RTCCL(tr1);
				ur2 = RTCCL(loc11);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5254, "set_response_message", Result))(Result, ur1x, ur2x);
			}
		} else {
			RTHOOK(91);
			tr1 = RTMS_EX_H("Error: cURL Error[",18,2136945755);
			tr2 = c_outi(loc1);
			ur1 = RTCCL(tr2);
			tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr1))(tr1, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			tr1 = RTMS_EX_H("]",1,93);
			ur1 = tr1;
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4422, "plus", tr2))(tr2, ur1x)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			ur1 = RTCCL(tr1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5243, "set_error_message", Result))(Result, ur1x);
			RTHOOK(92);
			ur1 = RTCCL(loc9);
			up1 = loc10;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTWF(5869, dtype))(Current, ur1x, up1x)).it_i4);
			ui4_1 = ti4_1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5253, "set_status", Result))(Result, ui4_1x);
		}
		RTHOOK(93);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5187, "global_cleanup", loc8))(loc8);
		RTHOOK(94);
		up1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5168, "cleanup", loc9))(loc9, up1x);
	} else {
		RTHOOK(95);
		RTDBGAL(Current, 0, 0xF8000367, 0,0); /* Result */
		tr1 = RTLN(eif_new_type(871, 0x01).id);
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5844, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr3 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", tr2))(tr2)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
		ur1 = RTCCL(tr3);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(5239, Dtype(tr1)))(tr1, ur1x);
		RTNHOOK(95,1);
		Result = (EIF_REFERENCE) RTCCL(tr1);
		RTHOOK(96);
		tr1 = RTMS_EX_H("Error: internal error",21,167678066);
		ur1 = tr1;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5243, "set_error_message", Result))(Result, ur1x);
	}
	RTHOOK(97);
	if ((EIF_BOOLEAN)(loc4 != NULL)) {
		RTHOOK(98);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2659, "dispose", loc4))(loc4);
	}
	RTHOOK(99);
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		tb3 = (EIF_BOOLEAN)(loc12 != tp1);
	}
	if (tb3) {
		RTHOOK(100);
		up1 = loc12;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5190, "slist_free_all", loc8))(loc8, up1x);
	}
	RTHOOK(101);
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc6 != NULL)) {
		tb4 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(2850, "is_closed", loc6))(loc6)).it_b);
		tb3 = (EIF_BOOLEAN) !tb4;
	}
	if (tb3) {
		RTHOOK(102);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(2852, "close", loc6))(loc6);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTE_E
	RTLXE;
	RTXSC;
	RTHOOK(103);
	RTDBGAL(Current, 13, 0x04000000, 1, 0); /* loc13 */
	loc13 = (EIF_BOOLEAN) (EIF_BOOLEAN) 1;
	RTHOOK(104);
	if ((EIF_BOOLEAN)(loc8 != NULL)) {
		RTHOOK(105);
		(FUNCTION_CAST(void, (EIF_REFERENCE)) RTVF(5187, "global_cleanup", loc8))(loc8);
		RTHOOK(106);
		RTDBGAL(Current, 8, 0xF8000364, 0, 0); /* loc8 */
		loc8 = (EIF_REFERENCE) NULL;
	}
	RTHOOK(107);
	tb3 = '\0';
	if ((EIF_BOOLEAN)(loc9 != NULL)) {
		tp1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(36, dtype))(Current)).it_p);
		tb3 = (EIF_BOOLEAN)(loc10 != tp1);
	}
	if (tb3) {
		RTHOOK(108);
		up1 = loc10;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(5168, "cleanup", loc9))(loc9, up1x);
		RTHOOK(109);
		RTDBGAL(Current, 9, 0xF8000363, 0, 0); /* loc9 */
		loc9 = (EIF_REFERENCE) NULL;
	}
	RTHOOK(110);
	RTTS;
	RTPS;
	RTER;
	RTMD(0);
	/* NOTREACHED */
	RTE_EE
	RTHOOK(111);
	RTDBGLE;
	RTMD(0);
	RTEOK;
	RTLE;
	RTLO(25);
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef up1
#undef up2
#undef ur1
#undef ur2
#undef ur3
#undef ur4
#undef ui4_1
#undef ui4_2
#undef ui4_3
}
#undef EIF_VOLATILE
#define EIF_VOLATILE

/* {LIBCURL_HTTP_CLIENT_REQUEST}.initialize_curl_session */
void F913_7984 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "initialize_curl_session";
	RTEX;
	EIF_REFERENCE loc1 = (EIF_REFERENCE) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE up2x = {{0}, SK_POINTER};
#define up2 up2x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ui4_2x = {{0}, SK_INT32};
#define ui4_2 ui4_2x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_INTEGER_32 ti4_2;
	EIF_BOOLEAN tb1;
	RTCDT;
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg4x.type & SK_HEAD) == SK_REF) arg4x.it_p = * (EIF_POINTER *) arg4x.it_r;
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,loc1);
	RTLR(4,tr1);
	RTLR(5,Current);
	RTLR(6,ur1);
	RTLR(7,tr2);
	RTLIU(8);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_POINTER,&arg4);
	RTLU (SK_REF, &Current);
	RTLU(SK_REF, &loc1);
	
	RTEAA(l_feature_name, 912, Current, 1, 4, 13624);
	RTSA(dtype);
	RTSC;
	RTME(dtype, 0);
	RTGC;
	RTDBGEAA(912, Current, 13624);
	RTCC(arg1, 912, l_feature_name, 1, RTWCT(5841, dtype, Dftype(Current)), 0x00);
	RTCC(arg2, 912, l_feature_name, 2, eif_new_type(868, 0x01), 0x01);
	RTCC(arg3, 912, l_feature_name, 3, eif_new_type(867, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	up1 = arg4;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4986, 861))(Current)).it_i4);
	ui4_1 = ti4_1;
	ui4_2 = ((EIF_INTEGER_32) 1L);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	RTHOOK(2);
	if ((EIF_BOOLEAN)(arg1 != NULL)) {
		RTHOOK(3);
		RTDBGAL(Current, 1, 0xF80000AE, 0, 0); /* loc1 */
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(5210, "proxy", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		loc1 = (EIF_REFERENCE) RTCCL(tr1);
	}
	RTHOOK(4);
	if ((EIF_BOOLEAN)(loc1 == NULL)) {
		RTHOOK(5);
		RTDBGAL(Current, 1, 0xF80000AE, 0, 0); /* loc1 */
		loc1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5853, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	}
	RTHOOK(6);
	if ((EIF_BOOLEAN)(loc1 != NULL)) {
		RTHOOK(7);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4998, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = eif_integer_32_item(RTCV(loc1),2);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
		RTHOOK(8);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(4997, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		tr1 = eif_boxed_item(loc1,1);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", arg3))(arg3, up1x, ui4_1x, ur1x);
	}
	RTHOOK(9);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5854, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(10);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5057, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5854, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	}
	RTHOOK(11);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5855, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN) (ti4_1 > ((EIF_INTEGER_32) 0L))) {
		RTHOOK(12);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5067, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5854, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	}
	RTHOOK(13);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5856, dtype))(Current)).it_i4);
	if ((EIF_BOOLEAN)(ti4_1 != ((EIF_INTEGER_32) 0L))) {
		RTHOOK(14);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5019, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
		RTHOOK(15);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5021, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ti4_2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5856, dtype))(Current)).it_i4);
		ui4_2 = ti4_2;
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(16);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5019, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	}
	RTHOOK(17);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5860, dtype))(Current)).it_b);
	if (tb1) {
		RTHOOK(18);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5093, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
		RTHOOK(19);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5090, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 0L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	}
	RTHOOK(20);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	RTNHOOK(20,1);
	tr2 = RTMS_EX_H("GET",3,4670804);
	ur1 = tr2;
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
	if (tb1) {
		RTHOOK(21);
		up1 = arg4;
		ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5036, 861))(Current)).it_i4);
		ui4_1 = ti4_1;
		ui4_2 = ((EIF_INTEGER_32) 1L);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
	} else {
		RTHOOK(22);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		RTNHOOK(22,1);
		tr2 = RTMS_EX_H("POST",4,1347375956);
		ur1 = tr2;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(23);
			up1 = arg4;
			ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5023, 861))(Current)).it_i4);
			ui4_1 = ti4_1;
			ui4_2 = ((EIF_INTEGER_32) 1L);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
		} else {
			RTHOOK(24);
			tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
			RTNHOOK(24,1);
			tr2 = RTMS_EX_H("PUT",3,5264724);
			ur1 = tr2;
			tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
			if (tb1) {
				RTHOOK(25);
				up1 = arg4;
				ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5022, 861))(Current)).it_i4);
				ui4_1 = ti4_1;
				ui4_2 = ((EIF_INTEGER_32) 1L);
				(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
			} else {
				RTHOOK(26);
				tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
				RTNHOOK(26,1);
				tr2 = RTMS_EX_H("HEAD",4,1212498244);
				ur1 = tr2;
				tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
				if (tb1) {
					RTHOOK(27);
					up1 = arg4;
					ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5049, 861))(Current)).it_i4);
					ui4_1 = ti4_1;
					ui4_2 = ((EIF_INTEGER_32) 1L);
					(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5165, "setopt_integer", arg3))(arg3, up1x, ui4_1x, ui4_2x);
				} else {
					RTHOOK(28);
					tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
					RTNHOOK(28,1);
					tr2 = RTMS_EX_H("DELETE",6,1413835333);
					ur1 = tr2;
					tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4452, "is_case_insensitive_equal", tr1))(tr1, ur1x)).it_b);
					if (tb1) {
						RTHOOK(29);
						up1 = arg4;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5047, 861))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = RTMS_EX_H("DELETE",6,1413835333);
						ur1 = tr1;
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", arg3))(arg3, up1x, ui4_1x, ur1x);
					} else {
						RTHOOK(30);
						up1 = arg4;
						ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5047, 861))(Current)).it_i4);
						ui4_1 = ti4_1;
						tr1 = ((up2x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5872, dtype))(Current)), (((up2x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up2x.it_r = RTBU(up2x))), (up2x.type = SK_POINTER), up2x.it_r);
						ur1 = RTCCL(tr1);
						(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5161, "setopt_string", arg3))(arg3, up1x, ui4_1x, ur1x);
					}
				}
			}
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(31);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
#undef up1
#undef up2
#undef ur1
#undef ui4_1
#undef ui4_2
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.response_status_code */
EIF_TYPED_VALUE F913_7985 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "response_status_code";
	RTEX;
	EIF_INTEGER_32 loc1 = (EIF_INTEGER_32) 0;
	EIF_REFERENCE loc2 = (EIF_REFERENCE) 0;
	EIF_INTEGER_32 loc3 = (EIF_INTEGER_32) 0;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_p
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_INTEGER_32 ti4_1;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	EIF_INTEGER_32 Result = ((EIF_INTEGER_32) 0);
	
	RTSN;
	RTDA;
	RTLD;
	
	if ((arg2x.type & SK_HEAD) == SK_REF) arg2x.it_p = * (EIF_POINTER *) arg2x.it_r;
	
	RTLI(6);
	RTLR(0,arg1);
	RTLR(1,loc2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,ur1);
	RTLR(5,tr2);
	RTLIU(6);
	RTLU (SK_INT32, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_POINTER,&arg2);
	RTLU (SK_REF, &Current);
	RTLU(SK_INT32, &loc1);
	RTLU(SK_REF, &loc2);
	RTLU(SK_INT32, &loc3);
	
	RTEAA(l_feature_name, 912, Current, 3, 2, 13625);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13625);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(867, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 2, 0xF8000113, 0, 0); /* loc2 */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,275,0,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		tr1 = RTLN(typres0.id);
	}
	ur1 = NULL;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1685, Dtype(tr1)))(tr1, ur1x);
	RTNHOOK(1,1);
	loc2 = (EIF_REFERENCE) RTCCL(tr1);
	RTHOOK(2);
	RTDBGAL(Current, 1, 0x10000000, 1, 0); /* loc1 */
	up1 = arg2;
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTWF(5110, 862))(Current)).it_i4);
	ui4_1 = ti4_1;
	ur1 = RTCCL(loc2);
	ti4_1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE, EIF_TYPED_VALUE, EIF_TYPED_VALUE)) RTVF(5169, "getinfo", arg1))(arg1, up1x, ui4_1x, ur1x)).it_i4);
	loc1 = (EIF_INTEGER_32) ti4_1;
	RTHOOK(3);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(loc1 == ((EIF_INTEGER_32) 0L))) {
		tr2 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", loc2))(loc2)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		tr1 = RTCCL(tr2);
		RTOB(*(EIF_INTEGER_32 *), eif_new_type(206, 0x00), tr1, loc3, tb2);
		tb1 = tb2;
	}
	if (tb1) {
		RTHOOK(4);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) loc3;
	} else {
		RTHOOK(5);
		RTDBGAL(Current, 0, 0x10000000, 1,0); /* Result */
		Result = (EIF_INTEGER_32) ((EIF_INTEGER_32) 0L);
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(7);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_INT32; r.it_i4 = Result; return r; }
#undef up1
#undef ur1
#undef ui4_1
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.new_write_data_to_file_agent */
EIF_TYPED_VALUE F913_7986 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_write_data_to_file_agent";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 2, 13626);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13626);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(164, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 912, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000EE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,174,0xFF01,0,220,0xFF01,164,0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 5, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = arg2;
	RTAR(tr1,arg2);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = arg1;
	RTAR(tr1,arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLN(typres0.id);
	}
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1685, Dtype(tr2)))(tr2, ub1x);
	RTNHOOK(1,1);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,1,174,0xFF01,218,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A913_69_2, (EIF_POINTER)(0),6129, tr2, 0, 1, 912, tr1, 1);
	}
	Result = (EIF_REFERENCE) RTCCL(tr4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.new_write_content_data_to_file_agent */
EIF_TYPED_VALUE F913_7987 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x)
{
	GTCX
	char *l_feature_name = "new_write_content_data_to_file_agent";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
	EIF_TYPED_VALUE ui4_1x = {{0}, SK_INT32};
#define ui4_1 ui4_1x.it_i4
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_REFERENCE tr2 = NULL;
	EIF_REFERENCE tr3 = NULL;
	EIF_REFERENCE tr4 = NULL;
	EIF_REFERENCE Result = ((EIF_REFERENCE) 0);
	
	RTCFDT;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(8);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,Current);
	RTLR(3,tr1);
	RTLR(4,tr2);
	RTLR(5,tr3);
	RTLR(6,tr4);
	RTLR(7,Result);
	RTLIU(8);
	RTLU (SK_REF, &Result);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 2, 13627);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13627);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(164, 0x01), 0x01);
	RTCC(arg2, 912, l_feature_name, 2, eif_new_type(220, 0x01), 0x01);
	RTIV(Current, RTAL);
	RTHOOK(1);
	RTDBGAL(Current, 0, 0xF80000EE, 0,0); /* Result */
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFFF9,4,174,0xFF01,0,220,0xFF01,164,0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		typarr0[4] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr1 = RTLNTS(typres0.id, 5, 0);
	}
	((EIF_TYPED_VALUE *)tr1+1)->it_r = Current;
	RTAR(tr1,Current);
	((EIF_TYPED_VALUE *)tr1+2)->it_r = arg2;
	RTAR(tr1,arg2);
	((EIF_TYPED_VALUE *)tr1+3)->it_r = arg1;
	RTAR(tr1,arg1);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr2 = RTLN(typres0.id);
	}
	ub1 = (EIF_BOOLEAN) 0;
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTWC(1685, Dtype(tr2)))(tr2, ub1x);
	RTNHOOK(1,1);
	((EIF_TYPED_VALUE *)tr1+4)->it_r = tr2;
	RTAR(tr1,tr2);
	ui4_1 = ((EIF_INTEGER_32) 1L);
	{
		static EIF_TYPE_INDEX typarr0[] = {279,206,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(dftype, typarr0)));
		tr3 = RTLNSP2(typres0.id,0,ui4_1,sizeof(EIF_INTEGER_32), EIF_TRUE);
		RT_SPECIAL_COUNT(tr3) = 1L;
		memset(tr3, 0, RT_SPECIAL_VISIBLE_SIZE(tr3));
	}
	*((EIF_INTEGER_32 *)tr3+0) = (EIF_INTEGER_32) ((EIF_INTEGER_32) 2L);
	tr2 = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE))  RTWF(2403, Dtype(tr3)))(tr3).it_r;
	
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,238,0xFF01,0,0xFF01,0xFFF9,1,174,0xFF01,218,0xFFFF};
		EIF_TYPE typres0;
		typarr0[3] = dftype;
		
		typres0 = eif_compound_id(dftype, typarr0);
		tr4 = RTLNRW(typres0.id, 0, (EIF_POINTER) _A913_68_2, (EIF_POINTER)(0),6128, tr2, 0, 1, 912, tr1, 1);
	}
	Result = (EIF_REFERENCE) RTCCL(tr4);
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(2);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(4);
	RTEE;
	{ EIF_TYPED_VALUE r; r.type = SK_REF; r.it_r = Result; return r; }
#undef ui4_1
#undef ub1
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.inline-agent#1 of new_write_content_data_to_file_agent */
void F913_8321 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of new_write_content_data_to_file_agent";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 4, 13620);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13620);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(218, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 912, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTCC(arg3, 912, l_feature_name, 3, eif_new_type(164, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 912, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg4))(arg4)).it_b);
	if (tb1) {
		RTHOOK(2);
		tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
		ur1 = RTCCL(tr1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", arg3))(arg3, ur1x);
	} else {
		RTHOOK(3);
		if ((EIF_BOOLEAN)(arg2 != NULL)) {
			RTHOOK(4);
			ur1 = RTCCL(arg1);
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4506, "append", arg2))(arg2, ur1x);
		}
		RTHOOK(5);
		tr1 = RTMS_EX_H("\015\012",2,3338);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4457, "starts_with", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(6);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg4))(arg4, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(7);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

/* {LIBCURL_HTTP_CLIENT_REQUEST}.inline-agent#1 of new_write_data_to_file_agent */
void F913_8322 (EIF_REFERENCE Current, EIF_TYPED_VALUE arg1x, EIF_TYPED_VALUE arg2x, EIF_TYPED_VALUE arg3x, EIF_TYPED_VALUE arg4x)
{
	GTCX
	char *l_feature_name = "inline-agent#1 of new_write_data_to_file_agent";
	RTEX;
#define arg1 arg1x.it_r
#define arg2 arg2x.it_r
#define arg3 arg3x.it_r
#define arg4 arg4x.it_r
	EIF_TYPED_VALUE up1x = {{0}, SK_POINTER};
#define up1 up1x.it_p
	EIF_TYPED_VALUE ur1x = {{0}, SK_REF};
#define ur1 ur1x.it_r
	EIF_TYPED_VALUE ub1x = {{0}, SK_BOOL};
#define ub1 ub1x.it_b
	EIF_REFERENCE tr1 = NULL;
	EIF_BOOLEAN tb1;
	EIF_BOOLEAN tb2;
	RTSN;
	RTDA;
	RTLD;
	
	
	RTLI(7);
	RTLR(0,arg1);
	RTLR(1,arg2);
	RTLR(2,arg3);
	RTLR(3,arg4);
	RTLR(4,tr1);
	RTLR(5,ur1);
	RTLR(6,Current);
	RTLIU(7);
	RTLU (SK_VOID, NULL);
	RTLU(SK_REF,&arg1);
	RTLU(SK_REF,&arg2);
	RTLU(SK_REF,&arg3);
	RTLU(SK_REF,&arg4);
	RTLU (SK_REF, &Current);
	
	RTEAA(l_feature_name, 912, Current, 0, 4, 13621);
	RTSA(Dtype(Current));
	RTSC;
	RTME(Dtype(Current), 0);
	RTGC;
	RTDBGEAA(912, Current, 13621);
	RTCC(arg1, 912, l_feature_name, 1, eif_new_type(218, 0x01), 0x01);
	if (arg2) {
		RTCC(arg2, 912, l_feature_name, 2, eif_new_type(220, 0x00), 0x00);
	}
	RTCC(arg3, 912, l_feature_name, 3, eif_new_type(164, 0x01), 0x01);
	{
		static EIF_TYPE_INDEX typarr0[] = {0xFF01,394,191,0xFFFF};
		EIF_TYPE typres0;
		static EIF_TYPE typcache0 = {INVALID_DTYPE, 0};
		
		typres0 = (typcache0.id != INVALID_DTYPE ? typcache0 : (typcache0 = eif_compound_id(Dftype(Current), typarr0)));
		RTCC(arg4, 912, l_feature_name, 4, typres0, 0x01);
	}
	RTIV(Current, RTAL);
	RTHOOK(1);
	tr1 = ((up1x = (FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(4399, "as_string_8", arg1))(arg1)), (((up1x.type & SK_HEAD) == SK_REF)? (EIF_REFERENCE) 0: (up1x.it_r = RTBU(up1x))), (up1x.type = SK_POINTER), up1x.it_r);
	ur1 = RTCCL(tr1);
	(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(2855, "put_string", arg3))(arg3, ur1x);
	RTHOOK(2);
	tb1 = '\0';
	if ((EIF_BOOLEAN)(arg2 != NULL)) {
		tb2 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE)) RTVF(1684, "item", arg4))(arg4)).it_b);
		tb1 = (EIF_BOOLEAN) !tb2;
	}
	if (tb1) {
		RTHOOK(3);
		ur1 = RTCCL(arg1);
		(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4506, "append", arg2))(arg2, ur1x);
		RTHOOK(4);
		tr1 = RTMS_EX_H("\015\012",2,3338);
		ur1 = tr1;
		tb1 = (((FUNCTION_CAST(EIF_TYPED_VALUE, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(4457, "starts_with", arg1))(arg1, ur1x)).it_b);
		if (tb1) {
			RTHOOK(5);
			ub1 = (EIF_BOOLEAN) 1;
			(FUNCTION_CAST(void, (EIF_REFERENCE, EIF_TYPED_VALUE)) RTVF(1686, "replace", arg4))(arg4, ub1x);
		}
	}
	RTVI(Current, RTAL);
	RTRS;
	RTHOOK(6);
	RTDBGLE;
	RTMD(0);
	RTLE;
	RTLO(6);
	RTEE;
#undef up1
#undef ur1
#undef ub1
#undef arg4
#undef arg3
#undef arg2
#undef arg1
}

void EIF_Minit913 (void)
{
	GTCX
	RTOTS (7980,F913_7980)
}


#ifdef __cplusplus
}
#endif
